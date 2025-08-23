#include "pch.h"
#include "AimbotModule.h"
#include "HookManager.h"

int CurrentDistance;
APrimalCharacter* closestTarget;
std::vector<std::pair<std::pair<FVector, FVector >, TimeVar>> DrawShots = {};

bool CurrentTargetFound = false;
bool FoundAnyPlayer = false;

FRotator CurrentRotation;
FRotator LastRotation;
FRotator DeltaRotation = { 0,0,0 };

FVector CurrentLocation;
FVector LastLocation;
FVector DeltaLocation = { 0,0,0 };

std::vector<std::pair<FVector, std::pair<FVector, FVector>>> Points;

FHitResult LineTrace(FVector Location)
{
    FHitResult Result;

    FVector TraceStart, TraceEnd, Random;

    TraceStart = *spoof_call(Hooks::GetShootingCamLoc, globals::local::WP, &Random);
    TraceEnd = Location;

    globals::libs::VictoryCore->STATIC_VTraceSingleBP(UWorld::Singleton(), &Result, TraceStart, TraceEnd, ECollisionChannel::ECC_GameTraceChannel1, 0, FName(), false, globals::local::LP , 0);
    return Result;
}

void RenderCrosshair(FVector2D initial_pos, float w, float h, FLinearColor color)
{
    for (float i = 0; i < h; i += 0.1)
        globals::rendering::canvas->K2_DrawLine({ initial_pos.X, initial_pos.Y + i }, { initial_pos.X + w, initial_pos.Y + i }, 0.1f, color);
}

bool AimbotModule::OnModuleInit()
{
    CurrentDistance = 999999;
    return true;
}

bool AimbotModule::OnActorModule(CurrentActor* Current)
{
    if (!Current || !IsValid(Current->Actor))
		return false;

    if (!Current->Actor->IsA(AShooterCharacter::StaticClass()))
    {
        for (int64_t tribe : globals::aimbot::AlliedTribes)
        {
            if (Current->Actor->TargetingTeam == tribe)
                return false;
        }
    }
    else
    {
        std::wstring pidw = ((AShooterCharacter*)Current->Actor)->LinkedPlayerIDString().Data();
        std::string pid = std::string(pidw.begin(), pidw.end());
        int playerID = std::stoi(pid);

        for (int tribe : globals::aimbot::AlliedTribes)
        {
            if (Current->Actor->TargetingTeam == tribe || playerID == tribe)
                return false;
        }
    }

    FoundAnyPlayer = true;

    int Distance = Renderer::Distance2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2, Current->ScreenPos.X, Current->ScreenPos.Y);

    if (settings::aimbot::UseFov.Enabled && settings::aimbot::UseFov.Val < Distance)
        return false;

    if (Distance < CurrentDistance)
    {
        CurrentDistance = Distance;
        closestTarget = (APrimalCharacter*)Current->Actor;
    }

    return false;
}

bool AimbotModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current || !IsValid(Current->Actor))
        return false;

    if (Current->Type != ActorType::Dino && Current->Type != ActorType::Player)
        return false;

    if (Current->Type == ActorType::Dino && (!settings::aimbot::TargetDinos.Enabled || !((APrimalDinoCharacter*)Current->Actor)->BPIsTamed()))
        return false;

    APrimalCharacter* PrimalCharacter = (APrimalCharacter*)Current->Actor;

    if (PrimalCharacter == globals::local::LP || PrimalCharacter == globals::local::AP)
        return false;

    if (PrimalCharacter->bIsDead)
        return false;

    Current->Pos = PrimalCharacter->Mesh->GetBoneLocation(AimbotModule::GetDecidedBone());
    Current->OnScreen = Actors::PWTS(Current->Pos, Current->ScreenPos);
    Current->IsFriendly = Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam;

    if (!settings::aimbot::TargetTeam.Enabled && Current->IsFriendly)
        return false;

    Current->IsSleeping = PrimalCharacter->bIsSleeping;

    if (!settings::aimbot::TargetSleepers.Enabled && Current->IsSleeping)
        return false;

    Current->IsVisible = globals::local::PC->LineOfSightTo(PrimalCharacter, globals::local::POS, false);

    if (settings::aimbot::OnlyVisible.Enabled && !Current->IsVisible)
        return false;

    Current->distance = Current->Pos.Distance(globals::local::POS);

    return true;
}

