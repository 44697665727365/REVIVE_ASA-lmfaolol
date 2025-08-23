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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_HazardSuitShirt_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_HazardSuitShirt.PrimalItemArmor_HazardSuitShirt_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_HazardSuitShirt_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLBP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
