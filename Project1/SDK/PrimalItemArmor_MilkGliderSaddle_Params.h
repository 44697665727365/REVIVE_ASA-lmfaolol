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
	 * Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_MilkGliderSaddle_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_MilkGliderSaddle_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8MP9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
