#include "pch.h"
#include "LocalModule.h"
#include "HookManager.h"
#include <random>
#include "ChamsModule.h"
#include "AssetLoader.h"
#include "AimbotModule.h"
#include "Config.h"

int BattleModeCounter = 0;
int InventoryToArkCounter = 0;

APrimalStructureItemContainer_SupplyCrate* Supply = nullptr;
APrimalStructureItemContainer_SupplyCrate* ExternDrop = nullptr;
TArray<FOverlappedFoliageElement> Resources = {};
APrimalStructureItemContainer_SupplyCrate* UploadDrop = nullptr;
bool FailedCheck = false;
bool FirstTimeInjection = true;

std::wstring GetLevelString(std::wstring desc)
{
    std::wstring Level = Xors(L" Lvl ");
    std::wstring find = Xors(L"Lvl ");
    bool secondLvl = false;
    start:
	for (int x = 0; x < desc.size(); x++)
	{
        if (desc[x] == find[0])
		{
			bool found = true;
			for (int y = 1; y < find.size(); y++)
			{
				if (desc[x + y] != find[y])
				{
					found = false;
					break;
				}
			}
			if (found)
			{
				for (int y = x + find.size(); y < desc.size(); y++)
				{
					if (desc[y] == ' ' || desc[y] == '\n')
						break;
					Level += desc[y];
				}
                if (!secondLvl) {
                    secondLvl = true;
                    Level+= Xors(L"/");
                    desc.erase(0, x + find.size());
                    goto start;
                }
                else
                {
					return Level;
                }
			}
		}
	}
	return Level;
}

bool LocalModule::OnModuleInit()
{
    return true;
}

bool LocalModule::OnActorModule(CurrentActor* Current)
{
    ADroppedItem* DroppedItem = (ADroppedItem*)Current->Actor;
    
    if (!DroppedItem->MyItem)
		return false;

    static UClass* Poop = nullptr;
    if (!Poop)    
        Poop = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/BaseBPs/PrimalItemConsumablePoop.PrimalItemConsumablePoop_C"));

    static UClass* Egg = nullptr;
    if (!Egg)
        Egg = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C"));

    if (settings::miscStructure::DrawDroppedEggs.Enabled && DroppedItem->MyItem->IsA(Egg) && DroppedItem->MyItem->DescriptiveNameBase.wc_str() && DroppedItem->MyItem->CustomItemDescription.wc_str())
    {
        FVector2D DroppedItem2D;

		if (!Actors::PWTS(DroppedItem->K2_GetActorLocation(), DroppedItem2D))
			return false;

        std::wstring Parents = GetLevelString(DroppedItem->MyItem->CustomItemDescription.wc_str());

        Renderer::DrawString((DroppedItem->MyItem->DescriptiveNameBase.wc_str() + Parents).c_str(), DroppedItem2D, {0.5f, 0.5f}, {1.f,1.f,1.f,1.f}, true, {0,0,0,1}, true, true);
    }
    else if (settings::miscStructure::DrawDroppedItems.Enabled && DroppedItem->MyItem->DescriptiveNameBase.wc_str() && !DroppedItem->MyItem->IsA(Poop) && !DroppedItem->MyItem->IsA(Egg))
    {
        FVector2D DroppedItem2D;

        if (!Actors::PWTS(DroppedItem->K2_GetActorLocation(), DroppedItem2D))
			return false;

        Renderer::DrawString(DroppedItem->MyItem->DescriptiveNameBase.wc_str(), DroppedItem2D, {0.5f, 0.5f}, {1.f,1.f,1.f,1.f}, true, {0,0,0,1}, true, true);
    }

    if (Current->Actor->K2_GetActorLocation().Distance(globals::local::POS) < 1500) 
    {
        if (settings::autoMation::PickupPoop.ShouldExecute() && DroppedItem->MyItem->IsA(Poop))
            globals::local::PC->ServerMultiUse(Current->Actor, 100);
        else if (settings::autoMation::PickupEggs.ShouldExecute() && DroppedItem->MyItem->IsA(Egg))
            globals::local::PC->ServerMultiUse(Current->Actor, 100);
        else if (settings::autoMation::PickupItems.ShouldExecute() && !DroppedItem->MyItem->IsA(Egg) && !DroppedItem->MyItem->IsA(Poop))
            globals::local::PC->ServerMultiUse(Current->Actor, 100);
    }

    return false;
}

bool LocalModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current || !Current->Actor)
        return false;

    if (Current->Type != ActorType::Item)
        return false;

    return true;
}

void ShootProjectile(AShooterWeapon_Projectile* Weap)
{
    if (!Weap)
        return;

    FVector_NetQuantizeNormal dir = (FVector_NetQuantizeNormal)globals::libs::MathLib->STATIC_Conv_RotatorToVector(globals::local::CM->GetCameraRotation()).Normalize();
    Weap->ServerFireProjectile(Weap->GetMuzzleLocation(), dir, globals::libs::MathLib->STATIC_RandomInteger(INT_MAX));
}
void ShootProjectileEx(AShooterWeapon_Projectile* Weap)
{
    if (!Weap)
        return;

    FVector_NetQuantizeNormal dir = (FVector_NetQuantizeNormal)globals::libs::MathLib->STATIC_Conv_RotatorToVector(globals::local::CM->GetCameraRotation()).Normalize();
    Weap->ServerFireProjectileEx(Weap->GetMuzzleLocation(), dir,5200.f, globals::libs::MathLib->STATIC_RandomInteger(INT_MAX), globals::libs::MathLib->STATIC_RandomInteger(INT_MAX));
}

bool InGhost = false;
FVector LocalModule::CachedBossFightLocation = { 0,0,0 };

