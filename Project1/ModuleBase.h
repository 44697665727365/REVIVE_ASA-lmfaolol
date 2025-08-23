#pragma once
#include "StructDefs.h"
class ModuleBase
{

public:
    virtual bool OnModuleInit();
    virtual bool OnActorModule(CurrentActor* Current);
    virtual bool ModuleRequirements(CurrentActor* Current);
    virtual void PostActors();
    static bool RegisterModules();
    static std::vector < std::unique_ptr<ModuleBase>> Children;
};
