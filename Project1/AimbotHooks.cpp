#include "pch.h"
#include "HookManager.h"
#include "AimbotModule.h"

Hooks::GetShootingCamLoc_t Hooks::GetShootingCamLoc;

void Hooks::GetViewPoint_f( ULocalPlayer* _this, FMinimalViewInfo* OutViewInfo)
{
	spoof_call(Hooks::GetViewPoint.GetOriginal(), _this, OutViewInfo);

    if (settings::misc::FovChanger.Enabled && OutViewInfo)
        OutViewInfo->FOV = settings::misc::FovChanger.Val;
}
void UpdateCustomCamera(FVector* out_Location, FRotator* out_Rotation, bool ForAiming);
void Hooks::PlayerViewPoint_f(AShooterPlayerController* _this, FVector* out_Location, FRotator* out_Rotation, bool ForAiming)
{
    spoof_call(Hooks::PlayerViewPoint.GetOriginal(), _this, out_Location, out_Rotation, ForAiming);

    if (Hooks::Uninject)
        return;

    if (!IsValid(globals::local::LP) || (IsValid(globals::local::LP) && globals::local::LP->bIsDead) || !Actors::ValidateWorld())
        return;

    if (settings::misc::NoRecoil.Enabled && globals::local::WP)
    {
        globals::local::WP->ReloadCameraShakeSpeedScale = 0;
        globals::local::WP->GlobalFireCameraShakeScaleTargeting = 0;
        globals::local::WP->AimDriftPitchFrequency = 0;
        globals::local::WP->AimDriftYawFrequency = 0;
        globals::local::WP->CurrentFiringSpread = 0;
        globals::local::WP->InstantConfig.WeaponSpread = 0;
        globals::local::WP->InstantConfig.WeaponRange = FLT_MAX;
        globals::local::WP->InstantConfig.FinalWeaponSpreadMultiplier = 0;
        globals::local::WP->InstantConfig.FiringSpreadMax = 0;
        globals::local::WP->ScopeOverlayMI = nullptr;
        globals::local::WP->bUseScopeOverlay = false;
        globals::local::WP->bIsSpyglass = true;
        globals::local::WP->TargetingDelayTime = 0.f;
        globals::local::WP->WeaponUnequipDelay = 0.f;
        globals::local::WP->bForceKeepEquippedWhileInInventory = true;
        globals::local::WP->bAllowRunning = true;
        globals::local::WP->bAllowRunningWhileFiring = true;
        globals::local::WP->bAllowRunningWhileReloading = true;
        globals::local::WP->bForceFirstPersonWhileTargeting = false;
        globals::local::WP->bForceAllowPassengerTPV = true;
        globals::local::WP->bForceTPV_EquippedWhileRiding = true;
        globals::local::WP->bForceTPVCameraOffset = false;
        globals::local::CM->ClearCameraLensEffects();
        globals::local::CM->StopAllCameraShakes(true);
        globals::local::CM->StopAllCameraAnims(true);
        globals::local::CM->StopCameraFade();

        if (globals::local::WP->IsA(AShooterWeapon_FlameThrower::StaticClass()))
        {
            AShooterWeapon_FlameThrower* Flame = (AShooterWeapon_FlameThrower*)globals::local::WP;
            Flame->FlameThrowerFXDefaultColor = FColor::FromLinear(FLinearColor::FromRGB(151, 115, 255));
        }
    }

    if (settings::misc::TopDownView.Enabled)
    {
        FVector TraceStart = globals::local::LP->Mesh->GetBoneLocation(8);
        FVector TraceEnd = TraceStart + FVector{ 0.f,0.f,settings::misc::TopDownView.Val * 50.f };
        FHitResult Result;
        globals::libs::VictoryCore->STATIC_VTraceSingleBP(UWorld::Singleton(), &Result, TraceStart, TraceEnd, ECollisionChannel::ECC_GameTraceChannel1, 0, FName(), false, globals::local::LP, 0);
        
        if (Result.Location.IsValid() && !settings::misc::TopDownForceDistance)
        {
            *out_Location = Result.Location;
            out_Rotation->Pitch = -90;
        }
        else if (TraceEnd.IsValid())
        {
            *out_Location = TraceEnd;
            out_Rotation->Pitch = -90;
        }
    }

    if (settings::aimbot::Aimbot.Enabled && IsValid(globals::aimbot::target) && globals::aimbot::target->Mesh && globals::local::WP && Keyboard::GetState(settings::aimbot::Aimbot.KeyBindForVar, 1))
    {
        FVector BoneLocation;

        if (globals::aimbot::target->IsA(APrimalDinoCharacter::StaticClass()))
        {
            BoneLocation = globals::aimbot::target->Mesh->GetSocketLocation(globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"c_Head")));
        }
        else
        {
            BoneLocation = globals::aimbot::target->Mesh->GetBoneLocation(AimbotModule::GetDecidedBone());
        }

        if (BoneLocation.X == 0 && BoneLocation.Y == 0 && BoneLocation.Z == 0)
        {
            globals::aimbot::target = nullptr;
            return;
        }

        if (globals::local::WP->AssociatedPrimalItem && globals::local::WP->IsA(APrimalWeaponBow::StaticClass()))
            BoneLocation = AimbotModule::ProjectilePrediction(BoneLocation, 5200);

        FVector* Random = out_Location;
        FVector SelfLocation = *spoof_call(Hooks::GetShootingCamLoc, globals::local::WP, Random);

        FRotator rotation = globals::libs::MathLib->STATIC_FindLookAtRotation(SelfLocation, BoneLocation);
        globals::local::PC->ControlRotation = rotation;
        *out_Rotation = rotation;
        
        if (!settings::user::CustomCamera.Enabled && globals::local::AP->IsA(AShooterCharacter::StaticClass()))
            *out_Location = globals::local::CM->GetCameraLocation();

        settings::aimbot::ClientRotation = rotation;
    }
    else if (settings::misc::MouseSmoothing.Enabled && !globals::local::LP->IsFirstPersonCamera())
    {
        *out_Location = globals::local::CM->GetCameraLocation();
        *out_Rotation = settings::aimbot::ClientRotation;
    }

    if (settings::user::CustomCamera.Enabled && globals::local::AP->IsA(AShooterCharacter::StaticClass()))
        UpdateCustomCamera(out_Location, out_Rotation, ForAiming);
}

