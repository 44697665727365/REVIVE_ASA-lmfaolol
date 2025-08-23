#pragma once
#include "ModuleBase.h"
class AutoModule : public ModuleBase
{

public:
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<AutoModule> CreateModule();
};