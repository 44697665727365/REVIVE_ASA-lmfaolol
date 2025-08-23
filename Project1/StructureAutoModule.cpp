#include "pch.h"
#include "StructureAutoModule.h"

//int FrameCtr = 0;
int StructureNumber = 0;
int CropPlotNumber = 0;
int DediDepoNumber = 0;
int AutoTurretNumber = 0;
int HeavyTurretNumber = 0;
int TekTurretNumber = 0;

bool StructurePlaceToggle = false;

vector<APrimalStructureItemContainer_CropPlot*> CropPlotArray;
vector<ABP_DedicatedStorage_C*> DediArray;
vector<AStructureTurretBaseBP_C*> AutoTurretArray;
vector<AStructureTurretBaseBP_BaseHeavy_C*> HeavyTurretArray;
vector<AStructureTurretTek_C*> TekTurretArray;
vector<APrimalStructureItemContainer*> ForgesArray;

void StructureAutoModule::OnStructure(Structure* Structure, CurrentActor* Current)
{
    float Distance = Current->Actor->K2_GetActorLocation().Distance(globals::local::POS);

    if (Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && Current->Actor->IsA(APrimalStructureItemContainer::StaticClass()) && settings::autoMation::AutoPincode.Enabled && Distance < 1250 && globals::local::FrameNum % 5 == 0)
    {
        APrimalStructureItemContainer* Struct = (APrimalStructureItemContainer*)Current->Actor;

        if (!Struct->bIsPinLocked)
            globals::local::PC->ServerRequestSetPin(Struct,6969,1,0);
	}

    if (Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && Structure->type == StructureType::IndustrialForge && settings::autoMation::AutoFillForges.Enabled && Distance < 2250)
        ForgesArray.push_back((APrimalStructureItemContainer*)Current->Actor);

    if (Structure->type == StructureType::C4Charge && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::PickupC4.Enabled && Distance < 1250)
        globals::local::PC->ServerMultiUse(Current->Actor, 201);

    if ((Structure->type == StructureType::BearTrap || Structure->type == StructureType::LargeBearTrap) && Current->Actor->TargetingTeam != globals::local::LP->TargetingTeam && settings::autoMation::PickupTraps.Enabled && Distance < 1250)
        globals::local::PC->ServerMultiUse(Current->Actor, 201);

    if (Structure->type == StructureType::WaterMine && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && settings::autoMation::PickupWaterMines.Enabled && Distance < 1250)
        globals::local::PC->ServerMultiUse(Current->Actor, 203);

    if (settings::autoDemo::EnableDemo && Current->Type == ActorType::Structure && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && Distance < 1250)
    {
        APrimalStructure* Struct = static_cast<APrimalStructure*>(Current->Actor);

        if (Struct->DescriptiveName.ToWString() == settings::autoDemo::ItemName && Struct != globals::local::PC->StructurePlacer->CurrentPlacingStructure && Struct->GetGameTimeSinceCreation() < 60)
            globals::local::PC->ServerMultiUse(Current->Actor, 201);
    }

    if (Structure->type == StructureType::DedicatedStorage && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && Distance < 1250)
        DediArray.push_back((ABP_DedicatedStorage_C*)Current->Actor);

    if ((settings::autoMation::AutoTakeCrops.Enabled || settings::autoMation::AutoFillCropPlots.Enabled) && (Structure->type == StructureType::LargeCropPlot || Structure->type == StructureType::MediumCropPlot || Structure->type == StructureType::SmallCropPlot))
            CropPlotArray.push_back((APrimalStructureItemContainer_CropPlot*)Current->Actor);

    if (Structure->type == StructureType::AutoTurret && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam) 
    {
        if (settings::autoMation::AutoFillAutoTurrets.Enabled && settings::autoMation::AutoFillAutoTurrets.Val > 0)
            AutoTurretArray.push_back((AStructureTurretBaseBP_C*)Current->Actor);

        if (settings::autoMation::AutoNameTurrets.Enabled && !settings::autoMation::TurretName.empty() && settings::autoMation::TurretName.c_str() && globals::local::FrameNum % 10 == 0)
            globals::local::PC->ServerNotifyEditText(settings::autoMation::TurretName.c_str(), false, Current->Actor->Class, 0, 0, Current->Actor);
    }

    if (Structure->type == StructureType::TekTurret && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && Distance < 1250)
    {
        if (settings::autoMation::AutoFillTekTurrets.Enabled && settings::autoMation::AutoFillTekTurrets.Val > 0)
            TekTurretArray.push_back((AStructureTurretTek_C*)Current->Actor);

        if (settings::autoMation::AutoNameTurrets.Enabled && !settings::autoMation::TurretName.empty() && settings::autoMation::TurretName.c_str() && globals::local::FrameNum % 10 == 0)
            globals::local::PC->ServerNotifyEditText(settings::autoMation::TurretName.c_str(), false, Current->Actor->Class, 0, 0, Current->Actor);
    }

    if (Structure->type == StructureType::HeavyTurret && Current->Actor->TargetingTeam == globals::local::LP->TargetingTeam && Distance < 1250)
    {
        if (settings::autoMation::AutoFillHeavyTurrets.Enabled && settings::autoMation::AutoFillHeavyTurrets.Val > 0)
            HeavyTurretArray.push_back((AStructureTurretBaseBP_BaseHeavy_C*)Current->Actor);

        if (settings::autoMation::AutoNameTurrets.Enabled && !settings::autoMation::TurretName.empty() && settings::autoMation::TurretName.c_str() && globals::local::FrameNum % 10 == 0)
            globals::local::PC->ServerNotifyEditText(settings::autoMation::TurretName.c_str(), false, Current->Actor->Class, 0, 0, Current->Actor);
    }
}

