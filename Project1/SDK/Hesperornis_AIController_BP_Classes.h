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
	 * BlueprintGeneratedClass Hesperornis_AIController_BP.Hesperornis_AIController_BP_C
	 * Size -> 0x0028 (FullSize[0x0A90] - InheritedSize[0x0A68])
	 */
	class AHesperornis_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		double                                                     retVal;                                                  // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ViableDragweight;                                        // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DistanceToAggroToPlayers;                                // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeOfAggroToPlayers;                                    // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetTooDeepDistance;                                   // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float BPGetTargetingDesire(class AActor* ForTarget, float ForTargetingDesireValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
