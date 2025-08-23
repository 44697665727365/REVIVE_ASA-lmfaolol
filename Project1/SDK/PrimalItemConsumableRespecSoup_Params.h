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
	 * Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemConsumableRespecSoup_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.GetLastRespecTime
	 */
	struct UPrimalItemConsumableRespecSoup_C_GetLastRespecTime_Params
	{
	public:
		double                                                     LastRespecUtcTime;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPCanUse
	 */
	struct UPrimalItemConsumableRespecSoup_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IICY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BlueprintUsed
	 */
	struct UPrimalItemConsumableRespecSoup_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.ExecuteUbergraph_PrimalItemConsumableRespecSoup
	 */
	struct UPrimalItemConsumableRespecSoup_C_ExecuteUbergraph_PrimalItemConsumableRespecSoup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9SRL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
