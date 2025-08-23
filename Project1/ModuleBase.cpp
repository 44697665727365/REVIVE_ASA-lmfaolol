#include "pch.h"
#include "ModuleBase.h"

std::vector < std::unique_ptr<ModuleBase>> ModuleBase::Children;

bool ModuleBase::OnModuleInit()
{
    return true;
}
bool ModuleBase::OnActorModule(CurrentActor* Current)
{
    return false;
}
bool ModuleBase::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;

    return true;
}

void ModuleBase::PostActors()
{
}

bool ModuleBase::RegisterModules()
{
    return false;
}
