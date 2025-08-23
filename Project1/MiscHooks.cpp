#include "pch.h"
#include "HookManager.h"
#include "AimbotModule.h"
#include "Rendering.h"
#include "Config.h"
#include "MovementModule.h"
#include "LocalModule.h"
#include "ChamsModule.h"
#include "UserModule.h"
#include "Menu.h"

float NormalizeAngle(float Angle)
{
	while (Angle > 180.f) 
	{
		Angle -= 360.f;
	}

	while (Angle < -180.f) 
	{
		Angle += 360.f;
	}

	return Angle;
}

float AdjustAngle(float Angle)
{
	Angle = NormalizeAngle(Angle);
	float OppositeAngle = 180.f - Angle;
	OppositeAngle = NormalizeAngle(OppositeAngle);

	return OppositeAngle;
}

void RemoveLevelFromName(std::wstring& Name)
{
	std::wstring LevelName = Xors(L" - Lvl ");
	size_t pos = Name.find(LevelName);
	if (pos != std::wstring::npos)
	{
		size_t length = Name.length();
		size_t NameEnd = Name.size();
		size_t CharsAfter = NameEnd - (pos + LevelName.length());
		Name.erase(pos, LevelName.length() + CharsAfter);
	}
}

unsigned int SpeedCounter = 0;
unsigned int DismountCounter = 0;
//APrimalDinoCharacter* DinoChar = nullptr;

Hooks::GetDLCManager_t Hooks::GetDLCManager_f;
bool Hooks::DoesOwnDLC_f(UGenericMountedDLCManager* _this, const FString* DLCName)
{
	if (settings::misc::UnlockBTT.Enabled)
		return true;

	return spoof_call(Hooks::DoesOwnDLC.GetOriginal(), _this, DLCName);
}

void Hooks::ReplicateMoveToServer_f(UCharacterMovementComponent* MoveComponent, float DeltaTime, const FVector* NewAcceleration)
{
	static UClass* Stego = nullptr;
	if (!Stego)
		Stego = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/Dinos/Stego/Stego_Character_BP.Stego_Character_BP_C"));
	
	if (!globals::local::PC || !globals::local::LP || MovementModule::RecordingMovement	|| !Actors::ValidateWorld())
        return spoof_call(ReplicateMoveToServer.GetOriginal(), MoveComponent, DeltaTime, NewAcceleration);
        
	if (settings::playerMovement::Airstuck.Enabled && !settings::playerMovement::BetterAirstuck.Enabled)
		DeltaTime = 0.000005f;
	else if (settings::playerMovement::Airstuck.Enabled && settings::playerMovement::BetterAirstuck.Enabled)
		DeltaTime = 0.00002f;
	else if (settings::aimbot::DesyncWalk.Enabled && settings::aimbot::AdditionalDesync.Enabled)
		DeltaTime *= 1.2f;
	else
	{
		if ((settings::playerMovement::SpeedHack.Enabled /* || (settings::playerMovement::ManualRemountSpeedHack.ShouldExecute() )*/) && globals::local::PC)
		{
			if (globals::local::DP)
			{
				globals::local::DinoChar = globals::local::DP;
				globals::local::DP->bWantsToRun = true;

				DeltaTime *= settings::playerMovement::SpeedHackValue.Val * 2;

				int FL = (int)settings::playerMovement::SpeedHackValueTwo.Val;

				SpeedCounter++;

				if (SpeedCounter % FL == 0)
				{
					globals::local::PC->ServerAcknowledgePossession(nullptr);
					globals::local::PC->ServerAcknowledgePossession((APawn*)globals::local::PC->PhotoModeMarkerActor);
					globals::local::PC->ServerAcknowledgePossession(globals::local::AP);
					MovementModule::AcknowledgeCounter++;
				}

				if (settings::playerMovement::SpeedHack.Enabled && SpeedCounter % (FL * 13) == 0)
				{
					if (globals::local::DP->IsA(Stego))
						((AStego_Character_BP_C*)globals::local::DP)->Dismount();
					else
						globals::local::DP->ServerClearRider(0);

					DismountCounter = 0;
					MovementModule::AcknowledgeCounter = 0;
				}
			}
			else if (globals::local::DinoChar && DismountCounter >= 10)
			{
				globals::local::PC->ServerMultiUse(globals::local::DinoChar, 100);
			}
			else
			{
				DismountCounter++;
			}
		}
		else
			globals::local::DinoChar = nullptr;
	}

    return spoof_call(ReplicateMoveToServer.GetOriginal(),MoveComponent, DeltaTime, NewAcceleration);
}

