#include "pch.h"
#include "DinoFeaturesModule.h"
#include "PlayerModule.h"

bool DinoFeaturesModule::OnModuleInit()
{
    return true;
}

bool DinoFeaturesModule::OnActorModule(CurrentActor* Current)
{
    APrimalDinoCharacter* Dino = reinterpret_cast<APrimalDinoCharacter*>(Current->Actor);

    if (!Dino || Dino->bIsDead) 
        return false;

    Current->IsFriendly = Dino->TargetingTeam == globals::local::LP->TargetingTeam;

    if (settings::misc::BolaPackageLoaded && Current->IsFriendly && settings::misc::RemoveBolas.Enabled && settings::misc::RemoveDinoBolas && Dino->K2_GetActorLocation().Distance(globals::local::POS) < 1500) 
    {
        ABuff_Bola_C* Buff = (ABuff_Bola_C*)Dino->GetBuff(ABuff_Bola_C::StaticClass());

        if (Buff)
            globals::local::PC->ServerMultiUse(Dino, 20001);
    }

    return false;
}
bool DinoFeaturesModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    if (!Current->Actor || Current->Type != ActorType::Dino)
        return false;

    return true;
}

void DinoFeaturesModule::PostActors()
{
    if (!globals::local::DP || globals::local::DP->bIsDead)
        return;

    if (settings::dinoFeatures::InstaTurn.Enabled)
        globals::local::DP->K2_SetActorRotation(globals::local::PC->PlayerCameraManager->GetCameraRotation(), false);

    if (settings::dinoFeatures::BackwardsFly.Enabled)
        globals::local::DP->bFlyerDinoAllowBackwardsFlight = true;

    if (settings::dinoFeatures::OmniFly.Enabled)
        globals::local::DP->bFlyerDinoAllowStrafing = true;

    if (settings::autoMation::AutoAttack.Enabled)
        globals::local::DP->ServerRequestAttack(0);

    if (settings::dinoFeatures::BetterRavager.Enabled && Keyboard::GetState(settings::dinoFeatures::BetterRavager.KeyBindForVar, 0))
    {
       AZipline_Anchor_C* ZiplineActor = nullptr;
       int Distance = 100000;

       for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
       {
           AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

           if (!Actors)
               continue;

           if (Actors->IsA(AZipline_Anchor_C::StaticClass()))
           {
               FVector2D Loc2D;

               if (!Actors::PWTS(Actors->K2_GetActorLocation(), Loc2D))
                   continue;

               int DistanceFromCenter = Renderer::Distance2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2, Loc2D.X, Loc2D.Y);

               if (DistanceFromCenter > 550)
                   continue;

               if (Distance > DistanceFromCenter)
               {
                   ZiplineActor = (AZipline_Anchor_C*)Actors;

                   Distance = DistanceFromCenter;
               }
           }
       }

       if (ZiplineActor && globals::local::DP->IsA(ACaveWolf_Character_BP_C::StaticClass()))
       {
           ACaveWolf_Character_BP_C* Rav = (ACaveWolf_Character_BP_C*)globals::local::DP;

           Rav->AttachToZipline_RunOnServer(ZiplineActor, ZiplineActor->K2_GetActorLocation());
       }
    }

    if (settings::dinoFeatures::BetterYiLing.Enabled && Keyboard::GetState(settings::dinoFeatures::BetterYiLing.KeyBindForVar, 1))
    {
        FVector2D Impulse = { 0,0 };

        bool W = Keyboard::GetState('W', 1);
        bool S = Keyboard::GetState('S', 1);
        bool A = Keyboard::GetState('A', 1);
        bool D = Keyboard::GetState('D', 1);

        if (W && !S && !A && !D)
            Impulse = { 0.25,0 };
        else if (!W && S && !A && !D)
            Impulse = { -0.25,0 };
        else if (!W && !S && A && !D)
            Impulse = { 0,-1 };
        else if (!W && !S && !A && D)
            Impulse = { 0, 1 };
        else if (W && !S && A && !D)
            Impulse = { 0.25, -1 };
        else if (W && !S && !A && D)
            Impulse = { 0.25, 1 };
        else if (!W && S && A && !D)
            Impulse = { -0.25, -1 };
        else if (!W && S && !A && D)
            Impulse = { -0.25, 1 };

        if (globals::local::DP->IsA(AYiLing_Character_BP_C::StaticClass()))
        {
            AYiLing_Character_BP_C* YiLing = (AYiLing_Character_BP_C*)globals::local::DP;

            YiLing->Server_AttemptDash(Impulse * settings::dinoFeatures::YiLingMultiplier, false);
            YiLing->Server_AttemptDash(Impulse * settings::dinoFeatures::YiLingMultiplier, false);
            YiLing->Server_AttemptDash(Impulse * settings::dinoFeatures::YiLingMultiplier, false);
            YiLing->Server_AttemptDash(Impulse * settings::dinoFeatures::YiLingMultiplier, false);
            YiLing->Server_AttemptDash(Impulse * settings::dinoFeatures::YiLingMultiplier, false);
        }
    }
}

std::unique_ptr<DinoFeaturesModule> DinoFeaturesModule::CreateModule()
{
    return std::make_unique<DinoFeaturesModule>();
}