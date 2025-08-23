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
	 * Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem
	 */
	struct UPrimalItemArmor_TekShirt_Gen2_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem
	 */
	struct UPrimalItemArmor_TekShirt_Gen2_C_ApplyingSkinOntoItem_Params
	{
	public:
		class UPrimalItem*                                         ToOwnerItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_TekShirt_Gen2_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_TekShirt_Gen2_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset
	 */
	struct UPrimalItemArmor_TekShirt_Gen2_C_TryTekSuitVFXOffset_Params
	{
	public:
		bool                                                       IsUnequip;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3JQ5[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
