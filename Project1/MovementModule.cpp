#include "pch.h"
#include "MovementModule.h"
#include "HookManager.h"

bool MovementModule::OnModuleInit()
{
    return true;
}

TimeVar LastTick{};
bool MovementModule::CanRecord = false;
bool MovementModule::RecordingMovement = false;
float MovementModule::Velocity = 0.f;
std::vector<CallServerMovePackedParams> MovementModule::CallServerMovePackedQueue = {};

bool MovementModule::OnActorModule(CurrentActor* Current)
{
    return false;
}

bool MovementModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    return true;
}

std::wstring prd(const double x, const int decDigits) 
{
    std::wstringstream ss;
    ss << std::fixed;
    ss.precision(decDigits);
    ss << x;
    return ss.str();
}

bool tekRunning = false;

UClass* MovementModule::TekChestBuff(bool NullBuff)
{
    static class UClass* Clss = nullptr;

    if (NullBuff)
    {
        Clss = nullptr;
        return Clss;
    }        

    if (!Clss)
        Clss = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Buffs/Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C"));

    return Clss;
}

uint32_t MovementModule::AcknowledgeCounter = 0;
float MovementModule::DT = 0.f;
void MovementModule::PostActors()
{
    AShooterPlayerController* SPC = (AShooterPlayerController*)globals::local::PC;

    if (settings::misc::NetLimiter.Enabled && Keyboard::GetState(settings::misc::NetLimiter.KeyBindForVar,0))
        CanRecord = !CanRecord;

    if (!settings::misc::NetLimiter.Enabled)
		CanRecord = false;

    if (Keyboard::GetState(VK_RBUTTON, 1) && MovementModule::RecordingMovement)
    {
        MovementModule::RecordingMovement = false;
        MovementModule::CanRecord = false;
        MovementModule::CallServerMovePackedQueue.clear();
		MovementModule::DT = 0.f;
        Renderer::AddScreenMessage(Xors(L"Packet TP Cancelled"), { Renderer::GetCanvasSize().X / 2.f, Renderer::GetCanvasSize().Y * 0.3 }, { 1.2f,1.2f }, { 1.f, 0.f, 0.f, 1.f }, 1.5f);
    }

	//static bool Remounting = false;
	//static APrimalDinoCharacter* DinoChar = nullptr;

 //   if (settings::playerMovement::ManualRemountSpeedHack.ShouldExecute() && AcknowledgeCounter >= AcknowledgeCounterMax && SPC->AcknowledgedPawn->IsDino())
 //   {
 //       const FVector2D TextScale = { 1.0f,1.0f };
 //       static float RemountSize = -1.f;
 //       std::wstring str = Xors(L"Remount");
 //       if (RemountSize == -1.f)
 //           RemountSize = Renderer::canvas->K2_TextSize(Renderer::Font, str.c_str(), TextScale * 1.2f).X;
 //       Renderer::DrawString(str, { Renderer::GetCanvasSize().X / 2.f - (RemountSize / 2.f),Renderer::GetCanvasSize().Y * 0.35f }, TextScale, { 1.f,0.f,0.f,1.f }, true, { 0.f,0.f,0.f,0.f }, false, true);
 //   }

 //   if (settings::playerMovement::ManualRemountSpeedHack.ShouldExecute() && SPC->AcknowledgedPawn->IsDino())
 //   {
 //       const FVector2D TextScale = { 1.0f,1.0f };
 //       static float RemountSize = -1.f;
 //       std::wstring str = std::to_wstring(AcknowledgeCounter).c_str();
	//	str += Xors(L" / ");
	//	str += std::to_wstring(AcknowledgeCounterMax).c_str();
 //       if (RemountSize == -1.f)
 //           RemountSize = Renderer::canvas->K2_TextSize(Renderer::Font, str.c_str(), TextScale * 1.2f).X;
 //       Renderer::DrawString(str, { Renderer::GetCanvasSize().X / 2.f - (RemountSize / 2.f),Renderer::GetCanvasSize().Y * 0.32f }, TextScale, { 1.f,1.f,1.f,1.f }, true, { 0.f,0.f,0.f,0.f }, false, true);
 //   }

 //   if (settings::playerMovement::ManualRemountSpeedHack.Enabled && Keyboard::GetState(settings::playerMovement::ManualRemountKey.KeyBindForVar, 0) && SPC->AcknowledgedPawn->IsDino())
	//{
	//	if (AcknowledgeCounter >= AcknowledgeCounterMax)
	//	{
	//		Remounting = true;
 //           APrimalDinoCharacter* Dino = (APrimalDinoCharacter*)SPC->AcknowledgedPawn;

 //           if (Dino->IsA(AStego_Character_BP_C::StaticClass()))
 //               ((AStego_Character_BP_C*)Dino)->Dismount();
 //           else
 //               Dino->ServerClearRider(0);
 //           MovementModule::AcknowledgeCounter = 0;
	//		DinoChar = Dino;
	//	}
 //   }

 //   if (Remounting && IsValid(DinoChar))
 //   {
 //       SPC->ServerMultiUse(DinoChar, 100);
 //   }

 //   if (Remounting && !SPC->AcknowledgedPawn->IsDino())
 //       Remounting = false;

    if (settings::misc::NetLimiter.Enabled && MovementModule::RecordingMovement && CallServerMovePackedQueue.size() > 1)
    {
        std::wstring PacketNumber = Xors(L"TS: ");
        
        if (!CallServerMovePackedQueue.empty() && CallServerMovePackedQueue[CallServerMovePackedQueue.size() - 1].NewMove)
            PacketNumber += prd(CallServerMovePackedQueue[CallServerMovePackedQueue.size() - 1].NewMove->DeltaTime,2);

		PacketNumber += Xors(L" s | DT: ");
        
		PacketNumber += prd(MovementModule::DT, 2);

        PacketNumber += Xors(L"s");
        Renderer::DrawString(PacketNumber.c_str(), { Renderer::GetCanvasSize().X / 2.f, Renderer::GetCanvasSize().Y * 0.2 - 30.f}, {1.f,1.f}, {1.f,0.f,0.f,1.f}, true, {0.f,0.f,0.f,0.f}, true, true);

        Renderer::DrawString(Xors(L"Recording Movement"), { Renderer::GetCanvasSize().X / 2.f, Renderer::GetCanvasSize().Y * 0.2 }, { 1.f,1.f }, { 1.f,0.f,0.f,1.f }, true, {0.f,0.f,0.f,0.f},true,true);
        Renderer::DrawString(Xors(L"RMB to cancel"), { Renderer::GetCanvasSize().X / 2.f, Renderer::GetCanvasSize().Y * 0.2 + 30.f }, { 0.8f,0.8f }, { 1.f,1.f,1.f,1.f }, true, { 0.f,0.f,0.f,0.f }, true, true);
        FVector LastLocation = CallServerMovePackedQueue[0].NewMove->SavedLocation;
        FVector2D StartScreenPos;
        if (Actors::PWTS(CallServerMovePackedQueue[0].NewMove->StartLocation, StartScreenPos))
			Renderer::DrawString(Xors(L"Start"), StartScreenPos, { 0.8f,0.8f }, { 1.f,0.f,0.f,1.f }, true, {0.f,0.f,0.f,0.f},true,true);

        for (int i = 1; i < CallServerMovePackedQueue.size(); i++)
        {
			FVector NewLocation = CallServerMovePackedQueue[i].NewMove->SavedLocation;
            FVector2D LastScreenPos;
            FVector2D NewScreenPos;

            if(Actors::PWTS(LastLocation, LastScreenPos) && Actors::PWTS(NewLocation, NewScreenPos))
                Renderer::DrawLine2D(NewScreenPos, LastScreenPos, 2.0f, {1.f,0.f,0.f,1.f});

			LastLocation = NewLocation;
		}
    }

    if (settings::playerMovement::TekGaunts.Enabled || settings::playerMovement::TekGauntsStop.Enabled || settings::playerMovement::TekJump.Enabled || settings::playerMovement::TekLegs.Enabled|| settings::misc::TekChestDisconnect.Enabled)
    {
        if (settings::playerMovement::TekGaunts.Enabled && Keyboard::GetState(settings::playerMovement::TekGaunts.KeyBindForVar, 1)) 
        {
            ABuff_TekArmor_Gloves_C* GauntsBuff = (ABuff_TekArmor_Gloves_C*)globals::local::LP->GetBuff(ABuff_TekArmor_Gloves_C::StaticClass());

            if (GauntsBuff)
            {
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(1));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(2));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(3));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(0));
            }
        }

        if (settings::playerMovement::TekGauntsStop.Enabled && Keyboard::GetState(settings::playerMovement::TekGauntsStop.KeyBindForVar, 1)) 
        {
            ABuff_TekArmor_Gloves_C* GauntsBuff = (ABuff_TekArmor_Gloves_C*)globals::local::LP->GetBuff(ABuff_TekArmor_Gloves_C::StaticClass());

            if (GauntsBuff)
            {
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(0));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(1));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(2));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(3));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(4));
                GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(5));
            }
        }
            
        if (settings::playerMovement::TekJump.Enabled && Keyboard::GetState(settings::playerMovement::TekJump.KeyBindForVar, 1))
        {
            ABuff_TekArmor_Shirt_Rework_C* ChestBuff = (ABuff_TekArmor_Shirt_Rework_C*)globals::local::LP->GetBuff(MovementModule::TekChestBuff(false));

            if (globals::local::FrameNum % 10 == 0 && ChestBuff)
            {
                ChestBuff->Server_SetThrusterState(E_TekThrusterState::NewEnumerator2, false);
                ChestBuff->Server_SetThrusterState(E_TekThrusterState::NewEnumerator4, false);
            }
        }

        if (settings::misc::TekChestDisconnect.Enabled)
        {
            ABuff_TekArmor_Gloves_C* GauntsBuff = (ABuff_TekArmor_Gloves_C*)globals::local::LP->GetBuff(ABuff_TekArmor_Gloves_C::StaticClass());

            if (GauntsBuff && IsValid(GauntsBuff))
            {
                for (int i = 0; i < (int)(settings::misc::TekChestDisconnect.Val * globals::rendering::DeltaTime * 4); i++)
                {
                    GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(1));
                    GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(2));
                    GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(3));
                    GauntsBuff->Server_SetPunchChargeState(E_TekGlovePunchState(4));
                }
            }
        }

        if (settings::playerMovement::TekHover.Enabled && Keyboard::GetState(settings::playerMovement::TekHover.KeyBindForVar, 1)) 
        {
            ABuff_TekArmor_Shirt_Rework_C* ChestBuff = (ABuff_TekArmor_Shirt_Rework_C*)globals::local::LP->GetBuff(ABuff_TekArmor_Shirt_Rework_C::StaticClass());

            if (globals::local::FrameNum % 10 == 0 && ChestBuff)
            {
				ChestBuff->Server_SetThrusterState(E_TekThrusterState::NewEnumerator0, false);
                ChestBuff->Server_SetThrusterState(E_TekThrusterState::NewEnumerator1, false);
			}
		}

        if (settings::playerMovement::TekLegs.Enabled  || tekRunning)
        {
            ABuff_TekArmor_Pants_C* p = (ABuff_TekArmor_Pants_C*)globals::local::LP->GetBuff(ABuff_TekArmor_Pants_C::StaticClass());

            if (p)
            {
                if (Keyboard::GetState(settings::playerMovement::TekLegs.KeyBindForVar, 0))
                {
                    if (p->CurrentTekRunState == E_TekRunningState::NewEnumerator0)
                    {
                        tekRunning = true;
                        p->SetTekIgnoreLookInput(false);
                        p->Server_SetTekRunningState(E_TekRunningState::NewEnumerator1);
                        p->Server_SetTekRunningState(E_TekRunningState::NewEnumerator2);
                        p->Server_SetTekRunningState(E_TekRunningState::E_MAX);
                        p->bBPModifyCharacterFOV = false;
                        p->SoundToPlay = nullptr;
                        p->bShouldWarpFOV = false;
                        p->CameraShake = nullptr;
                        p->ParticleSystemComponent = nullptr;
                        p->DustParticleIntensity = 0;
                        p->bDisableFootstepsParticles = true;
                        p->HitPawn_Particle = nullptr;
                        p->bUseBPForceCameraStyle = false;
                    }
                    else
                    {
                        tekRunning = false;
                        p->Server_SetTekRunningState(E_TekRunningState::NewEnumerator0);
                        p->Server_SetTekRunningState(E_TekRunningState::NewEnumerator0);
                    }
                }
            }
        }
    }

    if (settings::misc::InfiniteSuitEle.Enabled && globals::local::PINV)
    {
        for (int x = 0; x < globals::local::PINV->EquippedItems.Count(); x++)
        {
            UPrimalItem* EquippedItem = globals::local::PINV->EquippedItems[x];

            if (!EquippedItem)
                continue;

            std::wstring name = EquippedItem->DescriptiveNameBase.ToWString();

            if (wcsstr(name.c_str(), Xors(L"Tek")) != nullptr)
            {
                UPrimalItemArmor_Base_Tek_C* TekArmor = (UPrimalItemArmor_Base_Tek_C*)EquippedItem;

                if (TekArmor)
                    TekArmor->IncreaseElement(1000000);
            }
        }
    }

    if (IsValid(globals::local::AP) && (settings::playerMovement::AirJump.ShouldExecute() || settings::playerMovement::BunnyHop.ShouldExecute()))
        globals::local::AP->Jump();

    static bool ClientSpinEnabled = false;
	static const float SpinSpeed = 500.f;

    if (settings::playerMovement::SpinBot.Enabled && IsValid(globals::local::AP) && globals::local::AP->IsPlayer())
    {
        FRotator Rot = settings::aimbot::ServerRotation;
		FRotator CamRot = globals::local::CM->GetCameraRotation();
		double Delta = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - LastTick).count() / 1000.f;

		float DeltaYaw = settings::playerMovement::SpinBotSpeed.Val * SpinSpeed * Delta;

        switch (settings::playerMovement::SpinBotYaw.Val)
        {
		case 0: // Right
			Rot.Yaw += DeltaYaw;
			break;
		case 1: // Left
			Rot.Yaw -= DeltaYaw;
			break;
		case 2: // Back
			Rot.Yaw = CamRot.Yaw + 180.f;
			break;
		case 3: // Random
			Rot.Yaw = (rand() % 360);
			break;
        }
		Rot.Yaw = std::fmod(Rot.Yaw, 360.f);

        switch (settings::playerMovement::SpinBotPitch.Val)
        {
		case 0: // Up
			Rot.Pitch = 90.f;
			break;
		case 1: // Down
			Rot.Pitch = -90.f;
			break;
		case 2: // Center
			Rot.Pitch = 0.f;
			break;
		case 3: // Random
			Rot.Pitch = (rand() % 180) - 90;
			break;
        }

        if (settings::playerMovement::SpinBotClient.Enabled)
        {
            globals::local::LP->Mesh->K2_SetWorldRotation(FRotator(0, Rot.Yaw, 0), false, nullptr, false);
            ClientSpinEnabled = true;
        }
		settings::aimbot::ServerRotation = Rot;
    }

	if (ClientSpinEnabled && (!settings::playerMovement::SpinBot.Enabled || !settings::playerMovement::SpinBotClient.Enabled))
	{
		globals::local::LP->Mesh->K2_SetWorldRotation(FRotator(0, globals::local::CM->GetCameraRotation().Yaw, 0), false, nullptr, false);
		ClientSpinEnabled = false;
	}

    if (settings::aimbot::ClientOmniMovement.Enabled)
    {
        SPC->GetPlayerCharacter()->bUseControllerRotationYaw = false;

        bool W = Keyboard::GetState('W', 1);
        bool S = Keyboard::GetState('S', 1);
        bool A = Keyboard::GetState('A', 1);
        bool D = Keyboard::GetState('D', 1);
        FRotator CamRot = globals::local::CM->GetCameraRotation();
        CamRot.Pitch = 0;

        FRotator MovementRot;

        if (W && !S && !A && !D)
        {
            MovementRot = FRotator(0, CamRot.Yaw, 0);
        }
        else if (!W && S && !A && !D)
        {
            MovementRot = FRotator(0, CamRot.Yaw - 180, 0);
        }
        else if (!W && !S && A && !D)
        {
			MovementRot = FRotator(0, CamRot.Yaw - 90, 0);
		}
        else if (!W && !S && !A && D)
        {
			MovementRot = FRotator(0, CamRot.Yaw + 90, 0);
		}
        else if (W && !S && A && !D)
        {
			MovementRot = FRotator(0, CamRot.Yaw - 45, 0);
		}
        else if (W && !S && !A && D)
        {
			MovementRot = FRotator(0, CamRot.Yaw + 45, 0);
		}
        else if (!W && S && A && !D)
        {
			MovementRot = FRotator(0, CamRot.Yaw - 135, 0);
		}
        else if (!W && S && !A && D)
        {
			MovementRot = FRotator(0, CamRot.Yaw + 135, 0);
		}
        else
        {
            MovementRot = FRotator(0, CamRot.Yaw, 0);
        }

        globals::local::LP->K2_SetActorRotation(MovementRot, false);
        globals::local::LP->RootComponent->K2_SetWorldRotation(MovementRot, false, nullptr, false);

        if(!settings::playerMovement::SpinBot.Enabled || !settings::playerMovement::SpinBotClient.Enabled)
            globals::local::LP->Mesh->K2_SetWorldRotation(FRotator(0, CamRot.Yaw, 0), false, nullptr, false);
    }
    else
        globals::local::LP->bUseControllerRotationYaw = true;

    LastTick = std::chrono::high_resolution_clock::now();
}

std::unique_ptr<MovementModule> MovementModule::CreateModule()
{
    return std::make_unique<MovementModule>();
}