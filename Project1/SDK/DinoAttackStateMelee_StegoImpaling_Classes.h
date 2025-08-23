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
	 * BlueprintGeneratedClass DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UDinoAttackStateMelee_StegoImpaling_C : public UDinoAttackStateMelee_C
	{
	public:
		void BPOnHitActor(const struct FHitResult& HitResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