void Hooks::PhysicsRotation_f(UCharacterMovementComponent* _this, float Deltatime)
{
	if (Actors::ValidateWorld() && settings::dinoFeatures::HardTurn.Enabled)
	{
		FRotator rot = globals::local::CM->GetCameraRotation();
		_this->K2_MoveUpdatedComponent(FVector(0, 0, 0), rot, nullptr, false, false);
	}
	else 
	{
		spoof_call(Hooks::PhysicsRotation.GetOriginal(), _this, Deltatime);
	}
}

void Hooks::ClientForceUpdateMovement_f(ACharacter* _this, FVector* NewLocation, FVector* NewVelocity)
{
	if (settings::misc::Ghost.Enabled)
		return;

	spoof_call(ClientForceUpdateMovement.GetOriginal(), _this, NewLocation, NewVelocity);
}

bool StandingStill(FSavedMove_Character* NewMove)
{
	if (!NewMove)
		return false;

	if (NewMove->StartLocation == NewMove->SavedLocation)
		return true;
	

	return false;
}

TimeVar lastTick = {};
void Hooks::TickComponent_f(UCharacterMovementComponent* _this, float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (settings::playerMovement::AirJump.ShouldExecute())
	{
		static const float AirJumpDelta = 0.32f;
		float seconds = durationMILLIS(timeNow() - lastTick) / 1000.f;
		if (seconds > AirJumpDelta)
		{
			lastTick = timeNow();
			return spoof_call(Hooks::TickComponent.GetOriginal(), _this, AirJumpDelta, TickType, ThisTickFunction);
		}
	}
	else
	{
		return spoof_call(Hooks::TickComponent.GetOriginal(), _this, DeltaTime, TickType, ThisTickFunction);
	}
}

