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
	 * BlueprintGeneratedClass PrimalItemArmor_MekBackpack_Base.PrimalItemArmor_MekBackpack_Base_C
	 * Size -> 0x0008 (FullSize[0x0ED0] - InheritedSize[0x0EC8])
	 */
	class UPrimalItemArmor_MekBackpack_Base_C : public UPrimalItemArmor_SaddleGeneric_C
	{
	public:
		double                                                     DurabilityPercentLossOnUnequip;                          // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintUnequipped();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
