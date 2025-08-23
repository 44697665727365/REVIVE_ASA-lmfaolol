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
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.OnMouseWheel
	 */
	struct UMinimapCorner_Widget_ASA_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.UpdateZoom
	 */
	struct UMinimapCorner_Widget_ASA_C_UpdateZoom_Params
	{	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Zoom
	 */
	struct UMinimapCorner_Widget_ASA_C_Zoom_Params
	{
	public:
		double                                                     Qty;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.RemovedFromViewport
	 */
	struct UMinimapCorner_Widget_ASA_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Tick
	 */
	struct UMinimapCorner_Widget_ASA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Construct
	 */
	struct UMinimapCorner_Widget_ASA_C_Construct_Params
	{	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.OnGamepadActiveChangedBP
	 */
	struct UMinimapCorner_Widget_ASA_C_OnGamepadActiveChangedBP_Params
	{
	public:
		bool                                                       bIsGamepadActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.ExecuteUbergraph_MinimapCorner_Widget_ASA
	 */
	struct UMinimapCorner_Widget_ASA_C_ExecuteUbergraph_MinimapCorner_Widget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I089[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
