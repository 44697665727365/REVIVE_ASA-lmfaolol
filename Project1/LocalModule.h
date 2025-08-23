#pragma once
#include "ModuleBase.h"
class LocalModule : public ModuleBase
{

public:
    static FVector CachedBossFightLocation;
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<LocalModule> CreateModule();
};
extern TArray<FOverlappedFoliageElement> Resources;
extern APrimalStructureItemContainer_SupplyCrate* Supply;
