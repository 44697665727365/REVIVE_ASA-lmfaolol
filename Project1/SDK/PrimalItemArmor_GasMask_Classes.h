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
	 * BlueprintGeneratedClass PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C
	 * Size -> 0x0018 (FullSize[0x0ED0] - InheritedSize[0x0EB8])
	 */
	class UPrimalItemArmor_GasMask_C : public UPrimalItemArmor_BaseHelmet_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              EquippedBuff;                                            // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UPrimalItem*                                         SelfObj;                                                 // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintEquipped(bool bIsFromSaveGame);
		void BlueprintUnequipped();
		void ExecuteUbergraph_PrimalItemArmor_GasMask(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
