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
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.IsCustomContextMenuItemEnabled
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_IsCustomContextMenuItemEnabled_Params
	{
	public:
		class FName                                                ContextItem;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetTextColor
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetTextColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.HasEnoughPowerForUse
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_HasEnoughPowerForUse_Params
	{
	public:
		bool                                                       bHasEnoughPower;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ApplyUnpoweredBuffs
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_ApplyUnpoweredBuffs_Params
	{	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryClearBuffs
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_TryClearBuffs_Params
	{	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetCurrentWaterMode
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_GetCurrentWaterMode_Params
	{
	public:
		class FName                                                WaterMode;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetWaterMode
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_SetWaterMode_Params
	{
	public:
		class FName                                                NewWaterMode;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SelectedCustomContextMenuItem
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_SelectedCustomContextMenuItem_Params
	{
	public:
		class FName                                                ContextItem;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryConsumeWithPower
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_TryConsumeWithPower_Params
	{	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BlueprintUsed
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetShardDescription
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_SetShardDescription_Params
	{	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetElementShardValue
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_GetElementShardValue_Params
	{
	public:
		bool                                                       HasData;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2JHX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Value;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPPostInitializeItem
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_BPPostInitializeItem_Params
	{
	public:
		class UWorld*                                              OptionalInitWorld;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable
	 */
	struct UPrimalItemConsumable_TekCanteenCraftable_C_ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P6QU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
