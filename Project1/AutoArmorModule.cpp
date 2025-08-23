#include "pch.h"
#include "AutoArmorModule.h"
#include "Settings.h"
#define TEK 1
#define FLAK 2

bool AutoArmorModule::OnModuleInit()
{
    return true;
}

bool AutoArmorModule::OnActorModule(CurrentActor* Current)
{
    return false;
}

bool AutoArmorModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    return true;
}

void AutoArmorModule::PostActors()
{
    if (settings::autoMation::SelfArmor.KeyBindForVar && Keyboard::GetState(settings::autoMation::SelfArmor.KeyBindForVar, 0))
    {
        if (settings::autoMation::AutoArmorType == 2)
            settings::autoMation::AutoArmorType = 0;

        settings::autoMation::AutoArmorType++;
    }

    if (settings::autoMation::SelfArmor.Enabled)
    {
        std::wstring HelmetString, ChestString, GauntletString, LegString, BootString;

        int HelmetDura = 0;
        int ChestDura = 0;
        int GloveDura = 0;
        int LegDura = 0;
        int BootDura = 0;

        UPrimalItem* BestHelmet = nullptr;
        UPrimalItem* BestChest = nullptr;
        UPrimalItem* BestGloves = nullptr;
        UPrimalItem* BestLegs = nullptr;
        UPrimalItem* BestBoots = nullptr;
        UPrimalItem* BestShield = nullptr;

        UPrimalItem* CurrentHelmet = globals::local::PINV->GetEquippedItemOfType(EPrimalEquipmentType::Hat);
        UPrimalItem* CurrentChest = globals::local::PINV->GetEquippedItemOfType(EPrimalEquipmentType::Shirt);
        UPrimalItem* CurrentGloves = globals::local::PINV->GetEquippedItemOfType(EPrimalEquipmentType::Gloves);
        UPrimalItem* CurrentLegs = globals::local::PINV->GetEquippedItemOfType(EPrimalEquipmentType::Pants);
        UPrimalItem* CurrentBoots = globals::local::PINV->GetEquippedItemOfType(EPrimalEquipmentType::Boots);
        UPrimalItem* CurrentShield = globals::local::PINV->GetEquippedItemOfType(EPrimalEquipmentType::Shield);

        UPrimalItem* BestFlakHelmet = nullptr;
        UPrimalItem* BestFlakChest = nullptr;
        UPrimalItem* BestFlakGloves = nullptr;
        UPrimalItem* BestFlakLegs = nullptr;
        UPrimalItem* BestFlakBoots = nullptr;

        UPrimalItem* BestTekHelmet = nullptr;
        UPrimalItem* BestTekChest = nullptr;
        UPrimalItem* BestTekGloves = nullptr;
        UPrimalItem* BestTekLegs = nullptr;
        UPrimalItem* BestTekBoots = nullptr;

        for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
        {
            UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

            if (!Item)
                continue;

            if (Item->bIsEngram || Item->bIsItemSkin || Item->ItemDurability == 0 || Item->MyItemType != EPrimalItemType::Equipment)
                continue;

            switch (Item->MyEquipmentType)
            {
            case (EPrimalEquipmentType::Hat):
            {
                HelmetDura = HelmetDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakHelmet)
                    {
                        BestFlakHelmet = Item;
                    }
                    else if (Item->ItemDurability > BestFlakHelmet->ItemDurability)
                    {
                        BestFlakHelmet = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekHelmet)
                    {
                        BestTekHelmet = Item;
                    }
                    else if (Item->ItemDurability > BestTekHelmet->ItemDurability)
                    {
                        BestTekHelmet = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Shirt):
            {
                ChestDura = ChestDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakChest)
                    {
                        BestFlakChest = Item;
                    }
                    else if (Item->ItemDurability > BestFlakChest->ItemDurability)
                    {
                        BestFlakChest = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekChest)
                    {
                        BestTekChest = Item;
                    }
                    else if (Item->ItemDurability > BestTekChest->ItemDurability)
                    {
                        BestTekChest = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Gloves):
            {
                GloveDura = GloveDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakGloves)
                    {
                        BestFlakGloves = Item;
                    }
                    else if (Item->ItemDurability > BestFlakGloves->ItemDurability)
                    {
                        BestFlakGloves = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekGloves)
                    {
                        BestTekGloves = Item;
                    }
                    else if (Item->ItemDurability > BestTekGloves->ItemDurability)
                    {
                        BestTekGloves = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Pants):
            {
                LegDura = LegDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakLegs)
                    {
                        BestFlakLegs = Item;
                    }
                    else if (Item->ItemDurability > BestFlakLegs->ItemDurability)
                    {
                        BestFlakLegs = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekLegs)
                    {
                        BestTekLegs = Item;
                    }
                    else if (Item->ItemDurability > BestTekLegs->ItemDurability)
                    {
                        BestTekLegs = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Boots):
            {
                BootDura = BootDura + Item->ItemDurability;


                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakBoots)
                    {
                        BestFlakBoots = Item;
                    }
                    else if (Item->ItemDurability > BestFlakBoots->ItemDurability)
                    {
                        BestFlakBoots = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekBoots)
                    {
                        BestTekBoots = Item;
                    }
                    else if (Item->ItemDurability > BestTekBoots->ItemDurability)
                    {
                        BestTekBoots = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Shield):
            {
                if (!BestShield)
                {
                    BestShield = Item;
                }
                else if (Item->ItemDurability > BestShield->ItemDurability)
                {
                    BestShield = Item;
                }

                break;
            }
            }
        }

        for (int x = 0; x < globals::local::PINV->EquippedItems.Count(); x++)
        {
            UPrimalItem* Item = globals::local::PINV->EquippedItems[x];

            if (!Item)
                continue;

            if (Item->bIsEngram || Item->bIsItemSkin || Item->ItemDurability == 0 || Item->MyItemType != EPrimalItemType::Equipment)
                continue;

            switch (Item->MyEquipmentType)
            {
            case (EPrimalEquipmentType::Hat):
            {
                HelmetDura = HelmetDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakHelmet)
                    {
                        BestFlakHelmet = Item;
                    }
                    else if (Item->ItemDurability > BestFlakHelmet->ItemDurability)
                    {
                        BestFlakHelmet = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekHelmet)
                    {
                        BestTekHelmet = Item;
                    }
                    else if (Item->ItemDurability > BestTekHelmet->ItemDurability)
                    {
                        BestTekHelmet = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Shirt):
            {
                ChestDura = ChestDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakChest)
                    {
                        BestFlakChest = Item;
                    }
                    else if (Item->ItemDurability > BestFlakChest->ItemDurability)
                    {
                        BestFlakChest = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekChest)
                    {
                        BestTekChest = Item;
                    }
                    else if (Item->ItemDurability > BestTekChest->ItemDurability)
                    {
                        BestTekChest = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Gloves):
            {
                GloveDura = GloveDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakGloves)
                    {
                        BestFlakGloves = Item;
                    }
                    else if (Item->ItemDurability > BestFlakGloves->ItemDurability)
                    {
                        BestFlakGloves = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekGloves)
                    {
                        BestTekGloves = Item;
                    }
                    else if (Item->ItemDurability > BestTekGloves->ItemDurability)
                    {
                        BestTekGloves = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Pants):
            {
                LegDura = LegDura + Item->ItemDurability;

                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakLegs)
                    {
                        BestFlakLegs = Item;
                    }
                    else if (Item->ItemDurability > BestFlakLegs->ItemDurability)
                    {
                        BestFlakLegs = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekLegs)
                    {
                        BestTekLegs = Item;
                    }
                    else if (Item->ItemDurability > BestTekLegs->ItemDurability)
                    {
                        BestTekLegs = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Boots):
            {
                BootDura = BootDura + Item->ItemDurability;


                if (Item->DescriptiveNameBase[0] == 'F')
                {
                    if (!BestFlakBoots)
                    {
                        BestFlakBoots = Item;
                    }
                    else if (Item->ItemDurability > BestFlakBoots->ItemDurability)
                    {
                        BestFlakBoots = Item;
                    }
                }
                else if (Item->DescriptiveNameBase[0] == 'T')
                {
                    if (!BestTekBoots)
                    {
                        BestTekBoots = Item;
                    }
                    else if (Item->ItemDurability > BestTekBoots->ItemDurability)
                    {
                        BestTekBoots = Item;
                    }
                }

                break;
            }
            case (EPrimalEquipmentType::Shield):
            {
                if (!BestShield)
                {
                    BestShield = Item;
                }
                else if (Item->ItemDurability > BestShield->ItemDurability)
                {
                    BestShield = Item;
                }

                break;
            }
            }
        }

        if (settings::autoMation::AutoArmorType == 1)
        {
            BestHelmet = BestTekHelmet ? BestTekHelmet : BestFlakHelmet;
            BestChest = BestTekChest ? BestTekChest : BestFlakChest;
            BestGloves = BestTekGloves ? BestTekGloves : BestFlakGloves;
            BestLegs = BestTekLegs ? BestTekLegs : BestFlakLegs;
            BestBoots = BestTekBoots ? BestTekBoots : BestFlakBoots;
        }
        else if (settings::autoMation::AutoArmorType == 2)
        {
            BestHelmet = BestFlakHelmet ? BestFlakHelmet : BestTekHelmet;
            BestChest = BestFlakChest ? BestFlakChest : BestTekChest;
            BestGloves = BestFlakGloves ? BestFlakGloves : BestTekGloves;
            BestLegs = BestFlakLegs ? BestFlakLegs : BestTekLegs;
            BestBoots = BestFlakBoots ? BestFlakBoots : BestTekBoots;
        }

        if (CurrentHelmet && BestHelmet)
        {
            if (CurrentHelmet != BestHelmet && CurrentHelmet->ItemDurability != BestHelmet->ItemDurability)
                globals::local::PC->ServerEquipPawnItem(BestHelmet->ItemID);
        }
        else if (BestHelmet)
            globals::local::PC->ServerEquipPawnItem(BestHelmet->ItemID);

        if (CurrentChest && BestChest && !settings::autoMation::IgnoreChest.Enabled)
        {
            if (CurrentChest != BestChest && CurrentChest->ItemDurability != BestChest->ItemDurability)
                globals::local::PC->ServerEquipPawnItem(BestChest->ItemID);
        }
        else if (BestChest && !CurrentChest)
            globals::local::PC->ServerEquipPawnItem(BestChest->ItemID);

        if (CurrentGloves && BestGloves && !settings::autoMation::IgnoreGaunts.Enabled)
        {
            if (CurrentGloves != BestGloves && CurrentGloves->ItemDurability != BestGloves->ItemDurability)
                globals::local::PC->ServerEquipPawnItem(BestGloves->ItemID);
        }
        else if (BestGloves && !CurrentGloves)
            globals::local::PC->ServerEquipPawnItem(BestGloves->ItemID);

        if (CurrentLegs && BestLegs)
        {
            if (CurrentLegs != BestLegs && CurrentLegs->ItemDurability != BestLegs->ItemDurability)
                globals::local::PC->ServerEquipPawnItem(BestLegs->ItemID);
        }
        else if (BestLegs)
            globals::local::PC->ServerEquipPawnItem(BestLegs->ItemID);

        if (CurrentBoots && BestBoots)
        {
            if (CurrentBoots != BestBoots && CurrentBoots->ItemDurability != BestBoots->ItemDurability)
                globals::local::PC->ServerEquipPawnItem(BestBoots->ItemID);
        }
        else if (BestBoots)
            globals::local::PC->ServerEquipPawnItem(BestBoots->ItemID);

        if (CurrentShield && BestShield)
        {
            if (CurrentShield != BestShield && CurrentShield->ItemDurability != BestShield->ItemDurability)
                globals::local::PC->ServerEquipPawnItem(BestShield->ItemID);
        }
        else if (BestShield)
            globals::local::PC->ServerEquipPawnItem(BestShield->ItemID);

        HelmetString = Xors(L"Helm Dura : ") + std::to_wstring((int)HelmetDura);
        ChestString = Xors(L"Chest Dura : ") + std::to_wstring((int)ChestDura);
        GauntletString = Xors(L"Gaunt Dura : ") + std::to_wstring((int)GloveDura);
        LegString = Xors(L"Leg Dura : ") + std::to_wstring((int)LegDura);
        BootString = Xors(L"Boot Dura : ") + std::to_wstring((int)BootDura);

        Renderer::DrawString(HelmetString.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2 - 290, Renderer::GetCanvasSize().Y - 130), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
        Renderer::DrawString(ChestString.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2 - 145, Renderer::GetCanvasSize().Y - 130), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
        Renderer::DrawString(GauntletString.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y - 130), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
        Renderer::DrawString(LegString.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2 + 145, Renderer::GetCanvasSize().Y - 130), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
        Renderer::DrawString(BootString.c_str(), FVector2D(Renderer::GetCanvasSize().X / 2 + 290, Renderer::GetCanvasSize().Y - 130), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);

        if (settings::autoMation::AutoArmorType == 1)
            Renderer::DrawString(Xors(L"Tek Swap"), FVector2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y - 180), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);

        if (settings::autoMation::AutoArmorType == 2)
            Renderer::DrawString(Xors(L"Flak Swap"), FVector2D(Renderer::GetCanvasSize().X / 2, Renderer::GetCanvasSize().Y - 180), { 0.6, 0.6 }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,1 }, true, true);
    }
}

std::unique_ptr<AutoArmorModule> AutoArmorModule::CreateModule()
{
    return std::make_unique<AutoArmorModule>();
}
