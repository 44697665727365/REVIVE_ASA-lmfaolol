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
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.GetOverrideHighligteableWidgetBP
	 */
	struct UColorPicker_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.TimerCooldownColorCheck
	 */
	struct UColorPicker_ASA_Widget_C_TimerCooldownColorCheck_Params
	{	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorSlider2D
	 */
	struct UColorPicker_ASA_Widget_C_UpdateColorSlider2D_Params
	{	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateSaturationBar
	 */
	struct UColorPicker_ASA_Widget_C_UpdateSaturationBar_Params
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.OnMouseMove_1
	 */
	struct UColorPicker_ASA_Widget_C_OnMouseMove_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Construct
	 */
	struct UColorPicker_ASA_Widget_C_Construct_Params
	{	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Tick
	 */
	struct UColorPicker_ASA_Widget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
	 */
	struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
	 */
	struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.SetupColorRenderTarget
	 */
	struct UColorPicker_ASA_Widget_C_SetupColorRenderTarget_Params
	{	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorPickerValue
	 */
	struct UColorPicker_ASA_Widget_C_UpdateColorPickerValue_Params
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature
	 */
	struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature_Params
	{	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature
	 */
	struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature_Params
	{	};

	/**
	 * Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.ExecuteUbergraph_ColorPicker_ASA_Widget
	 */
	struct UColorPicker_ASA_Widget_C_ExecuteUbergraph_ColorPicker_ASA_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
