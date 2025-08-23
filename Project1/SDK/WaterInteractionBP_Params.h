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
	 * Function WaterInteractionBP.WaterInteractionBP_C.CheckHalfSize
	 */
	struct AWaterInteractionBP_C_CheckHalfSize_Params
	{	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.CheckDisable
	 */
	struct AWaterInteractionBP_C_CheckDisable_Params
	{	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.StagePrint
	 */
	struct AWaterInteractionBP_C_StagePrint_Params
	{
	public:
		class FString                                              Note;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.ReceiveBeginPlay
	 */
	struct AWaterInteractionBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.ReceiveTick
	 */
	struct AWaterInteractionBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.GDF_RT_Update
	 */
	struct AWaterInteractionBP_C_GDF_RT_Update_Params
	{	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.GDF_RT_Init
	 */
	struct AWaterInteractionBP_C_GDF_RT_Init_Params
	{	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.LiveActivation
	 */
	struct AWaterInteractionBP_C_LiveActivation_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FadeTimeOfBrush;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FadeTimeOfCanvas;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.LiveFluidParams
	 */
	struct AWaterInteractionBP_C_LiveFluidParams_Params
	{
	public:
		double                                                     BrushSize;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WaterInteractionBP.WaterInteractionBP_C.ExecuteUbergraph_WaterInteractionBP
	 */
	struct AWaterInteractionBP_C_ExecuteUbergraph_WaterInteractionBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
