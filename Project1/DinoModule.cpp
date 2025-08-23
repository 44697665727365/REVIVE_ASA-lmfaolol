#include "pch.h"
#include "DinoModule.h"
#include "ChamsModule.h"
#include "PlayerModule.h"
bool DinoModule::OnModuleInit()
{
    return true;
}

bool DinoModule::OnActorModule(CurrentActor* Current)
{
    APrimalDinoCharacter* Dino = (APrimalDinoCharacter*)Current->Actor;

    if (Dino->bIsDead)
        return false;

    if (!settings::wildDino::EnableWildDino.Enabled && !settings::teamDino::EnableTeamDino.Enabled && !settings::enemyDino::EnableEnemyDino.Enabled)
        return false;

    bool tamed = Dino->TargetingTeam >= 100;

    if (!tamed && !settings::wildDino::EnableWildDino.Enabled)
        return false;

    Current->Pos = Dino->K2_GetActorLocation();
        
    if (!Actors::PWTS(Current->Pos, Current->ScreenPos))
        return false;

    Current->IsFriendly = Dino->TargetingTeam == globals::local::LP->TargetingTeam;

    if (!tamed && !Current->IsFriendly && settings::wildDino::EnableWildDino.Enabled)
    {
        if (settings::wildDino::OnlyVisible.Enabled) 
        {
            Current->IsVisible = globals::local::PC->LineOfSightTo(Dino, globals::local::CM->CameraCache.POV.Location, true);

            if (!Current->IsVisible)
                return false;
        }

        int level = Dino->MyCharacterStatusComponent->BaseCharacterLevel;

        if (settings::wildDino::LevelFilter.Enabled) 
        {
            switch (settings::wildDino::LevelFilterType.Val)
            {
            case 0: // below
                if (level > settings::wildDino::LevelFilter.Val)
                    return false;
                break;
            case 1: // equal
                if (level != settings::wildDino::LevelFilter.Val)
                    return false;
                break;
            case 2: // above
                if (level < settings::wildDino::LevelFilter.Val)
                    return false;
                break;
            default:
                return false;
                break;
            }
        }

        if (settings::wildDino::Bossfight.Enabled)
        {
            std::string DinoName = to_lower(Dino->GetDescriptiveName().ToString());

            switch (settings::wildDino::CurrentBoss)
            {
            case 0:
                //monkey
                if (DinoName.find(Xors("megalania")) &&
                    DinoName.find(Xors("megalodon")) &&
                    DinoName.find(Xors("spino")) &&
                    DinoName.find(Xors("theri")) &&
                    DinoName.find(Xors("thyla")))
                    return false;
                break;
            case 1:
                //dragon
                if (DinoName.find(Xors("allo")) &&
                    DinoName.find(Xors("basilo")) &&
                    DinoName.find(Xors("tuso")) &&
                    DinoName.find(Xors("rex")) &&
                    DinoName.find(Xors("yuty")) &&
                    DinoName.find(Xors("giga")))
                    return false;
                break;
            case 2:
                //brood
                if (DinoName.find(Xors("arge")) &&
                    DinoName.find(Xors("sarco")) &&
                    DinoName.find(Xors("titano")) &&
                    DinoName.find(Xors("bronto")) &&
                    DinoName.find(Xors("diplo")))
                    return false;
                break;
            case 3:
                // center
                if (DinoName.find(Xors("arge")) &&
                    DinoName.find(Xors("basilo")) &&
                    DinoName.find(Xors("megalania")) &&
                    DinoName.find(Xors("megalodon")) &&
                    DinoName.find(Xors("bronto")) &&
                    DinoName.find(Xors("diplo")) &&
                    DinoName.find(Xors("sarco")) &&
                    DinoName.find(Xors("spino")) &&
                    DinoName.find(Xors("titano")) &&
                    DinoName.find(Xors("tuso")) &&
                    DinoName.find(Xors("thyla")))
                    return false;
                break;
            case 4:
                // manticore
                if (DinoName.find(Xors("wyvern")))
                    return false;
                break;
            case 5:
                // abberation
                if (DinoName.find(Xors("basilisk")) &&
                    DinoName.find(Xors("reaper")) &&
                    DinoName.find(Xors("rock d")) &&
                    DinoName.find(Xors("namel")))                   
                    return false;
                break;
            }
        }

        if (settings::wildDino::EnableFilter)
        {
            if (!globals::libs::StringLib->STATIC_Contains(Dino->GetDescriptiveName(), settings::wildDino::WildDinoString.c_str(), false, false))
                return false;
        }

        std::wstring DrawString = Xors(L"");

        if (settings::wildDino::Name.Enabled)
        {
            DrawString += Dino->GetDescriptiveName().ToWString();

            if (Dino->bIsFemale)
                DrawString += Xors(L" F");
            else
                DrawString += Xors(L" M");
        }

        if (settings::wildDino::Distance.Enabled)
        {
            Current->distance = globals::local::POS.Distance(Current->Pos);
            DrawString += Xors(L" [");
            DrawString += std::to_wstring((int)(Current->distance / 100.f));
            DrawString += Xors(L"M]");
        }

        if (settings::wildDino::Health.Enabled)
            Renderer::RenderHorizontalHealth((AShooterCharacter*)Dino, { Current->ScreenPos.X,Current->ScreenPos.Y - 10 });

        Renderer::DrawString(DrawString.c_str(), Current->ScreenPos, { 0.45f,0.45f }, settings::wildDino::WildDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);

        if (settings::wildDino::Chams.Enabled)
            ChamsModule::CreateAndApplyMaterial(Dino->Mesh, settings::wildDino::WildDinoColor.Color);

        return true;
    }
    else if (tamed && Current->IsFriendly && settings::teamDino::EnableTeamDino.Enabled)
    {
        Current->IsVisible = globals::local::PC->LineOfSightTo(Dino, globals::local::CM->CameraCache.POV.Location, true);

        if (settings::teamDino::OnlyVisible.Enabled && !Current->IsVisible)
            return false;

        int spacing = 0;
        std::wstring DrawString = Xors(L"");

        if (settings::teamDino::Name.Enabled || settings::teamDino::Distance.Enabled)
            spacing += 12;

        if (settings::teamDino::Name.Enabled)
            DrawString += Dino->GetDescriptiveName().ToWString();

        if (settings::teamDino::Distance.Enabled)
        {
            Current->distance = globals::local::LP->K2_GetActorLocation().Distance(Current->Pos);
            DrawString += Xors(L" [");
            DrawString += std::to_wstring((int)(Current->distance / 100.f));
            DrawString += Xors(L"M]");
        }

        if (settings::teamDino::Health.Enabled) 
        {
            Renderer::RenderHorizontalStam((AShooterCharacter*)Dino, { Current->ScreenPos.X,Current->ScreenPos.Y - 18 });
            Renderer::RenderHorizontalHealth((AShooterCharacter*)Dino, { Current->ScreenPos.X,Current->ScreenPos.Y - 10 });
        }

        Renderer::DrawString(DrawString.c_str(), Current->ScreenPos, { 0.45f,0.45f }, settings::teamDino::TeamDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);

        if (settings::teamDino::Aggression.Enabled)
        {
            switch (Dino->TamedAggressionLevel)
            {
            case 0:
                Renderer::DrawString(Xors(L"Passive"), {Current->ScreenPos.X , Current->ScreenPos.Y + spacing}, { 0.45f,0.45f }, settings::teamDino::TeamDinoColor.Color, true, {0.f,0.f,0.f,0.5f}, true, true);
                break;
            case 1:
                Renderer::DrawString(Xors(L"Neutral"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::teamDino::TeamDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            case 2:
                Renderer::DrawString(Xors(L"Aggressive"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::teamDino::TeamDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            case 3:
                Renderer::DrawString(Xors(L"Attack Your Target"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::teamDino::TeamDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            }
        }

        if (settings::teamDino::Chams.Enabled)
            ChamsModule::CreateAndApplyMaterial(Dino->Mesh, settings::teamDino::TeamDinoColor.Color);
    }
    else if (tamed && !Current->IsFriendly && settings::enemyDino::EnableEnemyDino.Enabled)
    {
        Current->IsVisible = globals::local::PC->LineOfSightTo(Dino, globals::local::CM->CameraCache.POV.Location, true);

        if (settings::enemyDino::OnlyVisible.Enabled && !Current->IsVisible)
            return false;

        std::wstring DrawString = Xors(L"");
        int spacing = 0;

        if (settings::enemyDino::Name.Enabled || settings::enemyDino::Distance.Enabled)
            spacing += 12;

        if (settings::enemyDino::Name.Enabled)
            DrawString += Dino->GetDescriptiveName().ToWString();

        if (settings::enemyDino::Distance.Enabled)
        {
            Current->distance = globals::local::LP->K2_GetActorLocation().Distance(Current->Pos);
            DrawString += Xors(L" [");
            DrawString += std::to_wstring((int)(Current->distance / 100.f));
            DrawString += Xors(L"M]");
        }

        if (settings::enemyDino::Health.Enabled) 
        {
            Renderer::RenderHorizontalStam((AShooterCharacter*)Dino, { Current->ScreenPos.X, Current->ScreenPos.Y - 18 });
            Renderer::RenderHorizontalHealth((AShooterCharacter*)Dino, { Current->ScreenPos.X, Current->ScreenPos.Y - 10 });
        }

        Renderer::DrawString(DrawString.c_str(), Current->ScreenPos, { 0.45f,0.45f }, settings::enemyDino::EnemyDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);


        if (settings::enemyDino::Aggression.Enabled)
        {
            switch (Dino->TamedAggressionLevel)
            {
            case 0:
                Renderer::DrawString(Xors(L"Passive"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::enemyDino::EnemyDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            case 1:
                Renderer::DrawString(Xors(L"Neutral"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::enemyDino::EnemyDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            case 2:
                Renderer::DrawString(Xors(L"Aggressive"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::enemyDino::EnemyDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            case 3:
                Renderer::DrawString(Xors(L"Attack Your Target"), { Current->ScreenPos.X , Current->ScreenPos.Y + spacing }, { 0.45f,0.45f }, settings::enemyDino::EnemyDinoColor.Color, true, { 0.f,0.f,0.f,0.5f }, true, true);
                break;
            }
        }

        if (settings::enemyDino::Chams.Enabled)
            ChamsModule::CreateAndApplyMaterial(Dino->Mesh, settings::enemyDino::EnemyDinoColor.Color);
    }

    return false;
}

bool DinoModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    if (Current->Type != ActorType::Dino)
        return false;

    return true;
}

void DinoModule::PostActors()
{
}

std::unique_ptr<DinoModule> DinoModule::CreateModule()
{
    return std::make_unique<DinoModule>();
}