void AimbotModule::PostActors()
{
    CurrentDistance = 999999;

    if (settings::aimbot::UseFov.Enabled)
        Renderer::DrawCircle({ Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2 }, settings::aimbot::UseFov.Val, 100, 1.0f, { 1,0,0,1 });

    if (settings::aimbot::EnableCrosshair.Enabled)
    {
        RenderCrosshair(FVector2D(Renderer::GetCanvasSize().X / 2 - 7, Renderer::GetCanvasSize().Y / 2 - 1.6), 14, 3.2, { 0,0,0,1 });
        RenderCrosshair(FVector2D(Renderer::GetCanvasSize().X / 2 - 1.6, Renderer::GetCanvasSize().Y / 2 - 7), 3.2, 14, { 0,0,0,1 });

        RenderCrosshair(FVector2D(Renderer::GetCanvasSize().X / 2 - 6, Renderer::GetCanvasSize().Y / 2 - 1), 12, 2, { 1,1,1,1 });
        RenderCrosshair(FVector2D(Renderer::GetCanvasSize().X / 2 - 1, Renderer::GetCanvasSize().Y / 2 - 6), 2, 12, { 1,1,1,1 });
    }

    if (settings::aimbot::Tracers.Enabled)
    {
        TimeVar now = timeNow();
        for (int i = DrawShots.size() - 1; i >= 0; i--)
        {
            std::pair<std::pair<FVector, FVector >, TimeVar> shot = DrawShots[i];
            FVector2D pos1 = {};
            FVector2D pos2 = {};
            FVector vec1 = shot.first.first;
            FVector vec2 = shot.first.second;

            if (!Actors::PWTS(vec1, pos1))
                pos1 = Renderer::FindClosestPointOnScreen(vec1, vec2, 20);

            if (!Actors::PWTS(vec2, pos2))
                pos2 = Renderer::FindClosestPointOnScreen(vec2, vec1, 20);

            if (pos1.IsValid() && pos2.IsValid())
                Renderer::DrawLine2D(pos1, pos2, 2.f, Renderer::SkyRainbow(5, 1.f, 5.f));

            double duration = durationSECONDS(now - shot.second);

            if ((int)duration > settings::aimbot::Tracers.Val)
            {
                DrawShots.erase(DrawShots.begin(), DrawShots.begin() + i + 1);
                break;
            }
        }
    }

    if (settings::aimbot::ClearAllyList.Enabled && Keyboard::GetState(settings::aimbot::ClearAllyList.KeyBindForVar, 0))
    {
        globals::aimbot::AlliedTribes.clear();
        Renderer::AddScreenMessage(Xors(L"Allied Tribes Cleared"), { Renderer::GetCanvasSize().X / 2.f, Renderer::GetCanvasSize().Y / 4.f }, { 0.8f,0.8f }, FLinearColor(0, 1, 0, 1), 2.f);
    }

    if (settings::aimbot::AmmoIndicator.Enabled && globals::local::WP && globals::local::WP->IsA(AShooterWeapon_Instant::StaticClass()))
    {
        int currentAmmo = ((AShooterWeapon_Instant*)globals::local::WP)->CurrentAmmoInClip;
        int maxAmmo = ((AShooterWeapon_Instant*)globals::local::WP)->WeaponConfig.AmmoPerClip;
        float percentage = (float)currentAmmo / (float)maxAmmo;
        Renderer::DrawProgressCircle({ Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y/ 2 }, settings::aimbot::AmmoIndicator.Val, percentage * 100.f, 50, 1.f, { 1.f,1.f,1.f,1.f });
    }

    if (!settings::aimbot::Aimbot.Enabled)
    {
        closestTarget = nullptr;
        globals::aimbot::target = nullptr;
        return;
    }
    
    if (!FoundAnyPlayer)
    {
        closestTarget = nullptr;
        globals::aimbot::target = nullptr;
        return;
    }

    if (!closestTarget)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (!globals::aimbot::target)
    {
        globals::aimbot::target = closestTarget;
        closestTarget = nullptr;
    }
    else if (!Keyboard::GetState(settings::aimbot::Aimbot.KeyBindForVar, 1) && !Keyboard::GetState(VK_LBUTTON, 1))
    {
        globals::aimbot::target = closestTarget;
        closestTarget = nullptr;
    }

    if (!globals::aimbot::target)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (globals::aimbot::target->bIsDead)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (globals::aimbot::target->IsA(APrimalDinoCharacter::StaticClass()) && !settings::aimbot::TargetDinos.Enabled)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (globals::aimbot::target->bIsSleeping && !settings::aimbot::TargetSleepers.Enabled)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (globals::aimbot::target->TargetingTeam == globals::local::LP->TargetingTeam && !settings::aimbot::TargetTeam.Enabled)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (!globals::local::PC->LineOfSightTo(globals::aimbot::target, globals::local::POS, false) && settings::aimbot::OnlyVisible.Enabled)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (globals::aimbot::target->K2_GetActorLocation().Distance(globals::local::POS) > 30000)
    {
        globals::aimbot::target = nullptr;
        return;
    }

    if (settings::aimbot::AddToAllyList.Enabled && Keyboard::GetState(settings::aimbot::AddToAllyList.KeyBindForVar, 0))
    {
        std::wstring str = Xors(L"Added tribe: ");
        if (globals::aimbot::target->TargetingTeam > 0)
        {
            str += globals::aimbot::target->TribeName.Data();
            str += Xors(L" to allied list.");
            globals::aimbot::AlliedTribes.push_back(globals::aimbot::target->TargetingTeam);
        }
        else if (globals::aimbot::target->IsA(AShooterCharacter::StaticClass()))
        {
            str = Xors(L"Added player: ");
            std::wstring pidw = ((AShooterCharacter*)globals::aimbot::target)->LinkedPlayerIDString().wc_str();
            std::string pid = std::string(pidw.begin(), pidw.end());
            int64_t playerID = std::stoi(pid);
            str += std::to_wstring(playerID);
            str += Xors(L" to allied list.");
            globals::aimbot::AlliedTribes.push_back(playerID);
		}

        Renderer::AddScreenMessage(str.c_str(), { Renderer::GetCanvasSize().X / 2.f, Renderer::GetCanvasSize().Y / 4.f }, { 0.8f,0.8f }, FLinearColor(0, 1, 0, 1), 2.f);
        globals::aimbot::target = nullptr;
        return;
    }

    FVector2D BoneLocation2D;
    FVector BoneLocation;

    if (globals::aimbot::target->IsA(APrimalDinoCharacter::StaticClass()))
    {
        BoneLocation = globals::aimbot::target->Mesh->GetSocketLocation(globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"c_Head")));
    }
    else
    {
        BoneLocation = globals::aimbot::target->Mesh->GetSocketLocation(globals::aimbot::target->Mesh->GetBoneName(AimbotModule::GetDecidedBone()));
    }

    if (BoneLocation.X == 0 && BoneLocation.Y == 0 && BoneLocation.Z == 0)
    {
        globals::aimbot::target == nullptr;
        return;
    }

    Actors::PWTS(BoneLocation, BoneLocation2D);

    if (!globals::aimbot::target->DescriptiveName.IsValid())
        return;

    if (settings::aimbot::ShowTargetingString.Enabled) 
    {
        std::wstring EnemyString1 = Xors(L"[Aim Locked] : ") + globals::aimbot::target->GetDescriptiveName().ToWString() + Xors(L" [") + std::to_wstring((int)globals::aimbot::target->K2_GetActorLocation().Distance(globals::local::POS) / 100) + Xors(L"M] ") + std::to_wstring((int)globals::aimbot::target->ReplicatedCurrentHealth) + Xors(L"/") + std::to_wstring((int)globals::aimbot::target->ReplicatedMaxHealth) + Xors(L" HP");
        Renderer::PushFont(Renderer::HudFont);
        Renderer::DrawString(EnemyString1.c_str(), { Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2 + 35 }, { 0.7, 0.7 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
        Renderer::PushFont(Renderer::EspFont);
    }

    if (settings::aimbot::EnableTargetLine.Enabled)
    {
        if (BoneLocation2D.X == 0 && BoneLocation2D.Y == 0)
            Renderer::DrawString(Xors(L"[!] Target Offscreen"), { Renderer::GetCanvasSize().X / 2 - 15, Renderer::GetCanvasSize().Y * 0.13 }, { 0.7, 0.7 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
        else
            Renderer::DrawLine2D({ Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2 }, BoneLocation2D, 1.0f, { 1.0f, 1.0f, 1.0f, 1.0f });
    }

    static double TriggerDelay = 0.0;

    TriggerDelay += globals::rendering::DeltaTime;

    if (settings::aimbot::EnableTriggerBot.Enabled && globals::local::WP && globals::local::WP->IsA(AShooterWeapon_Instant::StaticClass()))
    {
        static bool WasVisibleLastFrame = false;

        AShooterWeapon_Instant* CW = (AShooterWeapon_Instant*)globals::local::WP;

        FHitResult TraceResult = LineTrace(globals::aimbot::target->Mesh->GetSocketLocation(globals::aimbot::target->Mesh->GetBoneName(AimbotModule::GetDecidedBone())));

        if ((TraceResult.HitObjectHandle.Actor.ObjectIndex == globals::aimbot::target->InternalIndex || TraceResult.HitObjectHandle.Actor.ObjectIndex == 0) && CW->GetCurrentAmmoInClip() > 0 && CW->WeaponConfig.TimeBetweenShots < TriggerDelay)
        {
            static double DelayShotTimer = 0.0;

            DelayShotTimer += globals::rendering::DeltaTime;

            if (WasVisibleLastFrame)
            {
                CW->StartFire(false);
                CW->StopFire();

                TriggerDelay = 0.0;
                DelayShotTimer = 0.0;
            }
            else if (DelayShotTimer > 0.10)
            {
                WasVisibleLastFrame = true;

                CW->StartFire(false);
                CW->StopFire();

                TriggerDelay = 0.0;
                DelayShotTimer = 0.0;
            }
        }
        else if (CW->GetCurrentAmmoInClip() <= 0)
        {
            CW->ServerStartReload();
            WasVisibleLastFrame = false;
        }
        else
        {
            WasVisibleLastFrame = false;
        }
    }

    if (globals::aimbot::target->IsA(AShooterCharacter::StaticClass()))
    {
        FVector2D IconWidth = { 60.f, 60.f };
        FVector2D SmallWidth = { 55.f, 55.f };
        FVector2D Center = { Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 12 };
        FLinearColor GrayColor = { 0,0,0,0.5f };
        UTexture2D* Txtr = ((UEngine*)UEngine::StaticClass())->DefaultTexture;

        AShooterCharacter* Character = (AShooterCharacter*)globals::aimbot::target;
        UPrimalItem* Helmet = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Hat);
        UPrimalItem* Chest = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shirt);
        UPrimalItem* Gaunts = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Gloves);
        UPrimalItem* Legs = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Pants);
        UPrimalItem* Boots = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Boots);
        UPrimalItem* Shield = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shield);
        int Length = 40;

        globals::rendering::canvas->K2_DrawTexture(Txtr, { Center.X - IconWidth.X * 3 - 12.5, Center.Y - IconWidth.Y / 2 }, IconWidth, { 0.f,0.f }, { 1.f,1.f }, GrayColor, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });
        globals::rendering::canvas->K2_DrawTexture(Txtr, { Center.X - IconWidth.X * 2 - 7.5, Center.Y - IconWidth.Y / 2 }, IconWidth, { 0.f,0.f }, { 1.f,1.f }, GrayColor, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });
        globals::rendering::canvas->K2_DrawTexture(Txtr, { Center.X - IconWidth.X * 1 - 2.5, Center.Y - IconWidth.Y / 2 }, IconWidth, { 0.f,0.f }, { 1.f,1.f }, GrayColor, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });
        globals::rendering::canvas->K2_DrawTexture(Txtr, { Center.X - IconWidth.X * 0 + 2.5, Center.Y - IconWidth.Y / 2 }, IconWidth, { 0.f,0.f }, { 1.f,1.f }, GrayColor, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });
        globals::rendering::canvas->K2_DrawTexture(Txtr, { Center.X + IconWidth.X * 1 + 7.5, Center.Y - IconWidth.Y / 2 }, IconWidth, { 0.f,0.f }, { 1.f,1.f }, GrayColor, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });
        globals::rendering::canvas->K2_DrawTexture(Txtr, { Center.X + IconWidth.X * 2 + 12.5, Center.Y - IconWidth.Y / 2 }, IconWidth, { 0.f,0.f }, { 1.f,1.f }, GrayColor, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });

        if (Helmet)
        {
            Renderer::DrawIcon(Helmet->ItemIcon, { Center.X - IconWidth.X * 2.5 - 12.5, Center.Y }, SmallWidth);
            Renderer::DrawString(std::to_wstring((int)Helmet->ItemDurability).c_str(), { Center.X - IconWidth.X * 2.5 - 12.5, Center.Y - IconWidth.Y * 0.375 }, { 0.65, 0.65 }, { 1,1,1,1 }, true, { 0,0,0,1 }, true, true);
        }

        if (Chest)
        {
            Renderer::DrawIcon(Chest->ItemIcon, { Center.X - IconWidth.X * 1.5 - 7.5, Center.Y }, SmallWidth);
            Renderer::DrawString(std::to_wstring((int)Chest->ItemDurability).c_str(), { Center.X - IconWidth.X * 1.5 - 7.5, Center.Y - IconWidth.Y * 0.375 }, { 0.65, 0.65 }, { 1,1,1,1 }, true, { 0,0,0,1 }, true, true);
        }

        if (Gaunts)
        {
            Renderer::DrawIcon(Gaunts->ItemIcon, { Center.X - IconWidth.X * 0.5 - 2.5, Center.Y }, SmallWidth);
            Renderer::DrawString(std::to_wstring((int)Gaunts->ItemDurability).c_str(), { Center.X - IconWidth.X * 0.5 - 2.5, Center.Y - IconWidth.Y * 0.375 }, { 0.65, 0.65 }, { 1,1,1,1 }, true, { 0,0,0,1 }, true, true);
        }

        if (Legs)
        {
            Renderer::DrawIcon(Legs->ItemIcon, { Center.X + IconWidth.X * 0.5 + 2.5, Center.Y }, SmallWidth);
            Renderer::DrawString(std::to_wstring((int)Legs->ItemDurability).c_str(), { Center.X + IconWidth.X * 0.5 + 2.5, Center.Y - IconWidth.Y * 0.375 }, { 0.65, 0.65 }, { 1,1,1,1 }, true, { 0,0,0,1 }, true, true);
        }

        if (Boots)
        {
            Renderer::DrawIcon(Boots->ItemIcon, { Center.X + IconWidth.X * 1.5 + 7.5, Center.Y }, SmallWidth);
            Renderer::DrawString(std::to_wstring((int)Boots->ItemDurability).c_str(), { Center.X + IconWidth.X * 1.5 + 7.5, Center.Y - IconWidth.Y * 0.375 }, { 0.65, 0.65 }, { 1,1,1,1 }, true, { 0,0,0,1 }, true, true);
        }

        if (Shield)
        {
            Renderer::DrawIcon(Shield->ItemIcon, { Center.X + IconWidth.X * 2.5 + 12.5, Center.Y }, SmallWidth);
            Renderer::DrawString(std::to_wstring((int)Shield->ItemDurability).c_str(), { Center.X + IconWidth.X * 2.5 + 12.5, Center.Y - IconWidth.Y * 0.375 }, { 0.65, 0.65 }, { 1,1,1,1 }, true, { 0,0,0,1 }, true, true);
        }

        if (Character->GetRidingDino() && globals::local::FrameNum % 5 == 0)
        {
            LastRotation = CurrentRotation;

            CurrentRotation = Character->GetRidingDino()->ReplicatedMovement.Rotation;

            DeltaRotation = (CurrentRotation - LastRotation) / 5;
        }

        if (settings::aimbot::AntiDesync.Enabled)
        {
            Character->CharacterMovement->Velocity = { 0,0,0 };

            if (Character->GetRidingDino())
                Character->GetRidingDino()->CharacterMovement->Velocity = { 0,0,0 };
        }

        if (Keyboard::GetState(VK_F9, 0))
            globals::local::PC->ClientNotifyShowProfileRequest(Character->PlatformProfileID);
    }
}

