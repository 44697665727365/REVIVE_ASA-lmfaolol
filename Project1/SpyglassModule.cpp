#include "pch.h"
#include "SpyglassModule.h"
#include "HookManager.h"

int CurrentSpyglassDistance;
APrimalCharacter* PlayerDinoActor;

bool SpyglassModule::OnModuleInit()
{
    CurrentSpyglassDistance = 999999;
    return true;
}

bool SpyglassModule::OnActorModule(CurrentActor* Current)
{
    if (!Current)
        return false;

    if (Current->Actor == globals::local::LP)
        return false;

    int Distance = Renderer::Distance2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y / 2, Current->ScreenPos.X, Current->ScreenPos.Y);

    if (40 < Distance)
        return false;

    if (!globals::local::PC->LineOfSightTo(Current->Actor, globals::local::CM->CameraCachePrivate.POV.Location, true))
        return false;

    if (Distance < CurrentSpyglassDistance)
    {
        CurrentSpyglassDistance = Distance;
        PlayerDinoActor = reinterpret_cast<APrimalCharacter*>(Current->Actor);
    }
    
    return false;
}

bool SpyglassModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    if (!IsValid(Current->Actor))
        return false;

    if (Current->Type != ActorType::Dino && Current->Type != ActorType::Player)
        return false;

    Current->Pos = Current->Actor->K2_GetActorLocation();
    Current->OnScreen = Actors::PWTS(Current->Pos, Current->ScreenPos);

    if (!Current->OnScreen)
        return false;

    return true;
}

void DrawArmorIcons(AShooterCharacter* target,FVector2D Center, FVector2D IconWidth);
void DrawSpyglassWidget();

void SpyglassModule::PostActors()
{
    CurrentSpyglassDistance = 999999;

    if (!settings::misc::Spyglass.Enabled)
        return;

    FHitResult trace = Util::GetTrace();

    if (UWorld::Singleton()->GetGlobalObjects().GetObjectPtr(trace.HitObjectHandle.Actor.ObjectIndex))
    {
        if (UWorld::Singleton()->GetGlobalObjects().GetObjectPtr(trace.HitObjectHandle.Actor.ObjectIndex)->IsA(APrimalStructure::StaticClass()))
            SpyglassTarget = (AActor*)UWorld::Singleton()->GetGlobalObjects().GetObjectPtr(trace.HitObjectHandle.Actor.ObjectIndex);
        else if (PlayerDinoActor && IsValid(PlayerDinoActor))
            SpyglassTarget = (AActor*)PlayerDinoActor;
    }
    else if (PlayerDinoActor && IsValid(PlayerDinoActor))
        SpyglassTarget = (AActor*)PlayerDinoActor;
    
    if (SpyglassTarget && IsValid(SpyglassTarget))
        DrawSpyglassWidget();

    PlayerDinoActor = nullptr;
}
std::unique_ptr<SpyglassModule> SpyglassModule::CreateModule()
{
    return std::make_unique<SpyglassModule>();
}

void DrawArmorIcons(AShooterCharacter* target,FVector2D Center, FVector2D IconWidth)
{
    FVector2D SmallWidth = { IconWidth.X - 5.f,IconWidth.Y - 5.f};
    FLinearColor GrayColor = { 0,0,0,0.5f };
    UTexture2D* Txtr = ((UEngine*)UEngine::StaticClass())->DefaultTexture;

    auto Character = reinterpret_cast<AShooterCharacter*>(target);
    auto Helmet = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Hat);
    auto Chest = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shirt);
    auto Gaunts = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Gloves);
    auto Legs = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Pants);
    auto Boots = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Boots);
    auto Shield = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shield);
    auto Length = 40;

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
}

AActor* SpyglassModule::SpyglassTarget;

