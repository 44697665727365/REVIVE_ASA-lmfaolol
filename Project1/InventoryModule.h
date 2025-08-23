#pragma once
#include "ModuleBase.h"
class InventoryModule : public ModuleBase
{
    static int InputMode;
public:
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<InventoryModule> CreateModule();
};