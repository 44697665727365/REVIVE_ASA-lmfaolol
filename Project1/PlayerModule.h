#pragma once
#include "ModuleBase.h"


class PlayerModule : public ModuleBase
{

public:
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<PlayerModule> CreateModule();
};