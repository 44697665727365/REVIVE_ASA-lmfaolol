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
	 * BlueprintGeneratedClass DinoAttackStateRanged_Leading.DinoAttackStateRanged_Leading_C
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UDinoAttackStateRanged_Leading_C : public UPrimalAIStateDinoRangedState
	{
	public:
		bool BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