std::unique_ptr<AimbotModule> AimbotModule::CreateModule()
{
    return std::make_unique<AimbotModule>();
}

int AimbotModule::GetDecidedBone()
{
    if (settings::aimbot::ShieldBypass.Enabled)
    {
        if (globals::aimbot::target && globals::aimbot::target->IsA(AShooterCharacter::StaticClass()))
        {
            if (((AShooterCharacter*)globals::aimbot::target)->IsBlockingWithShield())
            {
                settings::aimbot::CurrentBoneName = Xors(L"Rht_Leg_002Tear000_JNT_SKL");
                return 105;
            }
        }
    }

    switch (settings::aimbot::CurrentBone.Val)
    {
    case 0:
        settings::aimbot::CurrentBoneName = Xors(L"cnt_Head_jnt_skl");
        return 8;
    case 1:
        settings::aimbot::CurrentBoneName = Xors(L"Cnt_Chest_000_JNT_SKL");
        return 5;
    case 2:
        settings::aimbot::CurrentBoneName = Xors(L"Lft_Arm_002Tear006_JNT_SKL");
        return 41;
    case 3:
        settings::aimbot::CurrentBoneName = Xors(L"Rht_Arm_002Tear006_JNT_SKL");
        return 68;
    case 4:
        settings::aimbot::CurrentBoneName = Xors(L"Lft_Leg_001Tear000_JNT_SKL");
        return 93;
    case 5:
        settings::aimbot::CurrentBoneName = Xors(L"Rht_Leg_001Tear000_JNT_SKL");
        return 99;
    case 6:
        settings::aimbot::CurrentBoneName = Xors(L"Lft_Leg_002Tear000_JNT_SKL");
        return 104;
    case 7:
        settings::aimbot::CurrentBoneName = Xors(L"Rht_Leg_002Tear000_JNT_SKL");
        return 105;
    case 8:
        if (globals::aimbot::target)
        {
            if (globals::aimbot::target->IsA(AShooterCharacter::StaticClass()))
            {
                AShooterCharacter* Target = (AShooterCharacter*)globals::aimbot::target;

                UPrimalItem* CurrentHelmet = Target->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Hat);
                UPrimalItem* CurrentChest = Target->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shirt);
                UPrimalItem* CurrentGloves = Target->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Gloves);
                UPrimalItem* CurrentLegs = Target->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Pants);
                UPrimalItem* CurrentBoots = Target->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Boots);

                if (!CurrentHelmet)
                {
                    settings::aimbot::CurrentBoneName = Xors(L"cnt_Head_jnt_skl");
                    return 8;
                }
                if (!CurrentChest)
                {
                    settings::aimbot::CurrentBoneName = Xors(L"Cnt_Chest_000_JNT_SKL");
                    return 5;
                }
                if (!CurrentGloves)
                {
                    settings::aimbot::CurrentBoneName = Xors(L"Rht_Arm_002Tear006_JNT_SKL");
                    return 68;
                }
                if (!CurrentLegs)
                {
                    settings::aimbot::CurrentBoneName = Xors(L"Rht_Leg_002Tear000_JNT_SKL");
                    return 99;
                }
                if (!CurrentBoots)
                {
                    settings::aimbot::CurrentBoneName = Xors(L"r_foot_ik");
                    return 105;
                }

                int CurrentDura = 1000000;
                EPrimalEquipmentType Type = EPrimalEquipmentType::Hat;

                for (int x = 0; x < Target->MyInventoryComponent->EquippedItems.Count(); x++)
                {
                    UPrimalItem* Item = Target->MyInventoryComponent->EquippedItems[x];

                    if (!Item || Item->MyEquipmentType == EPrimalEquipmentType::Shield)
                        continue;

                    if (Item->ItemDurability < CurrentDura)
                    {
                        CurrentDura = Item->ItemDurability;
                        Type = Item->MyEquipmentType;
                    }
                }

                switch (Type)
                {
                case EPrimalEquipmentType::Hat:
                    settings::aimbot::CurrentBoneName = Xors(L"cnt_Head_jnt_skl");
                    return 8;
                case EPrimalEquipmentType::Shirt:
                    settings::aimbot::CurrentBoneName = Xors(L"Cnt_Chest_000_JNT_SKL");
                    return 5;
                case EPrimalEquipmentType::Gloves:
                    settings::aimbot::CurrentBoneName = Xors(L"Rht_Arm_002Tear006_JNT_SKL");
                    return 68;
                case EPrimalEquipmentType::Pants:
                    settings::aimbot::CurrentBoneName = Xors(L"Rht_Leg_001Tear000_JNT_SKL");
                    return 99;
                case EPrimalEquipmentType::Boots:
                    settings::aimbot::CurrentBoneName = Xors(L"Rht_Leg_002Tear000_JNT_SKL");
                    return 105;
                }
            }
        }

        settings::aimbot::CurrentBoneName = Xors(L"cnt_Head_jnt_skl");
        return 8;
    default:
        return 8;
    }
}
int AimbotModule::GetDinoDecidedBone()
{
    return 0;
}

