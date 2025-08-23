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
	 * BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
	 * Size -> 0x0061 (FullSize[0x0F19] - InheritedSize[0x0EB8])
	 */
	class UPrimalItemArmor_Base_Tek_C : public UPrimalItemArmorGeneric_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalItem*                                         SelfObj;                                                 // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MyTekArmorBuff[0x30];                                    // 0x0EC8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MaxAmmo;                                                 // 0x0EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInfiniteAmmo;                                           // 0x0EFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I974[0x3];                                   // 0x0EFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMapSpecificTekArmorBuffs>                   MapSpecificTekArmorBuffs;                                // 0x0F00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              CachedResolvedTekArmorBuff;                              // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bTekBuffDirty;                                           // 0x0F18(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t BPGetMaxAmmo();
		void IsInfiniteAmmo(bool* IsInfinite);
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void GetInternalMapRestrictedTekArmorBuff(class AShooterCharacter* OwningPlayer, class UClass** TekArmorBuff);
		void GetResolvedTekArmorBuff(class UClass** ResolvedTekArmorBuff);
		void FillEmptyArmorElementWhenAvailable();
		void InitBuff();
		void BlueprintOwnerPosssessed(class AController* PossessedByController);
		void BlueprintUnequipped();
		class FString BPGetCustomInventoryWidgetText();
		void CanElementDecrease(int32_t AmountToDecreaseBy, bool PreventCheckingInventory, bool* CanDecrease);
		void BlueprintEquipped(bool bIsFromSaveGame);
		void TryToDecreaseElement(int32_t AmountToDecreaseBy);
		void SetElementToMax();
		void IncreaseElement(double Percent);
		void TekArmorSkinApplied();
		void TekArmorSkinRemoved();
		void ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
