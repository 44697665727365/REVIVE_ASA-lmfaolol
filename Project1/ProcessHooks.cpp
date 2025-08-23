#include "pch.h"
#include "HookManager.h"
#include "AimbotModule.h"
#include "LocalModule.h"
#include "UserModule.h"

void Hooks::ProcessEvent_f(UObject* object, UFunction* Function, void* Params)
{
    static UFunction* DidTeleport = nullptr;
    if (!DidTeleport)
        DidTeleport = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.PrimalCharacter:DidTeleport"));

    static UFunction* PlayHitEffectPoint = nullptr;
    if (!PlayHitEffectPoint)
        PlayHitEffectPoint = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.PrimalCharacter:PlayHitEffectPoint"));

    if (Function == DidTeleport && settings::miscStructure::Teleport.Enabled && object && Actors::ValidateWorld())
    {
        APrimalCharacter_DidTeleport_Params* Paramz = (APrimalCharacter_DidTeleport_Params*)Params;

        if (object && ((APrimalCharacter*)object)->TargetingTeam != globals::local::LP->TargetingTeam)
        {
            std::wstring Name = ((AShooterCharacter*)object)->DescriptiveName.wc_str();
            Name += Xors(L" : ");
            Name += ((AShooterCharacter*)object)->TribeName.wc_str();
            TeleportParams.push_back(std::pair(std::pair(((APrimalCharacter*)object)->K2_GetActorLocation(), Paramz->NewLoc), std::pair(globals::rendering::LastFrame, Name)));

            double DistanceStart = globals::local::POS.DistanceMeter(((APrimalCharacter*)object)->K2_GetActorLocation());
            double DistanceEnd = globals::local::POS.DistanceMeter(Paramz->NewLoc);
            FTeamPingData TeamPingData;
            TeamPingData.ByPlayerID = globals::local::LP->UniqueNetIdTypeHash;
            TeamPingData.CreationTime = UWorld::Singleton()->TimeSeconds;
            TeamPingData.PingID = 0;
            TeamPingData.TargetingTeam = globals::local::LP->TargetingTeam;
            TeamPingData.PlayerName = Xors(L"Teleport");
            TeamPingData.PingType = ETeamPingType::Rallypoint;
            TeamPingData.ToActor = nullptr;

            if (DistanceStart < DistanceEnd)
                TeamPingData.Location = ((APrimalCharacter*)object)->K2_GetActorLocation();
            else
                TeamPingData.Location = Paramz->NewLoc;

            globals::local::PC->Client_UpdateRallyPointData(false,TeamPingData);
        }
    
    }
    else if (Function == PlayHitEffectPoint && settings::user::HitMarker3D.Enabled && object && object->IsA(AShooterCharacter::StaticClass()))
    {
        APrimalCharacter_PlayHitEffectPoint_Params* Parms = (APrimalCharacter_PlayHitEffectPoint_Params*)Params;
        AShooterCharacter* _this = (AShooterCharacter*)object;
        
        if (IsValid(_this) && IsValid(_this->Mesh) && IsValid(_this->RootComponent) && IsValid(_this->Mesh) && (Parms->PawnInstigator == globals::local::LP || Parms->DamageCauser == globals::local::LP) && settings::user::HitMarker3D.Enabled)
            HitMarkers.push_back(HitMarker3D{ .HitTime = timeNow(),.Location = _this->Mesh->GetBoneLocation(AimbotModule::GetDecidedBone()) });

    }
 
	spoof_call(Hooks::ProcessEvent.GetOriginal(), object, Function, Params);
}

