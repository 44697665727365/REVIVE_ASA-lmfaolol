#include "pch.h"
#include "UserModule.h"
#include "ChamsModule.h"
bool UnderMesh = false;
std::vector<std::pair<std::pair<FVector, FVector>, std::pair<double, std::wstring>>> TeleportParams = {};
std::vector<HitMarker3D> HitMarkers = {};
int TargetWarningsDrawn = 0;

bool UserModule::OnModuleInit()
{
    return true;
}

std::vector<AntimeshBorder*> UserModule::AntimeshVolumes = {};

FVector2D Pos = { 0,0 };
FVector2D DP = { 0,0 };
std::wstring LastDrawStr = Xors(L"");

bool UserModule::OnActorModule(CurrentActor* Current)
{
    if (!Current)
        return false;

    if (settings::user::TargetWarning.Enabled) 
    {
        AShooterCharacter* Target = (AShooterCharacter*)Current->Actor;

        if (!Target)
            return false;

        FVector ViewDirection = {};

        FRotator ViewRotation = {};

        FVector TargetLocation = {};

        Target->GetActorEyesViewPoint(&TargetLocation, &ViewRotation);

        ViewDirection = globals::libs::MathLib->STATIC_Conv_RotatorToVector(ViewRotation);

        FVector LocalLocation = globals::local::LP->Mesh->GetBoneLocation(ShooterBones::Cnt_Chest_000_JNT_SKL);

        FVector Direction = TargetLocation - LocalLocation;

        Direction = Direction.Normalize();

        float Dot = ViewDirection.Normalize().Dot(Direction);

        Dot += 1.f;

        Dot /= 2.f;

        Dot = 1.f - Dot;

        if (Dot < 0.0f)
            Dot = 0.0f;

        if (Dot > 1.0f)
            Dot = 1.0f;

        if (Dot >= settings::user::TargetWarningMinimum.Val)
        {    
            std::wstring TargetingString = Target->GetDescriptiveName().ToWString() + Xors(L" is looking at you [") + std::to_wstring((int)(Dot * 100.f)) + Xors(L"%]!");

            if (Pos.X == 0 && Pos.Y == 0)
                Pos = { Renderer::GetCanvasSize().X / 1.17f - 40.f, Renderer::GetCanvasSize().Y * 0.01f };

            Pos.Y += TargetWarningsDrawn * 25.0f;

            Renderer::DrawString(TargetingString, Pos, { 1.f, 1.f }, FLinearColor::FromRGB(151, 115, 255), true, { 0.f,0.f,0.f,1.f }, true, true);

            Pos.Y -= TargetWarningsDrawn * 25.0f;

            TargetWarningsDrawn++;

            LastDrawStr = TargetingString;
        }
    }

    return false;
}

bool UserModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    if (Current->Type != ActorType::Player)
        return false;

    AShooterCharacter* Target = (AShooterCharacter*)Current->Actor;

    if (!Target)
        return false;

    if (Target->TargetingTeam == globals::local::LP->TargetingTeam)
        return false;

    if (Target->bIsDead)
        return false;

    //if (Target->bIsSleeping)
    //    return false;

    return true;
}

TimeVar LastVelocity;
FVector LastPosition;
float veloc = 0;
bool DoOnce = true;

