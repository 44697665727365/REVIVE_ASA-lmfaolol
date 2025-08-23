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
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L990[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.EquippedBlueprintTick
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_EquippedBlueprintTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RONI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.SetForceGainOxygen
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_SetForceGainOxygen_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IMLL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_HazardSuitHelmet_C_BlueprintUnequipped_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
