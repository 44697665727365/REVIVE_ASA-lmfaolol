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
	 * Function DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
	 */
	struct UDataListButtonVariable_HairStylePicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C.SetParameterValue
	 */
	struct UDataListButtonVariable_HairStylePicker_Widget_ASA_C_SetParameterValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bPreventCallParent;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_HairStylePicker_Widget_ASA
	 */
	struct UDataListButtonVariable_HairStylePicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_HairStylePicker_Widget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5B8N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