int DesyncCounter = 0;
FVector PreviousLocation;
FVector PreviousLocationDifference;

FVector AimbotModule::Prediction(FVector EnemyPos, int paramz)
{
    if (!globals::aimbot::target)
        return EnemyPos;

    if (settings::aimbot::AntiDesync.Enabled)
    {
        if ((PreviousLocationDifference.X < 35 && PreviousLocationDifference.X > -35) && (PreviousLocationDifference.Y < 35 && PreviousLocationDifference.Y > -35) && (PreviousLocationDifference.Z < 35 && PreviousLocationDifference.Z > -35))
        {
            DesyncCounter++;
        }
        else
        {
            DesyncCounter = 0;
        }

        PreviousLocationDifference = EnemyPos - PreviousLocation;
        PreviousLocation = EnemyPos;

        if (DesyncCounter > 50)
            return EnemyPos;
    }

    //Vars and Extra

    //Multiplicators
    AShooterGameState* ShooterGameState = (AShooterGameState*)UWorld::Singleton()->GameState;
    AShooterPlayerState* SelfPlayerState = (AShooterPlayerState*)globals::local::LP->PlayerState;

    //PlayerVars
    FVector Velocity;
    FVector Acceleration;

    if (((AShooterCharacter*)globals::aimbot::target)->GetRidingDino())
    {
        auto Target = static_cast<AShooterCharacter*>(globals::aimbot::target);
        Velocity = Target->GetRidingDino()->ReplicatedMovement.LinearVelocity;
        Acceleration = Target->GetRidingDino()->CharacterMovement->GetCurrentAcceleration();
    }
    else
    {
        Velocity = globals::aimbot::target->ReplicatedMovement.LinearVelocity;
        Acceleration = globals::aimbot::target->CharacterMovement->GetCurrentAcceleration();
    }

    //Interpolation Factor
    float PingPerSecond = SelfPlayerState->GetExactPing() * 0.001;
    float DeltaSeconds = 1.0f / ShooterGameState->ServerFramerate;
    float InterPolationFactor;

    InterPolationFactor = (PingPerSecond + DeltaSeconds) * settings::aimbot::PredictionMultiplier.Val;

    if (((AShooterCharacter*)globals::aimbot::target)->GetRidingDino())
    {
        APrimalDinoCharacter* RidingDino = ((AShooterCharacter*)globals::aimbot::target)->GetRidingDino();

        if (paramz == 0)
        {
            if (RidingDino->bIsFlying)
            {
                FVector LocationFromOrigin;
                LocationFromOrigin.X += Velocity.X * InterPolationFactor + 0.5 * Acceleration.X * (InterPolationFactor * InterPolationFactor);
                LocationFromOrigin.Y += Velocity.Y * InterPolationFactor + 0.5 * Acceleration.Y * (InterPolationFactor * InterPolationFactor);
                LocationFromOrigin.Z += Velocity.Z * InterPolationFactor + 0.5 * Acceleration.Z * (InterPolationFactor * InterPolationFactor);

                FRotator PredictedRotation = RidingDino->ReplicatedMovement.Rotation + DeltaRotation * InterPolationFactor;

                EnemyPos += globals::libs::MathLib->STATIC_Quat_RotateVector(globals::libs::MathLib->STATIC_Conv_RotatorToQuaternion(DeltaRotation * InterPolationFactor), LocationFromOrigin);
            }
            else
            {
                FVector LocationFromOrigin;
                LocationFromOrigin.X += Velocity.X * InterPolationFactor + 0.5 * Acceleration.X * (InterPolationFactor * InterPolationFactor);
                LocationFromOrigin.Y += Velocity.Y * InterPolationFactor + 0.5 * Acceleration.Y * (InterPolationFactor * InterPolationFactor);
                LocationFromOrigin.Z += Velocity.Z * InterPolationFactor + 0.5 * Acceleration.Z * (InterPolationFactor * InterPolationFactor);

                FRotator PredictedRotation = RidingDino->ReplicatedMovement.Rotation + DeltaRotation * InterPolationFactor;

                EnemyPos += globals::libs::MathLib->STATIC_Quat_RotateVector(globals::libs::MathLib->STATIC_Conv_RotatorToQuaternion(DeltaRotation * InterPolationFactor), LocationFromOrigin);
            }
        }
        else if (paramz == 1)
        {
            EnemyPos.X += Velocity.X * InterPolationFactor + 0.5 * Acceleration.X * (InterPolationFactor * InterPolationFactor);
            EnemyPos.Y += Velocity.Y * InterPolationFactor + 0.5 * Acceleration.Y * (InterPolationFactor * InterPolationFactor);
            EnemyPos.Z += Velocity.Z * InterPolationFactor + 0.5 * Acceleration.Z * (InterPolationFactor * InterPolationFactor);
        }
    }
    else
    {
        EnemyPos.X += Velocity.X * InterPolationFactor + 0.5 * Acceleration.X * (InterPolationFactor * InterPolationFactor);
        EnemyPos.Y += Velocity.Y * InterPolationFactor + 0.5 * Acceleration.Y * (InterPolationFactor * InterPolationFactor);
        EnemyPos.Z += Velocity.Z * InterPolationFactor + 0.5 * Acceleration.Z * (InterPolationFactor * InterPolationFactor);
    }

    return EnemyPos;
}

