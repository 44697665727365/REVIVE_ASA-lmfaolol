#pragma once
#include "ModuleBase.h"

extern std::vector<std::pair<std::pair<FVector, FVector>, std::pair<double, std::wstring>>>TeleportParams;
extern std::vector<HitMarker3D> HitMarkers;
class AntimeshBorder {
    AFloor_Metal_C* Mesh;
    FVector Bottom1;
    FVector Bottom2;
    FVector Bottom3;
    FVector Bottom4;
    FVector Top1;
    FVector Top2;
    FVector Top3;
    FVector Top4;
    FVector Center;
    FVector Extent;
    FQuat Rotation;

    void CreateAndTransformStructure();
    void UpdateStructureColor();
    void DrawEdges();
    void CalculateEdges();
    FLinearColor GetDrawColor();
    FLinearColor LastAppliedColor;

public:
    void Draw();
    FVector GetCenter();
    AntimeshBorder(FVector Center, FVector Extent, FQuat Rotation) : Center(Center), Extent(Extent), Rotation(Rotation)
    {
        CalculateEdges();
    }
    void Reset()
	{
		if (IsValid(Mesh))
			Mesh->K2_DestroyActor();
	}
    ~AntimeshBorder()
	{
        if (IsValid(Mesh))
			Mesh->K2_DestroyActor();
	}
};
class UserModule : public ModuleBase
{
    static std::vector<AntimeshBorder*> AntimeshVolumes;
public:
    static void InitShowFlags();
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<UserModule> CreateModule();
    static void ClearAntimeshESP();
	static void DrawDamageNumber(CurrentActor* Target, FString Damage);
};