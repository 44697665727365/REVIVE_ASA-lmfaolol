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
	 * Function BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C.SetValueChangedToParent
	 */
	struct UBodyTemplates_Selector_ASA_C_SetValueChangedToParent_Params
	{	};

	/**
	 * Function BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C.RefreshOptions
	 */
	struct UBodyTemplates_Selector_ASA_C_RefreshOptions_Params
	{	};

	/**
	 * Function BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C.GetOptions
	 */
	struct UBodyTemplates_Selector_ASA_C_GetOptions_Params
	{
	public:
		TArray<class UTexture2D*>                                  Icons;                                                   // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      Names;                                                   // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C.BPExecutedCommandForPrimalUI
	 */
	struct UBodyTemplates_Selector_ASA_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C.ExecuteUbergraph_BodyTemplates_Selector_ASA
	 */
	struct UBodyTemplates_Selector_ASA_C_ExecuteUbergraph_BodyTemplates_Selector_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
