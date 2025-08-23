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
	 * BlueprintGeneratedClass PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C
	 * Size -> 0x0010 (FullSize[0x0EC0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemArmor_ZiplineMotor_C : public UPrimalItemSkinGeneric_C
	{
	public:
		double                                                     MaxGasoline;                                             // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimalItem*                                         ParentItem;                                              // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool GetGasolineValueFromItem(class UPrimalItem* TargetItem, double* Value);
		class FString BPGetCustomInventoryWidgetText();
		class FString BPGetSkinnedCustomInventoryWidgetText();
		void SetGasolineDescription(class UPrimalItem* Item, double Value);
		void BPInitFromItemNetInfo();
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