FVector AdjustForGravity(FVector VelocityAdjustedPosition, FVector InitialPosition, float ProjectileSpeed, FVector Gravity)
{
    FVector HorizontalDistanceVector = FVector(VelocityAdjustedPosition.X - InitialPosition.X, VelocityAdjustedPosition.Y - InitialPosition.Y, 0.0f);
    float HorizontalDistance = HorizontalDistanceVector.Magnitude();
    float VerticalDistance = VelocityAdjustedPosition.Z - InitialPosition.Z;
    float Distance = VelocityAdjustedPosition.Distance(InitialPosition);
    float TimeOfFlight = Distance / ProjectileSpeed;
    FVector GravityDisplacement = Gravity * 0.5f * std::pow(TimeOfFlight,2);
    FVector AdjustedPosition = VelocityAdjustedPosition + GravityDisplacement;

    return AdjustedPosition;
}
FVector AimbotModule::ProjectilePrediction(FVector EnemyPos, float ProjectileSpeed)
{
    auto SPC = static_cast<AShooterPlayerController*>(globals::local::PC);

    if (!IsValid(globals::aimbot::target) || !IsValid(SPC->GetPlayerCharacter()) || !IsValid(SPC->GetPlayerCharacter()->CurrentWeapon) || !IsValid(SPC->GetPlayerCharacter()->CurrentWeapon->AssociatedPrimalItem))
        return EnemyPos;


    if (!SPC->GetPlayerCharacter()->CurrentWeapon->IsA(APrimalWeaponBow::StaticClass()))
        return EnemyPos;

    //Vars and Extra
    auto PrimalBow = reinterpret_cast<APrimalWeaponBow*>(SPC->GetPlayerCharacter()->CurrentWeapon);
    auto SelfPlayer = reinterpret_cast<AShooterCharacter*>(SPC->GetPlayerCharacter());
    //auto UKismetMathLib = reinterpret_cast<UKismetMathLibrary*>(UKismetMathLibrary::StaticClass());
    //auto PredictedEnemyLoc = EnemyPos;

    //Multipliacators
    auto ShooterGameState = static_cast<AShooterGameState*>(UWorld::Singleton()->GameState);
    //auto SelfPlayerState = static_cast<AShooterPlayerState*>(SelfPlayer->PlayerState);

    //PlayerVars
    FVector Velocity;
    FVector Acceleration;
    float TimeTillTarget;
    static float Gravity = 300.f;

    //if (Keyboard::GetState(VK_UP, 0)) {
    //    Gravity += 10.f;
    //    log(Xors("Gravity: %.0f"),Gravity);
    //}
    //if (Keyboard::GetState(VK_DOWN, 0)) {
    //    Gravity -= 10.f;
    //    log(Xors("Gravity: %.0f"), Gravity);
    //}
    //float PingPerSecond = SelfPlayer->PlayerState->GetExactPing() * 0.001;
    //float DeltaSeconds = 1.0f / ShooterGameState->ServerFramerate;
    //float InterPolationFactor;

    //InterPolationFactor = PingPerSecond + DeltaSeconds;

    Velocity = globals::aimbot::target->GetVisualVelocity();
    Acceleration = globals::aimbot::target->CharacterMovement->GetCurrentAcceleration();
	Velocity *= 1.1f;
    FVector random = {0,0,0};
    FVector VelocityAdjusted = globals::libs::VictoryCore->STATIC_LeadTargetPosition(*spoof_call(Hooks::GetShootingCamLoc, SPC->GetPlayerCharacter()->CurrentWeapon, &random), ProjectileSpeed, EnemyPos, Velocity);
    FVector VelocityAndGravity = AdjustForGravity(VelocityAdjusted, *spoof_call(Hooks::GetShootingCamLoc, SPC->GetPlayerCharacter()->CurrentWeapon, &random), ProjectileSpeed, { 0,0,Gravity });
    return VelocityAndGravity;
    //Distance Accuracy
    //for (int x = 0; x < 100; x++)
    //{
    //    TimeTillTarget = SelfPlayer->K2_GetActorLocation().Distance(EnemyPos) / ProjectileSpeed;

    //    PredictedEnemyLoc.X += Velocity.X * TimeTillTarget;
    //    PredictedEnemyLoc.Y += Velocity.Y * TimeTillTarget;
    //    PredictedEnemyLoc.Z += Velocity.Z * TimeTillTarget;

    //    TimeTillTarget = SelfPlayer->K2_GetActorLocation().Distance(PredictedEnemyLoc) / ProjectileSpeed;

    //    PredictedEnemyLoc = EnemyPos;
    //}

    //PredictedEnemyLoc.X += Velocity.X * TimeTillTarget + Velocity.X * InterPolationFactor;
    //PredictedEnemyLoc.Y += Velocity.Y * TimeTillTarget + Velocity.Y * InterPolationFactor;
    //PredictedEnemyLoc.Z += Velocity.Z * TimeTillTarget + Velocity.Z * InterPolationFactor;

    //PredictedEnemyLoc.Z += Gravity * TimeTillTarget;

    //return PredictedEnemyLoc;
}

std::vector<ShooterBones> AimbotModule::CameraBones = {
    ShooterBones::cnt_Head_jnt_skl,
    ShooterBones::Cnt_Chest_000_JNT_SKL,
    ShooterBones::ROOT_JNT_SKL,
    ShooterBones::ik_foot_root
};

std::vector<std::wstring> AimbotModule::CameraBonesNames = {
	Xors(L"Head"),
	Xors(L"Chest"),
	Xors(L"Root"),
	Xors(L"Foot")
};