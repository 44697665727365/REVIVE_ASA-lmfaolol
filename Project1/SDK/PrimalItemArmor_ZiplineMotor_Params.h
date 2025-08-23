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
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.GetGasolineValueFromItem
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_GetGasolineValueFromItem_Params
	{
	public:
		class UPrimalItem*                                         TargetItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8KA9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Value;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetSkinnedCustomInventoryWidgetText
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_BPGetSkinnedCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SetGasolineDescription
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_SetGasolineDescription_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Value;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPInitFromItemNetInfo
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_BPInitFromItemNetInfo_Params
	{	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.RemovedSkinFromItem
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJC8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SkinEquippedBlueprintTick
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_SkinEquippedBlueprintTick_Params
	{
	public:
		class UPrimalItem*                                         OwnerItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6I3K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ApplyingSkinOntoItem
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_ApplyingSkinOntoItem_Params
	{
	public:
		class UPrimalItem*                                         ToOwnerItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQY6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
