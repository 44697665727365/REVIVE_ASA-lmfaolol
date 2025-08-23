/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UConfirmationDialogGeneric_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.Construct");
		
		UConfirmationDialogGeneric_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        CancelText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UConfirmationDialogGeneric_C::OverrideCancelButtonText(const class FText& CancelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText");
		
		UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params params {};
		params.CancelText = CancelText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        AcceptText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UConfirmationDialogGeneric_C::OverrideAcceptButtonText(const class FText& AcceptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText");
		
		UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params params {};
		params.AcceptText = AcceptText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationDialogGeneric_C::ExecuteUbergraph_ConfirmationDialogGeneric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric");
		
		UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfirmationDialogGeneric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmationDialogGeneric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationDialogGeneric.ConfirmationDialogGeneric_C");
		return ptr;
	}

}


