#pragma once
#include "ModuleBase.h"
class RadarModule : public ModuleBase
{
private:

public:

	bool OnModuleInit() override;
	bool OnActorModule(CurrentActor* Current) override;
	bool ModuleRequirements(CurrentActor* Current) override;
	void PostActors() override;
	static std::unique_ptr<RadarModule> CreateModule();
};