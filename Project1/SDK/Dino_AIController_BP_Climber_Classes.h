#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C
	 * Size -> 0x0000 (FullSize[0x0A68] - InheritedSize[0x0A68])
	 */
	class ADino_AIController_BP_Climber_C : public ADino_AIController_BP_C
	{
	public:
		void BPOnFleeEvent();
		void BPNotifyTargetSet();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
