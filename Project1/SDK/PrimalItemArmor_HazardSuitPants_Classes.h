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
	 * BlueprintGeneratedClass PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C
	 * Size -> 0x0008 (FullSize[0x0EE8] - InheritedSize[0x0EE0])
	 */
	class UPrimalItemArmor_HazardSuitPants_C : public UPrimalItemArmor_BasePants_C
	{
	public:
		class UClass*                                              BuffWhileEquipped;                                       // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintUnequipped();
		void BlueprintEquipped(bool bIsFromSaveGame);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
