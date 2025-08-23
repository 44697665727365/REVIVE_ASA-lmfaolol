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
	 * BlueprintGeneratedClass FL_CharMeetsRequirements.FL_CharMeetsRequirements_C
	 * Size -> 0x0001 (FullSize[0x0031] - InheritedSize[0x0030])
	 */
	class UFL_CharMeetsRequirements_C : public UObject_WithWorldContext
	{
	public:
		bool                                                       Debug;                                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DebugFailures(const class FString& failreason);
		bool HasEnemyTarget(class APrimalDinoCharacter* PrimalDino);
		void IsCharacterIsNotRestrictedByConditions(class APrimalCharacter* Character, bool ShouldRestrictIfDead, bool ShouldRestrictIfAsleep, bool CreatureShouldRestrictIfHasEnemyTarget, bool CreatureShouldRestrictIfFollowing, bool CreatureShouldRestrictIfWild, bool CreatureShouldRestrictIfRidden, bool* CanGrab, bool* failurereasonwasdead, bool* failurereasonwasasleep, bool* failurereasonhadenemy, bool* failurereasonwasfollowing, bool* failurereasonwaswild, bool* failurereasonwasridden);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
