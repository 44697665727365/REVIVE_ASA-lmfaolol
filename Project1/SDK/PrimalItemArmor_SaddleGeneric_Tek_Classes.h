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
	 * BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
	 * Size -> 0x0045 (FullSize[0x0F0D] - InheritedSize[0x0EC8])
	 */
	class UPrimalItemArmor_SaddleGeneric_Tek_C : public UPrimalItemArmor_SaddleGeneric_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EC8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalItem*                                         SelfObj;                                                 // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              EquippedBuff[0x30];                                      // 0x0ED8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MaxAmmo;                                                 // 0x0F08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInfiniteAmmo;                                           // 0x0F0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IGetMaxAmmo(int32_t* retVal);
		void CanElementDecrease(int32_t AmountToDecreaseBy, bool* CanDecrease);
		class FString BPGetCustomInventoryWidgetText();
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BlueprintUnequipped();
		void TryToDecreaseElement(int32_t AmountToDecreaseBy);
		void SetElementToMax();
		void IncreaseElement(double Percent);
		void ISetElementToMax();
		void ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
