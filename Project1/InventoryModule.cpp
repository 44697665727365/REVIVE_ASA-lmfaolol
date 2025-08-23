#include "pch.h"
#include "InventoryModule.h"
#include "Menu.h"

bool InventoryModule::OnModuleInit()
{
    return true;
}

bool InventoryModule::OnActorModule(CurrentActor* Current)
{
    return false;
}

bool InventoryModule::ModuleRequirements(CurrentActor* Current)
{
    return true;
}

void InventoryModule::PostActors()
{
}

std::unique_ptr<InventoryModule> InventoryModule::CreateModule()
{
    return std::make_unique<InventoryModule>();
}