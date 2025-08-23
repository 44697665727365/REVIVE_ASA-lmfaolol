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
	 * BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
	 * Size -> 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
	 */
	class UCactusHarvestComponent_C : public UAttackHarvestComponent_Base_C
	{
	public:
		double                                                     PlayerGiveWaterAmount;                                   // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PlayerGiveWaterSpeed;                                    // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MorellatopsGiveWaterAmount;                              // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t BPCustomHarvestResource(class UPrimalInventoryComponent* invComp, int32_t NumToGive, class UClass* DamageTypeClass, class AActor* ToActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
