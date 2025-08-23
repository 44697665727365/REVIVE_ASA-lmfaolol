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
	 * Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.FixConsoleIcons
	 */
	struct UMinimalSwitchUI_Widget_C_FixConsoleIcons_Params
	{	};

	/**
	 * Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.UpdateTooltipMoreInfo
	 */
	struct UMinimalSwitchUI_Widget_C_UpdateTooltipMoreInfo_Params
	{	};

	/**
	 * Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Tick
	 */
	struct UMinimalSwitchUI_Widget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Construct
	 */
	struct UMinimalSwitchUI_Widget_C_Construct_Params
	{	};

	/**
	 * Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.ExecuteUbergraph_MinimalSwitchUI_Widget
	 */
	struct UMinimalSwitchUI_Widget_C_ExecuteUbergraph_MinimalSwitchUI_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