AActor* PrevAckPawn = nullptr;
vector<CallServerMovePackedParams> MoveQueue = {};
void Hooks::CallServerMovePacked_f(UCharacterMovementComponent* _this, FSavedMove_Character* NewMove, FSavedMove_Character* PendingMove, FSavedMove_Character* OldMove)
{
	if (settings::misc::Ghost.Enabled)
		return;

	if (!globals::local::PC || !globals::local::LP || !NewMove || !Actors::ValidateWorld())
		return spoof_call(Hooks::CallServerMovePacked.GetOriginal(), _this, NewMove, PendingMove, OldMove);
	
	if (MovementModule::CanRecord && settings::misc::NetLimiter.Enabled)
	{
		MovementModule::RecordingMovement = true;
		CallServerMovePackedParams Params;
		Params._this = _this;
		Params.NewMove = NewMove;
		Params.PendingMove = PendingMove;
		Params.OldMove = OldMove;

		MovementModule::CallServerMovePackedQueue.push_back(Params);

		return;
	}

	if (!MovementModule::CanRecord && MovementModule::RecordingMovement)
	{
		MovementModule::DT = 0;

		int movementctr = 0;

		for (int x = 0; x < MovementModule::CallServerMovePackedQueue.size(); x++)
		{
			auto Params = MovementModule::CallServerMovePackedQueue[x];

			movementctr++;

			if (movementctr % 8 == 0)
			{
				globals::local::PC->ServerAcknowledgePossession(nullptr);
				globals::local::PC->ServerAcknowledgePossession((APawn*)globals::local::PC->PhotoModeMarkerActor);
				globals::local::PC->ServerAcknowledgePossession(globals::local::PC->AcknowledgedPawn);
			}

			spoof_call(Hooks::CallServerMovePacked.GetOriginal(), Params._this, Params.NewMove, Params.PendingMove, Params.OldMove);
		}

		MovementModule::CallServerMovePackedQueue.clear();
		MovementModule::RecordingMovement = false;
		return;
	}

	if (settings::playerMovement::SpoofCrouch.ShouldExecute())
	{
		if(!NewMove->bPressedJump)
			NewMove->bWantsToCrouch = true;
	}

	if (settings::playerMovement::SpoofProne.ShouldExecute())
	{
		if (!NewMove->bPressedJump)
			NewMove->bWantsToProne = true;
	}

	if (settings::playerMovement::SpinBot.Enabled && IsValid(globals::local::AP) && globals::local::AP->IsA(AShooterCharacter::StaticClass()))
	{
		FRotator rot = settings::aimbot::ServerRotation;
		NewMove->SavedControlRotation = rot;
		NewMove->StartControlRotation = rot;
		NewMove->SavedRotation = rot;
		NewMove->StartRotation = rot;
		NewMove->StartBaseRotation = globals::libs::MathLib->STATIC_Conv_RotatorToQuaternion(rot);
		NewMove->StartAttachRelativeRotation = rot;
		NewMove->EndAttachRelativeRotation = rot;
	}

	if (settings::aimbot::FakeRotation.Enabled && globals::local::PC->AcknowledgedPawn->IsA(AShooterCharacter::StaticClass()))
	{
		FRotator rot = globals::local::PC->ControlRotation;

		rot.Yaw = NormalizeAngle(rot.Yaw + 180);
		rot.Pitch = AdjustAngle(rot.Pitch);

		NewMove->SavedControlRotation = rot;
		NewMove->StartControlRotation = rot;
		NewMove->Acceleration *= 10000;
	}
	
	NewMove->MaxSpeed = -1;

	if (settings::playerMovement::Airstuck.Enabled)
		return spoof_call(Hooks::CallServerMovePacked.GetOriginal(), _this, NewMove, PendingMove, OldMove);

	if (settings::playerMovement::Desync.Enabled && _this->CharacterOwner->IsPlayer()) 
	{
		CallServerMovePackedParams Params;
		Params._this = _this;
		Params.NewMove = NewMove;
		Params.PendingMove = PendingMove;
		Params.OldMove = OldMove;
		MoveQueue.push_back(Params);

		if (MoveQueue.size() > settings::playerMovement::DelayedPacketCount.Val)
		{
			for (int x = 0; x < MoveQueue.size(); x++)
			{
				auto Params = MoveQueue[x];

				spoof_call(Hooks::CallServerMovePacked.GetOriginal(), Params._this, Params.NewMove, Params.PendingMove, Params.OldMove);
			}
			MoveQueue.clear();
		}
		else
			return;
	}

	return spoof_call(Hooks::CallServerMovePacked.GetOriginal(), _this, NewMove, PendingMove, OldMove);
}