void UpdateCustomCamera(FVector* out_Location, FRotator* out_Rotation, bool ForAiming)
{
    if (!settings::user::CustomCamera.Enabled || !globals::local::AP->IsPlayer() || globals::local::LP->IsFirstPersonCamera())
        return;

	if (settings::user::CustomCameraBone.Val > AimbotModule::CameraBones.size())
		settings::user::CustomCameraBone.Val = 0;

	FVector SelfLocation = globals::local::LP->Mesh->GetBoneLocation(AimbotModule::CameraBones[settings::user::CustomCameraBone.Val]);

    if(AimbotModule::CameraBones[settings::user::CustomCameraBone.Val] == ShooterBones::ROOT_JNT_SKL)
		SelfLocation = globals::local::LP->K2_GetActorLocation();

	FRotator Rotation = *out_Rotation;
	FVector CameraOffset = FVector{ settings::user::CustomCameraOffsetX.Val, settings::user::CustomCameraOffsetY.Val, settings::user::CustomCameraOffsetZ.Val };
	FVector WeaponOffset = FVector{ 0,0,0 };

	if (settings::user::CustomCameraUseWeaponOffset.Enabled)
	{
        if (IsValid(globals::local::WP) && IsValid(globals::local::WP->AssociatedPrimalItem))
        {
            WeaponOffset = FVector{ settings::user::CustomCameraWeaponOffsetX.Val, settings::user::CustomCameraWeaponOffsetY.Val, settings::user::CustomCameraWeaponOffsetZ.Val };
        }
	}
	FQuat RotQuat = globals::libs::MathLib->STATIC_Conv_RotatorToQuaternion(Rotation);

	FVector RotatedOffset = RotQuat.RotateVector(CameraOffset + WeaponOffset);
	FVector FinalLocation = SelfLocation + RotatedOffset;

	if (settings::user::CustomCameraCollision.Enabled)
	{
		FVector TraceStart = SelfLocation;
		TraceStart.Z += 100.f; // so we dont clip under ground when using root or foot bone
		FVector TraceEnd = FinalLocation;
		FHitResult Result;
		globals::libs::VictoryCore->STATIC_VTraceSingleBP(UWorld::Singleton(), &Result, TraceStart, TraceEnd, ECollisionChannel::ECC_GameTraceChannel1, 0, FName(), false, globals::local::LP, 0);

		if (Result.Location.IsValid())
		{
			FinalLocation = Result.Location;
		}
	}

	*out_Location = FinalLocation;
	*out_Rotation = Rotation;
}
