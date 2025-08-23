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
	 * Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_AndrewsarchusSaddle_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_AndrewsarchusSaddle_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F74A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.GetInventoryIconDisplayText
	 */
	struct UPrimalItemArmor_AndrewsarchusSaddle_C_GetInventoryIconDisplayText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
