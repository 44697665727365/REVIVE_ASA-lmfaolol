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
	 * BlueprintGeneratedClass PrimalItem_Pliers.PrimalItem_Pliers_C
	 * Size -> 0x0030 (FullSize[0x0EE0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_Pliers_C : public UPrimalItem_GenericMisc_C
	{
	public:
		double                                                     DurabilityLossForMaxRepair;                              // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      AllowRepairingForInventoryClasses;                       // 0x0EB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bFoundClass;                                             // 0x0EC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4U87[0x7];                                   // 0x0EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RepairToPercent;                                         // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RepairSpeedMult;                                         // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
