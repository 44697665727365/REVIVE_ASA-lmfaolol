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
	 * 		Name   -> Function ConsoleCommand.ConsoleCommand_C.BPHighlightWidgetOnStart
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UConsoleCommand_C::BPHighlightWidgetOnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCommand.ConsoleCommand_C.BPHighlightWidgetOnStart");
		
		UConsoleCommand_C_BPHighlightWidgetOnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConsoleCommand.ConsoleCommand_C.BPCycleHighlighted
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UConsoleCommand_C::BPCycleHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCommand.ConsoleCommand_C.BPCycleHighlighted");
		
		UConsoleCommand_C_BPCycleHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConsoleCommand.ConsoleCommand_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleCommand_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCommand.ConsoleCommand_C.Tick");
		
		UConsoleCommand_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConsoleCommand.ConsoleCommand_C.BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UConsoleCommand_C::BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCommand.ConsoleCommand_C.BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UConsoleCommand_C_BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ConsoleCommand.ConsoleCommand_C.ExecuteUbergraph_ConsoleCommand
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConsoleCommand_C::ExecuteUbergraph_ConsoleCommand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCommand.ConsoleCommand_C.ExecuteUbergraph_ConsoleCommand");
		
		UConsoleCommand_C_ExecuteUbergraph_ConsoleCommand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleCommand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleCommand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConsoleCommand.ConsoleCommand_C");
		return ptr;
	}

}


