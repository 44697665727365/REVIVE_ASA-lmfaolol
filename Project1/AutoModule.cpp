#include "pch.h"
#include "AutoModule.h"

int DediNumber = 0;
int TroughNummber = 0;
int BabyNumber = 0;
int ImprintNumber = 0;
int AchatinaNumber = 0;
int popcornctr = 0;
int takectr = 0;

std::vector<APrimalDinoCharacter*> BabyArray;
std::vector<APrimalDinoCharacter*> AchatinaArray;
std::vector<APrimalStructureItemContainer*> TroughArray;
std::vector<APrimalDinoCharacter*> ImprintArray;

bool AutoModule::OnModuleInit()
{
    return true;
}

bool AutoModule::OnActorModule(CurrentActor* Current)
{
    float Distance = Current->Actor->K2_GetActorLocation().Distance(globals::local::POS);

    if (settings::autoMation::AutoLoot.Enabled && Distance <= 1500 && takectr < 4)
    {
        if (Current->Actor->IsA(APrimalStructureTurret::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoTakeTurrets.Enabled)
        {
            APrimalStructureTurret* Turret = (APrimalStructureTurret*)Current->Actor;

            if (Turret && Turret->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Turret->MyInventoryComponent, true, false);
                
                bool once = false;

                for (int x = 0; x < Turret->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Turret->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                    if (!once)
                    {
                        takectr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(ADeathItemCache_C::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoTakeBags.Enabled)
        {
            ADeathItemCache_C* ItemCache = (ADeathItemCache_C*)Current->Actor;

            if (ItemCache && ItemCache->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(ItemCache->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < ItemCache->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = ItemCache->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(ItemCache->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                    if (!once)
                    {
                        takectr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(APrimalStructureItemContainer::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoTakeStructures.Enabled)
        {
            APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)Current->Actor;

            if (Container && Container->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Container->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(Container->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                    if (!once)
                    {
                        takectr++;
                        once = true;
                    }
                }

            }
        }

        if (Current->Actor->IsA(AShooterCharacter::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoTakePlayers.Enabled)
        {
            if (Current->IsDead || Current->IsSleeping)
            {
                AShooterCharacter* Player = (AShooterCharacter*)Current->Actor;

                if (Player && Player->MyInventoryComponent && Player->MyInventoryComponent->InventoryItems._data)
                {
                    globals::local::PC->ServerRequestActorItems(Player->MyInventoryComponent, true, false);

                    bool once = false;

                    for (int x = 0; x < Player->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->InventoryItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerTransferFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                        if (!once)
                        {
                            takectr++;
                            once = true;
                        }
                    }

                    for (int x = 0; x < Player->MyInventoryComponent->EquippedItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->EquippedItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerTransferFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                        if (!once)
                        {
                            takectr++;
                            once = true;
                        }
                    }
                }
            }
        }
    }

    if (settings::autoMation::AutoPopcorn.Enabled && Distance <= 1500 && popcornctr < 4)
    {
        if (Current->Actor->IsA(APrimalStructureTurret::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoPopcornTurrets.Enabled)
        {
            APrimalStructureTurret* Turret = (APrimalStructureTurret*)Current->Actor;

            if (Turret && Turret->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Turret->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < Turret->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Turret->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerDropFromRemoteInventory(Turret->MyInventoryComponent, Item->ItemID);

                    if (!once)
                    {
                        popcornctr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(ADeathItemCache_C::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoPopcornBags.Enabled)
        {
            ADeathItemCache_C* ItemCache = (ADeathItemCache_C*)Current->Actor;

            if (ItemCache && ItemCache->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(ItemCache->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < ItemCache->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = ItemCache->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerDropFromRemoteInventory(ItemCache->MyInventoryComponent, Item->ItemID);

                    if (!once)
                    {
                        popcornctr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(APrimalStructureItemContainer::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoPopcornStructures.Enabled)
        {
            APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)Current->Actor;

            if (Container && Container->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Container->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerDropFromRemoteInventory(Container->MyInventoryComponent, Item->ItemID);

                    if (!once)
                    {
                        popcornctr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(AShooterCharacter::StaticClass()) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::AutoPopcornPlayers.Enabled)
        {
            if (Current->IsDead || Current->IsSleeping)
            {
                AShooterCharacter* Player = (AShooterCharacter*)Current->Actor;

                if (Player && Player->MyInventoryComponent)
                {
                    globals::local::PC->ServerRequestActorItems(Player->MyInventoryComponent, true, false);

                    bool once = false;

                    for (int x = 0; x < Player->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->InventoryItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerDropFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID);

                        if (!once)
                        {
                            popcornctr++;
                            once = true;
                        }
                    }

                    for (int x = 0; x < Player->MyInventoryComponent->EquippedItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->EquippedItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerDropFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID);

                        if (!once)
                        {
                            popcornctr++;
                            once = true;
                        }
                    }
                }
            }
        }
    }

    if (settings::autoMation::TeamAutoLoot.Enabled && Distance <= 1500 && takectr < 4)
    {
        if (Current->Actor->IsA(APrimalStructureTurret::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoTakeTurrets.Enabled)
        {
            APrimalStructureTurret* Turret = (APrimalStructureTurret*)Current->Actor;

            if (Turret && Turret->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Turret->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < Turret->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Turret->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                    if (!once)
                    {
                        takectr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(ADeathItemCache_C::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoTakeBags.Enabled)
        {
            ADeathItemCache_C* ItemCache = (ADeathItemCache_C*)Current->Actor;

            if (ItemCache && ItemCache->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(ItemCache->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < ItemCache->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = ItemCache->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(ItemCache->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                    if (!once)
                    {
                        takectr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(APrimalStructureItemContainer::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoTakeStructures.Enabled)
        {
            APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)Current->Actor;

            if (Container && Container->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Container->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(Container->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                    if (!once)
                    {
                        takectr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(AShooterCharacter::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoTakePlayers.Enabled)
        {
            if (Current->IsDead || Current->IsSleeping)
            {
                AShooterCharacter* Player = (AShooterCharacter*)Current->Actor;

                if (Player && Player->MyInventoryComponent)
                {
                    globals::local::PC->ServerRequestActorItems(Player->MyInventoryComponent, true, false);

                    bool once = false;

                    for (int x = 0; x < Player->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->InventoryItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerTransferFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                        if (!once)
                        {
                            takectr++;
                            once = true;
                        }
                    }

                    for (int x = 0; x < Player->MyInventoryComponent->EquippedItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->EquippedItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerTransferFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);

                        if (!once)
                        {
                            takectr++;
                            once = true;
                        }
                    }
                }
            }
        }
    }

    if (settings::autoMation::TeamAutoPopcorn.Enabled && Distance <= 1500 && popcornctr < 4)
    {
        if (Current->Actor->IsA(ADeathItemCache_C::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoPopcornBags.Enabled)
        {
            ADeathItemCache_C* ItemCache = (ADeathItemCache_C*)Current->Actor;

            if (ItemCache && ItemCache->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(ItemCache->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < ItemCache->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = ItemCache->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerDropFromRemoteInventory(ItemCache->MyInventoryComponent, Item->ItemID);

                    if (!once)
                    {
                        popcornctr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(APrimalStructureItemContainer::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoPopcornStructures.Enabled)
        {
            APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)Current->Actor;

            if (Container && Container->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                bool once = false;

                for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Container->MyInventoryComponent->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || !Item->CanDrop())
                        continue;

                    globals::local::PC->ServerDropFromRemoteInventory(Container->MyInventoryComponent, Item->ItemID);

                    if (!once)
                    {
                        popcornctr++;
                        once = true;
                    }
                }
            }
        }

        if (Current->Actor->IsA(AShooterCharacter::StaticClass()) && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::TeamAutoPopcornPlayers.Enabled)
        {
            if (Current->IsDead || Current->IsSleeping)
            {
                AShooterCharacter* Player = (AShooterCharacter*)Current->Actor;

                if (Player && Player->MyInventoryComponent)
                {
                    globals::local::PC->ServerRequestActorItems(Player->MyInventoryComponent, true, false);

                    bool once = false;

                    for (int x = 0; x < Player->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->InventoryItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerDropFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID);

                        if (!once)
                        {
                            popcornctr++;
                            once = true;
                        }
                    }

                    for (int x = 0; x < Player->MyInventoryComponent->EquippedItems.Count(); x++)
                    {
                        UPrimalItem* Item = Player->MyInventoryComponent->EquippedItems[x];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram || !Item->CanDrop())
                            continue;

                        globals::local::PC->ServerDropFromRemoteInventory(Player->MyInventoryComponent, Item->ItemID);

                        if (!once)
                        {
                            popcornctr++;
                            once = true;
                        }
                    }
                }
            }
        }
    }

    if (Distance < 1000 && Current->Actor->IsA(APrimalDinoCharacter::StaticClass()))
    {
        APrimalDinoCharacter* Dino = (APrimalDinoCharacter*)Current->Actor;

        if (globals::local::LP->TargetingTeam != Dino->TargetingTeam && Dino->bIsBaby && settings::misc::DinoClaim.Enabled)
            globals::local::PC->ServerMultiUse(Dino, 122);

        if (globals::local::LP->TargetingTeam == Dino->TargetingTeam && settings::misc::DinoName.Enabled)
        {

            std::wstring DinoSTR = settings::misc::DinoString;

            if (wcsstr(DinoSTR.c_str(), Xors(L"HP")) != NULL)
            {
                size_t pos = DinoSTR.find(Xors(L"HP"));

                DinoSTR.replace(pos, 2, std::to_wstring((int)Dino->ReplicatedMaxHealth) + Xors(L"H "));
            }

            if (wcsstr(DinoSTR.c_str(), Xors(L"DMG")) != NULL)
            {
                size_t pos = DinoSTR.find(Xors(L"DMG"));
                DinoSTR.replace(pos, 3, Dino->MyCharacterStatusComponent->GetStatusMaxValueString(EPrimalCharacterStatusValue::MeleeDamageMultiplier, true).ToWString() + Xors(L"D "));
            }

            if (wcsstr(DinoSTR.c_str(), Xors(L"GNDR")) != NULL)
            {
                size_t pos = DinoSTR.find(Xors(L"GNDR"));
                DinoSTR.replace(pos, 4, Dino->bIsFemale ? Xors(L"Female ") : Xors(L"Male "));
            }

            if (wcsstr(DinoSTR.c_str(), Xors(L"WHT")) != NULL)
            {
                size_t pos = DinoSTR.find(Xors(L"WHT"));
                DinoSTR.replace(pos, 3, Dino->MyCharacterStatusComponent->GetStatusMaxValueString(EPrimalCharacterStatusValue::Weight, true).ToWString() + Xors(L"W "));
            }

            globals::local::PC->ServerNotifyEditText(DinoSTR.c_str(), false, Dino->Class, 0, 0, Dino);
        }

        if (globals::local::LP->TargetingTeam == Dino->TargetingTeam && Dino->bIsBaby && settings::misc::DinoImprint.Enabled)
            ImprintArray.push_back(Dino);

        if (globals::local::LP->TargetingTeam == Dino->TargetingTeam && Dino->bIsBaby && settings::misc::DinoFeed.Enabled)
        {
            FVector DinoLocation = Dino->K2_GetActorLocation();
            FVector2D DinoLocation2D;

            if (!Actors::PWTS(DinoLocation, DinoLocation2D))
                return false;

            float BabyAge = Dino->BabyAge * 100;

            if (BabyAge > 10)
                return false;

            int BabyInt = (int)(Dino->BabyAge * 100);
            int BabyRemainder = (int)((BabyAge - BabyInt) * 10);

            std::wstring BabyString;
            BabyString += std::to_wstring(BabyInt).c_str();
            BabyString += Xors(L".");
            BabyString += std::to_wstring(BabyRemainder).c_str();
            BabyString += Xors(L" %");

            BabyArray.push_back(Dino);

            Renderer::DrawString(Dino->DescriptiveName.ToWString().c_str(), DinoLocation2D, { 0.6, 0.6 }, { 1.0f, 0.0f, 0.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
            Renderer::DrawString(BabyString.c_str(), { DinoLocation2D.X, DinoLocation2D.Y + 14 }, { 0.6, 0.6 }, { 1.0f, 0.0f, 0.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
        }

        if (globals::local::LP->TargetingTeam == Dino->TargetingTeam && !Dino->bIsBaby && settings::misc::DinoSaddle.Enabled)
        {
            bool HasSaddle = false;

            for (int x = 0; x < Dino->MyInventoryComponent->EquippedItems.Count(); x++)
            {
                UPrimalItem* Item = Dino->MyInventoryComponent->EquippedItems[x];

                if (!Item)
                    continue;

                if (Item->bIsItemSkin)
                    continue;

                HasSaddle = true;
            }

            if (!HasSaddle)
            {
                for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram || Item->bIsItemSkin)
                        continue;

                    if (Dino->MyInventoryComponent->CanEquipItem(Item))
                    {
                        globals::local::PC->ServerTransferToRemoteInventory(Dino->MyInventoryComponent, Item->ItemID, true, Item->ItemQuantity);
                        break;
                    }
                }
            }
        }

        if (globals::local::LP->TargetingTeam == Dino->TargetingTeam && settings::misc::DinoLevel.Enabled && Dino->K2_GetActorLocation().Distance(globals::local::POS) < 2000)
        {
            if (settings::misc::DinoLevelPreset.Name.size() > 0 && globals::libs::StringLib->STATIC_Contains(Dino->GetDescriptiveName(), settings::misc::DinoLevelPreset.Name.c_str(), false, false) && Dino->MyCharacterStatusComponent->HasExperienceForLevelUp())
            {
                int Health = globals::libs::StringLib->STATIC_Conv_StringToInt(settings::misc::DinoLevelPreset.Health.c_str());
                int Stamina = globals::libs::StringLib->STATIC_Conv_StringToInt(settings::misc::DinoLevelPreset.Stamina.c_str());
                int Oxygen = globals::libs::StringLib->STATIC_Conv_StringToInt(settings::misc::DinoLevelPreset.Oxygen.c_str());
                int Food = globals::libs::StringLib->STATIC_Conv_StringToInt(settings::misc::DinoLevelPreset.Food.c_str());
                int Weight = globals::libs::StringLib->STATIC_Conv_StringToInt(settings::misc::DinoLevelPreset.Weight.c_str());
                int Melee = globals::libs::StringLib->STATIC_Conv_StringToInt(settings::misc::DinoLevelPreset.Melee.c_str());

                for (int x = 0; x < Health; x++)
                    globals::local::PC->ServerRequestLevelUp(Dino->MyCharacterStatusComponent, EPrimalCharacterStatusValue::Health);

                for (int x = 0; x < Stamina; x++)
                    globals::local::PC->ServerRequestLevelUp(Dino->MyCharacterStatusComponent, EPrimalCharacterStatusValue::Stamina);

                for (int x = 0; x < Oxygen; x++)
                    globals::local::PC->ServerRequestLevelUp(Dino->MyCharacterStatusComponent, EPrimalCharacterStatusValue::Oxygen);

                for (int x = 0; x < Food; x++)
                    globals::local::PC->ServerRequestLevelUp(Dino->MyCharacterStatusComponent, EPrimalCharacterStatusValue::Food);

                for (int x = 0; x < Weight; x++)
                    globals::local::PC->ServerRequestLevelUp(Dino->MyCharacterStatusComponent, EPrimalCharacterStatusValue::Weight);

                for (int x = 0; x < Melee; x++)
                    globals::local::PC->ServerRequestLevelUp(Dino->MyCharacterStatusComponent, EPrimalCharacterStatusValue::MeleeDamageMultiplier);
            }
        }

        if (globals::local::LP->TargetingTeam == Dino->TargetingTeam && settings::autoMation::AutoTakeAchatina.Enabled)
        {
            static UClass* Achatina = nullptr;
            if (!Achatina)
                Achatina = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/Dinos/Achatina/Achatina_Character_BP.Achatina_Character_BP_C"));

            if (Dino->IsA(Achatina))
                AchatinaArray.push_back(Dino);
        }
    }

    if (settings::autoMation::AutoMount.Enabled)
    {
        if (Current->Type == ActorType::Dino)
        {
            APrimalDinoCharacter* dino = (APrimalDinoCharacter*)Current->Actor;

            if (!Current->IsDead && !Current->IsSleeping)
            {
                if (Distance < 2000 && !dino->CurrentlyHasRider() && globals::local::LP->TargetingTeam == dino->TargetingTeam)
                {
                    if (!settings::autoMation::AutoMount.UseKeyBind)
                        globals::local::PC->ServerMultiUse(dino, 100);
                    else if (Keyboard::GetState(settings::autoMation::AutoMount.KeyBindForVar, 0))
                        globals::local::PC->ServerMultiUse(dino, 100);
                }
            }
        }
    }

    if (globals::local::LP->TargetingTeam == Current->Actor->TargetingTeam && settings::misc::DinoFeed.Enabled && settings::autoMation::FeedTroughs && Distance < 1250)
    {
        static UClass* TekTrough = nullptr;
        if (!TekTrough)
            TekTrough = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/Structures/TekTrough.TekTrough_C"));

        static UClass* WoodTrough = nullptr;
        if (!WoodTrough)
            WoodTrough = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/Structures/FeedingTrough.FeedingTrough_C"));

        if (Current->Actor->IsA(TekTrough) || Current->Actor->IsA(WoodTrough))
        {
            FVector TroughLoc = Current->Actor->K2_GetActorLocation();
            FVector2D TroughLoc2D;

            if (!Actors::PWTS(TroughLoc, TroughLoc2D))
                return false;

            Renderer::DrawString(((APrimalStructure*)Current->Actor)->GetDescriptiveName().ToWString().c_str(), TroughLoc2D, { 0.6, 0.6 }, { 1.0f, 0.0f, 0.0f, 1.0f }, true, { 0,0,0,1 }, true, true);

            TroughArray.push_back((APrimalStructureItemContainer*)Current->Actor);
        }
    }

    return false;
}

bool AutoModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current || !Current->Actor)
        return false;

    if (Current->Actor == globals::local::LP || Current->Actor == globals::local::AP)
        return false;

    return true;
}

void AutoModule::PostActors()
{
    takectr = 0;
    popcornctr = 0;

    if (settings::autoMation::AutoFeedRawMeat.Enabled && globals::local::DP && globals::local::DINV && globals::local::FrameNum % 10 == 0)
    {
        static UClass* RawMeat = nullptr;
        if (!RawMeat)
            RawMeat = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_RawMeat.PrimalItemConsumable_RawMeat_C"));

        for (int i = 0; i < globals::local::DINV->InventoryItems.Count(); i++)
        {
            UPrimalItem* Item = globals::local::DINV->InventoryItems[i];

            if (!Item)
                continue;

            if (Item->bIsEngram)
                continue;

            if (Item->IsA(RawMeat))
            {
                globals::local::PC->ServerRequestInventoryUseItem(globals::local::DINV  , Item->ItemID);
                break;
            }
        }
    }
    
    if (settings::autoMation::AutoTakeAchatina.Enabled && AchatinaArray.size() > 0)
    {
        if (globals::local::FrameNum % 5 == 0)
        {
            if (AchatinaNumber + 1 >= AchatinaArray.size())
                AchatinaNumber = -1;

            AchatinaNumber++;

            APrimalDinoCharacter* Achatina = AchatinaArray[AchatinaNumber];

            if (Achatina && Achatina->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Achatina->MyInventoryComponent, true, false);

                for (int x = 0; x < Achatina->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Achatina->MyInventoryComponent->InventoryItems[x];

                    if (Item->bIsEngram)
                        continue;

                    if (wcsstr(Item->DescriptiveNameBase.ToWString().c_str(), Xors(L"Achatina Paste")) == NULL)
                        continue;

                    globals::local::PC->ServerTransferFromRemoteInventory(Achatina->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
                }
            }
        }

        AchatinaArray.clear();
    }

    if (settings::misc::DinoFeed.Enabled && BabyArray.size() > 0)
    {
        if (globals::local::FrameNum % 10 == 0)
        {
            if (BabyNumber + 1 >= BabyArray.size())
                BabyNumber = -1;

            BabyNumber++;

            APrimalDinoCharacter* Baby = BabyArray[BabyNumber];

            if (Baby && Baby->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(Baby->MyInventoryComponent, true, false);

                for (int z = 0; z < globals::local::PINV->InventoryItems.Count(); z++)
                {
                    UPrimalItem* Item = globals::local::PINV->InventoryItems[z];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram)
                        continue;

                    if (Baby->MyDinoSettingsCDO->DinoFoodTypeName.ToString() == Xors("Carnivore"))
                    {
                        if (Item->DescriptiveNameBase.ToString() == Xors("Raw Meat"))
                            globals::local::PC->ServerTransferToRemoteInventory(Baby->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                    }
                    else if (Baby->MyDinoSettingsCDO->DinoFoodTypeName.ToString() == Xors("Herbivore"))
                    {
                        if (Item->DescriptiveNameBase.ToString() == Xors("Azulberry") || Item->DescriptiveNameBase.ToString() == Xors("Magenberry") || Item->DescriptiveNameBase.ToString() == Xors("Amarberry") || Item->DescriptiveNameBase.ToString() == Xors("Cianberry") || Item->DescriptiveNameBase.ToString() == Xors("Tintoberry") || Item->DescriptiveNameBase.ToString() == Xors("Verdberry") || Item->DescriptiveNameBase.ToString() == Xors("Mejoberry"))
                            globals::local::PC->ServerTransferToRemoteInventory(Baby->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                    }
                    else if (Baby->MyDinoSettingsCDO->DinoFoodTypeName.ToString() == Xors("Carrion"))
                    {
                        if (Baby->DescriptiveName.ToString().find(Xors("arthro")) || Baby->DescriptiveName.ToString().find(Xors("mantis")))
                        {
                            if (Item->DescriptiveNameBase.ToString() == Xors("Spoiled Meat") || Item->DescriptiveNameBase.ToString() == Xors("Raw Meat"))
                                globals::local::PC->ServerTransferToRemoteInventory(Baby->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                        }
                        else
                        {
                            if (Item->DescriptiveNameBase.ToString() == Xors("Spoiled Meat"))
                                globals::local::PC->ServerTransferToRemoteInventory(Baby->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                        }
                    }
                }
            }
        }

        if (settings::autoMation::FeedTroughs && TroughArray.size() > 0)
        {
            if (globals::local::FrameNum % 15 == 0)
            {
                bool needmeat = true;
                bool needberries = true;

                for (int z = 0; z < globals::local::PINV->InventoryItems.Count(); z++)
                {
                    UPrimalItem* Item = globals::local::PINV->InventoryItems[z];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram)
                        continue;

                    if (Item->DescriptiveNameBase.ToString() == Xors("Raw Meat"))
                        needmeat = false;

                    if (Item->DescriptiveNameBase.ToString() == Xors("Azulberry") || Item->DescriptiveNameBase.ToString() == Xors("Magenberry") || Item->DescriptiveNameBase.ToString() == Xors("Amarberry") || Item->DescriptiveNameBase.ToString() == Xors("Cianberry") || Item->DescriptiveNameBase.ToString() == Xors("Tintoberry") || Item->DescriptiveNameBase.ToString() == Xors("Verdberry") || Item->DescriptiveNameBase.ToString() == Xors("Mejoberry"))
                        needberries = false;
                }

                if (TroughNummber + 1 >= TroughArray.size())
                    TroughNummber = -1;

                TroughNummber++;

                APrimalStructureItemContainer* TroughActor = TroughArray[TroughNummber];

                if (TroughActor && TroughActor->CurrentItemCount != 0)
                {
                    globals::local::PC->ServerRequestActorItems(TroughActor->MyInventoryComponent, true, false);

                    for (int k = 0; k < TroughActor->MyInventoryComponent->InventoryItems.Count(); k++)
                    {
                        UPrimalItem* Item = TroughActor->MyInventoryComponent->InventoryItems[k];

                        if (!Item)
                            continue;

                        if (Item->bIsEngram)
                            continue;

                        if (needmeat)
                        {
                            if (Item->DescriptiveNameBase.ToString() == Xors("Raw Meat"))
                                globals::local::PC->ServerTransferFromRemoteInventory(TroughActor->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
                        }

                        if (needberries)
                        {
                            if (Item->DescriptiveNameBase.ToString() == Xors("Azulberry") || Item->DescriptiveNameBase.ToString() == Xors("Magenberry") || Item->DescriptiveNameBase.ToString() == Xors("Amarberry") || Item->DescriptiveNameBase.ToString() == Xors("Cianberry") || Item->DescriptiveNameBase.ToString() == Xors("Tintoberry") || Item->DescriptiveNameBase.ToString() == Xors("Verdberry") || Item->DescriptiveNameBase.ToString() == Xors("Mejoberry"))
                                globals::local::PC->ServerTransferFromRemoteInventory(TroughActor->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
                        }
                    }
                }
            }
        }

        BabyArray.clear();
        TroughArray.clear();
    }

    if (settings::autoMation::AutoWalk.Enabled)
        globals::local::AP->MoveForward(100);

    static double BrewTime = 0.0;
    static double FoodTime = 0.0;
    static double WaterTime = 0.0;

    if (settings::autoMation::AutoFood.Enabled || settings::autoMation::AutoConsumable.Enabled || settings::autoMation::AutoMedbrew.Enabled)
    {
        if (globals::local::PINV)
        {
            for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                if (!Item)
                    continue;

                if (Item->bIsEngram || !Item->bConsumeItemOnUse || Item->bIsItemSkin)
                    continue;

                if (settings::autoMation::AutoFood.Enabled)
                {
                    FoodTime += globals::rendering::DeltaTime;
                    WaterTime += globals::rendering::DeltaTime;

                    UPrimalCharacterStatusComponent* CharacterStatusComponent = globals::local::LP->MyCharacterStatusComponent;

                    if (FoodTime >= 20.0 && ((CharacterStatusComponent->MaxStatusValues[4] - CharacterStatusComponent->ReplicatedCurrentStatusValues[4]) / 100) > 0.50)
                    {
                        for (int x = 0; x < Item->UseItemAddCharacterStatusValues.Count(); x++)
                        {
                            FUseItemAddCharacterStatusValue ItemInfo = Item->UseItemAddCharacterStatusValues[x];

                            if (ItemInfo.StatusValueType == EPrimalCharacterStatusValue::Food && ItemInfo.BaseAmountToAdd > 50)
                            {
                                globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);
                                FoodTime = 0.0;
                                break;
                            }
                        }
                    }

                    if (WaterTime >= 20.0 && ((CharacterStatusComponent->MaxStatusValues[5] - CharacterStatusComponent->ReplicatedCurrentStatusValues[5]) / 100) > 0.50)
                    {
                        for (int x = 0; x < Item->UseItemAddCharacterStatusValues.Count(); x++)
                        {
                            FUseItemAddCharacterStatusValue ItemInfo = Item->UseItemAddCharacterStatusValues[x];

                            if (ItemInfo.StatusValueType == EPrimalCharacterStatusValue::Water && ItemInfo.BaseAmountToAdd > 50)
                            {
                                globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);
                                WaterTime = 0.0;
                                break;
                            }
                        }
                    }
                }

                if (settings::autoMation::AutoConsumable.Enabled)
                {
                    static UClass* FocalChili = nullptr;
                    if (!FocalChili)
                        FocalChili = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_Soup_FocalChili.PrimalItemConsumable_Soup_FocalChili_C"));

                    static UClass* LazChowder = nullptr;
                    if (!LazChowder)
                        LazChowder = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_Soup_LazarusChowder.PrimalItemConsumable_Soup_LazarusChowder_C"));

                    static UClass* ShadowSteak = nullptr;
                    if (!ShadowSteak)
                        ShadowSteak = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_Soup_ShadowSteak.PrimalItemConsumable_Soup_ShadowSteak_C"));

                    if (Item->IsA(FocalChili) && Item->CanUse(false))
                        globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);

                    if (Item->IsA(LazChowder) && Item->CanUse(false))
                        globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);

                    if (Item->IsA(ShadowSteak) && Item->CanUse(false))
                        globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);
                }

                if (settings::autoMation::AutoMedbrew.Enabled)
                {
                    BrewTime += globals::rendering::DeltaTime;

                    static UClass* MedBrew = nullptr;
                    if (!MedBrew)
                        MedBrew = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_HealSoup.PrimalItemConsumable_HealSoup_C"));

                    if (Item->IsA(MedBrew) && (globals::local::LP->ReplicatedMaxHealth - globals::local::LP->ReplicatedCurrentHealth) > 40 && BrewTime >= 4.2)
                    {
                        globals::local::PC->ServerRequestInventoryUseItem(globals::local::PINV, Item->ItemID);
                        BrewTime = 0.0;
                        break;
                    }
                }
            }
        }
    }

    if (settings::misc::DinoImprint.Enabled && ImprintArray.size() > 0)
    {
        if (globals::local::FrameNum % 5 == 0)
        {
            if (ImprintNumber + 1 >= ImprintArray.size())
                ImprintNumber = -1;

            ImprintNumber++;

            APrimalDinoCharacter* ImprintBaby = ImprintArray[ImprintNumber];

            if (ImprintBaby && ImprintBaby->MyInventoryComponent)
            {
                AShooterGameState* ShooterGameState = (AShooterGameState*)UWorld::Singleton()->GameState;

                if (ImprintBaby->BabyNextCuddleTime - ShooterGameState->NetworkTime <= 0)
                {
                    if (ImprintBaby->BabyCuddleType == EBabyCuddleType::PET)
                        globals::local::PC->ServerMultiUse(ImprintBaby, 139);
                    else if (ImprintBaby->BabyCuddleFood)
                    {
                        for (int z = 0; z < globals::local::PINV->InventoryItems.Count(); z++)
                        {
                            UPrimalItem* Item = globals::local::PINV->InventoryItems[z];

                            if (!Item)
                                continue;

                            if (Item->bIsEngram)
                                continue;

                            if (Item->Class == ImprintBaby->BabyCuddleFood)
                            {
                                globals::local::PINV->ServerAddItemToSlot(Item->ItemID, 9, true);
                                globals::local::PC->ServerMultiUse(ImprintBaby, 139);
                            }
                        }
                    }
                }
            }
        }
    }

    AchatinaArray.clear();
    BabyArray.clear();
    TroughArray.clear();
    ImprintArray.clear();
}

std::unique_ptr<AutoModule> AutoModule::CreateModule()
{
    return std::make_unique<AutoModule>();
}
