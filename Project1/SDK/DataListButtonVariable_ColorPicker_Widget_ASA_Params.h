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
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExtraSetupToggledButton
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExtraSetupToggledButton_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromSelectOtherOption;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WRE1[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SetupTextValue
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_SetupTextValue_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ReturnText;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.PreConstruct
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.Construct
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_Construct_Params
	{	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.UpdateColorPicker
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_UpdateColorPicker_Params
	{
	public:
		struct FVector2D                                           ColorPickerSliderValue;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SelectedOption__DelegateSignature
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_SelectedOption__DelegateSignature_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ChangedColor__DelegateSignature
	 */
	struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ChangedColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
