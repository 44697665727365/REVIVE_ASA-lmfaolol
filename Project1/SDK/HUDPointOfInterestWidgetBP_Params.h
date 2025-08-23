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
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.FixConsoleIcon
	 */
	struct UHUDPointOfInterestWidgetBP_C_FixConsoleIcon_Params
	{	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget
	 */
	struct UHUDPointOfInterestWidgetBP_C_DestroyPointOfInterestWidget_Params
	{	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct
	 */
	struct UHUDPointOfInterestWidgetBP_C_Construct_Params
	{	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim
	 */
	struct UHUDPointOfInterestWidgetBP_C_DestroyWidgetAfterAnim_Params
	{	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick
	 */
	struct UHUDPointOfInterestWidgetBP_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.PlayPulseAnimation
	 */
	struct UHUDPointOfInterestWidgetBP_C_PlayPulseAnimation_Params
	{	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.SetDismissOverlay
	 */
	struct UHUDPointOfInterestWidgetBP_C_SetDismissOverlay_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP
	 */
	struct UHUDPointOfInterestWidgetBP_C_ExecuteUbergraph_HUDPointOfInterestWidgetBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