void Hooks::ProcessRemoteFunction_f(UNetDriver* _this, AActor* Actor, UFunction* Function, void* Parameters, void* OutParms, void* Stack, UObject* SubObject)
{
    static UFunction* ServerNotifyShot = nullptr;
    if (!ServerNotifyShot)
        ServerNotifyShot = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterWeapon_Instant:ServerNotifyShot"));

    static UFunction* ServerRequestPlaceStructure = nullptr;
    if (!ServerRequestPlaceStructure)
        ServerRequestPlaceStructure = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterPlayerController:ServerRequestPlaceStructure"));

    static UFunction* ServerMultiUse = nullptr;
    if (!ServerMultiUse)
        ServerMultiUse = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterPlayerController:ServerMultiUse"));

    static UFunction* ServerRequestActorItems = nullptr;
    if (!ServerRequestActorItems)
        ServerRequestActorItems = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterPlayerController:ServerRequestActorItems"));

    static UFunction* ServerActorViewRemoteInventory = nullptr;
    if (!ServerActorViewRemoteInventory)
        ServerActorViewRemoteInventory = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterPlayerController:ServerActorViewRemoteInventory"));

    static UFunction* ServerMovePacked = nullptr;
    if (!ServerMovePacked)
        ServerMovePacked = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/Engine.Character:ServerMovePacked"));

    static UFunction* AddHeat = nullptr;
    if (!AddHeat)
        AddHeat = UObject::FindObjectSingle<UFunction*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/WeapTekRifle.WeapTekRifle_C:AddHeat"));

    static UFunction* RailgunAddHeat = nullptr;
    if (!RailgunAddHeat)
        RailgunAddHeat = UObject::FindObjectSingle<UFunction*>(Xors(L"/Game/Aberration/WeaponTekSniper/WeapTekSniper.WeapTekSniper_C:AddHeat"));

    static UFunction* ServerNotifyShotOrigin = nullptr;
    if (!ServerNotifyShotOrigin)
        ServerNotifyShotOrigin = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterWeapon_Instant:ServerNotifyShotOrigin"));

    static UFunction* Server_SetFireDashDirection = nullptr;
    if (!Server_SetFireDashDirection)
        Server_SetFireDashDirection = UObject::FindObjectSingle<UFunction*>(Xors(L"/Game/ASA/Dinos/FireLion/FireLion_Character_BP.FireLion_Character_BP_C:Server_SetFireDashDirection"));

    static UFunction* ServerTickShootFX = nullptr;
    if (!ServerTickShootFX)
        ServerTickShootFX = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterWeapon_FlameThrower:ServerTickShootFX"));

    static UFunction* ServerBeginShootFX = nullptr;
    if (!ServerBeginShootFX)
        ServerBeginShootFX = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.ShooterWeapon_FlameThrower:ServerBeginShootFX"));

    if (!Actors::ValidateWorld())
		return spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);

    if (Function == ServerNotifyShot)
    {
        AShooterWeapon_Instant_ServerNotifyShot_Params* shot = reinterpret_cast<AShooterWeapon_Instant_ServerNotifyShot_Params*>(Parameters);

        if (IsValid(globals::aimbot::target) && globals::aimbot::target && globals::aimbot::target->Mesh)
        {
            APrimalCharacter* PrimalActor = reinterpret_cast<APrimalCharacter*>(globals::aimbot::target);
            FVector EnemyLocation = PrimalActor->Mesh->GetSocketLocation(PrimalActor->Mesh->GetBoneName(AimbotModule::GetDecidedBone()));
            FVector OrigLocation = EnemyLocation;

			if (EnemyLocation.X == 0 && EnemyLocation.Y == 0 && EnemyLocation.Z == 0)
			{
				globals::aimbot::target = nullptr;
				goto exit;
			}

			if (globals::aimbot::target->bIsDead)
			{
				globals::aimbot::target = nullptr;
				goto exit;
			}

            if (settings::aimbot::EnablePrediction.Enabled)
                EnemyLocation = AimbotModule::Prediction(EnemyLocation, 1);

            for (int i = 0; i < shot->Impacts.Count(); i++)
            {
                if ((settings::aimbot::Aimbot.Enabled && settings::aimbot::ServerSilent.Enabled) || (settings::aimbot::Aimbot.Enabled && Keyboard::GetState(settings::aimbot::Aimbot.KeyBindForVar, 1)))
                {
                    AShooterGameState* ShooterGameState = reinterpret_cast<AShooterGameState*>(UWorld::Singleton()->GameState);

                    shot->Impacts[i].TraceEnd = (FVector_NetQuantize)EnemyLocation;
                    shot->Impacts[i].ImpactPoint = (FVector_NetQuantize)EnemyLocation;
                    shot->Impacts[i].Normal = (FVector_NetQuantizeNormal)EnemyLocation;
                    shot->Impacts[i].ImpactNormal = (FVector_NetQuantizeNormal)EnemyLocation;
                    shot->Impacts[i].Location = (FVector_NetQuantize)EnemyLocation;
                    shot->Impacts[i].HitObjectHandle.Actor.ObjectIndex = PrimalActor->InternalIndex;
                    shot->Impacts[i].HitObjectHandle.Actor.ObjectSerialNumber = UWorld::Singleton()->GetGlobalObjects().GetObjectPtr2(PrimalActor->InternalIndex)->SerialNumber;
                    shot->Impacts[i].Component.ObjectIndex = PrimalActor->Mesh->InternalIndex;
                    shot->Impacts[i].Component.ObjectSerialNumber = UWorld::Singleton()->GetGlobalObjects().GetObjectPtr2(PrimalActor->Mesh->InternalIndex)->SerialNumber;
                    shot->Impacts[i].Distance = shot->Impacts[i].TraceEnd.Distance(shot->Impacts[i].TraceStart);

                    memcpy(&shot->Impacts[i].Time, &ShooterGameState->NetworkTime, 4);
                    memcpy(&shot->Impacts[i].PenetrationDepth, ((uint8_t*)&ShooterGameState->NetworkTime) + 4, 4);

                    if (settings::aimbot::SpoofHeadshots.Enabled && globals::aimbot::target->IsA(AShooterCharacter::StaticClass()))
                        shot->Impacts[i].BoneName = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"cnt_Head_jnt_skl"));
                    else
                        shot->Impacts[i].BoneName = globals::libs::StringLib->STATIC_Conv_StringToName(settings::aimbot::CurrentBoneName.c_str());

                    if (globals::aimbot::target->IsA(APrimalDinoCharacter::StaticClass()))
                        shot->Impacts[i].BoneName = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"c_Head"));
                }
            }

            for (int x = 0; x < shot->ShootDirs.Count(); x++)
            {
                if ((settings::aimbot::Aimbot.Enabled && settings::aimbot::ServerSilent.Enabled) || (settings::aimbot::Aimbot.Enabled && Keyboard::GetState(settings::aimbot::Aimbot.KeyBindForVar, 1)))
                {
                    FVector random, ShootDir;

                    ShootDir = (OrigLocation - shot->Impacts[x].TraceStart).Normalize();

                    shot->ShootDirs[x] = (FVector_NetQuantizeNormal)ShootDir;
                }
            }
        }

    exit:

        if (globals::local::LP && settings::aimbot::Tracers.Enabled)
        {
            for (int i = 0; i < shot->Impacts.Count(); i++)
            {
                FVector StartPoint = globals::local::WP->GetMuzzleLocation();
                FVector EndPoint = shot->Impacts[i].Location;

                if (shot->Impacts[i].Location.X == 0 && shot->Impacts[i].Location.Y == 0 && shot->Impacts[i].Location.Z == 0)
                    EndPoint = shot->Impacts[i].TraceEnd;

                DrawShots.push_back(std::pair(std::pair(StartPoint, EndPoint), timeNow()));
            }
        }

        spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);

        static UClass* ShotGun = nullptr;
        if (!ShotGun)
            ShotGun = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/WeapMachinedShotgun.WeapMachinedShotgun_C"));

        if (settings::misc::ShotGunReload.Enabled && globals::local::WP && globals::local::WP->IsA(ShotGun))
        {
            globals::local::WP->ReloadAnim.Pawn1P = nullptr;
            globals::local::WP->ReloadAnim.Pawn3P = nullptr;

            globals::local::WP->PartialReloadAnim.Pawn1P = nullptr;
            globals::local::WP->PartialReloadAnim.Pawn3P = nullptr;

            globals::local::WP->FireCameraShake = nullptr;
            globals::local::WP->ReloadCameraShake = nullptr;
            globals::local::WP->MeleeCameraShake = nullptr;

            globals::local::WP->ServerStartReload();
        }
    }
    else if (Function == ServerNotifyShotOrigin)
    {
        AShooterWeapon_Instant_ServerNotifyShotOrigin_Params* shot = reinterpret_cast<AShooterWeapon_Instant_ServerNotifyShotOrigin_Params*>(Parameters);

        //nlog("%i", shot->Impacts.Count());

        //if (shot->Impacts.Count() != 0)
        //{
        //    for (int x = 0; x < shot->Impacts.Count() - 1; x++)
        //    {
        //        shot->Impacts[x] = shot->Impacts[shot->Impacts.Count()];
        //    }
        //}

        //for (int x = 0; x < shot->ShootDirs.Count(); x++)
        //{
        //    if ((settings::aimbot::Aimbot.Enabled && settings::aimbot::ServerSilent.Enabled) || (settings::aimbot::Aimbot.Enabled && Keyboard::GetState(settings::aimbot::Aimbot.KeyBindForVar, 1)) || settings::aimbot::RailgunAimbot.Enabled)
        //        shot->ShootDirs[x] = (FVector_NetQuantizeNormal)(shot->Impacts[x].TraceEnd - shot->Impacts[x].TraceStart).Normalize();
        //}

        spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == AddHeat)
    {
        AddHeat = Function;

        if (settings::misc::NoTekRifleOverheat.Enabled)
            return;

        spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == RailgunAddHeat)
    {
        static UClass* WeapTekSniper = nullptr;
        if (!WeapTekSniper)
            WeapTekSniper = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/Aberration/WeaponTekSniper/PrimalItem_TekSniper.PrimalItem_TekSniper_C"));

        if ((settings::misc::NoRailgunOverheat.Enabled || settings::aimbot::RailgunAimbot.Enabled) && globals::local::PINV && globals::local::PC)
        {
            for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                if (!Item || Item->bIsEngram)
                    continue;

                if (Item->IsA(WeapTekSniper))
                {
                    globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);
                    globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);
                }
            }

            return;
        }
        
        spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == ServerRequestPlaceStructure)
    {
        AShooterPlayerController_ServerRequestPlaceStructure_Params* Structure = reinterpret_cast<AShooterPlayerController_ServerRequestPlaceStructure_Params*>(Parameters);
      
        if (settings::misc::InfiniteC4.Enabled && Structure->StructureIndex == 84)
        {
            for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
            {
                AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

                if (!Actors)
                    continue;

                if (Actors == globals::local::LP)
                    continue;

                if (Actors->K2_GetActorLocation().Distance(globals::local::POS) > 750)
                    continue;

                if (Actors->IsA(APrimalCharacter::StaticClass()))
                {
                    APrimalCharacter* Char = (APrimalCharacter*)Actors;
                    FVector BoneLoc;
                    Structure->PlacementData.AttachToBone = Char->Mesh->FindClosestBone_K2(Structure->PlacementData.AdjustedLocation, &BoneLoc, false, false);
                    Structure->BuildLocation = BoneLoc;
                    Structure->PlacementData.AttachToPawn = Char;
                    Structure->PlacementData.bSnapped = false;
                    Structure->PlayerViewRotation = { 90, 90, 0 };

                    if (Char->IsA(APrimalDinoCharacter::StaticClass()))
                        Structure->PlacementData.DinoCharacter = (APrimalDinoCharacter*)Char;
                }
            }
        }

        if (settings::misc::SpoofFoundation.Enabled && Structure->StructureIndex == 84) 
        {
            int selected = 445;

            if (globals::local::PINV && globals::local::PINV->InventoryItems._data)
            {
                for (int i = 0; i < globals::local::PINV->InventoryItems.Count();i++)
                {
                    if (globals::local::PINV->InventoryItems[i] == nullptr || globals::local::PINV->InventoryItems[i]->bIsEngram)
                        continue;
                    
					if (globals::local::PINV->InventoryItems[i]->DescriptiveNameBase.ToString() == Xors("Metal Foundation"))
                    {
						selected = 445;
						break;
					}
                    else if (globals::local::PINV->InventoryItems[i]->DescriptiveNameBase.ToString() == Xors("Tek Foundation"))
                    {
						selected = 447;
						break;
					}
                    else if (globals::local::PINV->InventoryItems[i]->DescriptiveNameBase.ToString() == Xors("Wood Foundation"))
                    {
                        selected = 449;
                        break;
                    }
                    else if (globals::local::PINV->InventoryItems[i]->DescriptiveNameBase.ToString() == Xors("Thatch Foundation"))
                    {
                        selected = 448;
                        break;
                    }
                    else if (globals::local::PINV->InventoryItems[i]->DescriptiveNameBase.ToString() == Xors("Stone Foundation"))
                    {
                        selected = 446;
                        break;
                    }
                }
            }

            Structure->StructureIndex = selected;
        }

        spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == ServerMultiUse)
    {
        AShooterPlayerController_ServerMultiUse_Params* MultiUse = reinterpret_cast<AShooterPlayerController_ServerMultiUse_Params*>(Parameters);

        if (MultiUse->ForObject && MultiUse->UseIndex == 0 && MultiUse->ForObject->IsA(UPrimalInventoryComponent::StaticClass()))
        {
            UPrimalInventoryComponent* Container = (UPrimalInventoryComponent*)MultiUse->ForObject;

            if (Container && (Container->GetOwner()->K2_GetActorLocation().Distance(globals::local::POS) < 1050 && settings::misc::LongArms.Enabled) || settings::misc::InfiniteArms.Enabled)
            {
                AShooterHUD* ShooterHud = globals::local::PC->GetShooterHud();
                Container->MaxInventoryAccessDistance = FLT_MAX;
                Container->MaxRemoteInventoryViewingDistance = FLT_MAX;
                ShooterHud->ShowInventory(Container);
            }
        }

        spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == ServerActorViewRemoteInventory)
    {
        AShooterPlayerController_ServerActorViewRemoteInventory_Params* Paramz = static_cast<AShooterPlayerController_ServerActorViewRemoteInventory_Params*>(Parameters);

        if (Supply && Supply->MyInventoryComponent)
        {
            if (Supply->MyInventoryComponent == Paramz->InventoryComp)
            {
                Paramz->InventoryComp->MaxInventoryAccessDistance = FLT_MAX;
                Paramz->InventoryComp->MaxRemoteInventoryViewingDistance = FLT_MAX;
                Paramz->InventoryComp->bReceivingArkInventoryItems = false;
                Paramz->InventoryComp->bReceivingInventoryItems = false;
                Paramz->InventoryComp->bReceivingEquippedItems = false;
            }
        }

        spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == ServerRequestActorItems)
    {
        AShooterPlayerController_ServerRequestActorItems_Params* Paramz = static_cast<AShooterPlayerController_ServerRequestActorItems_Params*>(Parameters);
        
        if (Supply && Supply->MyInventoryComponent)
        {
            if (Supply->MyInventoryComponent == Paramz->forInventory)
            {
                Paramz->forInventory->MaxInventoryAccessDistance = FLT_MAX;
                Paramz->forInventory->MaxRemoteInventoryViewingDistance = FLT_MAX;
                Paramz->forInventory->bReceivingArkInventoryItems = false;
                Paramz->forInventory->bReceivingInventoryItems = false;
                Paramz->forInventory->bReceivingEquippedItems = false;
            }
        }

        spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == Server_SetFireDashDirection)
    {
        struct DashParams
        {
            struct FVector Direction;
        };

        DashParams* Paramz = (DashParams*)Parameters;

        if (settings::misc::PyromaneJump.Enabled)
            Paramz->Direction *= settings::misc::PyromaneMultiplier;

        spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == ServerMovePacked)
    {   
        static int MoveCounter = 0;

        MoveCounter++;

        if (settings::misc::Ghost.Enabled)
            return;

        else if (settings::playerMovement::BetterAirstuck.Enabled)
        {
            globals::local::PC->ServerAcknowledgePossession(nullptr);
            spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
        }
        else if (settings::playerMovement::Airstuck.Enabled && !settings::playerMovement::BetterAirstuck.Enabled)
        {
            if (MoveCounter % 5 == 0)
                spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
        }
        else if (settings::aimbot::DesyncWalk.Enabled)
        {
            if (MoveCounter % settings::aimbot::DesyncStrength.Val == 0)
                spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
            else
                return;
        }
        else
            spoof_call(ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
    }
    else if (Function == ServerTickShootFX || Function == ServerBeginShootFX)
    {
        if (settings::misc::ShotGunReload.Enabled)
        {
            spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
            spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
            spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
            spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
            spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
        }
        else
            spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);

    }
    else
        spoof_call(Hooks::ProcessRemoteFunction.GetOriginal(), _this, Actor, Function, Parameters, OutParms, Stack, SubObject);
}
