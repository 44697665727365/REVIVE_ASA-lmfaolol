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
	 * Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_HyaenodonSaddle_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_HyaenodonSaddle_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGC6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
