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
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.GetOptions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          Icons                                                      (Parm, OutParm)
	 * 		TArray<class FString>                              Names                                                      (Parm, OutParm)
	 */
	void USelector_ASA_Widget_C::GetOptions(TArray<class UTexture2D*>* Icons, TArray<class FString>* Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.GetOptions");
		
		USelector_ASA_Widget_C_GetOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icons != nullptr)
			*Icons = params.Icons;
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.SetValueChangedToParent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USelector_ASA_Widget_C::SetValueChangedToParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.SetValueChangedToParent");
		
		USelector_ASA_Widget_C_SetValueChangedToParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.RefreshOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USelector_ASA_Widget_C::RefreshOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.RefreshOptions");
		
		USelector_ASA_Widget_C_RefreshOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USelector_ASA_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.Construct");
		
		USelector_ASA_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelector_ASA_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.PreConstruct");
		
		USelector_ASA_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.BPExecutedCommandForPrimalUI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelector_ASA_Widget_C::BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.BPExecutedCommandForPrimalUI");
		
		USelector_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Selector_ASA_Widget.Selector_ASA_Widget_C.ExecuteUbergraph_Selector_ASA_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelector_ASA_Widget_C::ExecuteUbergraph_Selector_ASA_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Selector_ASA_Widget.Selector_ASA_Widget_C.ExecuteUbergraph_Selector_ASA_Widget");
		
		USelector_ASA_Widget_C_ExecuteUbergraph_Selector_ASA_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelector_ASA_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelector_ASA_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Selector_ASA_Widget.Selector_ASA_Widget_C");
		return ptr;
	}

}