void Hooks::WeaponTraceForHits_f(AShooterWeapon_InstantPenetrating* _this, TArray<FHitResult>* OutHitResults, TArray<bool>* OutIsEntryHit, FVector* StartTrace, FVector* EndTrace, bool a6)
{
	return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	if(!Actors::ValidateWorld())
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	if (!settings::aimbot::RailgunAimbot.ShouldExecute())
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	if (!IsValid(globals::local::WP) || !IsValid(globals::local::WP->AssociatedPrimalItem))
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	if (!IsValid(globals::aimbot::target) || !IsValid(globals::aimbot::target->Mesh) || !IsValid(globals::aimbot::target->RootComponent))
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	if (!globals::local::WP->IsA(AShooterWeapon_InstantPenetrating::StaticClass()))
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	if (!EndTrace)
	{
		//nlog(Xors("EndTrace is null"));
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);
	}

	AShooterWeapon_InstantPenetrating* Railgun = (AShooterWeapon_InstantPenetrating*)_this;

	if (!IsValid(Railgun) || !IsValid(Railgun->AssociatedPrimalItem))
		return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);

	FVector BoneLocation;

	if (globals::aimbot::target->IsA(APrimalDinoCharacter::StaticClass()))
	{
		BoneLocation = globals::aimbot::target->Mesh->GetSocketLocation(globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"c_Head")));
	}
	else
	{
		BoneLocation = globals::aimbot::target->Mesh->GetBoneLocation(AimbotModule::GetDecidedBone());
	}


	if (settings::aimbot::EnablePrediction.Enabled)
		BoneLocation = AimbotModule::Prediction(BoneLocation, 1);

	*EndTrace = BoneLocation;

	return spoof_call(Hooks::WeaponTraceForHits.GetOriginal(), _this, OutHitResults, OutIsEntryHit, StartTrace, EndTrace, a6);
}

void Hooks::StartUnequip_Implementation_f(AShooterWeapon* _this)
{
	if ((settings::aimbot::RailgunAimbot.Enabled || settings::misc::NoRailgunOverheat.Enabled) && globals::local::WP && globals::local::WP->IsA(AShooterWeapon_InstantPenetrating::StaticClass()))
		return;

	return spoof_call(Hooks::StartUnequip_Implementation.GetOriginal(), _this);
}

void Hooks::SimulateInstantHit_Implementation_f(AShooterWeapon_Instant* _this, FVector* ShotOrigin, FVector_NetQuantizeNormal* ShootDir, bool bForceOnLocal, int ShotIndex)
{
	if (!settings::aimbot::RailgunAimbot.Enabled || !settings::aimbot::RailgunHideTrail.Enabled && (!settings::misc::ForceShoot.Enabled || !Keyboard::GetState(settings::misc::ForceShoot.KeyBindForVar, 1)))
		return spoof_call(Hooks::SimulateInstantHit_Implementation.GetOriginal(), _this,ShotOrigin,ShootDir,bForceOnLocal,ShotIndex);
}

void Hooks::ConsoleCommand_f(UConsole* _this, FString* _command)
{
	if (!_command || !Actors::ValidateWorld())
		return spoof_call(ConsoleCommand.GetOriginal(), _this, _command);

	std::wstring wstr = _command->Data();
	std::string str = std::string(wstr.begin(), wstr.end());
	FString cmd = FString(_command->ToWString().c_str());

	if (_command->Count() > 0)
	{
		if (str.find(Xors("kit")) != std::string::npos)
		{
			auto suit = FString(Xors(L"cheat givearmorset tek ascendant"));
			auto tekweapons = FString(Xors(L"cheat giveweaponset tek ascendant"));
			auto advweapons = FString(Xors(L"cheat giveweaponset advanced ascendant"));
			auto brews = FString(Xors(L"cheat gfi heal 100 0 0"));
			auto gcm = FString(Xors(L"cheat gcm"));
			auto infstats = FString(Xors(L"cheat infinitestats"));
			auto infweight = FString(Xors(L"cheat infiniteweight"));
			auto enablecheats = FString(Xors(L"enablecheats 123"));
			auto tekgrams = FString(Xors(L"cheat giveengramstekonly"));

			spoof_call(ConsoleCommand.GetOriginal(), _this, &enablecheats);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &infstats);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &infweight);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &tekgrams);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &suit);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &tekweapons);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &advweapons);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &advweapons);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &brews);
			spoof_call(ConsoleCommand.GetOriginal(), _this, &brews);
		}
		else if (str.find(Xors("...Haloss")) != std::string::npos)
		{
			settings::feature1 = !settings::feature1;
			Menu::TabGroups = DOMBuilder::CreateMenu();
			return;
		}
		else if (str.find(Xors("...Fabster")) != std::string::npos)
		{
			settings::feature2 = !settings::feature2;
			Menu::TabGroups = DOMBuilder::CreateMenu();
			return;
		}
		else if (str.find(Xors("CFG")) != std::string::npos)
		{
			ConsoleConfigs::ParseConfigValues(*_command);
			Renderer::AddScreenMessage(Xors(L"Config Loaded"), { Renderer::GetCanvasSize().X / 2 - 10 , Renderer::GetCanvasSize().Y / 10 }, { 1,1 }, { 1,0,0,1 }, 10.0f);
			return;
		}
	}

	return spoof_call(ConsoleCommand.GetOriginal(), _this, _command);
}

