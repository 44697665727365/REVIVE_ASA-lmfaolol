#pragma once
#include "ModuleBase.h"
#include "StructDefs.h"
class StructureModule : public ModuleBase
{
private:
    
    static std::vector<Structure> VecStructures;
    static std::vector<Structure> VecMultiStructures;
    void InitStructureMap();
    void CreateStructureVariants(Structure Struct,std::vector<Structure>* MultiStructures);
public:
    static std::map<uint64_t, Structure*> StructureMap;
    static StructureType GetStructureType(AActor* actor);
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<StructureModule> CreateModule();
};