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
	 * Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage
	 */
	struct UPrimalItem_ChargeBattery_C_BPGetItemDurabilityPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AU2I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon
	 */
	struct UPrimalItem_ChargeBattery_C_BPGetItemIcon_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItem_ChargeBattery_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe
	 */
	struct UPrimalItem_ChargeBattery_C_AddDurabilitySafe_Params
	{
	public:
		double                                                     amountToAdd;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     AmountAdded;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem
	 */
	struct UPrimalItem_ChargeBattery_C_BPUsedOntoItem_Params
	{
	public:
		class UPrimalItem*                                         DestinationItem;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AdditionalData;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