void DrawStats(APrimalCharacter* Character,FVector2D TopLeftPos,FVector2D &outTextPos)
{
    FVector2D textPos = { TopLeftPos.X + 5, TopLeftPos.Y + 50 };
    FVector2D textOffset = { 0,20 };
    FVector2D textSize = { 0.6,0.6 };

    FString health = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::Health, false);
    FString stam = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::Stamina, false);
    FString food = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::Food, false);
    FString oxygen = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::Oxygen, false);
    FString weight = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::Weight, false);
    FString melee = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::MeleeDamageMultiplier, false);
    FString speed = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::SpeedMultiplier, false);
    FString crafting = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::CraftingSpeedMultiplier, false);
    FString fortitude = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::TemperatureFortitude, false);
    FString torpor = Character->MyCharacterStatusComponent->GetStatusValueString(EPrimalCharacterStatusValue::Torpidity, false);

    std::wstring healthstr = std::wstring(health.ToWString());
    std::wstring stamstr = std::wstring(stam.ToWString());
    std::wstring foodstr = std::wstring(food.ToWString());
    std::wstring oxygenstr = std::wstring(oxygen.ToWString());
    std::wstring weightstr = std::wstring(weight.ToWString());
    std::wstring meleestr = std::wstring(melee.ToWString());
    std::wstring speedstr = std::wstring(speed.ToWString());
    std::wstring craftingstr = std::wstring(crafting.ToWString());
    std::wstring fortitudestr = std::wstring(fortitude.ToWString());
    std::wstring torporstr = std::wstring(torpor.ToWString());

    Renderer::DrawString(healthstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(stamstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(foodstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(oxygenstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(weightstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(meleestr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(speedstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(craftingstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(fortitudestr, textPos,textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    Renderer::DrawString(torporstr, textPos, textSize, { 1,1,1,1 }, true, { 0,0,0,1 }, false, true);
    textPos += textOffset;
    outTextPos = textPos;
}

void DrawIconColor(UTexture* Icon, FVector2D ScreenPos, FVector2D TextureSize)
{
    double CenterX = TextureSize.X * 0.5f;
    double CenterY = TextureSize.Y * 0.5f;
    globals::rendering::canvas->K2_DrawTexture(Icon, { ScreenPos.X - CenterX,ScreenPos.Y - CenterY }, TextureSize, { 0.f,0.f }, { 1.f,1.f }, { 1.f,0.f,0.f,1.f }, EBlendMode::BLEND_MAX, 0.f, { 0.f,0.f });
}

void DrawIconAlpha(UTexture* Icon, FVector2D ScreenPos, FVector2D TextureSize, float Alpha)
{
    double CenterX = TextureSize.X * 0.5f;
    double CenterY = TextureSize.Y * 0.5f;
    globals::rendering::canvas->K2_DrawTexture(Icon, { ScreenPos.X - CenterX,ScreenPos.Y - CenterY }, TextureSize, { 0.f,0.f }, { 1.f,1.f }, { 0.f,0.f,0.f,Alpha }, EBlendMode::BLEND_MAX, 0.f, { 0.f,0.f });
}

void DrawBG(FVector2D Pos, FVector2D Size, FLinearColor Color)
{
    float LineWidth = 2.f;
    DrawIconAlpha(UEngine::GetEngine()->DefaultTexture, { Pos.X + (Size.X / 2.f),Pos.Y + (Size.Y / 2.f) }, Size, 0.4f);
    Renderer::DrawLine2D(Pos, { Pos.X + Size.X,Pos.Y }, LineWidth, Color);
    Renderer::DrawLine2D(Pos, { Pos.X,Pos.Y + Size.Y }, LineWidth, Color);
    Renderer::DrawLine2D({ Pos.X + Size.X,Pos.Y }, { Pos.X + Size.X,Pos.Y + Size.Y }, LineWidth, Color);
    Renderer::DrawLine2D({ Pos.X,Pos.Y + Size.Y }, { Pos.X + Size.X,Pos.Y + Size.Y }, LineWidth, Color);

}

std::wstring AggroToString(int Aggro)
{
    switch (Aggro)
    {
	case 0:
		return Xors(L"Passive");
	case 1:
		return Xors(L"Neutral");
	case 2:
		return Xors(L"Aggressive");
	case 3:
		return Xors(L"Attack My Target");
	default:
		return Xors(L"Aggro Unknown");
	}
}

void DrawStructureHealthBar(APrimalStructure* actor,FVector2D Pos,FVector2D Size)
{
    if (!IsValid(actor))
        return;

    if (!actor->RootComponent)
        return;

    auto world = *UWorld::GWorld;

    float max_health = actor->MaxHealth;
    float health = actor->Health;

    if (health <= 0.f)
        return;

    float Width = Size.X;
    float HalfWidth = Size.X / 2.f;
    float Height = Size.Y;
    float HalfHeight = Size.Y / 2.f;

    FVector2D Left = FVector2D(Pos.X - HalfWidth, Pos.Y - HalfHeight);
    FVector2D Right = FVector2D(Left.X + (Width * (health / max_health)), Pos.Y + HalfHeight);

    FLinearColor color = Renderer::HealthColorGradient(health / max_health);

    float health_width = (Width) * (health / max_health);

    Renderer::RenderFilledRectangle(FVector2D(Left.X + health_width, Left.Y), Width - (Width * (health / max_health)), Height, { 0.0f, 0.0f, 0.0f, 0.6f });
    Renderer::RenderFilledRectangle(Left, Right.X - Left.X, Height, color);

    std::wstring HealthString = std::to_wstring((int)(health));
    Renderer::DrawString(HealthString, FVector2D(Pos.X, Pos.Y - HalfHeight), FVector2D(0.7,0.7), FLinearColor{ 1.f,1.f,1.f,1.f }, true, FLinearColor{ 0.f,0.f,0.f,0.5f }, true, false);
}

void DrawSpyglassWidget()
{
    FVector2D TopLeftPos = { Renderer::GetCanvasSize().X * 0.81, Renderer::GetCanvasSize().Y * 0.001 };

    if (!IsValid(SpyglassModule::SpyglassTarget) || !SpyglassModule::SpyglassTarget)
		return;

    if (SpyglassModule::SpyglassTarget->IsA(AShooterCharacter::StaticClass()))
    {
        DrawBG(TopLeftPos, { 300,290 }, { 0.1f,0.1f,0.1f,1.f });
        AShooterCharacter* Character = (AShooterCharacter*)SpyglassModule::SpyglassTarget;
        FString name = Character->GetDescriptiveName();
        FLinearColor DrawColor;
        bool IsVisible = globals::local::PC->LineOfSightTo(SpyglassModule::SpyglassTarget, globals::local::CM->CameraCache.POV.Location, true);
        bool IsDead = Character->IsDead();
        bool IsSleeping = !Character->BPIsConscious();

        if (Character->TargetingTeam == globals::local::LP->TargetingTeam)
        {
            IsVisible ? DrawColor = settings::teamPlayer::TeamColor.Color : DrawColor = settings::teamPlayer::TeamNonvisibleColor.Color;

            if (IsSleeping)
                DrawColor = settings::teamPlayer::TeamSleepingColor.Color;

            if (IsDead)
                DrawColor = settings::teamPlayer::TeamDeadColor.Color;
        }
        else
        {
            IsVisible ? DrawColor = settings::enemyPlayer::EnemyColor.Color : DrawColor = settings::enemyPlayer::EnemyNonvisibleColor.Color;

            if (IsSleeping)
                DrawColor = settings::enemyPlayer::EnemySleepingColor.Color;

            if (IsDead)
                DrawColor = settings::enemyPlayer::EnemyDeadColor.Color;
        }

        Renderer::DrawString(name, { TopLeftPos.X + 140, TopLeftPos.Y + 10 }, { 1,1 }, DrawColor, true, true, FLinearColor(0.f, 0.f, 0.f, 1.f));
        FVector2D textPos = { TopLeftPos.X + 5, TopLeftPos.Y + 50 };
        FVector2D textOffset = { 0,20 };

        DrawStats(Character, TopLeftPos, textPos);
        DrawArmorIcons(Character, { TopLeftPos.X + 150,TopLeftPos.Y + 260 }, { 40.f,40.f });
    }
    else if (SpyglassModule::SpyglassTarget->IsA(APrimalDinoCharacter::StaticClass()))
    {
        APrimalDinoCharacter* Character = (APrimalDinoCharacter*)SpyglassModule::SpyglassTarget;

        if (Character->bIsBaby)
            return;

        DrawBG(TopLeftPos, { 300,305 }, { 0.1f,0.1f,0.1f,1.f });
        FLinearColor DrawColor = { 1,1,1,1 };
        FVector2D textPos = { TopLeftPos.X + 5, TopLeftPos.Y + 50 };
        FVector2D textOffset = { 0,20 };
        bool tamed = Character->BPIsTamed();
        FVector2D bgPos = { TopLeftPos.X + 5,TopLeftPos.Y + 5 };
        Renderer::RenderFilledRoundedRectangle(&bgPos, 40.f, 40.f, 4.f, { 0.7f,0.7f,0.7f,1.f });
        UTexture* dinoicon = Character->GetDinoEntryIcon();//Stanceicon
        if (dinoicon)
        {
            DrawIconColor(dinoicon, { TopLeftPos.X + 25, TopLeftPos.Y + 25 }, { 40.f,40.f });
        }
        if (tamed)
        {
            if (Character->TargetingTeam == globals::local::LP->TargetingTeam)
				DrawColor = settings::teamDino::TeamDinoColor.Color;
			else
				DrawColor = settings::enemyDino::EnemyDinoColor.Color;
        }
        FString name = Character->GetDescriptiveName();
        Renderer::DrawString(name, { TopLeftPos.X + 50, TopLeftPos.Y + 15 }, { 0.7,0.7 }, DrawColor, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));

        DrawStats(Character, TopLeftPos, textPos);
        std::wstring genderString = Xors(L"Male");

        if (Character->bIsFemale)
        {
            genderString = Xors(L"Female");
        }

        FLinearColor col = Character->bIsFemale ? FLinearColor{ 1.f, 0.2f, 0.5f, 1.f } : FLinearColor{ 0.f, 0.f, 1.f, 1.f };
        Renderer::DrawString(genderString.c_str(), textPos, { 0.6,0.6 },col, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
        textPos += textOffset;
        if (tamed) 
        {
            if (Character->TribeName.Data() && Character->TribeName.Count() > 1)
            {
                std::wstring tribeName = Character->TribeName.ToWString();
                Renderer::DrawString(tribeName.c_str(), textPos, { 0.6,0.6 }, { 1,1,1,1 }, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
                textPos += textOffset;
            }
            std::wstring stance = AggroToString(Character->TamedAggressionLevel);
            Renderer::DrawString(stance.c_str(), textPos, { 0.6,0.6 }, { 1,1,1,1 }, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
            textPos += textOffset;
            if (Character->MyInventoryComponent)
            {
                float armor = Character->MyInventoryComponent->GetEquippedArmorRating(EPrimalEquipmentType::DinoSaddle);
                std::wstring armorstr = Xors(L"Saddle: ") + std::to_wstring((int)armor);
                Renderer::DrawString(armorstr.c_str(), textPos, { 0.6,0.6 }, { 1,1,1,1 }, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
                textPos += textOffset;
            }
            if (Character->ImprinterName.Data())
            {
                std::wstring imprinter = Xors(L"Imp: ") + Character->ImprinterName.ToWString();
                Renderer::DrawString(imprinter.c_str(), textPos, { 0.6,0.6 }, { 1,1,1,1 }, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
                textPos += textOffset;
            }
        }
    }
    else if (SpyglassModule::SpyglassTarget->IsA(APrimalStructure::StaticClass()))
    {
        APrimalStructure* Structure = (APrimalStructure*)SpyglassModule::SpyglassTarget;

        if (Structure->IsA(APrimalStructureItemContainer::StaticClass()))
            DrawBG(TopLeftPos, { 300,103 }, { 0.1f,0.1f,0.1f,1.f });
        else
            DrawBG(TopLeftPos, { 300,85 }, { 0.1f,0.1f,0.1f,1.f });
		FString name = Structure->GetDescriptiveName();
		FLinearColor DrawColor = { 1,1,1,1 };
        if (Structure->TargetingTeam == globals::local::LP->TargetingTeam)
        {
            DrawColor = {0,1,0,1 };
		}
        else
        {
            DrawColor = {1,0,0,1};
		}
		Renderer::DrawString(name, { TopLeftPos.X + 140, TopLeftPos.Y + 10 }, { 1,1 }, DrawColor, true, true, FLinearColor(0.f, 0.f, 0.f, 1.f));
		FVector2D textPos = { TopLeftPos.X + 5, TopLeftPos.Y + 50 };
		FVector2D textOffset = { 0,20 };
        
        DrawStructureHealthBar(Structure, { TopLeftPos.X + 150,textPos.Y }, { 260,25 });

        std::wstring tribe = Xors(L"Owner: ");
        tribe += Structure->OwnerName.Data() ? Structure->OwnerName.ToWString() : Xors(L"None");
        textPos += textOffset;
        Renderer::DrawString(tribe.c_str(), textPos, { 0.6,0.6 }, { 1,1,1,1 }, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
        textPos += textOffset;
        if (Structure->IsA(APrimalStructureItemContainer::StaticClass()))
        {
			APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)Structure;

            if (Container->MyInventoryComponent)
            {
                int Items = Container->CurrentItemCount;
                int MaxItems = Container->MaxItemCount;
				std::wstring ItemsStr = Xors(L"Items: ") + std::to_wstring(Items) + Xors(L" / ") + std::to_wstring(MaxItems);
				Renderer::DrawString(ItemsStr.c_str(), textPos, { 0.6,0.6 }, { 1,1,1,1 }, true, false, FLinearColor(0.f, 0.f, 0.f, 1.f));
				textPos += textOffset;
			}
		}
    }
}