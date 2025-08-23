#include "pch.h"
#include "PlayerModule.h"
#include "ChamsModule.h"
#include "Rendering.h"

int PlayersInRender = 0;
int VisiblePlayersInRender = 0;

bool PlayerModule::OnModuleInit() 
{
    return true;
}

bool PlayerModule::OnActorModule(CurrentActor* Current) 
{
    int Height = 0;

    AShooterCharacter* Player = (AShooterCharacter*)Current->Actor;

    FVector2D PlayerLocation, HealthBarPos;
    FVector HeadPos = Player->Mesh->GetBoneLocation(8);
    FVector FeetPos = Player->Mesh->GetBoneLocation(0);

    //if (SPC->GetPlayerCharacter() == Player)
    //    return false;

    if (Player->LinkedPlayerDataID == 0)
        return false;

    Current->IsFriendly = Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam;
    Current->IsSleeping = !Player->bIsConnected;
    Current->IsDead = Player->bIsDead;
    Current->IsVisible = globals::local::PC->LineOfSightTo(Player, globals::local::CM->CameraCache.POV.Location, true);

    if (!Current->IsFriendly && !Current->IsDead && !Current->IsSleeping)
        PlayersInRender++;

    if (!Current->IsFriendly && Current->IsVisible && !Current->IsDead && !Current->IsSleeping)
        VisiblePlayersInRender++;

    if (!Actors::PWTS(FVector(HeadPos.X, HeadPos.Y, HeadPos.Z + 10), HealthBarPos))
        return false;

    if (!Actors::PWTS(FVector(FeetPos.X, FeetPos.Y, FeetPos.Z - 10), PlayerLocation))
        return false;

    Current->Pos = Player->K2_GetActorLocation();
    Current->distance = (float)Current->Pos.Distance(globals::local::POS);
    Current->OnScreen = true;

    if (settings::misc::BolaPackageLoaded && Current->IsFriendly && settings::misc::RemoveBolas.Enabled && Current->Pos.Distance(globals::local::POS) < 1000 && settings::misc::RemovePlayerBolas && Player != globals::local::LP) 
    {
        ABuff_Bola_C* Buff = (ABuff_Bola_C*)Player->GetBuff(ABuff_Bola_C::StaticClass());

        if (Buff)
            globals::local::PC->ServerMultiUse(Player, 20001);
    }

    FLinearColor DrawColor = FLinearColor{ 1.f, 1.f, 1.f, 1.f };
    for (int tribe : globals::aimbot::AlliedTribes)
    {
		if (Player->TargetingTeam == tribe)
			Current->IsFriendly = true;
	}

    if (Current->IsFriendly && settings::teamPlayer::EnableTeamPlayer.Enabled) 
    {
        if ((settings::teamPlayer::OnlyVisible.Enabled && !Current->IsVisible) || (!settings::teamPlayer::TeamDead.Enabled && Current->IsDead) || (!settings::teamPlayer::TeamSleeping.Enabled && Current->IsSleeping))
            return false;

        Current->IsVisible ? DrawColor = settings::teamPlayer::TeamColor.Color : DrawColor = settings::teamPlayer::TeamNonvisibleColor.Color;

        if (Current->IsSleeping)
            DrawColor = settings::teamPlayer::TeamSleepingColor.Color;
        if (Current->IsDead)
            DrawColor = settings::teamPlayer::TeamDeadColor.Color;

        if (settings::teamPlayer::Health.Enabled)
        {
            Renderer::RenderHorizontalHealth(Player, { PlayerLocation.X, PlayerLocation.Y });
            Height += 10;
        }

        std::wstring DWString;

        if (settings::teamPlayer::Distance.Enabled)
        {
            DWString += std::to_wstring((int)Current->Pos.Distance(globals::local::POS) / 100) + Xors(L"m");
        }

        if (settings::teamPlayer::TeamWeight.Enabled)
        {
            if (settings::teamPlayer::Distance.Enabled)
                DWString += Xors(L" | ");

            DWString += std::to_wstring((int)Player->ReplicatedWeight) + Xors(L"w");
        }

        if (settings::teamPlayer::TeamWeight.Enabled || settings::teamPlayer::Distance.Enabled)
        {
            Renderer::DrawString(DWString, { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), { 1,1,1,1 }, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::teamPlayer::TeamExtraInfo.Enabled)
        {
            Renderer::DrawString(Player->PlatformProfileName.ToWString().c_str(), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), { 1,1,1,1 }, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
            Renderer::DrawString(Player->LinkedPlayerIDString().ToWString().c_str(), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), { 1,1,1,1 }, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::teamPlayer::Name.Enabled)
        {
            Renderer::DrawString(Player->GetDescriptiveName().wc_str(), {PlayerLocation.X, PlayerLocation.Y + Height}, FVector2D(0.50f, 0.50f), DrawColor, settings::teamPlayer::OutlineText.Enabled, {0.f, 0.f, 0.f, 1.f}, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::teamPlayer::TribeName.Enabled)
        {
            if (Player->TribeName.IsValid()) 
            {
                std::wstring tribeName = Player->TribeName.wc_str();
                Renderer::DrawString(tribeName, { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f },settings::teamPlayer::CenterText.Enabled);
                Height += 12;
            }
            else 
            {
                Renderer::DrawString(std::wstring(Xors(L"No Tribe")), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
                Height += 12;
            }
        }

        if (settings::teamPlayer::Weapon.Enabled && Player->CurrentWeapon && Player->CurrentWeapon->AssociatedPrimalItem) 
        { 
            AShooterWeapon* Weapon = Player->CurrentWeapon;
            int ID = (int)(Player->CurrentWeapon->GetWeaponDamageMultiplier() * 100);
            float FD = Player->CurrentWeapon->GetWeaponDamageMultiplier() * 100;
            int num = (int)((FD - ID) * 10);

            std::wstring WeaponString = std::to_wstring(ID) + Xors(L".") + std::to_wstring(num) + Xors(L"% ") + Weapon->AssociatedPrimalItem->DescriptiveNameBase.wc_str();
            Renderer::DrawString(WeaponString, { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
        }
        else if (settings::teamPlayer::Weapon.Enabled)
        {
            Renderer::DrawString(Xors(L"Fists"), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::teamPlayer::ViewLine.Enabled)
        {
            FVector ViewLineEnd = HeadPos + Player->GetActorForwardVector() * 50;
            FVector2D ViewLineEnd2D, ViewLineStart2D;

            if (!Actors::PWTS(ViewLineEnd, ViewLineEnd2D))
                return false;

            if (!Actors::PWTS(HeadPos, ViewLineStart2D))
                return false;

            Renderer::DrawLine2D(ViewLineEnd2D, ViewLineStart2D, 2.0f, DrawColor);
        }

        if (settings::teamPlayer::Torpor.Enabled)
            Renderer::DrawTorpBar(Player,{ PlayerLocation.X, PlayerLocation.Y + Height });

        if (settings::teamPlayer::Armor.Enabled)
            Renderer::RenderPlayerArmor(Player, { HealthBarPos.X, HealthBarPos.Y });

        if (settings::teamPlayer::Bones.Enabled)
            Renderer::DrawSkeleton(globals::local::PC, Player, 1.0f, DrawColor);

        if (settings::teamPlayer::Box.Enabled)
            Renderer::DrawPlayerBox(Player, settings::teamPlayer::BoxType, globals::local::PC, Renderer::BoneToLocation(Player, ShooterBones::ROOT_JNT_SKL), Renderer::BoneToLocation(Player, ShooterBones::cnt_Head_jnt_skl), { 35.f, 5.f, 25.f }, 1.0f, Player->K2_GetActorRotation().Yaw,DrawColor);

        if (settings::teamPlayer::Chams.Enabled)
        {
            ChamsModule::CreateAndApplyMaterial(Player->Mesh, settings::teamPlayer::TeamPlayerArmorColor.Color);

            for (int x = 0; x < Player->MyInventoryComponent->EquippedItems.Count(); x++)
            {
                UPrimalItem* EquippedItem = Player->MyInventoryComponent->EquippedItems[x];

                if (!EquippedItem)
                    continue;

                for (int x = 0; x < EquippedItem->GetAttachedComponentsNum(); x++)
                {
                    UActorComponent* Component = EquippedItem->GetAttachedComponent(x, nullptr);

                    if (Component)
                    {
                        if (Component->IsA(USkeletalMeshComponent::StaticClass()) && settings::teamPlayer::TeamPlayerArmorChams.Enabled)
                            ChamsModule::CreateAndApplyMaterial((USkeletalMeshComponent*)Component, settings::teamPlayer::TeamPlayerArmorColor.Color);
                        else if (Component->IsA(UStaticMeshComponent::StaticClass()) && settings::teamPlayer::TeamPlayerShieldChams.Enabled)
                            ChamsModule::StaticCreateAndApplyMaterial((UStaticMeshComponent*)Component, settings::teamPlayer::TeamPlayerShieldColor.Color);
                    }
                }
            }

            if (Player->CurrentWeapon && settings::teamPlayer::TeamPlayerWeaponChams.Enabled)
            {
                TArray<UActorComponent*> SkeletalComponents = Player->CurrentWeapon->K2_GetComponentsByClass(USkeletalMeshComponent::StaticClass());
                TArray<UActorComponent*> StaticComponents = Player->CurrentWeapon->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());

                for (int x = 0; x < SkeletalComponents.Count(); x++)
                {
                    UActorComponent* SkeletalComponent = SkeletalComponents[x];

                    if (SkeletalComponent)
                        ChamsModule::CreateAndApplyMaterial((USkeletalMeshComponent*)SkeletalComponent, settings::teamPlayer::TeamPlayerWeaponColor.Color);
                }

                for (int x = 0; x < StaticComponents.Count(); x++)
                {
                    UActorComponent* StaticComponent = StaticComponents[x];

                    if (StaticComponent)
                        ChamsModule::StaticCreateAndApplyMaterial((UStaticMeshComponent*)StaticComponent, settings::teamPlayer::TeamPlayerWeaponColor.Color);
                }
            }
        }
    }
    else if (!Current->IsFriendly && settings::enemyPlayer::EnableEnemyPlayer.Enabled)
    {
        if ((settings::enemyPlayer::OnlyVisible.Enabled && !Current->IsVisible) || (!settings::enemyPlayer::EnemyDead.Enabled && Current->IsDead) || (!settings::enemyPlayer::EnemySleeping.Enabled && Current->IsSleeping))
            return false;

        Current->IsVisible ? DrawColor = settings::enemyPlayer::EnemyColor.Color : DrawColor = settings::enemyPlayer::EnemyNonvisibleColor.Color;

        if (Current->IsSleeping)
            DrawColor = settings::enemyPlayer::EnemySleepingColor.Color;

        if (Current->IsDead)
            DrawColor = settings::enemyPlayer::EnemyDeadColor.Color;

        if (settings::enemyPlayer::Health.Enabled)
        {
            Renderer::RenderHorizontalHealth(Player, { PlayerLocation.X, PlayerLocation.Y });
            Height += 10;
        }

        std::wstring DWString;

        if (settings::enemyPlayer::Distance.Enabled)
        {
            DWString += std::to_wstring((int)Current->Pos.Distance(globals::local::POS) / 100) + Xors(L"m");
        }

        if (settings::enemyPlayer::EnemyWeight.Enabled)
        {
            if (settings::enemyPlayer::Distance.Enabled)
                DWString += Xors(L" | ");

            DWString += std::to_wstring((int)Player->ReplicatedWeight) + Xors(L"w");
        }

        if (settings::enemyPlayer::EnemyWeight.Enabled || settings::enemyPlayer::Distance.Enabled)
        {
            Renderer::DrawString(DWString, { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), { 1,1,1,1 }, settings::teamPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::teamPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::enemyPlayer::EnemyExtraInfo.Enabled)
        {
            Renderer::DrawString(Player->PlatformProfileName.ToWString().c_str(), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), { 1,1,1,1 }, settings::enemyPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::enemyPlayer::CenterText.Enabled);
            Height += 12;
            Renderer::DrawString(Player->LinkedPlayerIDString().ToWString().c_str(), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), { 1,1,1,1 }, settings::enemyPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::enemyPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::enemyPlayer::Name.Enabled)
        {
            Renderer::DrawString(Player->GetDescriptiveName().wc_str(), {PlayerLocation.X, PlayerLocation.Y + Height}, FVector2D(0.50f, 0.50f), DrawColor, settings::enemyPlayer::OutlineText.Enabled, {0.f, 0.f, 0.f, 1.f}, settings::enemyPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::enemyPlayer::TribeName.Enabled) 
        {
            if (Player->TribeName.IsValid()) 
            {
                std::wstring tribeName = Player->TribeName.wc_str();
                Renderer::DrawString(tribeName, { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::enemyPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::enemyPlayer::CenterText.Enabled);
                Height += 12;
            }
            else
            {
                Renderer::DrawString(std::wstring(Xors(L"No Tribe")), { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::enemyPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f },settings::enemyPlayer::CenterText.Enabled);
                Height += 12;
            }
        }

        if (settings::enemyPlayer::ViewLine.Enabled) 
        {
            auto ViewLineEnd = HeadPos + Player->GetActorForwardVector() * 50;
            FVector2D ViewLineEnd2D, ViewLineStart2D;

            if (!Actors::PWTS(ViewLineEnd, ViewLineEnd2D))
                return false;

            if (!Actors::PWTS(HeadPos, ViewLineStart2D))
                return false;

            Renderer::DrawLine2D(ViewLineEnd2D, ViewLineStart2D, 2.0f, DrawColor);
        }

        if (settings::enemyPlayer::Weapon.Enabled && Player->CurrentWeapon && Player->CurrentWeapon->AssociatedPrimalItem && Player->CurrentWeapon->AssociatedPrimalItem->DescriptiveNameBase.Data()) 
        {
            FVector2D Weaponlocation;
            auto Weapon = Player->CurrentWeapon;
            int ID = (int)(Player->CurrentWeapon->GetWeaponDamageMultiplier() * 100);
            float FD = Player->CurrentWeapon->GetWeaponDamageMultiplier() * 100;
            int num = (int)((FD - ID) * 10);

            std::wstring WeaponString = std::to_wstring(ID) + Xors(L".") + std::to_wstring(num) + Xors(L"% ") + Weapon->AssociatedPrimalItem->DescriptiveNameBase.wc_str();
            Renderer::DrawString(WeaponString, { PlayerLocation.X, PlayerLocation.Y + Height }, FVector2D(0.50f, 0.50f), DrawColor, settings::enemyPlayer::OutlineText.Enabled, { 0.f, 0.f, 0.f, 1.f }, settings::enemyPlayer::CenterText.Enabled);
            Height += 12;
        }
        else if (settings::enemyPlayer::Weapon.Enabled)
        {
            Renderer::DrawString(Xors(L"Fists"), {PlayerLocation.X, PlayerLocation.Y + Height}, FVector2D(0.50f, 0.50f), DrawColor, settings::enemyPlayer::OutlineText.Enabled, {0.f, 0.f, 0.f, 1.f}, settings::enemyPlayer::CenterText.Enabled);
            Height += 12;
        }

        if (settings::enemyPlayer::Torpor.Enabled) 
            Renderer::DrawTorpBar(Player, { PlayerLocation.X, PlayerLocation.Y + Height });

        if (settings::enemyPlayer::Snaplines.Enabled)
        {
            FVector2D HeadPos2D;

            if (!Actors::PWTS(HeadPos, HeadPos2D))
                return false;

            Renderer::DrawLine2D(HeadPos2D, { Renderer::GetCanvasSize().X / 2, 0 }, 1.0f, DrawColor);
        }

        if (settings::enemyPlayer::HeadDot.Enabled)
        {
            FVector2D HeadPos2D;

            if (!Actors::PWTS(HeadPos, HeadPos2D))
                return false;

            Renderer::DrawFilledCircle(HeadPos2D, 3, { 0,0,0,0 });
            Renderer::DrawFilledCircle(HeadPos2D, 2, DrawColor);
        }

        if (settings::enemyPlayer::Armor.Enabled)
            Renderer::RenderPlayerArmor(Player, { HealthBarPos.X, HealthBarPos.Y });

        if (settings::enemyPlayer::Bones.Enabled)
            Renderer::DrawSkeleton(globals::local::PC, Player, 1.0f, DrawColor);

        if (settings::enemyPlayer::Box.Enabled)
            Renderer::DrawPlayerBox(Player, settings::enemyPlayer::BoxType, globals::local::PC, Renderer::BoneToLocation(Player, ShooterBones::ROOT_JNT_SKL), Renderer::BoneToLocation(Player, ShooterBones::cnt_Head_jnt_skl), { 35.f, 5.f, 25.f }, 1.0f, Player->K2_GetActorRotation().Yaw,DrawColor);

        if (settings::enemyPlayer::Chams.Enabled)
        {
            ChamsModule::CreateAndApplyMaterial(Player->Mesh, settings::enemyPlayer::EnemyPlayerArmorColor.Color);

            for (int x = 0; x < Player->MyInventoryComponent->EquippedItems.Count(); x++)
            {
                UPrimalItem* EquippedItem = Player->MyInventoryComponent->EquippedItems[x];

                if (!EquippedItem)
                    continue;

                for (int x = 0; x < EquippedItem->GetAttachedComponentsNum(); x++)
                {
                    UActorComponent* Component = EquippedItem->GetAttachedComponent(x, nullptr);

                    if (Component)
                    {
                        if (Component->IsA(USkeletalMeshComponent::StaticClass()) && settings::enemyPlayer::EnemyPlayerArmorChams.Enabled)
                            ChamsModule::CreateAndApplyMaterial((USkeletalMeshComponent*)Component, settings::enemyPlayer::EnemyPlayerArmorColor.Color);
                        else if (Component->IsA(UStaticMeshComponent::StaticClass()) && settings::enemyPlayer::EnemyPlayerShieldChams.Enabled)
                            ChamsModule::StaticCreateAndApplyMaterial((UStaticMeshComponent*)Component, settings::enemyPlayer::EnemyPlayerShieldColor.Color);
                    }
                }
            }

            if (Player->CurrentWeapon && settings::enemyPlayer::EnemyPlayerWeaponChams.Enabled)
            {
                TArray<UActorComponent*> SkeletalComponents = Player->CurrentWeapon->K2_GetComponentsByClass(USkeletalMeshComponent::StaticClass());
                TArray<UActorComponent*> StaticComponents = Player->CurrentWeapon->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());

                for (int x = 0; x < SkeletalComponents.Count(); x++)
                {
                    UActorComponent* SkeletalComponent = SkeletalComponents[x];

                    if (SkeletalComponent)
                        ChamsModule::CreateAndApplyMaterial((USkeletalMeshComponent*)SkeletalComponent, settings::enemyPlayer::EnemyPlayerWeaponColor.Color);
                }

                for (int x = 0; x < StaticComponents.Count(); x++)
                {
                    UActorComponent* StaticComponent = StaticComponents[x];

                    if (StaticComponent)
                        ChamsModule::StaticCreateAndApplyMaterial((UStaticMeshComponent*)StaticComponent, settings::enemyPlayer::EnemyPlayerWeaponColor.Color);
                }
            }
        }


    }

    return false;
}

bool PlayerModule::ModuleRequirements(CurrentActor* Current) 
{
    if (!Current)
        return false;

    if (!Current->Actor)
        return false;

    if (Current->Type != ActorType::Player)
        return false;

    return true;
}

void PlayerModule::PostActors()
{
    if (settings::misc::ExtraInfo.Enabled)
    {
        if (PlayersInRender > 0 || VisiblePlayersInRender > 0)
        {
            std::wstring AllString = Xors(L"Players Near : ") + std::to_wstring(PlayersInRender);
            std::wstring Visible = Xors(L"Visible Players Near : ") + std::to_wstring(VisiblePlayersInRender);

            Renderer::PushFont(Renderer::HudFont);
            Renderer::DrawString(AllString.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y - 280), { 0.8, 0.8 }, { 1.0f, 0.0f, 0.0f, 1.0f }, true, { 0, 0, 0, 1 }, true, true);
            Renderer::DrawString(Visible.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y - 260), { 0.8, 0.8 }, { 1.0f, 0.0f, 0.0f, 1.0f }, true, { 0, 0, 0, 1 }, true, true);
            Renderer::PushFont(Renderer::EspFont);

            PlayersInRender = 0;
            VisiblePlayersInRender = 0;
        }
    }
}

std::unique_ptr<PlayerModule> PlayerModule::CreateModule() 
{
    return std::make_unique<PlayerModule>();
}
