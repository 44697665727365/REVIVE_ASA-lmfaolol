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
	 * Function HairStyle_Selector_ASA.HairStyle_Selector_ASA_C.RefreshOptions
	 */
	struct UHairStyle_Selector_ASA_C_RefreshOptions_Params
	{	};

	/**
	 * Function HairStyle_Selector_ASA.HairStyle_Selector_ASA_C.GetOptions
	 */
	struct UHairStyle_Selector_ASA_C_GetOptions_Params
	{
	public:
		TArray<class UTexture2D*>                                  Icons;                                                   // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      Names;                                                   // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function HairStyle_Selector_ASA.HairStyle_Selector_ASA_C.BPExecutedCommandForPrimalUI
	 */
	struct UHairStyle_Selector_ASA_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HairStyle_Selector_ASA.HairStyle_Selector_ASA_C.ExecuteUbergraph_HairStyle_Selector_ASA
	 */
	struct UHairStyle_Selector_ASA_C_ExecuteUbergraph_HairStyle_Selector_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
