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
	 * 		Name   -> Function DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C.BPExecutedCommandForPrimalUI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDataListButtonVariable_BodyTemplatePicker_Widget_C::BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C.BPExecutedCommandForPrimalUI");
		
		UDataListButtonVariable_BodyTemplatePicker_Widget_C_BPExecutedCommandForPrimalUI_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C.ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListButtonVariable_BodyTemplatePicker_Widget_C::ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C.ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget");
		
		UDataListButtonVariable_BodyTemplatePicker_Widget_C_ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListButtonVariable_BodyTemplatePicker_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListButtonVariable_BodyTemplatePicker_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C");
		return ptr;
	}

}