void Hooks::PlayDying_f(APrimalCharacter* _this, float KillingDamage, FDamageEvent* DamageEvent, AController* Killer, AActor* DamageCauser)
{
	if (!Actors::ValidateWorld())
		return spoof_call(PlayDying.GetOriginal(), _this, KillingDamage, DamageEvent, Killer, DamageCauser);

	if (IsValid(_this) && IsValid(Killer) && IsValid(DamageCauser) && (_this->IsA(AShooterCharacter::StaticClass()) || (settings::user::DinoKills.Enabled && _this->IsA(APrimalDinoCharacter::StaticClass()) && ((APrimalDinoCharacter*)_this)->TargetingTeam >= 100) /*No wild dinos*/) && ((Killer == globals::local::PC || DamageCauser == globals::local::LP) || settings::user::AllKills.Enabled))
	{
		APrimalCharacter* Killed = _this;
		APrimalCharacter* KillerChar = (APrimalCharacter*)DamageCauser;
		FLinearColor KillerColor;
		FLinearColor KilledColor;
		UTexture2D* WeaponOrDinoIcon = nullptr;
		UTexture2D* HitBodyPartIcon = nullptr;

		if (KillerChar->IsA(AShooterCharacter::StaticClass()))
		{
			AShooterCharacter* KillerChar = (AShooterCharacter*)DamageCauser;

			if (KillerChar->CurrentWeapon)
				if (KillerChar->CurrentWeapon->AssociatedPrimalItem && KillerChar->CurrentWeapon->AssociatedPrimalItem->ItemIcon)
					WeaponOrDinoIcon = KillerChar->CurrentWeapon->AssociatedPrimalItem->ItemIcon;

			if (KillerChar->TargetingTeam == globals::local::LP->TargetingTeam)
				KillerColor = settings::teamPlayer::TeamColor.Color;
			else
				KillerColor = settings::enemyPlayer::EnemyColor.Color;
		}
		else if (KillerChar->IsA(APrimalDinoCharacter::StaticClass()))
		{
			if (KillerChar->TargetingTeam == globals::local::LP->TargetingTeam)
				KillerColor = settings::teamDino::TeamDinoColor.Color;
			else
				KillerColor = settings::enemyDino::EnemyDinoColor.Color;

			APrimalDinoCharacter* KillerDino = (APrimalDinoCharacter*)DamageCauser;

			if (KillerDino->GetDinoEntryIcon())
				WeaponOrDinoIcon = (UTexture2D*)KillerDino->GetDinoEntryIcon();
		}

		if (Killed->IsA(AShooterCharacter::StaticClass()))
		{
			if (Killed->TargetingTeam == globals::local::LP->TargetingTeam)
				KilledColor = settings::teamPlayer::TeamColor.Color;
			else
				KilledColor = settings::enemyPlayer::EnemyColor.Color;
		}
		else if (Killed->IsA(APrimalDinoCharacter::StaticClass()))
		{
			if (Killed->TargetingTeam == globals::local::LP->TargetingTeam)
				KilledColor = settings::teamDino::TeamDinoColor.Color;
			else
				KilledColor = settings::enemyDino::EnemyDinoColor.Color;

			APrimalDinoCharacter* KilledDino = (APrimalDinoCharacter*)Killed;

			if (KilledDino->GetDinoEntryIcon())
				HitBodyPartIcon = (UTexture2D*)KilledDino->GetDinoEntryIcon();
		}

		std::wstring KillerName = KillerChar->GetDescriptiveName().ToWString();
		std::wstring KilledName = Killed->GetDescriptiveName().ToWString();
		//RemoveLevelFromName(KillerName);
		//RemoveLevelFromName(KilledName);
		Renderer::AddKillFeed(KillerName, WeaponOrDinoIcon, HitBodyPartIcon, KilledName, KillingDamage, KillerColor, KilledColor);
	}
	
	spoof_call(PlayDying.GetOriginal(), _this, KillingDamage, DamageEvent, Killer, DamageCauser);
}

