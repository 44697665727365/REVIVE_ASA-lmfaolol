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
	 * BlueprintGeneratedClass Climber_AttachedHasFollowTarget.Climber_AttachedHasFollowTarget_C
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UClimber_AttachedHasFollowTarget_C : public UBTTask_BlueprintBase
	{
	public:
		void ReceiveExecute(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
