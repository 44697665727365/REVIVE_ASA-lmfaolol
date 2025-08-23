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
	 * Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.SetCollapsedPreviewIcon
	 */
	struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_SetCollapsedPreviewIcon_Params
	{
	public:
		int32_t                                                    Input;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GEOX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
	 */
	struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.SetParameterValue
	 */
	struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_SetParameterValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bPreventCallParent;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.RefreshEyebrows
	 */
	struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_RefreshEyebrows_Params
	{
	public:
		bool                                                       isFemale;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_EyebrowStylePicker_Widget_ASA
	 */
	struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_EyebrowStylePicker_Widget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
