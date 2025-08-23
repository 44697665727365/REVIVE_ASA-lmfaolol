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
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.GetOptions
	 */
	struct USelector_ASA_Widget_C_GetOptions_Params
	{
	public:
		TArray<class UTexture2D*>                                  Icons;                                                   // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      Names;                                                   // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.SetValueChangedToParent
	 */
	struct USelector_ASA_Widget_C_SetValueChangedToParent_Params
	{	};

	/**
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.RefreshOptions
	 */
	struct USelector_ASA_Widget_C_RefreshOptions_Params
	{	};

	/**
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.Construct
	 */
	struct USelector_ASA_Widget_C_Construct_Params
	{	};

	/**
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.PreConstruct
	 */
	struct USelector_ASA_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.BPExecutedCommandForPrimalUI
	 */
	struct USelector_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Selector_ASA_Widget.Selector_ASA_Widget_C.ExecuteUbergraph_Selector_ASA_Widget
	 */
	struct USelector_ASA_Widget_C_ExecuteUbergraph_Selector_ASA_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
