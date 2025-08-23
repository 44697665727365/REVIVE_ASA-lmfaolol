#pragma once
#include "ModuleBase.h"
class MovementModule : public ModuleBase
{
public:
    static float DT;
    static float Velocity;
	static uint32_t AcknowledgeCounter;
	const static uint32_t AcknowledgeCounterMax = 25;
    static bool CanRecord;
    static bool RecordingMovement;
    static std::vector<CallServerMovePackedParams> CallServerMovePackedQueue;
    bool OnModuleInit() override;
    bool OnActorModule(CurrentActor* Current) override;
    bool ModuleRequirements(CurrentActor* Current) override;
    void PostActors() override;
    static UClass* TekChestBuff(bool NullBuff);
    static std::unique_ptr<MovementModule> CreateModule();
};