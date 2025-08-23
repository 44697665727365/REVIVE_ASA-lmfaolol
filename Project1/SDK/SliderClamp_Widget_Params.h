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
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateMax
	 */
	struct USliderClamp_Widget_C_UpdateMax_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.Update
	 */
	struct USliderClamp_Widget_C_Update_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshInt
	 */
	struct USliderClamp_Widget_C_RefreshInt_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.SetupValue
	 */
	struct USliderClamp_Widget_C_SetupValue_Params
	{
	public:
		double                                                     _float_;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PreventRecallParent;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.BPExecutedCommandForPrimalUI
	 */
	struct USliderClamp_Widget_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.Construct
	 */
	struct USliderClamp_Widget_C_Construct_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.PreConstruct
	 */
	struct USliderClamp_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateClampLimit
	 */
	struct USliderClamp_Widget_C_UpdateClampLimit_Params
	{
	public:
		int32_t                                                    NumClampLimits;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshLimits
	 */
	struct USliderClamp_Widget_C_RefreshLimits_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USliderClamp_Widget_C_BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USliderClamp_Widget_C_BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SliderClamp_Widget.SliderClamp_Widget_C.ExecuteUbergraph_SliderClamp_Widget
	 */
	struct USliderClamp_Widget_C_ExecuteUbergraph_SliderClamp_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4VZ3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
