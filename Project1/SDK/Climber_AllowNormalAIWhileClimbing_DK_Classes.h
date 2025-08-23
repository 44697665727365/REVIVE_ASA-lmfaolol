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
	 * BlueprintGeneratedClass Climber_AllowNormalAIWhileClimbing_DK.Climber_AllowNormalAIWhileClimbing_DK_C
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UClimber_AllowNormalAIWhileClimbing_DK_C : public UBTDecorator_BlueprintBase
	{
	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
