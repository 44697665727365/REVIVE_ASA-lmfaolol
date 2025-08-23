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
	 * BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C
	 * Size -> 0x0060 (FullSize[0x0F90] - InheritedSize[0x0F30])
	 */
	class UPrimalItemArmor_TekShirt_Gen2_C : public UPrimalItemArmor_TekShirt_C
	{
	public:
		struct FTransform                                          TekSuitVFXOffset;                                        // 0x0F30(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BlueprintUnequipped();
		void TryTekSuitVFXOffset(bool IsUnequip);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