void LocalModule::PostActors()
{
    if (settings::aimbot::FakeRotation.Enabled && !settings::aimbot::ClientOmniMovement.Enabled)
        globals::local::LP->Mesh->K2_SetWorldRotation(FRotator(0, globals::local::PC->ControlRotation.Yaw, 0), false, nullptr, false);

    if (globals::local::WP && globals::local::WP->IsA(AWeapC4_C::StaticClass()) && globals::local::FrameNum % 5 == 0 && settings::misc::FastPlaceC4.ShouldExecute())
    {
        FHitResult Result = Util::GetTrace();

        if (!Result.Location.IsValid())
            return;

        FPlacementData PlacementParams{};
        FBPNetExecParams ExecParams{};
        PlacementParams.AdjustedLocation = Result.Location;

        auto Actor = UWorld::Singleton()->GetGlobalObjects().GetObjectPtr(Result.HitObjectHandle.Actor.ObjectIndex);

        if (Actor && Actor->IsA(APrimalCharacter::StaticClass()))
        {
            APrimalCharacter* Char = (APrimalCharacter*)Actor;

            FVector BoneLoc;
            PlacementParams.AttachToPawn = (APawn*)Actor;

            if (Actor->IsA(APrimalDinoCharacter::StaticClass()))
            {
                PlacementParams.DinoCharacter = (APrimalDinoCharacter*)Actor;
                PlacementParams.AttachToBone = Result.BoneName;
                PlacementParams.bSnapped = false;
            }
        }

        globals::local::PC->ServerRequestPlaceStructure(84, Result.Location, { 0,0,0 }, { 90, 90, 0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
        globals::local::WP->ServerStartReload();
    }

    if (globals::local::WP && globals::local::WP->IsA(APrimalWeaponGrenade::StaticClass()) && settings::misc::FastThrow.Enabled && settings::misc::FastThrow.KeyBindForVar && Keyboard::GetState(settings::misc::FastThrow.KeyBindForVar, 1))
    {
        static void (*DoFireProjectileCustom)(APrimalWeaponGrenade * _this, bool bExplodeInHand) = nullptr;
        if (!DoFireProjectileCustom)
            DoFireProjectileCustom = (void(*)(APrimalWeaponGrenade*, bool))signature(Xors("40 55 53 57 48 8D 6C 24 D0 48 81 EC 30 01 00 00 48 8B F9")).GetPointer();

        APrimalWeaponGrenade* Grenade = (APrimalWeaponGrenade*)globals::local::WP;

        if (DoFireProjectileCustom)
            spoof_call(DoFireProjectileCustom, Grenade, false);

        Grenade->ServerStartReload();
    }
    else if (settings::misc::ForceShoot.Enabled && globals::local::WP && globals::local::WP->AssociatedPrimalItem && Keyboard::GetState(settings::misc::ForceShoot.KeyBindForVar, 1) && globals::local::FrameNum % 3 == 0)
    {
        if (globals::local::WP->IsA(AShooterWeapon_Instant::StaticClass()))
        {
            if (globals::local::WP->CurrentAmmoInClip > 0)
            {
                static void (*FireWeaponInstant)(AShooterWeapon_Instant * _this) = nullptr;
                if (!FireWeaponInstant)
                    FireWeaponInstant = (void(*)(AShooterWeapon_Instant*))signature(Xors("48 8B C4 48 89 58 20 55 56 57 41 54 41 55 41 56 41 57 48 8D A8 28 FD FF FF 48 81 EC A0 03 00 00 0F 29 70 B8 0F 29 78 A8 44 0F 29 40 98 44 0F 29 48 88 44 0F 29 90 78 FF FF FF 44 0F 29 98 68 FF FF FF 44 0F 29 A0 58 FF FF FF 44")).GetPointer();

                AShooterWeapon_Instant* instant = (AShooterWeapon_Instant*)globals::local::WP;
                instant->bBPDoClientCheckCanFire = false;
                instant->bCanFire = true;

                if (FireWeaponInstant)
                    spoof_call(FireWeaponInstant, instant);
            }
        }
        else if (globals::local::WP->IsA(APrimalWeaponBow::StaticClass()))
        {
            APrimalWeaponBow* Bow = (APrimalWeaponBow*)globals::local::WP;
            Bow->ServerStopFire();
            ShootProjectileEx((AShooterWeapon_Projectile*)globals::local::WP);
            Bow->ServerStartReload();
            Bow->ServerSetPullString(1);
            Bow->bIsPullingString = false;
            Bow->bDisablePullingOnCrouch = false;
            Bow->bDisablePullingOnProne = false;
        }
        else if (globals::local::WP->IsA(AShooterWeapon_Projectile::StaticClass()) && globals::local::FrameNum % 20 == 0)
        {
            AShooterWeapon_Projectile* Projectile = (AShooterWeapon_Projectile*)globals::local::WP;

            ShootProjectile((AShooterWeapon_Projectile*)globals::local::WP);

            if (!Projectile->AssociatedPrimalItem->bTekItem || globals::local::WP->IsA(APrimalWeaponGrenade::StaticClass()))
                Projectile->ServerStartReload();
        }
        else if (globals::local::WP->IsA(AWeapC4_C::StaticClass()))
        {
            FHitResult Result = Util::GetTrace();

            if (!Result.Location.IsValid())
                return;

            FVector Location = Result.Location;
            FPlacementData PlacementParams{};
            FBPNetExecParams ExecParams{};

            PlacementParams.AdjustedLocation = Location;

            UObject* Actor = UWorld::Singleton()->GetGlobalObjects().GetObjectPtr(Result.HitObjectHandle.Actor.ObjectSerialNumber);

            if (Actor && Actor->IsA(APrimalCharacter::StaticClass()))
            {
                APrimalCharacter* Char = (APrimalCharacter*)Actor;

                FVector BoneLoc;

                PlacementParams.AttachToPawn = (APawn*)Actor;
            }

            globals::local::PC->ServerRequestPlaceStructure(84, Location, globals::local::CM->GetCameraRotation(), { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
            globals::local::WP->ServerStartReload();
        }
    }
  
    if (settings::aimbot::SpoofTargetPos.ShouldExecute())
    {
        if (IsValid(globals::local::LP->CurrentWeapon) && globals::local::LP->CurrentWeapon->IsA(AShooterWeapon_InstantPenetrating::StaticClass()))
        {
            AShooterWeapon_InstantPenetrating* Weapon = (AShooterWeapon_InstantPenetrating*)globals::local::LP->CurrentWeapon;
            Weapon->bDebugPenetration = true;
            Weapon->MaxPenetrationTraceDistance = FLT_MAX;
            Weapon->PenaltyPerPenetration = 0;

            if (IsValid(globals::aimbot::target))
            {
                float Distance = globals::local::POS.Distance(globals::aimbot::target->K2_GetActorLocation());
                FVector ViewDirection = globals::libs::MathLib->STATIC_Conv_RotatorToVector(globals::local::PC->ControlRotation);
                FVector NewTargetPos = globals::local::POS + (ViewDirection * Distance);
                globals::aimbot::target->RootComponent->K2_SetWorldLocation(NewTargetPos, false, nullptr, false);
                globals::aimbot::target->Mesh->K2_SetWorldLocation(NewTargetPos, false, nullptr, false);
            }
        }
        else if (IsValid(globals::local::LP->CurrentWeapon))
        {
            if (IsValid(globals::aimbot::target))
            {
                FVector ViewDirection = globals::libs::MathLib->STATIC_Conv_RotatorToVector(globals::local::PC->ControlRotation);

                FVector Random;
                FVector NewTargetPos = *spoof_call(Hooks::GetShootingCamLoc, globals::local::WP, &Random) + (ViewDirection * 3000);

                globals::aimbot::target->K2_SetActorLocation(NewTargetPos, false, nullptr, true);
            }
        }
    }

    if (settings::aimbot::RailgunAimbot.ShouldExecute())
    {
        if (globals::local::WP && globals::aimbot::target && globals::local::WP->IsA(AShooterWeapon_InstantPenetrating::StaticClass()))
        {
            globals::local::WP->InstantConfig.WeaponRange = FLT_MAX;

            static double RailGunTime = 0.0;

            RailGunTime += globals::rendering::DeltaTime;

            if (RailGunTime > (1.f - settings::aimbot::RailgunAimbotSpeed.Val))
            {
                AShooterWeapon_InstantPenetrating* Weapon = (AShooterWeapon_InstantPenetrating*)globals::local::WP;

                static void (*FireWeaponInstant)(AShooterWeapon_Instant* _this) = nullptr;
                if (!FireWeaponInstant)
                    FireWeaponInstant = (void(*)(AShooterWeapon_Instant*))signature(Xors("48 8B C4 48 89 58 20 55 56 57 41 54 41 55 41 56 41 57 48 8D A8 28 FD FF FF 48 81 EC A0 03 00 00 0F 29 70 B8 0F 29 78 A8 44 0F 29 40 98 44 0F 29 48 88 44 0F 29 90 78 FF FF FF 44 0F 29 98 68 FF FF FF 44 0F 29 A0 58 FF FF FF 44")).GetPointer();

                if (FireWeaponInstant)
                    spoof_call(FireWeaponInstant, (AShooterWeapon_Instant*)Weapon);

                RailGunTime = 0.0;
            }
        }
    }

    if (settings::misc::Ghost.Enabled && !InGhost)
    {
        InGhost = true;
        globals::local::LP->SetActorEnableCollision(false);
        globals::local::LP->CharacterMovement->MovementMode = EMovementMode::MOVE_Flying;
        globals::local::LP->ClientCheatFly();
        globals::local::LP->SetActorEnableCollision(false);
    }

    if (!settings::misc::Ghost.Enabled && InGhost)
    {
        InGhost = false;
        globals::local::LP->SetActorEnableCollision(true);
        globals::local::LP->ClientCheatWalk();
        globals::local::LP->SetActorEnableCollision(true);
    }

    if (settings::misc::InfiniteWeight.Enabled)
    {
        if (globals::local::AP->IsA(AShooterCharacter::StaticClass()))
        {
            globals::local::AP->MyCharacterStatusComponent->MaxStatusValues[7] = 999999999;
        }
        else
        {
            if (globals::local::AP->MyCharacterStatusComponent->CurrentStatusValues[7] > 0.85 * globals::local::AP->MyCharacterStatusComponent->MaxStatusValues[7])
                globals::local::AP->MyCharacterStatusComponent->CurrentStatusValues[7] = 0.85 * globals::local::AP->MyCharacterStatusComponent->MaxStatusValues[7];
        }
    }

    if (settings::misc::RapidFire.Enabled && globals::local::WP)
    {
        globals::local::WP->WeaponConfig.TimeBetweenShots = 0.45f * settings::misc::RapidFire.Val;

        if (globals::local::WP->LastFireTime == 0)
            globals::local::WP->LastFireTime = globals::local::WP->LastFireTime + globals::local::WP->LastNotifyShotTime - globals::local::WP->WeaponConfig.TimeBetweenShots;
    }

    if (settings::misc::FastUse.Enabled && globals::libs::VictoryCore)
    {
        globals::libs::VictoryCore->STATIC_GetShooterGameUserSettings()->RadialSelectionSpeed = 10;
    }

    if (settings::misc::LongArms.Enabled)
    {
        if (settings::misc::InfiniteArms.Enabled)
        {
            globals::local::LP->AdditionalMaxUseDistance = 10000000000;
        }
        else
        {
            globals::local::LP->AdditionalMaxUseDistance = 1000;
        }
    }

    if (settings::misc::Notes.Enabled)
    {
        static int notexp = 780;
        globals::local::PC->ServerUnlockPerMapExplorerNote(notexp, false, true);
        notexp++;

        //for (int x = 0; x < 2000; x++)
        //    globals::local::PC->ServerUnlockPerMapExplorerNote(x, false, true);

        settings::misc::Notes.Enabled = false;
    }

    if (settings::misc::InventoryToArk.Enabled && Keyboard::GetState(settings::misc::InventoryToArk.KeyBindForVar, 0))
    {
        InventoryToArkCounter++;

        if (InventoryToArkCounter == 2)
        {
            AShooterHUD* ShooterHud = globals::local::PC->GetShooterHud();
            double Distance = 100000000;

            for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
            {
                AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

                if (!Actors)
                    continue;

                if (Actors->IsA(APrimalStructure::StaticClass()))
                {
                    APrimalStructure* SupplyDrop = (APrimalStructure*)Actors;

                    if (SupplyDrop->GetDescriptiveName().ToString() == Xors("Tribute Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Obelisk Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Red Obelisk Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Tek Transmitter") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Green Obelisk Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Blue Obelisk Terminal") || SupplyDrop->IsA(APrimalStructureItemContainer_SupplyCrate::StaticClass()))
                    {
                        double Distance2 = Actors->K2_GetActorLocation().Distance(globals::local::POS);
                        
                        if (Distance2 < Distance)
                        {
                            Supply = (APrimalStructureItemContainer_SupplyCrate*)Actors;

                            Distance = Distance2;
                        }
                    }
                }
            }

            if (Supply && ShooterHud)
            {
                Supply->MyInventoryComponent->MaxInventoryAccessDistance = FLT_MAX;
                Supply->MyInventoryComponent->MaxRemoteInventoryViewingDistance = FLT_MAX;
                Supply->MyInventoryComponent->bReceivingArkInventoryItems = false;
                Supply->MyInventoryComponent->bReceivingInventoryItems = false;
                Supply->MyInventoryComponent->bReceivingEquippedItems = false;
                ShooterHud->ShowInventory(Supply->MyInventoryComponent);
            }

            InventoryToArkCounter = 0;
        }
    }

    if (settings::misc::ForceAccess.Enabled && Keyboard::GetState(settings::misc::ForceAccess.KeyBindForVar, 0))
    {
        AShooterHUD* ShooterHud = globals::local::PC->GetShooterHud();
        AActor* ForceAccessTarget = nullptr;
        int ForceAccessDistance = 999999999;

        for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
        {
            AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

            if (!IsValid(Actors))
                continue;

            if (!IsValid(Actors->RootComponent))
                continue;

            if (Actors->K2_GetActorLocation().Distance(globals::local::POS) > 1000)
                continue;

            if (Actors == globals::local::LP)
                continue;

            FVector2D Loc2D;
            FVector Loc3D = Actors->K2_GetActorLocation();

            if (!Actors::PWTS(Loc3D, Loc2D))
                continue;

            int Distance = Renderer::Distance2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2, Loc2D.X, Loc2D.Y);

            if (Distance > 550)
                continue;

            if (Actors->IsA(APrimalStructureItemContainer::StaticClass()))
            {
                if (Distance < ForceAccessDistance)
                {
                    ForceAccessDistance = Distance;
                    ForceAccessTarget = Actors;
                }
            }

            if (Actors->IsA(AShooterCharacter::StaticClass()))
            {
                if (Distance < ForceAccessDistance)
                {
                    ForceAccessDistance = Distance;
                    ForceAccessTarget = Actors;
                }
            }

            if (Actors->IsA(APrimalDinoCharacter::StaticClass()))
            {
                if (!((APrimalDinoCharacter*)Actors)->BPIsTamed())
                    continue;

                if (Distance < ForceAccessDistance)
                {
                    ForceAccessDistance = Distance;
                    ForceAccessTarget = Actors;
                }
            }
        }

        if (ForceAccessTarget && ShooterHud)
        {
            if (ForceAccessTarget->IsA(APrimalStructureItemContainer::StaticClass()))
            {
                APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)ForceAccessTarget;

                Container->UpdateTribeGroupStructureRank(0);
                Container->UpdateTribeGroupInventoryRank(0);

                globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                if (Container->MyInventoryComponent)
                {
                    Container->MyInventoryComponent->MaxInventoryAccessDistance = FLT_MAX;
                    Container->MyInventoryComponent->MaxRemoteInventoryViewingDistance = FLT_MAX;
                    Container->MyInventoryComponent->bAllowRemoteInventory = true;

                    ShooterHud->ShowInventory(Container->MyInventoryComponent);
                }
            }
            else if (ForceAccessTarget->IsA(APrimalDinoCharacter::StaticClass()))
            {
                APrimalDinoCharacter* PrimalChar = (APrimalDinoCharacter*)ForceAccessTarget;

                globals::local::PC->ServerRequestActorItems(PrimalChar->MyInventoryComponent, true, false);

                if (PrimalChar->MyInventoryComponent)
                {
                    PrimalChar->MyInventoryComponent->MaxInventoryAccessDistance = FLT_MAX;
                    PrimalChar->MyInventoryComponent->MaxRemoteInventoryViewingDistance = FLT_MAX;
                    PrimalChar->MyInventoryComponent->bAllowRemoteInventory = true;
                    PrimalChar->MyInventoryComponent->bRemoteInventoryOnlyAllowSelf = false;
                    PrimalChar->MyInventoryComponent->bForceAllowAllUseInInventory = true;
                    PrimalChar->MyInventoryComponent->bRemoteInventoryAllowRemoveItems = true;
                    PrimalChar->MyInventoryComponent->bRemoteInventoryAllowAddItems = true;
                    PrimalChar->MyInventoryComponent->bBPRemoteInventoryAllowRemoveItems = true;

                    ShooterHud->ShowInventory(PrimalChar->MyInventoryComponent);
                }
            }
            else if (ForceAccessTarget->IsA(AShooterCharacter::StaticClass()))
            {
                AShooterCharacter* PrimalChar = (AShooterCharacter*)ForceAccessTarget;

                globals::local::PC->ServerRequestActorItems(PrimalChar->MyInventoryComponent, true, false);

                if (PrimalChar->MyInventoryComponent)
                {
                    PrimalChar->MyInventoryComponent->MaxInventoryAccessDistance = FLT_MAX;
                    PrimalChar->MyInventoryComponent->MaxRemoteInventoryViewingDistance = FLT_MAX;
                    PrimalChar->MyInventoryComponent->bAllowRemoteInventory = true;
                    PrimalChar->MyInventoryComponent->bRemoteInventoryOnlyAllowSelf = false;
                    PrimalChar->MyInventoryComponent->bForceAllowAllUseInInventory = true;
                    PrimalChar->MyInventoryComponent->bRemoteInventoryAllowRemoveItems = true;
                    PrimalChar->MyInventoryComponent->bRemoteInventoryAllowAddItems = true;
                    PrimalChar->MyInventoryComponent->bBPRemoteInventoryAllowRemoveItems = true;

                    ShooterHud->ShowInventory(PrimalChar->MyInventoryComponent);
                }
            }
        }
    }

    if (settings::miscStructure::Note.Enabled || settings::autoMation::UnlockNotes)
    {
        TArray<AActor*> Actors;

        if (globals::libs::VictoryCore)
        {
            globals::libs::VictoryCore->STATIC_GetSpecialActorList(UWorld::Singleton(), EActorListsBP::AL_EXPLORERNOTECHESTS, &Actors);

            for (int x = 0; x < Actors.Count(); x++)
            {
                AExplorerChest_Base_C* ExplorerNote = (AExplorerChest_Base_C*)Actors[x];

                if (!ExplorerNote)
                    continue;

                if (ExplorerNote->bIsUnlocked)
                    continue;

                FVector2D ExplorerNote2D;

                if (!Actors::PWTS(ExplorerNote->K2_GetActorLocation(), ExplorerNote2D))
                    continue;

                if (settings::miscStructure::Note.DrawName && settings::miscStructure::Note.Enabled)
                    Renderer::DrawString(Xors(L"Note"), ExplorerNote2D, { 0.5, 0.5 }, { 1, 1, 1, 1 }, true, { 0,0,0,1 }, true, true);

                if (settings::miscStructure::Note.Distance && settings::miscStructure::Note.Enabled)
                {
                    std::wstring DistanceString = std::to_wstring((int)(ExplorerNote->K2_GetActorLocation().Distance(globals::local::LP->K2_GetActorLocation()) / 100)) + Xors(L"M");
                    Renderer::DrawString(DistanceString.c_str(), { ExplorerNote2D.X, ExplorerNote2D.Y + 12 }, { 0.5, 0.5 }, { 1, 1, 1, 1 }, true, { 0,0,0,1 }, true, true);
                }

                if (settings::autoMation::UnlockNotes)
                {
                    if (ExplorerNote->K2_GetActorLocation().Distance(globals::local::POS) < 20000)
                        globals::local::PC->ServerUnlockPerMapExplorerNote(ExplorerNote->ExplorerNoteIndex, false, true);
                }
            }
        }
    }

    if (settings::resourceStructure::EnableResource.Enabled)
    {
        if (globals::libs::VictoryCore && globals::local::FrameNum % 60 == 0)
        {
            globals::libs::VictoryCore->STATIC_ServerSearchFoliage(UWorld::Singleton(), globals::local::LP->K2_GetActorLocation(), settings::resourceStructure::Distance * 10, &Resources, true, true, true, true, true);
        }

        for (int x = 0; x < Resources.Count(); x++)
        {
            FOverlappedFoliageElement Actor = Resources[x];

            if (!Actor.HarvestActor)
                continue;

            if (!Actor.HarvestingComponent)
                continue;

            FVector2D ExplorerNote2D;

            static UClass* Metal = nullptr;
            if (!Metal)
                Metal = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/MetalHarvestComponent.MetalHarvestComponent_C"));

            static UClass* RichMetal = nullptr;
            if (!RichMetal)
                RichMetal = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C"));

            static UClass* Crystal = nullptr;
            if (!Crystal)
                Crystal = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/CrystalHarvestComponent.CrystalHarvestComponent_C"));

            static UClass* UnderwaterCrystal = nullptr;
            if (!UnderwaterCrystal)
                UnderwaterCrystal = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/CrystalHarvestComponent_UnderwaterCave.CrystalHarvestComponent_UnderwaterCave_C"));

            static UClass* Obsidian = nullptr;
            if (!Obsidian)
                Obsidian = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/MountainObsidianHarvestComponent.MountainObsidianHarvestComponent_C"));

            static UClass* SilicaPearls = nullptr;
            if (!SilicaPearls)
                SilicaPearls = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/SiliconHarvestComponent.SiliconHarvestComponent_C"));

            static UClass* LandOil = nullptr;
            if (!LandOil)
                LandOil = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/OilHarvestComponent.OilHarvestComponent_C"));

            static UClass* UnderwaterOil = nullptr;
            if (!UnderwaterOil)
                UnderwaterOil = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/HarvestComponents/OilHarvestComponentUnderwater.OilHarvestComponentUnderwater_C"));

            if ((Actor.HarvestingComponent->IsA(Metal) || Actor.HarvestingComponent->IsA(RichMetal)) && settings::resourceStructure::Metal)
            {
                if (!Actors::PWTS(Actor.HarvestLocation, ExplorerNote2D))
                    continue;

                Renderer::DrawString(Xors(L"Metal"), ExplorerNote2D, { 0.5, 0.5 }, FLinearColor::FromRGB(231, 230, 232), true, { 0,0,0,1 }, true, true);
            }

            if (Actor.HarvestingComponent->IsA(Crystal) && settings::resourceStructure::Crystal)
            {
                if (!Actors::PWTS(Actor.HarvestLocation, ExplorerNote2D))
                    continue;

                Renderer::DrawString(Xors(L"Crystal"), ExplorerNote2D, { 0.5, 0.5 }, FLinearColor::FromRGB(231, 230, 232), true, { 0,0,0,1 }, true, true);
            }

            if (Actor.HarvestingComponent->IsA(Obsidian) && settings::resourceStructure::Obsidian)
            {
                if (!Actors::PWTS(Actor.HarvestLocation, ExplorerNote2D))
                    continue;

                Renderer::DrawString(Xors(L"Obsidian"), ExplorerNote2D, { 0.5, 0.5 }, FLinearColor::FromRGB(55, 31, 86), true, { 0,0,0,1 }, true, true);
            }

            if (Actor.HarvestingComponent->IsA(SilicaPearls) && settings::resourceStructure::Pearls)
            {
                if (!Actors::PWTS(Actor.HarvestLocation, ExplorerNote2D))
                    continue;

                Renderer::DrawString(Xors(L"Pearls"), ExplorerNote2D, { 0.5, 0.5 }, FLinearColor::FromRGB(198, 253, 250), true, { 0,0,0,1 }, true, true);
            }

            if ((Actor.HarvestingComponent->IsA(LandOil) || (Actor.HarvestingComponent->IsA(UnderwaterOil))) && settings::resourceStructure::Oil)
            {
                if (!Actors::PWTS(Actor.HarvestLocation, ExplorerNote2D))
                    continue;

                Renderer::DrawString(Xors(L"Oil"), ExplorerNote2D, { 0.5, 0.5 }, FLinearColor::FromRGB(255, 20, 147), true, { 0,0,0,1 }, true, true);
            }
        }
    }

    if (settings::misc::ServerCrash.Enabled && globals::local::FrameNum % 5 == 0)
    {
        int CurrentSlots = 0;

        for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
        {
            auto Item = globals::local::PINV->InventoryItems[x];

            if (Item->bIsEngram || Item->bIsItemSkin)
                continue;

            CurrentSlots++;
        }

        for (int num = 0; num < globals::local::PINV->InventoryItems.Count(); num++)
        {
            auto Item = globals::local::PINV->InventoryItems[num];

            if (Item->bIsEngram || Item->bIsItemSkin)
                continue;

            if (Item->ItemQuantity == 1)
            {
                globals::local::PC->ServerDropFromRemoteInventory(globals::local::PINV, Item->ItemID);
            }
            else if (CurrentSlots < 290)
            {
                globals::local::PINV->ServerSplitItemStack(Item->ItemID, 1);
                CurrentSlots++;
            }
        }
    }

    if (settings::misc::BetterPassenger.Enabled)
    {
        globals::local::LP->ServerTargetCarriedYaw = 0;
        globals::local::LP->CurrentPassengerSeatDefinition.bLimitCameraYaw = false;
        globals::local::LP->CurrentPassengerSeatDefinition.bAllowAccessDinoInventory = true;
        globals::local::LP->CurrentPassengerSeatDefinition.bWeaponIgnoreDino = true;
        globals::local::LP->CurrentPassengerSeatDefinition.bAllowOrbitCam = true;
        globals::local::LP->CurrentPassengerSeatDefinition.bAllowTPV = true;
        globals::local::LP->CurrentPassengerSeatDefinition.bHideCharacterLowerBody = true;
        globals::local::LP->CurrentPassengerSeatDefinition.bHideDinoForLocalPassenger = true;
        globals::local::LP->CurrentPassengerSeatDefinition.AimOffsetPitchBias = 0;
        globals::local::LP->CurrentPassengerSeatDefinition.AimOffsetYawBias = 0;
        globals::local::LP->CurrentPassengerSeatDefinition.AimOffsetPitchFactor = 0;
        globals::local::LP->CurrentPassengerSeatDefinition.AimOffsetYawFactor = 0;
        globals::local::LP->CurrentPassengerSeatDefinition.bUseCharacterPitch = true;
        globals::local::LP->CurrentPassengerSeatDefinition.FPVCameraLocationOffset = { 0.f,0.f,0.f };
    }

    if (settings::misc::Suicide.Enabled && Keyboard::GetState(settings::misc::Suicide.keyBindForToggle, 0))
        globals::local::LP->BPSuicide();

    if (settings::playerMovement::BetterAirstuck.Enabled && Keyboard::GetState(settings::playerMovement::BetterAirstuck.keyBindForToggle, 0))
        globals::local::PC->ClientRestart(globals::local::PC->AcknowledgedPawn);

    if (globals::local::FrameNum % 100 == 0)
    {
        InventoryToArkCounter = 0;
        BattleModeCounter = 0;
    }

    if (settings::misc::SelfUpload.Enabled && Keyboard::GetState(settings::misc::SelfUpload.KeyBindForVar, 0))
    {
        APrimalStructureItemContainer_SupplyCrate* Drop = nullptr;

        double Distance = 100000000;

        for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
        {
            AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

            if (!Actors)
                continue;

            if (Actors->IsA(APrimalStructure::StaticClass()))
            {
                APrimalStructure* SupplyDrop = (APrimalStructure*)Actors;

                if (SupplyDrop->GetDescriptiveName().ToString() == Xors("Tribute Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Obelisk Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Red Obelisk Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Tek Transmitter") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Green Obelisk Terminal") || SupplyDrop->GetDescriptiveName().ToString() == Xors("Blue Obelisk Terminal") || SupplyDrop->IsA(APrimalStructureItemContainer_SupplyCrate::StaticClass()))
                {
                    double Distance2 = Actors->K2_GetActorLocation().Distance(globals::local::POS);

                    if (Distance2 < Distance)
                    {
                        Drop = (APrimalStructureItemContainer_SupplyCrate*)Actors;

                        Distance = Distance2;
                    }
                }
            }
        }

        if (Drop && Distance < 10000)
        {
            globals::local::PC->ServerUploadCharaterDataToArk(Drop->MyInventoryComponent);
            return;
        }
        else if (Drop && Distance > 10000)
        {
            FailedCheck = true;
            ExternDrop = Drop;
        }
    }

    if (FailedCheck && ExternDrop)
    {
        static double SupplyTimer = 0.0;

        SupplyTimer += globals::rendering::DeltaTime;

        if (SupplyTimer < 5.0)
        {
            std::wstring Distance = Xors(L"Too Far Away. Closest Drop : ");
            Distance += std::to_wstring((int)(ExternDrop->K2_GetActorLocation().Distance(globals::local::LP->K2_GetActorLocation()) / 100)).c_str();
            Distance += Xors(L"M");
            Renderer::DrawString(Distance.c_str(), { Renderer::GetCanvasSize().X / 2, 200 }, { 0.7, 0.7 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);

            FVector2D DropLoc2D;

            if (!Actors::PWTS(ExternDrop->K2_GetActorLocation(), DropLoc2D))
                return;

            Renderer::DrawLine2D({ Renderer::GetCanvasSize().X / 2,Renderer::GetCanvasSize().Y / 2 }, DropLoc2D, 1.0f, { 1.0f, 1.0f, 1.0f, 1.0f });
        }
        else
        {
            FailedCheck = false;
            ExternDrop = nullptr;
            SupplyTimer = 0.0;
        }
    }

    if (settings::misc::PyromaneJump.Enabled && Keyboard::GetState(settings::misc::PyromaneJump.KeyBindForVar, 0))
    {
        if (globals::local::AP->IsA(AFireLion_Character_BP_C::StaticClass()))
        {
            AFireLion_Character_BP_C* FireLion = (AFireLion_Character_BP_C*)globals::local::AP;

            FireLion->ServerRequestAttack(1);
        }
    }

    if (settings::autoMation::AutoSheep.Enabled && globals::local::FrameNum % 5 == 0)
    {
        static bool DropPelt = false;

        DropPelt = !DropPelt;

        if (DropPelt)
            globals::local::PC->ServerRequestDropAllItems(Xors(L""), Xors(L"Pelt"), false, true);
        else
            globals::local::PC->ServerRequestDropAllItems(Xors(L""), Xors(L"Raw Mutton"), false, true);
    }

    if (settings::miscStructure::BossTeleportEsp.Enabled)
    {
        static double BossFightTime = 0.0;

        if (CachedBossFightLocation.IsValid())
        {
            BossFightTime += globals::rendering::DeltaTime;

            if (BossFightTime >= 150)
            {
                CachedBossFightLocation = { 0,0,0 };
                BossFightTime = 0.0;
            }

            std::wstring BossString;

            BossString += std::to_wstring((int)CachedBossFightLocation.Distance(globals::local::POS) / 100) + Xors(L"m | ");
            BossString += std::to_wstring((int)BossFightTime) + Xors(L"s");

            FVector2D TeleportScreenLocation;

            if (!Actors::PWTS(CachedBossFightLocation, TeleportScreenLocation))
                return;

            Renderer::DrawString(Xors(L"Boss"), { TeleportScreenLocation.X , TeleportScreenLocation.Y }, { 0.5, 0.5 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
            Renderer::DrawString(BossString, { TeleportScreenLocation.X , TeleportScreenLocation.Y + 12 }, { 0.5, 0.5 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
        }
    }

    if (settings::autoMation::DupeMethod.Enabled)
    {
        if (globals::local::WP && globals::local::WP->IsA(AWeapTripWireC4_C::StaticClass()))
        {
            static double TimeDifference = 0.0;

            TimeDifference += globals::rendering::DeltaTime;

            if (TimeDifference > (1.0 - settings::autoMation::DupeMethodSpeed.Val))
            {
                FHitResult Result = Util::GetTrace();

                if (!Result.Location.IsValid())
                    return;

                FVector Location = Result.Location;
                FPlacementData PlacementParams{};
                FBPNetExecParams ExecParams{};

                PlacementParams.AdjustedLocation = Location;
                PlacementParams.bDisableEncroachmentCheck = true;

                AActor* Actr = nullptr;

                for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
                {
                    AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

                    if (!Actors)
                        continue;

                    if (Actors == globals::local::LP)
                        continue;

                    if (Actors->K2_GetActorLocation().Distance(globals::local::LP->K2_GetActorLocation()) > 500)
                        continue;

                    if (Actors->IsA(APrimalStructureExplosive::StaticClass()))
                        Actr = Actors;
                }

                if (Actr)
                    PlacementParams.ReplacesStructure = (APrimalStructure*)Actr;

                globals::local::PC->ServerMultiUse(Actr, 201);
                globals::local::PC->ServerRequestPlaceStructure(85, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                TimeDifference = 0.0;
            }
        }
        else
        {
            AActor* Actr = nullptr;

            for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
            {
                AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

                if (!Actors)
                    continue;

                if (Actors == globals::local::LP)
                    continue;

                if (Actors->K2_GetActorLocation().Distance(globals::local::LP->K2_GetActorLocation()) > 500)
                    continue;

                if (Actors->IsA(APrimalStructureExplosive::StaticClass()))
                    Actr = Actors;
            }

            if (Actr)
                globals::local::PC->ServerMultiUse(Actr, 201);
        }
    }

    if (globals::local::PC->GetShooterHud()->CurrentOpenedInventory)
        globals::local::PC->GetShooterHud()->CurrentOpenedInventory->SteamInventoryStatusUITemplate = nullptr;

    static bool xpglitch = false;

    if (Keyboard::GetState(VK_F1, 0))
    {
        xpglitch = !xpglitch;
    }

    if (xpglitch)
    {
        UPrimalInventoryComponent* Inventory = globals::local::LP->MyInventoryComponent;
        UPrimalCharacterStatusComponent* Comp = globals::local::LP->MyCharacterStatusComponent;

        static double CurrentTime = 0.0;
        static double PreviousXP = 0.0;
        static double XPDelta = 0.0;

        Renderer::DrawString(Xors(L"Currently Crafting"), { Renderer::GetCanvasSize().X / 2, 200 }, { 0.7, 0.7 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
        Renderer::DrawString(std::to_wstring((int)XPDelta).c_str(), {Renderer::GetCanvasSize().X / 2, 250}, {0.7, 0.7}, {1, 0, 0, 1}, true, {0,0,0,1}, true, true);

        CurrentTime += globals::rendering::DeltaTime;

        if (CurrentTime >= 0.85 )
        {
            XPDelta = Comp->ReplicatedExperiencePoints - PreviousXP;
            PreviousXP = Comp->ReplicatedExperiencePoints;

            CurrentTime = 0.0;

            TArray< FItemNetInfo > ItemInfo;

            globals::local::PC->ServerLoadArkInventoryItems(ItemInfo, true);

            int craftctr = 0;

            for (int x = 0; x < Inventory->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = Inventory->InventoryItems[x];

                if (!Item)
                    continue;

                if (!Item->bIsEngram)
                    continue;

                if (Item->DescriptiveNameBase.ToString() == Xors("Drawing Paper"))
                {
                    if (Item->NextCraftCompletionTime == 0 && craftctr < 3)
                    {
                        for (int x = 0; x < 1000; x++)
                            globals::local::PC->ServerCraftItem(Inventory, Item->ItemID);

                        craftctr++;
                    }
                }
            }
        }
    }

    if (settings::misc::TribeLogToChat.Enabled)
    {
        if (globals::local::FrameNum % 60 == 0)
            globals::local::PC->ServerRequestTribeLog();

        static std::wstring LastLoggedString = Xors(L"");

        if (globals::local::PC->CurrentTribeLog.Count() > 0)
        {
            if (LastLoggedString != globals::local::PC->CurrentTribeLog[globals::local::PC->CurrentTribeLog.Count() - 1].ToWString())
            {
                LastLoggedString = globals::local::PC->CurrentTribeLog[globals::local::PC->CurrentTribeLog.Count() - 1].ToWString();

                globals::local::PC->ServerSendChatMessage(LastLoggedString.c_str(), EChatSendMode::GlobalTribeChat, 1);
            }
        }
    }

    if (settings::misc::BetterPopcorn.Enabled)
    {
        static AActor* Target = nullptr;
        static AActor* Reciever = nullptr;

        if (Keyboard::GetState(settings::misc::PopcornTarget.KeyBindForVar, 0))
        {
            AShooterHUD* ShooterHud = globals::local::PC->GetShooterHud();
            AActor* ForceAccessTarget = nullptr;
            int ForceAccessDistance = 999999999;

            for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
            {
                auto Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

                if (!Actors)
                    continue;

                if (Actors->K2_GetActorLocation().Distance(globals::local::POS) > 1000)
                    continue;

                if (Actors == globals::local::LP)
                    continue;

                FVector2D Loc2D;
                FVector Loc3D = Actors->K2_GetActorLocation();

                if (!Actors::PWTS(Loc3D, Loc2D))
                    continue;

                int Distance = Renderer::Distance2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2, Loc2D.X, Loc2D.Y);

                if (Distance > 550)
                    continue;

                if (Actors->IsA(APrimalStructureItemContainer::StaticClass()))
                {
                    if (Distance < ForceAccessDistance)
                    {
                        ForceAccessDistance = Distance;
                        ForceAccessTarget = Actors;
                    }
                }

                if (Actors->IsA(AShooterCharacter::StaticClass()))
                {
                    if (Distance < ForceAccessDistance)
                    {
                        ForceAccessDistance = Distance;
                        ForceAccessTarget = Actors;
                    }
                }

                if (Actors->IsA(APrimalDinoCharacter::StaticClass()))
                {
                    if (!((APrimalDinoCharacter*)Actors)->BPIsTamed())
                        continue;

                    if (Distance < ForceAccessDistance)
                    {
                        ForceAccessDistance = Distance;
                        ForceAccessTarget = Actors;
                    }
                }
            }

            if (ForceAccessTarget && ShooterHud)
            {
                if (ForceAccessTarget->IsA(APrimalStructureItemContainer::StaticClass()))
                {
                    APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)ForceAccessTarget;

                    if (Container->MyInventoryComponent)
                    {
                        globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                        for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                        {
                            auto Item = Container->MyInventoryComponent->InventoryItems[x];

                            if (!Item)
                                continue;

                            if (Item->bIsEngram)
                                continue;

                            globals::local::PC->ServerDropFromRemoteInventory(Container->MyInventoryComponent, Item->ItemID);
                        }
                    }
                }
                else if (ForceAccessTarget->IsA(APrimalCharacter::StaticClass()))
                {
                    APrimalCharacter* Character = (APrimalCharacter*)ForceAccessTarget;

                    if (Character->MyInventoryComponent)
                    {
                        globals::local::PC->ServerRequestActorItems(Character->MyInventoryComponent, true, false);

                        for (int x = 0; x < Character->MyInventoryComponent->InventoryItems.Count(); x++)
                        {
                            auto Item = Character->MyInventoryComponent->InventoryItems[x];

                            if (!Item)
                                continue;

                            if (Item->bIsEngram)
                                continue;

                            globals::local::PC->ServerDropFromRemoteInventory(Character->MyInventoryComponent, Item->ItemID);
                        }
                    }
                }
            }
        }

        if (Keyboard::GetState(settings::misc::PopcornSelf.KeyBindForVar, 0) && globals::local::PINV)
        {
            for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                if (!Item)
                    continue;

                if (Item->bIsEngram || !Item->CanDrop())
                    continue;

                globals::local::PC->ServerDropFromRemoteInventory(globals::local::PINV, Item->ItemID);
            }
        }

        if (Keyboard::GetState(settings::misc::PopcornSelf.KeyBindForVar, 0) && globals::local::DINV)
        {
            for (int x = 0; x < globals::local::DINV->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = globals::local::DINV->InventoryItems[x];

                if (!Item)
                    continue;

                if (Item->bIsEngram || !Item->CanDrop())
                    continue;

                globals::local::PC->ServerDropFromRemoteInventory(globals::local::DINV, Item->ItemID);
            }
        }
    }
}

std::unique_ptr<LocalModule> LocalModule::CreateModule()
{
    return std::make_unique<LocalModule>();
}
