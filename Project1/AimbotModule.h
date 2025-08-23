#pragma once
#include "ModuleBase.h"
extern std::vector<std::pair<std::pair<FVector, FVector >, TimeVar>> DrawShots;

class AimbotModule : public ModuleBase
{
public:
    static std::vector<ShooterBones> CameraBones;
    static std::vector<std::wstring> CameraBonesNames;

    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static std::unique_ptr<AimbotModule> CreateModule();
    static int GetDecidedBone();
    static int GetDinoDecidedBone();
    static FVector Prediction(FVector EnemyPos, int paramz);
    static FVector ProjectilePrediction(FVector EnemyPos, float ProjectileSpeed);
};