void UserModule::PostActors()
{
    if (settings::user::TargetWarning.Enabled)
    {
        if (settings::menu::ShowMenu.Enabled)
        {
            float MouseX, MouseY;
            APlayerController::Singleton()->GetMousePosition(&MouseX, &MouseY, true);

            FVector2D TextSize = globals::rendering::canvas->K2_TextSize(Renderer::Font, LastDrawStr.c_str(), { 1.2f, 1.2f });
            FVector2D TopLeft = { Pos.X - TextSize.X, Pos.Y - TextSize.Y * TargetWarningsDrawn };

            bool isHovered = (MouseX > Pos.X - TextSize.X / 2 && MouseX < Pos.X + TextSize.X && MouseY > Pos.Y - TextSize.Y / 2 && MouseY < Pos.Y + TextSize.Y * TargetWarningsDrawn);

            if (isHovered)
            {
                if (Keyboard::GetState(VK_LBUTTON, 1))
                {
                    FVector2D cursorPos = { MouseX, MouseY };

                    if (DP.X == 0)
                    {
                        DP.X = cursorPos.X - Pos.X;
                        DP.Y = cursorPos.Y - Pos.Y;
                    }

                    Pos.X = cursorPos.X - DP.X;
                    Pos.Y = cursorPos.Y - DP.Y;
                }
                else
                {
                    DP.X = 0;
                    DP.Y = 0;
                }
            }
        }
    
        TargetWarningsDrawn = 0;
    }

    if (settings::playerMovement::Airstuck.Enabled)
    {
        FVector2D Scale = { 0.5f, 0.5f };
        FVector2D Pos = Renderer::GetCanvasSize() / 2.f;
        Pos.Y *= 0.95f;
        Pos.X -= Renderer::canvas->K2_TextSize(Renderer::Font, Xors(L"AirStuck"), Scale * 1.2f).X / 2.f;
        Renderer::DrawString(Xors(L"AirStuck"), Pos, { 0.5f, 0.5f }, { 0.4f,0.4f,0.4f,1.f }, true, { 0.f,0.f,0.f,1.f }, false, true);
    }

    if (globals::local::WP && globals::local::WP->IsA(APrimalWeaponBow::StaticClass()))
    {
        APrimalWeaponBow* Bow = (APrimalWeaponBow*)globals::local::WP;
        float Percentage = 0.0;
        float BowPull = Bow->PullingTime / Bow->PullingTimeForMaximumSpeed;
        if (Bow->bIsPullingString && BowPull > 0.0) 
        {
            Percentage = fminf(BowPull, 1.0);

            FVector2D BottomPos = { (Renderer::GetCanvasSize().X / 2.f) * 1.05f, (Renderer::GetCanvasSize().Y / 2.f) * 1.03f };
            FVector2D TopPos = { (Renderer::GetCanvasSize().X / 2.f) * 1.05f, (Renderer::GetCanvasSize().Y / 2.f) * 0.97f };
            Renderer::DrawLine2D(BottomPos, TopPos, 2.f, { 0.f,0.f,0.f,1.f });
            FVector2D LinePos = BottomPos + (TopPos - BottomPos) * Percentage;
            Renderer::DrawLine2D(BottomPos, LinePos, 2.f, { 0.4f,0.4f,0.4f,1.f });
        }
    }

    if (settings::user::AntimeshESP.Enabled)
    {
        if (AntimeshVolumes.empty())
        {
            std::vector<AVolume*> Volumes = {};

            for (unsigned int i = 0u; i < UObject::GObjects->NumElements; i++)
            {
                UObject* object = UObject::GObjects->GetObjectPtr(i);

                if (!IsValid(object))
                    continue;

                if (object->IsA(APainCausingVolume::StaticClass()))
                {
                    APainCausingVolume* vol = (APainCausingVolume*)object;

                    if (vol->bTriggerUndermeshDetection)
                        Volumes.push_back(vol);
                }
                else if (object->IsA(ATogglePainVolume::StaticClass()))
                {
                    ATogglePainVolume* vol = (ATogglePainVolume*)object;

                    if (vol->bTriggerUndermeshDetection || vol->DamagePerSec >= 1000.f)
                        Volumes.push_back(vol);
                }

            }
            for (int i = 0; i < Volumes.size(); i++)
            {
                AVolume* vol = (AVolume*)Volumes[i];

                if (!IsValid(vol))
                    continue;

                FVector pos = vol->K2_GetActorLocation();

                for (int i = 0; i < vol->BoxOptimization.Count();i++)
                {
                    FBoxOptimization BoxOpt = vol->BoxOptimization[i];

                    // Calculate the center of the FBox
                    FVector Center = (BoxOpt.Box.Min + BoxOpt.Box.Max) * 0.5f;

                    // Calculate the extent of the FBox
                    FVector Extent = (BoxOpt.Box.Max - BoxOpt.Box.Min) * 0.5f;

                    // Apply the inverse transform to the center
                    Center = BoxOpt.Inverse.TransformPosition(Center);
                    AntimeshVolumes.push_back(new AntimeshBorder(pos + pos + Center, Extent, BoxOpt.Inverse.Rotation));
                }
            }
        }

        for (int i = 0; i < AntimeshVolumes.size(); i++)
		{
            if (!AntimeshVolumes[i])
            	continue;

            if (AntimeshVolumes[i]->GetCenter().DistanceMeter(globals::local::POS) < settings::user::AntimeshESPRange.Val)
                AntimeshVolumes[i]->Draw();
		}
    }

    if (settings::user::HitMarker3D.Enabled)
    {
        for (int i = 0; i < HitMarkers.size();i++)
        {
            HitMarker3D& HitMarker = HitMarkers[i];
			float ElapsedSeconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - HitMarker.HitTime).count() / 1000.f;
            if (ElapsedSeconds > settings::user::HitMarker3D.Val)
            {
                HitMarkers.erase(HitMarkers.begin() + i);
                continue;
            }

            FVector2D ScreenPos = {};

            if (HitMarker.Location.IsValid() && Actors::PWTS(HitMarker.Location, ScreenPos))
            {
                float size = settings::user::HitMarker3DSize.Val;
				Renderer::DrawLine2D(ScreenPos - FVector2D(size, size), ScreenPos + FVector2D(size, size), 2.f, settings::user::HitMarker3DColor.Color);
				Renderer::DrawLine2D(ScreenPos - FVector2D(size, -size), ScreenPos + FVector2D(size, -size), 2.f, settings::user::HitMarker3DColor.Color);
            }
        }
    }

    if (globals::local::VP)
    {
        settings::misc::Ini.Enabled ? globals::local::VP->ViewModelIndex = settings::misc::Ini.Val : globals::local::VP->ViewModelIndex = 0x3;

        globals::local::VP->ShowFlags.Bloom = settings::user::ShowFlags::Bloom.Enabled;
        globals::local::VP->ShowFlags.LocalExposure = settings::user::ShowFlags::LocalExposure.Enabled;
        globals::local::VP->ShowFlags.AmbientCubemap = settings::user::ShowFlags::AmbientCubemap.Enabled;
        globals::local::VP->ShowFlags.EyeAdaptation = settings::user::ShowFlags::EyeAdaptation.Enabled;
        globals::local::VP->ShowFlags.GlobalIllumination = settings::user::ShowFlags::GlobalIllumination.Enabled;
        globals::local::VP->ShowFlags.Vignette = settings::user::ShowFlags::Vignette.Enabled;
        globals::local::VP->ShowFlags.AmbientOcclusion = settings::user::ShowFlags::AmbientOcclusion.Enabled;
        globals::local::VP->ShowFlags.PointLights = settings::user::ShowFlags::PointLights.Enabled;
        globals::local::VP->ShowFlags.SpotLights = settings::user::ShowFlags::SpotLights.Enabled;
        globals::local::VP->ShowFlags.RectLights = settings::user::ShowFlags::RectLights.Enabled;
        globals::local::VP->ShowFlags.DepthOfField = settings::user::ShowFlags::DepthOfField.Enabled;
        globals::local::VP->ShowFlags.MotionBlur = settings::user::ShowFlags::MotionBlur.Enabled;
        globals::local::VP->ShowFlags.CameraInterpolation = settings::user::ShowFlags::CameraInterpolation.Enabled;
        globals::local::VP->ShowFlags.Specular = settings::user::ShowFlags::Specular.Enabled;
        globals::local::VP->ShowFlags.LightFunctions = settings::user::ShowFlags::LightFunctions.Enabled;
        globals::local::VP->ShowFlags.NaniteMeshes = settings::user::ShowFlags::NaniteMeshes.Enabled;
        globals::local::VP->ShowFlags.InstancedStaticMeshes = settings::user::ShowFlags::InstancedStaticMeshes.Enabled;
        globals::local::VP->ShowFlags.InstancedFoliage = settings::user::ShowFlags::InstancedFoliage.Enabled;
        globals::local::VP->ShowFlags.InstancedGrass = settings::user::ShowFlags::InstancedGrass.Enabled;
        globals::local::VP->ShowFlags.DynamicShadows = settings::user::ShowFlags::DynamicShadows.Enabled;
        globals::local::VP->ShowFlags.Particles = settings::user::ShowFlags::Particles.Enabled;
        globals::local::VP->ShowFlags.SkeletalMeshes = settings::user::ShowFlags::SkeletalMeshes.Enabled;
        globals::local::VP->ShowFlags.Translucency = settings::user::ShowFlags::Translucency.Enabled;
        globals::local::VP->ShowFlags.LOD = settings::user::ShowFlags::LOD.Enabled;
        globals::local::VP->ShowFlags.Lighting = settings::user::ShowFlags::Lighting.Enabled;
        globals::local::VP->ShowFlags.DeferredLighting = settings::user::ShowFlags::DeferredLighting.Enabled;
        globals::local::VP->ShowFlags.StaticMeshes = settings::user::ShowFlags::StaticMeshes.Enabled;
        globals::local::VP->ShowFlags.Landscape = settings::user::ShowFlags::Landscape.Enabled;
        globals::local::VP->ShowFlags.Fog = settings::user::ShowFlags::Fog.Enabled;
        globals::local::VP->ShowFlags.SkyLighting = settings::user::ShowFlags::SkyLighting.Enabled;
        globals::local::VP->ShowFlags.PostProcessing = settings::user::ShowFlags::PostProcessing.Enabled;
        globals::local::VP->ShowFlags.Bloom = settings::user::ShowFlags::Bloom.Enabled;
        globals::local::VP->ShowFlags.LocalExposure = settings::user::ShowFlags::LocalExposure.Enabled;
        globals::local::VP->ShowFlags.AntiAliasing = settings::user::ShowFlags::AntiAliasing.Enabled;
        globals::local::VP->ShowFlags.TemporalAA = settings::user::ShowFlags::TemporalAA.Enabled;
        globals::local::VP->ShowFlags.AmbientCubemap = settings::user::ShowFlags::AmbientCubemap.Enabled;
        globals::local::VP->ShowFlags.EyeAdaptation = settings::user::ShowFlags::EyeAdaptation.Enabled;
        globals::local::VP->ShowFlags.GlobalIllumination = settings::user::ShowFlags::GlobalIllumination.Enabled;
    
        if (settings::user::ClearWater.Enabled)
        {
            if (DoOnce)
            {
                globals::local::PC->SendToConsole(Xors(L"r.ScreenPercentage 100"));
                DoOnce = false;
            }

            globals::local::VP->ShowFlags.PostProcessing = false;
            globals::local::VP->ShowFlags.AntiAliasing = true;
            globals::local::VP->ShowFlags.TemporalAA = true;
        }
    }

    if (settings::misc::ShowMeshDetection.Enabled) 
    {   
        static double FrameTimeCounter = 0.0;

        FrameTimeCounter += globals::rendering::DeltaTime;

        if (FrameTimeCounter > 0.5f)
        {
            FrameTimeCounter = 0.0f;
            UnderMesh = globals::libs::VictoryCore->STATIC_IsUndermesh(globals::local::LP, nullptr, nullptr, nullptr, false, 0);
        }

        if (UnderMesh)
        {
            FVector2D DrawLoc = { Renderer::GetCanvasSize().X / 2.f,Renderer::GetCanvasSize().Y * 0.1f };
            float TextWidth = Renderer::canvas->K2_TextSize(Renderer::Font, Xors(L"[!] Under Mesh"), { 1.f, 1.f }).X;
            DrawLoc.X -= TextWidth / 2.f;
            Renderer::DrawString(Xors(L"[!] Under Mesh"), DrawLoc, { 0.8f, 0.8f }, { 1.f,0.f,0.f,1.f }, true, { 0.f,0.f,0.f,1.f }, false, true);
        }
        else
        {
            FVector2D DrawLoc = { Renderer::GetCanvasSize().X / 2.f,Renderer::GetCanvasSize().Y * 0.1f };
            float TextWidth = Renderer::canvas->K2_TextSize(Renderer::Font, Xors(L"Not Under Mesh"), { 1.f, 1.f }).X;
            DrawLoc.X -= TextWidth / 2.f;
            Renderer::DrawString(Xors(L"Not Under Mesh"), DrawLoc, { 0.8f, 0.8f }, { 0.f,1.f,0.f,1.f }, true, { 0.f,0.f,0.f,1.f }, false, true);
        }
    }

    if (settings::misc::ExtraServerInfo.Enabled)
    {
        Renderer::PushFont(Renderer::HudFont);
        int y = 12;
        AShooterGameState* ShooterGameState = (AShooterGameState*)UWorld::Singleton()->GameState;
        float Time = ShooterGameState->ServerSaveInterval - ((ShooterGameState->PrivateNetworkTime - ShooterGameState->LastServerSaveTime));
        int Seconds = (int)Time % 60;
        int Minutes = (Time - Seconds) / 60;

        std::wstring PlayersConnected = Xors(L"Players: ") + std::to_wstring(ShooterGameState->NumPlayerConnected);
        std::wstring PlayerPing = Xors(L"Client Ping: ") + std::to_wstring((int)globals::local::LP->PlayerState->GetExactPing());
        std::wstring DinosConnected = Xors(L"Dinos: ") + std::to_wstring(ShooterGameState->NumTamedDinos);
        std::wstring ServerTimer = Xors(L"Timer: ") + std::to_wstring(Minutes) + Xors(L":") + std::to_wstring(Seconds);
        std::wstring DayNumber = Xors(L"Day: ") + std::to_wstring(ShooterGameState->DayNumber);
        std::wstring ServerFramerate = Xors(L"Server FPS: ") + std::to_wstring((int)ShooterGameState->ServerFramerate);
        std::wstring DeltaTime = Xors(L"Delta time: ") + std::to_wstring(globals::rendering::DeltaTime);

        Renderer::DrawString(Xors(L"COC"), {5, (double)y}, { 0.6, 0.6 }, { 1,1,1,1 }, true);
        y += 20;
        Renderer::DrawString(ServerFramerate.c_str(), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
        y += 20;
        Renderer::DrawString(PlayerPing.c_str(), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
        y += 20;
        Renderer::DrawString(PlayersConnected.c_str(), { 5, (double)y }, { 0.6, 0.6 }, {1,1,1,1}, true);
        y += 20;
        Renderer::DrawString(DinosConnected.c_str(), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
        y += 20;
        Renderer::DrawString(DeltaTime.c_str(), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
        y += 20;

        std::wstring LastMap = ShooterGameState->ServerSessionName.wc_str();

        FIntPoint GPS = globals::libs::VictoryCore->STATIC_CalculateGPSCoordinates(UWorld::Singleton(), globals::local::POS);

        float fx = (float)GPS.X / 10;
        int ix = GPS.X / 10;

        int num = (int)((fx - ix) * 10);

        float fy = (float)GPS.Y / 10;
        int iy = GPS.Y / 10;

        int num2 = (int)((fy - iy) * 10);

        std::wstring MapString = Xors(L"Lon: ") + std::to_wstring(ix) + Xors(L".") + std::to_wstring(num) + Xors(L" Lat: ") + std::to_wstring(iy) + Xors(L".") + std::to_wstring(num2);
        Renderer::DrawString(ServerTimer.c_str(), { 5, (double)y }, { 0.6, 0.6 }, FLinearColor::FromRGB(32, 178, 170), true);
        y += 20;
        Renderer::DrawString(MapString.c_str(), { 5, (double)y }, { 0.6, 0.6 }, FLinearColor::FromRGB(32, 178, 170), true);
        y += 22;
        Renderer::DrawString(Xors(L"Active Features : "), { 5, (double)y }, { 0.75, 0.75 }, FLinearColor::FromRGB(238, 230, 0), true);
        y += 22;

        if (settings::aimbot::ServerSilent.Enabled)
        {
            Renderer::DrawString(Xors(L"Server Silent Aimbot"), {5, (double)y}, {0.6, 0.6}, {1,1,1,1}, true);
            y += 20;
        }

        if (settings::misc::InfiniteSuitEle.Enabled)
        {
            Renderer::DrawString(Xors(L"Infinite Suit Element"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::misc::LongArms.Enabled)
        {
            Renderer::DrawString(Xors(L"Higher Access Range"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::aimbot::SpoofHeadshots.Enabled)
        {
            Renderer::DrawString(Xors(L"Spoof Headshots"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::misc::InventoryToArk.Enabled)
        {
            Renderer::DrawString(Xors(L"Inventory To Ark"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::autoMation::AutoLoot.Enabled)
        {
            Renderer::DrawString(Xors(L"Auto Take All"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::autoMation::AutoMedbrew.Enabled)
        {
            Renderer::DrawString(Xors(L"Auto Medbrew"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::autoMation::AutoPopcorn.Enabled)
        {
            Renderer::DrawString(Xors(L"Auto Popcorn"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::misc::NoRecoil.Enabled)
        {
            Renderer::DrawString(Xors(L"Gun Features"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::dinoFeatures::InstaTurn.Enabled)
        {
            Renderer::DrawString(Xors(L"Insta Turn"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::playerMovement::Airstuck.Enabled)
        {
            Renderer::DrawString(Xors(L"Freeze Movement"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        if (settings::playerMovement::Desync.Enabled)
        {
            Renderer::DrawString(Xors(L"Fake Lag"), { 5, (double)y }, { 0.6, 0.6 }, { 1,1,1,1 }, true);
            y += 20;
        }

        double MilliSeconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - LastVelocity).count();

        if (MilliSeconds > 100)
        {
            veloc = LastPosition.DistanceMeter(globals::local::POS) * 10;
            LastVelocity = std::chrono::high_resolution_clock::now();
            LastPosition = globals::local::POS;
        }

        char Buffer[20];
        sprintf_s(Buffer, Xors("%.1f"), veloc);

        std::string Str = Buffer;

        LastMap += Xors(L" | Speed: ") + convert(Str) + Xors(L" m/s");

        Renderer::DrawString(LastMap.c_str(), { 5, Renderer::GetCanvasSize().Y - 30.0f }, { 0.8, 0.8 }, FLinearColor::FromRGB(32, 178, 170), true);
        Renderer::PushFont(Renderer::EspFont);
    }

    if (settings::miscStructure::Teleport.Enabled && TeleportParams.size() > 0)
    {
        for (int i = 0; i < TeleportParams.size(); i++)
        {
            auto Params = TeleportParams[i];

            double Seconds = globals::rendering::LastFrame - Params.second.first;

            if (60 - Seconds < 0)
            {
				TeleportParams.erase(TeleportParams.begin() + i);
                break;
			}

            FVector2D pos1;
            FVector2D pos2;

            if (Actors::PWTS(Params.first.first, pos1))
            {
                std::wstring Distance1 = Xors(L"Start ") + std::to_wstring((int)globals::local::POS.Distance(Params.first.first) / 100) + Xors(L"M");
                Renderer::DrawString(Distance1.c_str(), pos1, {0.5, 0.5}, {1, 0, 0, 1}, true, {0,0,0,1}, true, true);
                Renderer::DrawString(Params.second.second.c_str(), { pos1.X,pos1.Y + 10.f}, { 0.5, 0.5 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
            }

            if (Actors::PWTS(Params.first.second, pos2))
            {
                std::wstring Distance2 = Xors(L"End ") + std::to_wstring((int)globals::local::POS.Distance(Params.first.second) / 100) + Xors(L"M");
                Renderer::DrawString(Distance2.c_str(), pos2, { 0.5, 0.5 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
                Renderer::DrawString(Params.second.second.c_str(), { pos2.X,pos2.Y + 10.f }, { 0.5, 0.5 }, { 1, 0, 0, 1 }, true, { 0,0,0,1 }, true, true);
            }
        }
    }
    else
        TeleportParams.clear();
}

std::unique_ptr<UserModule> UserModule::CreateModule()
{
    return std::make_unique<UserModule>();
}

void UserModule::ClearAntimeshESP()
{
    for (int i = 0; i < AntimeshVolumes.size(); i++)
	{
        AntimeshVolumes[i]->Reset();
		delete AntimeshVolumes[i];
	}

    AntimeshVolumes.clear();
}

void UserModule::DrawDamageNumber(CurrentActor* Target, FString Damage)
{
	if (!Target || !Target->Actor)
		return;

	float Scale = settings::user::dmgNumbers::Scale.Val;
	float MinScale = settings::user::dmgNumbers::MinScale.Val;
	float LifeSpan = settings::user::dmgNumbers::LifeSpan.Val;
    FVector Velocity = { 0.f, 0.f, settings::user::dmgNumbers::ZVelocity.Val };
    FLinearColor Color = {};

    if (Target->Actor->TargetingTeam < 1000)
		Color = settings::user::dmgNumbers::WildColor.Color;
	else if (Target->Actor->TargetingTeam == globals::local::LP->TargetingTeam)
		Color = settings::user::dmgNumbers::TeamColor.Color;
	else
		Color = settings::user::dmgNumbers::EnemyColor.Color;
    
    globals::local::PC->ClientAddFloatingText((FVector_NetQuantize)Target->Actor->K2_GetActorLocation(), Damage, FColor::FromLinear(Color), Scale, Scale, LifeSpan, Velocity, MinScale, 0.2f, 0.2f);
}

void UserModule::InitShowFlags()
{
    if (!globals::local::VP)
        globals::local::VP = UObject::FindObjectSingle<UShooterGameViewportClient*>(Xors(L"/Engine/Transient.ShooterEngine_2147482608:ShooterGameViewportClient_2147482433"));

    if (!globals::local::VP)
        return;

    settings::user::ShowFlags::PostProcessing.Enabled = globals::local::VP->ShowFlags.PostProcessing;
    settings::user::ShowFlags::Bloom.Enabled = globals::local::VP->ShowFlags.Bloom;
    settings::user::ShowFlags::LocalExposure.Enabled = globals::local::VP->ShowFlags.LocalExposure;
    settings::user::ShowFlags::AntiAliasing.Enabled = globals::local::VP->ShowFlags.AntiAliasing;
    settings::user::ShowFlags::TemporalAA.Enabled = globals::local::VP->ShowFlags.TemporalAA;
    settings::user::ShowFlags::AmbientCubemap.Enabled = globals::local::VP->ShowFlags.AmbientCubemap;
    settings::user::ShowFlags::EyeAdaptation.Enabled = globals::local::VP->ShowFlags.EyeAdaptation;
    settings::user::ShowFlags::GlobalIllumination.Enabled = globals::local::VP->ShowFlags.GlobalIllumination;
    settings::user::ShowFlags::Vignette.Enabled = globals::local::VP->ShowFlags.Vignette;
    settings::user::ShowFlags::AmbientOcclusion.Enabled = globals::local::VP->ShowFlags.AmbientOcclusion;
    settings::user::ShowFlags::Decals.Enabled = globals::local::VP->ShowFlags.Decals;
    settings::user::ShowFlags::OnScreenDebug.Enabled = globals::local::VP->ShowFlags.OnScreenDebug;
    settings::user::ShowFlags::VisualizeNanite.Enabled = globals::local::VP->ShowFlags.VisualizeNanite;
    settings::user::ShowFlags::VisualizeLumen.Enabled = globals::local::VP->ShowFlags.VisualizeLumen;
    settings::user::ShowFlags::VisualizeSubstrate.Enabled = globals::local::VP->ShowFlags.VisualizeSubstrate;
    settings::user::ShowFlags::VisualizeGroom.Enabled = globals::local::VP->ShowFlags.VisualizeGroom;
    settings::user::ShowFlags::VisualizeVirtualShadowMap.Enabled = globals::local::VP->ShowFlags.VisualizeVirtualShadowMap;
    settings::user::ShowFlags::PointLights.Enabled = globals::local::VP->ShowFlags.PointLights;
    settings::user::ShowFlags::SpotLights.Enabled = globals::local::VP->ShowFlags.SpotLights;
    settings::user::ShowFlags::RectLights.Enabled = globals::local::VP->ShowFlags.RectLights;
    settings::user::ShowFlags::DepthOfField.Enabled = globals::local::VP->ShowFlags.DepthOfField;
    settings::user::ShowFlags::MotionBlur.Enabled = globals::local::VP->ShowFlags.MotionBlur;
    settings::user::ShowFlags::CameraInterpolation.Enabled = globals::local::VP->ShowFlags.CameraInterpolation;
    settings::user::ShowFlags::ToneCurve.Enabled = globals::local::VP->ShowFlags.ToneCurve;
    settings::user::ShowFlags::SeparateTranslucency.Enabled = globals::local::VP->ShowFlags.SeparateTranslucency;
    settings::user::ShowFlags::ScreenPercentage.Enabled = globals::local::VP->ShowFlags.ScreenPercentage;
    settings::user::ShowFlags::ReflectionEnvironment.Enabled = globals::local::VP->ShowFlags.ReflectionEnvironment;
    settings::user::ShowFlags::Specular.Enabled = globals::local::VP->ShowFlags.Specular;
    settings::user::ShowFlags::ScreenSpaceReflections.Enabled = globals::local::VP->ShowFlags.ScreenSpaceReflections;
    settings::user::ShowFlags::LumenReflections.Enabled = globals::local::VP->ShowFlags.LumenReflections;
    settings::user::ShowFlags::ContactShadows.Enabled = globals::local::VP->ShowFlags.ContactShadows;
    settings::user::ShowFlags::RayTracedDistanceFieldShadows.Enabled = globals::local::VP->ShowFlags.RayTracedDistanceFieldShadows;
    settings::user::ShowFlags::CapsuleShadows.Enabled = globals::local::VP->ShowFlags.CapsuleShadows;
    settings::user::ShowFlags::VolumetricLightmap.Enabled = globals::local::VP->ShowFlags.VolumetricLightmap;
    settings::user::ShowFlags::IndirectLightingCache.Enabled = globals::local::VP->ShowFlags.IndirectLightingCache;
    settings::user::ShowFlags::TexturedLightProfiles.Enabled = globals::local::VP->ShowFlags.TexturedLightProfiles;
    settings::user::ShowFlags::LightFunctions.Enabled = globals::local::VP->ShowFlags.LightFunctions;
    settings::user::ShowFlags::NaniteMeshes.Enabled = globals::local::VP->ShowFlags.NaniteMeshes;
    settings::user::ShowFlags::InstancedStaticMeshes.Enabled = globals::local::VP->ShowFlags.InstancedStaticMeshes;
    settings::user::ShowFlags::InstancedFoliage.Enabled = globals::local::VP->ShowFlags.InstancedFoliage;
    settings::user::ShowFlags::InstancedGrass.Enabled = globals::local::VP->ShowFlags.InstancedGrass;
    settings::user::ShowFlags::DynamicShadows.Enabled = globals::local::VP->ShowFlags.DynamicShadows;
    settings::user::ShowFlags::Particles.Enabled = globals::local::VP->ShowFlags.Particles;
    settings::user::ShowFlags::SkeletalMeshes.Enabled = globals::local::VP->ShowFlags.SkeletalMeshes;
    settings::user::ShowFlags::Translucency.Enabled = globals::local::VP->ShowFlags.Translucency;
    settings::user::ShowFlags::LOD.Enabled = globals::local::VP->ShowFlags.LOD;
    settings::user::ShowFlags::Lighting.Enabled = globals::local::VP->ShowFlags.Lighting;
    settings::user::ShowFlags::DeferredLighting.Enabled = globals::local::VP->ShowFlags.DeferredLighting;
    settings::user::ShowFlags::StaticMeshes.Enabled = globals::local::VP->ShowFlags.StaticMeshes;
    settings::user::ShowFlags::Landscape.Enabled = globals::local::VP->ShowFlags.Landscape;
    settings::user::ShowFlags::Fog.Enabled = globals::local::VP->ShowFlags.Fog;
    settings::user::ShowFlags::Game.Enabled = globals::local::VP->ShowFlags.Game;
    settings::user::ShowFlags::BSP.Enabled = globals::local::VP->ShowFlags.BSP;
    settings::user::ShowFlags::LightShafts.Enabled = globals::local::VP->ShowFlags.LightShafts;
    settings::user::ShowFlags::Atmosphere.Enabled = globals::local::VP->ShowFlags.Atmosphere;
    settings::user::ShowFlags::TextRender.Enabled = globals::local::VP->ShowFlags.TextRender;
    settings::user::ShowFlags::HMDDistortion.Enabled = globals::local::VP->ShowFlags.HMDDistortion;
    settings::user::ShowFlags::StereoRendering.Enabled = globals::local::VP->ShowFlags.StereoRendering;
    settings::user::ShowFlags::SkyLighting.Enabled = globals::local::VP->ShowFlags.SkyLighting;
    settings::user::ShowFlags::Paper2DSprites.Enabled = globals::local::VP->ShowFlags.Paper2DSprites;
    settings::user::ShowFlags::ScreenSpaceAO.Enabled = globals::local::VP->ShowFlags.ScreenSpaceAO;
    settings::user::ShowFlags::DistanceFieldAO.Enabled = globals::local::VP->ShowFlags.DistanceFieldAO;
    settings::user::ShowFlags::LumenGlobalIllumination.Enabled = globals::local::VP->ShowFlags.LumenGlobalIllumination;
    settings::user::ShowFlags::VolumetricFog.Enabled = globals::local::VP->ShowFlags.VolumetricFog;
    settings::user::ShowFlags::WidgetComponents.Enabled = globals::local::VP->ShowFlags.WidgetComponents;
    settings::user::ShowFlags::MediaPlanes.Enabled = globals::local::VP->ShowFlags.MediaPlanes;
    settings::user::ShowFlags::PathTracing.Enabled = globals::local::VP->ShowFlags.PathTracing;
    settings::user::ShowFlags::VisualizeCalibrationColor.Enabled = globals::local::VP->ShowFlags.VisualizeCalibrationColor;
    settings::user::ShowFlags::VisualizeCalibrationGrayscale.Enabled = globals::local::VP->ShowFlags.VisualizeCalibrationGrayscale;
    settings::user::ShowFlags::VisualizeCalibrationCustom.Enabled = globals::local::VP->ShowFlags.VisualizeCalibrationCustom;
    settings::user::ShowFlags::LumenScreenTraces.Enabled = globals::local::VP->ShowFlags.LumenScreenTraces;
    settings::user::ShowFlags::LumenDetailTraces.Enabled = globals::local::VP->ShowFlags.LumenDetailTraces;
    settings::user::ShowFlags::LumenGlobalTraces.Enabled = globals::local::VP->ShowFlags.LumenGlobalTraces;
    settings::user::ShowFlags::LumenFarFieldTraces.Enabled = globals::local::VP->ShowFlags.LumenFarFieldTraces;
    settings::user::ShowFlags::LumenSecondaryBounces.Enabled = globals::local::VP->ShowFlags.LumenSecondaryBounces;
    settings::user::ShowFlags::LumenShortRangeAmbientOcclusion.Enabled = globals::local::VP->ShowFlags.LumenShortRangeAmbientOcclusion;
    settings::user::ShowFlags::ShaderPrint.Enabled = globals::local::VP->ShowFlags.ShaderPrint;
};

void AntimeshBorder::CreateAndTransformStructure()
{
    if (IsValid(this->Mesh))
        return;

    static UClass* StructureClass = nullptr;

    if (!StructureClass)
        StructureClass = UObject::FindClass(Xors("BlueprintGeneratedClass Floor_Metal.Floor_Metal_C"));

    if (StructureClass)
    {
        FVector pos = Center;
        pos.Z += (Extent.Z * 0.62);
        Mesh = (AFloor_Metal_C*)globals::libs::VictoryCore->STATIC_SpawnActorInWorld(UWorld::Singleton(), StructureClass, pos, Rotation.ToRotator(), nullptr, 0, FName(), globals::local::LP, globals::local::LP);
       
        if (Mesh) 
        {
            FVector scale = { this->Extent.X * 0.0069f,this->Extent.Y * 0.0069f,this->Extent.Z * 0.007f };
            Mesh->SetActorScale3D(scale);
            this->LastAppliedColor.R = 1.f - this->LastAppliedColor.R;
        }
        //else 
        //    nlog(Xors("Failed to spawn actor"));
    }
}

bool ColorCloseEnough(FLinearColor A, FLinearColor B, float maxDifference)
{
    return abs(A.R - B.R) <= maxDifference && abs(A.G - B.G) <= maxDifference && abs(A.B - B.B) <= maxDifference;
}

bool DisableDepthPrevious = false;

void AntimeshBorder::UpdateStructureColor()
{
    static UMaterial* Material = nullptr;
    FString Param = Xors(L"Color");
    if(!Material)
	{
        Material = UObject::FindObject<UMaterial>(Xors("Material M_SolidColor.M_SolidColor"));
		//if (!Material)
		//	nlog(Xors("Failed to find Material"));
	}
    const double ScaleDistanceStart = 50.f;
    const float MaxDifference = 0.1f;
    FLinearColor Color = GetDrawColor();
    if (!ColorCloseEnough(this->LastAppliedColor, Color, MaxDifference) || DisableDepthPrevious != settings::user::AntimeshDisableDepth.Enabled) {
        if (IsValid(Mesh) && IsValid(Mesh->MyStaticMesh)) {
            DisableDepthPrevious = settings::user::AntimeshDisableDepth.Enabled;
            ChamsModule::StaticCreateAndApplyMaterial(Mesh->MyStaticMesh, Color, Material, Param,settings::user::AntimeshDisableDepth.Enabled);
            this->LastAppliedColor = Color;
        }
    }
}

void AntimeshBorder::DrawEdges()
{
    const float Thickness = 3.f;

    FLinearColor Color = GetDrawColor();

    if (!Bottom1.IsValid())
        CalculateEdges();

    Renderer::DrawLine3DScreenCheck(Bottom1,Bottom2, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Bottom2, Bottom3, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Bottom3, Bottom4, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Bottom4, Bottom1, Thickness, Color);

    Renderer::DrawLine3DScreenCheck(Top1, Top2, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Top2, Top3, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Top3, Top4, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Top4, Top1, Thickness, Color);

    Renderer::DrawLine3DScreenCheck(Top1, Bottom1, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Top2, Bottom2, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Top3, Bottom3, Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Top4, Bottom4, Thickness, Color);

    Renderer::DrawLine3DScreenCheck(Bottom1, Top3, Thickness, Color);
}

void AntimeshBorder::CalculateEdges()
{
    Bottom1 = Center + Rotation.RotateVector(FVector(-Extent.X, -Extent.Y, -Extent.Z)); // Min X, Min Y, Min Z
    Bottom2 = Center + Rotation.RotateVector(FVector(Extent.X, -Extent.Y, -Extent.Z));  // Max X, Min Y, Min Z
    Bottom3 = Center + Rotation.RotateVector(FVector(Extent.X, Extent.Y, -Extent.Z));   // Max X, Max Y, Min Z
    Bottom4 = Center + Rotation.RotateVector(FVector(-Extent.X, Extent.Y, -Extent.Z));  // Min X, Max Y, Min Z

    Top1 = Center + Rotation.RotateVector(FVector(-Extent.X, -Extent.Y, Extent.Z));  // Min X, Min Y, Max Z
    Top2 = Center + Rotation.RotateVector(FVector(Extent.X, -Extent.Y, Extent.Z));   // Max X, Min Y, Max Z
    Top3 = Center + Rotation.RotateVector(FVector(Extent.X, Extent.Y, Extent.Z));    // Max X, Max Y, Max Z
    Top4 = Center + Rotation.RotateVector(FVector(-Extent.X, Extent.Y, Extent.Z));   // Min X, Max Y, Max Z
}

FLinearColor AntimeshBorder::GetDrawColor()
{
    return settings::user::AntimeshColor.Color;
}

void AntimeshBorder::Draw()
{
    if (!settings::user::AntimeshESP.Enabled)
        return;

    if (!Bottom1.IsValid())
        CalculateEdges();

    if (settings::user::AntimeshEspUseStaticMesh.Enabled)
    {
        if (!IsValid(this->Mesh))
            CreateAndTransformStructure();

        if (IsValid(this->Mesh))
			UpdateStructureColor();
    }
    else
    {
        if (IsValid(this->Mesh))
        {
            this->Mesh->K2_DestroyActor();
            this->Mesh = nullptr;
        }

		DrawEdges();
    }

}

FVector AntimeshBorder::GetCenter()
{
    return Center;
}
