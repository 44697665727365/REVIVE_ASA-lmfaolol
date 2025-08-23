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
	 * BlueprintGeneratedClass Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C
	 * Size -> 0x0090 (FullSize[0x0AF8] - InheritedSize[0x0A68])
	 */
	class AIchthyornis_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		double                                                     maxDepthForFishHunting;                                  // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     minAboveWaterFlyHeight;                                  // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             followingOwnerFlyingOffset;                              // 0x0A78(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     randomZOffsetMax;                                        // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             flyerTargetCombatOffset;                                 // 0x0A98(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     walkingTargetingRangePlayers;                            // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     flyingTargetingRangePlayers;                             // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             followingOwnerNoCarryingOffset;                          // 0x0AC0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             waterTargetCombatOffset;                                 // 0x0AD8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     naturalTargetingRangePlayerOrTame;                       // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTargetingDesireTamed(class APrimalCharacter* Character, double initialDesire, double initialMultiplier, double* desire, double* desireMultiplier);
		void StandardTargetChecks(class APrimalCharacter* Target, class AIchthyornis_Character_BP_C* IchthyPawn, bool* canTarget);
		void GetTargetingDesireWild(class APrimalCharacter* Character, double initialDesire, double initialMultiplier, double* desire, double* Multiplier);
		float GetAggroNotifyNeighborsRange();
		void GetTargetingRangeForPlayers(double* targetingRange);
		void DoDepthCheck(class APrimalCharacter* Character, bool* NotTooDeep);
		void UpdateFlyingOffset();
		void UpdateCombatOffset();
		void ChangedAITarget();
		float BPGetTargetingDesire(class AActor* ForTarget, float ForTargetingDesireValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
