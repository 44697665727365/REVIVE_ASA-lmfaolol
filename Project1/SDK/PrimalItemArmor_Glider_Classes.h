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
	 * BlueprintGeneratedClass PrimalItemArmor_Glider.PrimalItemArmor_Glider_C
	 * Size -> 0x0008 (FullSize[0x0EB8] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemArmor_Glider_C : public UPrimalItemSkinGeneric_C
	{
	public:
		class UPrimalItem*                                         Ref_OwnerItem;                                           // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void BlueprintUnequipped();
		void BlueprintEquipped(bool bIsFromSaveGame);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