std::vector<std::wstring> DupeStructures1 = { Xors(L"Elevator Track"), Xors(L"Tek Gateway"), Xors(L"Tek Behemoth Gateway"), Xors(L"Metal Gateway"), Xors(L"Metal Behemoth Gateway"), Xors(L"Wardrums"), Xors(L"Tek Dedicated Storage"), Xors(L"Tek Cloning Chamber"), Xors(L"Toilet"), Xors(L"Tek Generator"), Xors(L"Tek Replicator"), Xors(L"Tek Behemoth Cellar Door"), Xors(L"Clockface") , Xors(L"Linked Storage Box")};

void FillTurret(APrimalStructureTurret* Turret, std::string AmmoName, int wantedBullets);
void FillTekTurret(APrimalStructureTurret* Turret, std::string AmmoName, int wantedBullets);

void StructureAutoModule::PostActors()
{
    if (settings::autoDemo::EnableDemo && DediArray.size() > 0)
    {
		if (settings::autoDemo::DemoItem > DupeStructures1.size() - 1)
			settings::autoDemo::DemoItem = 0;

        settings::autoDemo::ItemName = DupeStructures1[settings::autoDemo::DemoItem];

        if (globals::local::FrameNum % 200 == 0)
        {
            for (int x = 0; x < DediArray.size(); x++)
            {
                ABP_DedicatedStorage_C* Dedi = DediArray[x];

                if (!Dedi)
                    return;

                for (int z = 0; z < globals::local::PINV->InventoryItems.Count(); z++)
                {
                    UPrimalItem* Item = globals::local::PINV->InventoryItems[z];


                    if (!Item || Item->bIsEngram)
                        continue;

                    if (Item->DescriptiveNameBase.ToWString() == settings::autoDemo::ItemName)
                        continue;

                    if (Item->Class == ((UPrimalInventory_DedicatedStorage_C*)Dedi->MyInventoryComponent)->SelectedResourceType)
                        globals::local::PC->ServerTransferToRemoteInventory(Dedi->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                }
            }
        }

        if (StructurePlaceToggle)
        {
            Renderer::DrawString(Xors(L"F10 To Stop Placing"), { Renderer::GetCanvasSize().X / 2, 350 }, { 1, 1 }, { 1,0,0,1 }, true, { 0,0,0,0 }, true, true);

            if (globals::local::FrameNum % 3 == 0)
            {
                FHitResult Result = Util::GetTrace();

                if (!Result.Location.IsValid())
                    return;

                FVector Location = Result.Location;
                FPlacementData PlacementParams{};
                FBPNetExecParams ExecParams{};
                PlacementParams.AdjustedLocation = Location;
                PlacementParams.bSnapped = false;
                PlacementParams.bIsChoosingRotation = false;

                switch (settings::autoDemo::DemoItem)
                {
                case (0):
                    globals::local::PC->ServerRequestPlaceStructure(62, Location, {0,0,0}, {0,0,0}, {0, 0}, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (1):
                    globals::local::PC->ServerRequestPlaceStructure(205, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (2):
                    globals::local::PC->ServerRequestPlaceStructure(204, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (3):
                    globals::local::PC->ServerRequestPlaceStructure(139, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (4):
                    globals::local::PC->ServerRequestPlaceStructure(138, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (5):
                    globals::local::PC->ServerRequestPlaceStructure(229, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (6):
                    globals::local::PC->ServerRequestPlaceStructure(262, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (7):
                    globals::local::PC->ServerRequestPlaceStructure(211, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (8):
                    globals::local::PC->ServerRequestPlaceStructure(111, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (9):
                    globals::local::PC->ServerRequestPlaceStructure(188, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (10):
                    globals::local::PC->ServerRequestPlaceStructure(189, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (11):
                    globals::local::PC->ServerRequestPlaceStructure(465, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (12):
                    globals::local::PC->ServerRequestPlaceStructure(585, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                case (13):
                    globals::local::PC->ServerRequestPlaceStructure(582, Location, { 0,0,0 }, { 0,0,0 }, { 0, 0 }, PlacementParams, ExecParams, 0, 0, 0);
                    break;
                }
            }

        }
        else
        {
            Renderer::DrawString(Xors(L"F10 To Start Placing"), { Renderer::GetCanvasSize().X / 2, 350 }, { 1, 1 }, { 1,0,0,1 }, true, { 0,0,0,0 }, true, true);
        }

        if (Keyboard::GetState(VK_F10, 0))
            StructurePlaceToggle = !StructurePlaceToggle;
    }

    if (settings::autoMation::AutoFillTekTurrets.Enabled && TekTurretArray.size() > 0)
    {
        if (globals::local::FrameNum % 3 == 0)
        {
            if (TekTurretNumber + 1 >= TekTurretArray.size())
                TekTurretNumber = -1;

            TekTurretNumber++;

            AStructureTurretTek_C* TekTurret = TekTurretArray[TekTurretNumber];

            if (!TekTurret)
                return;

            if (TekTurret->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(TekTurret->MyInventoryComponent, true, false);

                int wantedBullets = 50 * settings::autoMation::AutoFillTekTurrets.Val;
   
                if (wantedBullets != TekTurret->NumBullets)
                    FillTekTurret(TekTurret, Xors("Element Shard"), wantedBullets);
            }
        }

        for (AStructureTurretTek_C* TekTurret : TekTurretArray)
        {
            int numBullets = TekTurret->NumBullets;
            int wantedBullets = 50 * settings::autoMation::AutoFillTekTurrets.Val;

            if (wantedBullets != numBullets)
            {
                FVector2D pos;
                if (Actors::PWTS(TekTurret->K2_GetActorLocation(), pos))
                    Renderer::DrawString(std::to_wstring(wantedBullets), pos, { 0.8, 0.8 }, { 1, 0, 0, 1 }, true, { 0, 0, 0, 1 }, true, true);
            }
        }
    }

    if (settings::autoMation::AutoFillAutoTurrets.Enabled && AutoTurretArray.size() > 0)
    {
        static UClass* ARB = nullptr;
        if (!ARB)
            ARB = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C"));

        if (globals::local::FrameNum % 3 == 0)
        {
            if (AutoTurretNumber + 1 >= AutoTurretArray.size())
                AutoTurretNumber = -1;

            AutoTurretNumber++;

            AStructureTurretBaseBP_C* AutoTurret = AutoTurretArray[AutoTurretNumber];

            if (!AutoTurret)
                return;

            for (int i = 0; i < globals::local::LP->MyInventoryComponent->InventoryItems.Count(); i++)
            {
                UPrimalItem* Item = globals::local::LP->MyInventoryComponent->InventoryItems[i];
                
                if (Item->IsA(ARB))
                    globals::local::LP->MyInventoryComponent->ServerMergeItemStack(Item->ItemID);
            }

            if (AutoTurret->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(AutoTurret->MyInventoryComponent, true, false);
                int numBullets = AutoTurret->NumBullets;
                int wantedBullets;
                int unroundedBullets = (int)(14.f * (float)(settings::autoMation::AutoFillAutoTurrets.Val));
                int remainder = unroundedBullets % 100;

                if (remainder > 0)
                    wantedBullets = unroundedBullets + (100 - remainder);
                else
                    wantedBullets = unroundedBullets;

                wantedBullets = min(wantedBullets, 1400);
                FillTurret(AutoTurret, Xors("Advanced Rifle Bullet"), wantedBullets);
            }

        }

        for (AStructureTurretBaseBP_C* AutoTurret : AutoTurretArray)
        {
            int numBullets = AutoTurret->NumBullets;
            int wantedBullets = (int)(14.f * (float)(settings::autoMation::AutoFillAutoTurrets.Val));
            if (numBullets < wantedBullets)
            {
                FVector2D pos;
                if (Actors::PWTS(AutoTurret->K2_GetActorLocation(), pos))
                    Renderer::DrawString(std::to_wstring(AutoTurret->NumBullets), pos, { 0.8, 0.8 }, { 1, 0, 0, 1 }, true, { 0, 0, 0, 1 }, true, true);
            }
        }
    }

    if (settings::autoMation::AutoFillHeavyTurrets.Enabled && HeavyTurretArray.size() > 0)
    {
        static UClass* ARB = nullptr;
        if (!ARB)
            ARB = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C"));

        if (globals::local::FrameNum % 3 == 0)
        {
            if (HeavyTurretNumber + 1 >= HeavyTurretArray.size())
                HeavyTurretNumber = -1;

            HeavyTurretNumber++;

            AStructureTurretBaseBP_BaseHeavy_C* HeavyTurret = HeavyTurretArray[HeavyTurretNumber];

            if (!HeavyTurret)
                return;

            for (int i = 0; i < globals::local::LP->MyInventoryComponent->InventoryItems.Count(); i++)
            {
                UPrimalItem* Item = globals::local::LP->MyInventoryComponent->InventoryItems[i];

                if (Item->IsA(ARB))
                    globals::local::LP->MyInventoryComponent->ServerMergeItemStack(Item->ItemID);
            }

            if (HeavyTurret->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(HeavyTurret->MyInventoryComponent, true, false);
                int numBullets = HeavyTurret->NumBullets;
                int wantedBullets;
                int unroundedBullets = 58.f * (float)(settings::autoMation::AutoFillHeavyTurrets.Val);
                int remainder = unroundedBullets % 100;

                if (remainder > 0)
                    wantedBullets = unroundedBullets + (100 - remainder);
                else
                    wantedBullets = unroundedBullets;

                wantedBullets = min(wantedBullets, 5800);
                FillTurret(HeavyTurret, Xors("Advanced Rifle Bullet"), wantedBullets);
            }
        }

        for (AStructureTurretBaseBP_BaseHeavy_C* HeavyTurret : HeavyTurretArray)
        {
            int numBullets = HeavyTurret->NumBullets;
            int wantedBullets = 58.f * (float)(settings::autoMation::AutoFillHeavyTurrets.Val);
            if (numBullets < wantedBullets)
            {
                FVector2D pos;
                if (Actors::PWTS(HeavyTurret->K2_GetActorLocation(), pos))
                    Renderer::DrawString(std::to_wstring(HeavyTurret->NumBullets), pos, { 0.8, 0.8 }, { 1, 0, 0, 1 }, true, { 0, 0, 0, 1 }, true, true);
            }
        }
    }

    if ((settings::autoMation::AutoTakeCrops.Enabled || settings::autoMation::AutoFillCropPlots.Enabled) && CropPlotArray.size() > 0)
    {
        static UClass* Fertilizer = nullptr;
        if (!Fertilizer)
            Fertilizer = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Items/Consumables/PrimalItemConsumable_Fertilizer_Compost.PrimalItemConsumable_Fertilizer_Compost_C"));

        if (globals::local::FrameNum % 3 == 0)
        {
            if (CropPlotNumber + 1 >= CropPlotArray.size())
                CropPlotNumber = -1;

            CropPlotNumber++;

            APrimalStructureItemContainer_CropPlot* CropPlot = CropPlotArray[CropPlotNumber];

            if (CropPlot && CropPlot->MyInventoryComponent)
            {
                globals::local::PC->ServerRequestActorItems(CropPlot->MyInventoryComponent, true, false);

                if (settings::autoMation::AutoTakeCrops.Enabled)
                {
                    for (int x = 0; x < CropPlot->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = CropPlot->MyInventoryComponent->InventoryItems[x];

                        if (!Item || Item->bIsEngram || !Item->bIsCookingIngredient)
                            continue;

                        globals::local::PC->ServerTransferFromRemoteInventory(CropPlot->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
                    }
                }

                if (settings::autoMation::AutoFillCropPlots.Enabled)
                {
                    int numFertilizer = 0;
                    for (int x = 0; x < CropPlot->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = CropPlot->MyInventoryComponent->InventoryItems[x];

                        if (!Item || Item->bIsEngram)
                            continue;

                        if (!Item->bIsCookingIngredient) 
                        {
                            if (Item->IsA(Fertilizer))
                            {
                                if (numFertilizer < settings::autoMation::AutoFillCropPlots.Val)
                                    numFertilizer++;
                                else
                                    globals::local::PC->ServerTransferFromRemoteInventory(CropPlot->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
                            }

                            continue;
                        }
                    }

                    if (numFertilizer < settings::autoMation::AutoFillCropPlots.Val)
                    {
                        for (int i = 0; i < globals::local::PINV->InventoryItems.Count() && CropPlot->CurrentItemCount < CropPlot->MaxItemCount && numFertilizer < settings::autoMation::AutoFillCropPlots.Val; i++)
                        {
                            UPrimalItem* Item = globals::local::PINV->InventoryItems[i];

                            if (Item->bIsEngram)
                                continue;

                            if (Item->IsA(Fertilizer))
                            {
                                globals::local::PC->ServerTransferToRemoteInventory(CropPlot->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                                numFertilizer++;
                            }
                        }
                    }
                }
            }
        }
    }

    if (settings::autoCraft::EnableCrafting && DediArray.size() > 0)
    {
        std::vector<APrimalStructureItemContainer*> Containers;

        for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
        {
            AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

            if (!Actors)
                continue;

            if (Actors->K2_GetActorLocation().Distance(globals::local::POS) > 1250)
                continue;

            if (Actors->IsA(APrimalStructureItemContainer::StaticClass()))
            {
                APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)Actors;

                if (settings::autoCraft::CraftingStructure == 0)
                {
                    if (strstr(Container->GetFullName().c_str(), Xors("TekReplicator")) != NULL)
                        Containers.push_back(Container);
                }
                else if (settings::autoCraft::CraftingStructure == 1)
                {
                    if (strstr(Container->GetFullName().c_str(), Xors("ChemBench")) != NULL)
                        Containers.push_back(Container);
                }
                else if (settings::autoCraft::CraftingStructure == 2)
                {
                    if (strstr(Container->GetFullName().c_str(), Xors("Fabricator")) != NULL)
                        Containers.push_back(Container);
                }
                else if (settings::autoCraft::CraftingStructure == 3)
                {
                    if (strstr(Container->GetFullName().c_str(), Xors("Cooker")) != NULL)
                        Containers.push_back(Container);
                }
                else if (settings::autoCraft::CraftingStructure == 4)
                {
                    if (strstr(Container->GetFullName().c_str(), Xors("Grinder")) != NULL)
                        Containers.push_back(Container);
                }
            }
        }

        if (Containers.empty())
        {
            Renderer::PushFont(Renderer::HudFont);
            Renderer::DrawString(Xors(L"No Crafting Stations Nearby"), { Renderer::GetCanvasSize().X / 2, 350 }, { 1, 1 }, { 1,0,0,1 }, true, { 0,0,0,0 }, true, true);
            Renderer::PushFont(Renderer::EspFont);
        }
        else if (!Containers.empty() && Containers.size() > 0)
        {
            int Num = Containers.size();

            std::wstring ContainerString = Xors(L"Using ") + std::to_wstring(Num) + Xors(L" Containers");
            Renderer::PushFont(Renderer::HudFont);
            Renderer::DrawString(ContainerString.c_str(), { Renderer::GetCanvasSize().X / 2, 350 }, { 1, 1 }, { 1,0,0,1 }, true, { 0,0,0,0 }, true, true);
            Renderer::PushFont(Renderer::EspFont);
        }

        if (DediArray.empty())
        {
            Renderer::PushFont(Renderer::HudFont);
            Renderer::DrawString(Xors(L"No Dedicated Storages Nearby"), { Renderer::GetCanvasSize().X / 2, 380 }, { 1, 1 }, { 1,0,0,1 }, true, { 0,0,0,0 }, true, true);
            Renderer::PushFont(Renderer::EspFont);
        }
        else if (!DediArray.empty() && DediArray.size() > 0)
        {
            int Num = DediArray.size();
                
            std::wstring DediString = Xors(L"Using ") + std::to_wstring(Num) + Xors(L" Dedicated Storages");
            Renderer::PushFont(Renderer::HudFont);
            Renderer::DrawString(DediString, { Renderer::GetCanvasSize().X / 2, 380 }, { 1, 1 }, { 1,0,0,1 }, true, { 0,0,0,0 }, true, true);
            Renderer::PushFont(Renderer::EspFont);
        }

        if (!Containers.empty())
        {
            for (int x = 0; x < Containers.size(); x++)
            {
                APrimalStructureItemContainer* Container = Containers[x];

                for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    UPrimalItem* Item = Container->MyInventoryComponent->InventoryItems[x];

                    if (Item->bIsEngram || Item->bIsBlueprint)
                    {
                        if (wcsstr(Item->DescriptiveNameBase.ToWString().c_str(), settings::autoCraft::ItemName.c_str()) != NULL)
                            globals::local::PC->ServerCraftItem(Container->MyInventoryComponent, Item->ItemID);
                    }
                }
            }

            if (globals::local::FrameNum % 15 == 0)
            {
                if (StructureNumber + 1 >= Containers.size())
                    StructureNumber = -1;

                StructureNumber++;

                APrimalStructureItemContainer* Container = Containers[StructureNumber];

                if (Container && Container->MyInventoryComponent)
                {
                    globals::local::PC->ServerRequestActorItems(Container->MyInventoryComponent, true, false);

                    for (int x = 0; x < Container->MyInventoryComponent->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = Container->MyInventoryComponent->InventoryItems[x];

                        if (!Item || Item->bIsEngram)
                            continue;

                        if (wcsstr(Item->DescriptiveNameBase.ToWString().c_str(), settings::autoCraft::ItemName.c_str()) == NULL)
                            continue;

                        globals::local::PC->ServerTransferFromRemoteInventory(Container->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, 0, false);
                    }
                }

                for (int i = 0; i < DediArray.size(); i++)
                {
                    ABP_DedicatedStorage_C* Dedi = DediArray[i];

                    if (Dedi)
                    {
                        UPrimalInventory_DedicatedStorage_C* Inv = (UPrimalInventory_DedicatedStorage_C*)Dedi->MyInventoryComponent;

                        if (Inv && Inv->SelectedResourceType)
                        {
                            for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
                            {
                                UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                                if (!Item || Item->bIsEngram)
                                    continue;

                                if (Item->Class == Inv->SelectedResourceType)
                                    globals::local::PC->ServerTransferToRemoteInventory(Dedi->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                            }
                        }
                    }
                }

            }
        }
    }

    if ((settings::autoMation::AutoDepoDedis.Enabled || settings::autoMation::DupeMethod.Enabled ) && DediArray.size() > 0)
    {
        static UClass* IED = nullptr;
        if (!IED)
            IED = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/PrimalItem_WeaponTripwireC4.PrimalItem_WeaponTripwireC4_C"));

        if (DediDepoNumber + 1 >= DediArray.size())
            DediDepoNumber = -1;

        DediDepoNumber++;

        ABP_DedicatedStorage_C* Dedi = DediArray[DediDepoNumber];

        if (Dedi)
        {
            for (int z = 0; z < globals::local::PINV->InventoryItems.Count(); z++)
            {
                UPrimalItem* Item = globals::local::PINV->InventoryItems[z];

                if (!Item || Item->bIsEngram)
                    continue;

                if (Item->DescriptiveNameBase.ToWString() == settings::autoDemo::ItemName)
                    continue;

                if (settings::autoMation::DupeMethod.Enabled && Item->IsA(IED))
                    continue;

                if (Item->Class == ((UPrimalInventory_DedicatedStorage_C*)Dedi->MyInventoryComponent)->SelectedResourceType)
                    globals::local::PC->ServerTransferToRemoteInventory(Dedi->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
            }
        }
    }

    if (settings::autoMation::AutoFillForges.Enabled && settings::autoMation::ForgeFillPercentage > 0)
    {
        static UClass* Metal = nullptr;
        if (!Metal)
            Metal = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Resources/PrimalItemResource_Metal.PrimalItemResource_Metal_C"));

        static UClass* Wood = nullptr;
        if (!Wood)
            Wood = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Resources/PrimalItemResource_Wood.PrimalItemResource_Wood_C"));

        for (int i = 0; i < ForgesArray.size();i++)
        {
            APrimalStructureItemContainer* Forge = ForgesArray[i];

            if (!Forge || !Forge->MyInventoryComponent)
                continue;

            if (Forge->CurrentItemCount > settings::autoMation::ForgeFillPercentage)
            {
                int removeCount = Forge->CurrentItemCount - settings::autoMation::ForgeFillPercentage;
                int slotsRemoved = 0;

                for (int x = 0; x < Forge->MyInventoryComponent->InventoryItems.Count(); x++)
                {
                    if (Forge->CurrentItemCount <= settings::autoMation::ForgeFillPercentage || slotsRemoved >= removeCount)
                        break;

					UPrimalItem* Item = Forge->MyInventoryComponent->InventoryItems[x];

					if (!Item || Item->bIsEngram)
						continue;

                    if (Item->IsA(Wood) || Item->IsA(Metal))
                    {
						globals::local::PC->ServerTransferFromRemoteInventory(Forge->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
                        slotsRemoved++;
					}
				}
            }
            else if (Forge->CurrentItemCount < settings::autoMation::ForgeFillPercentage)
            {
                FVector2D pos;

                if (Actors::PWTS(Forge->K2_GetActorLocation(), pos))
					Renderer::DrawString(std::to_wstring(Forge->CurrentItemCount), pos, { 0.8, 0.8 }, { 1, 0, 0, 1 }, true, { 0, 0, 0, 1 }, true, true);
                
                int neededSlots = settings::autoMation::ForgeFillPercentage - Forge->CurrentItemCount;
                int addedSlots = 0;
                
                if (globals::local::FrameNum % 5 == 0)
                {
                    for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
                    {
                        if (Forge->CurrentItemCount >= settings::autoMation::ForgeFillPercentage || Forge->CurrentItemCount >= Forge->MaxItemCount || addedSlots >= neededSlots)
                            break;

                        UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                        if (!Item || Item->bIsEngram)
                            continue;

                        if (Item->IsA(Metal) || Item->IsA(Wood))
                        {
                            globals::local::PC->ServerTransferToRemoteInventory(Forge->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                            addedSlots++;
                        }
                    }
                }
            }
        }
    }

    if (settings::autoMation::AutoGrindStone.Enabled && globals::local::FrameNum % 5 == 0)
    {
        static UClass* Chitin = nullptr;
        if (!Chitin)
            Chitin = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Resources/PrimalItemResource_Chitin.PrimalItemResource_Chitin_C"));

        static UClass* Paste = nullptr;
        if (!Paste)
            Paste = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Resources/PrimalItemResource_ChitinPaste.PrimalItemResource_ChitinPaste_C"));

        static UClass* Grinder = nullptr;
        if (!Grinder)
            Grinder = UObject::FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/Structures/StorageBox_IndustrialGrinder.StorageBox_IndustrialGrinder_C"));

        globals::local::PC->ServerRequestDropAllItems(Xors(L""), Xors(L"Chitin"), false, true);

        APrimalStructureItemContainer* IndyGrinder = nullptr;

        for (int x = 0; x < UWorld::Singleton()->PersistentLevel->Actors.Count(); x++)
        {
            AActor* Actors = UWorld::Singleton()->PersistentLevel->Actors[x];

            if (!Actors)
                continue;

            if (Actors->IsA(Grinder))
                IndyGrinder = (APrimalStructureItemContainer*)Actors;
        }

        if (IndyGrinder)
        {
            globals::local::PC->ServerRequestActorItems(IndyGrinder->MyInventoryComponent, true, false);

            FBPNetExecParams Params{};

            globals::local::PC->ServerProcessNetExecCommand(IndyGrinder, globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"GrindAll")), Params);
        }

        if (IndyGrinder && IndyGrinder->MyInventoryComponent)
        {
            for (int x = 0; x < IndyGrinder->MyInventoryComponent->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = IndyGrinder->MyInventoryComponent->InventoryItems[x];

                if (!Item || Item->bIsEngram)
                    continue;

                if (Item->IsA(Chitin) || Item->IsA(Paste))
                    globals::local::PC->ServerTransferFromRemoteInventory(IndyGrinder->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
            }

            for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
            {
                UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                if (!Item || Item->bIsEngram)
                    continue;

                if (Item->IsA(Paste))
                    globals::local::PC->ServerTransferToRemoteInventory(IndyGrinder->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
            }
        }

        for (int i = 0; i < DediArray.size(); i++)
        {
            ABP_DedicatedStorage_C* Dedi = DediArray[i];

            if (Dedi)
            {
                UPrimalInventory_DedicatedStorage_C* Inv = (UPrimalInventory_DedicatedStorage_C*)Dedi->MyInventoryComponent;

                if (Inv && Inv->SelectedResourceType)
                {
                    for (int x = 0; x < globals::local::PINV->InventoryItems.Count(); x++)
                    {
                        UPrimalItem* Item = globals::local::PINV->InventoryItems[x];

                        if (!Item || Item->bIsEngram)
                            continue;

                        if (Item->IsA(Chitin) || Item->IsA(Paste))
                            continue;

                        if (Item->Class == Inv->SelectedResourceType)
                            globals::local::PC->ServerTransferToRemoteInventory(Dedi->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                    }
                }
            }
        }

        for (int i = 0; i < DediArray.size(); i++)
        {
            ABP_DedicatedStorage_C* Dedi = DediArray[i];

            if (Dedi)
            {
                UPrimalInventory_DedicatedStorage_C* Inv = (UPrimalInventory_DedicatedStorage_C*)Dedi->MyInventoryComponent;

                if (Inv && Inv->SelectedResourceType && Inv->SelectedResourceType->IsA(Chitin))
                    globals::local::PC->ServerMultiUse(Dedi, 9001);
            }
        }
    }

    ForgesArray.clear();
    DediArray.clear();
    CropPlotArray.clear();
    HeavyTurretArray.clear();
    AutoTurretArray.clear();
    TekTurretArray.clear();
}

void FillTurret(APrimalStructureTurret* Turret, std::string AmmoName, int wantedBullets)
{
    int numBullets = Turret->NumBullets;

    if (numBullets > wantedBullets)
    {
        int bulletsToRemove = numBullets - wantedBullets;

        for (int i = 0; i < Turret->MyInventoryComponent->InventoryItems.Count() && bulletsToRemove > 0;i++)
        {
            UPrimalItem* Item = Turret->MyInventoryComponent->InventoryItems[i];

            if (Item)
            {
                if (Item->bIsEngram)
                    continue;

                if (bulletsToRemove > 100)
                {
                    globals::local::PC->ServerTransferFromRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, 100, -1, false);
                    bulletsToRemove -= 100;
                }
                else
                {
                    globals::local::PC->ServerTransferFromRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, bulletsToRemove, -1, false);
                }
            }
        }
    }
    else
    {
        int bulletsToAdd = wantedBullets - numBullets;

        for (int i = 0; i < globals::local::LP->MyInventoryComponent->InventoryItems.Count() && bulletsToAdd > 0; i++)
        {
            UPrimalItem* Item = globals::local::LP->MyInventoryComponent->InventoryItems[i];

            if (Item)
            {
                if (Item->bIsEngram)
                    continue;

                if (Item->DescriptiveNameBase.ToString() == AmmoName)
                {
                    if (Item->ItemQuantity > bulletsToAdd)
                    {
                        globals::local::PC->ServerTransferToRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, false, bulletsToAdd);
                        bulletsToAdd = 0;
                    }
                    else
                    {
                        globals::local::PC->ServerTransferToRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                        bulletsToAdd -= Item->ItemQuantity;
                    }
                }
            }
        }
    }
}

void FillTekTurret(APrimalStructureTurret* Turret, std::string AmmoName, int wantedBullets)
{
    int CurrentBullets = Turret->NumBullets;

    if (CurrentBullets > wantedBullets)
    {
        int BulletsToTake = CurrentBullets - wantedBullets;

        for (int i = 0; i < Turret->MyInventoryComponent->InventoryItems.Count(); i++)
        {
            UPrimalItem* Item = Turret->MyInventoryComponent->InventoryItems[i];

            if (!Item)
                continue;

            if (Item->bIsEngram)
                continue;
            
            if (BulletsToTake <= 0)
                break;

            globals::local::PC->ServerTransferFromRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, Item->ItemQuantity, -1, false);
            BulletsToTake -= Item->ItemQuantity;
        }
    }
    else if (CurrentBullets < wantedBullets)
    {
        int BulletsToGive = wantedBullets - CurrentBullets;

        for (int i = 0; i < globals::local::LP->MyInventoryComponent->InventoryItems.Count() && BulletsToGive > 0; i++)
        {
            UPrimalItem* Item = globals::local::LP->MyInventoryComponent->InventoryItems[i];

            if (!Item)
                continue;

            if (Item->bIsEngram)
                continue;

            if (Item->DescriptiveNameBase.ToString() != AmmoName)
                continue;

            if (Item->ItemQuantity > BulletsToGive)
            {
                globals::local::LP->MyInventoryComponent->ServerSplitItemStack(Item->ItemID, BulletsToGive);

                for (int i = 0; i < globals::local::LP->MyInventoryComponent->InventoryItems.Count() && BulletsToGive > 0; i++)
                {
                    UPrimalItem* Item = globals::local::LP->MyInventoryComponent->InventoryItems[i];

                    if (!Item)
                        continue;

                    if (Item->bIsEngram)
                        continue;

                    if (Item->DescriptiveNameBase.ToString() != AmmoName)
                        continue;

                    if (Item->ItemQuantity == BulletsToGive)
                    {
                        globals::local::PC->ServerTransferToRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                        break;
                    }
                }

                break;
            }
            else
            {
                globals::local::PC->ServerTransferToRemoteInventory(Turret->MyInventoryComponent, Item->ItemID, false, Item->ItemQuantity);
                BulletsToGive = BulletsToGive - Item->ItemQuantity;
            }
        }
    }
}