void Hooks::UpdateRotation_f(AShooterPlayerController* _this, float DeltaTime)
{
	if ((settings::misc::UnlockRotation.Enabled || settings::playerMovement::TekLegs.Enabled || settings::misc::MouseSmoothing.Enabled || settings::user::CustomCamera.Enabled) && IsValid(_this))
	{
		settings::aimbot::ClientRotation.Roll = 0.f;
		settings::aimbot::ClientRotation += _this->RotationInput;
		settings::aimbot::ClientRotation.Pitch = std::clamp(settings::aimbot::ClientRotation.Pitch, -90.0, 90.0);
		_this->ControlRotation = settings::aimbot::ClientRotation;

		if (IsValid(globals::local::LP) && IsValid(globals::local::LP->CharacterMovement))
		{
			if (!settings::aimbot::ClientOmniMovement.Enabled && (!settings::playerMovement::SpinBot.Enabled || !settings::playerMovement::SpinBotClient.Enabled))
				globals::local::LP->CharacterMovement->K2_MoveUpdatedComponent(FVector(0, 0, 0), { 0, settings::aimbot::ClientRotation.Yaw, 0 }, nullptr, false, false);
			else if (settings::playerMovement::SpinBot.Enabled && settings::playerMovement::SpinBotClient.Enabled)
				globals::local::LP->Mesh->K2_SetWorldRotation(FRotator(0, settings::aimbot::ServerRotation.Yaw, 0), false, nullptr, false);
			else if(settings::aimbot::ClientOmniMovement.Enabled)
				globals::local::LP->Mesh->K2_SetWorldRotation(FRotator(0, _this->ControlRotation.Yaw, 0), false, nullptr, false);
		}
	}
	else
		spoof_call(UpdateRotation.GetOriginal(), _this, DeltaTime);
}

FRotator* Hooks::CameraGetRotationForPawnMovementInput_f(AShooterPlayerCameraManager* _this, FRotator* result, APrimalCharacter* forPawn, FRotator* InControlRotation)
{
	FRotator* ret = spoof_call(CameraGetRotationForPawnMovementInput.GetOriginal(), _this, result, forPawn, InControlRotation);

	if (settings::aimbot::ClientOmniMovement.Enabled && Actors::ValidateWorld() && IsValid(globals::local::CM) && IsValid(globals::local::AP) && globals::local::AP->IsA(AShooterCharacter::StaticClass()))
	{
		FRotator CamRot = globals::local::CM->GetCameraRotation();
		ret->Yaw = CamRot.Yaw;
	}

	return ret;
}

//void Hooks::ClientFillNetworkMoveData_f(FPrimalCharacterNetworkMoveData* _this, const FSavedMove_Character* ClientMove, FCharacterNetworkMoveData::ENetworkMoveType MoveType)
//{
//	plog("%s", std::to_string(_this->PrimalMoveData.MaxSpeed).c_str());
//
//	return spoof_call(ClientFillNetworkMoveData.GetOriginal(), _this, ClientMove, MoveType);
//}
