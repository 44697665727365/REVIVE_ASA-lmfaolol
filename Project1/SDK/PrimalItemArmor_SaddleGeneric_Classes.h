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
	 * BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
	 * Size -> 0x0010 (FullSize[0x0EC8] - InheritedSize[0x0EB8])
	 */
	class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
	{
	public:
		double                                                     LastTorchDurabilityLossTime;                             // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     SavedSaddleDurability;                                   // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPOverrideEquippedDurabilityPercentage(float* OutDurabilityPercentageValue);
		void ResetSaddleDurabilityToSavedValue();
		void SaveSaddleDurability();
		void BlueprintEquipped(bool bIsFromSaveGame);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
