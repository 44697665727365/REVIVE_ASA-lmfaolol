#pragma once
#include "ModuleBase.h"
class ChamsModule : public ModuleBase
{

public:
    static std::vector<UMaterialInterface*> Materials;
    static std::vector<std::string> MaterialNames;
    static UMaterial* Material;
    static void CreateAndApplyMaterial(USkeletalMeshComponent* Mesh, FLinearColor Col);
    static void StaticCreateAndApplyMaterial(UStaticMeshComponent* Mesh, FLinearColor Col);
    static void StaticCreateAndApplyMaterial(UStaticMeshComponent* Mesh, FLinearColor Col,UMaterial* material, FString ColorParamName,bool DisableDepthTest = true);
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<ChamsModule> CreateModule();
};