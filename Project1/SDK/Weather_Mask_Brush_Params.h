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
	 * Function Weather_Mask_Brush.Weather_Mask_Brush_C.UserConstructionScript
	 */
	struct AWeather_Mask_Brush_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Weather_Mask_Brush.Weather_Mask_Brush_C.ReceiveBeginPlay
	 */
	struct AWeather_Mask_Brush_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Weather_Mask_Brush.Weather_Mask_Brush_C.ReceiveEndPlay
	 */
	struct AWeather_Mask_Brush_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weather_Mask_Brush.Weather_Mask_Brush_C.ExecuteUbergraph_Weather_Mask_Brush
	 */
	struct AWeather_Mask_Brush_C_ExecuteUbergraph_Weather_Mask_Brush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SSXR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
