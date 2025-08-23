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
	 * BlueprintGeneratedClass Piranha_AIController_BP.Piranha_AIController_BP_C
	 * Size -> 0x0010 (FullSize[0x0A78] - InheritedSize[0x0A68])
	 */
	class APiranha_AIController_BP_C : public ADino_AIController_BP_C
	{
	public:
		double                                                     TamedSarcoDetectionRadius;                               // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TamedSarcoFleeTime;                                      // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MaybeFleeTamedSarco();
		void ChangedAITarget();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
