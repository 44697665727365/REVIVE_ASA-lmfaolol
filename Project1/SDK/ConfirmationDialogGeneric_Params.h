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
	 * Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.Construct
	 */
	struct UConfirmationDialogGeneric_C_Construct_Params
	{	};

	/**
	 * Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText
	 */
	struct UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params
	{
	public:
		class FText                                                CancelText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
	 */
	struct UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params
	{
	public:
		class FText                                                AcceptText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
	 */
	struct UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BCE0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
