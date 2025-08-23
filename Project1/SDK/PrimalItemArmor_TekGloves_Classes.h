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
	 * BlueprintGeneratedClass PrimalItemArmor_TekGloves.PrimalItemArmor_TekGloves_C
	 * Size -> 0x0017 (FullSize[0x0F30] - InheritedSize[0x0F19])
	 */
	class UPrimalItemArmor_TekGloves_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_WGMB[0x7];                                   // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CannotUseAbilityDescriptionaddon;                        // 0x0F20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
