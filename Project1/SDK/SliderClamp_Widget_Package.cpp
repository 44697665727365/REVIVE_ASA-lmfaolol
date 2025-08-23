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
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateMax
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USliderClamp_Widget_C::UpdateMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateMax");
		
		USliderClamp_Widget_C_UpdateMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USliderClamp_Widget_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.Update");
		
		USliderClamp_Widget_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshInt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USliderClamp_Widget_C::RefreshInt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshInt");
		
		USliderClamp_Widget_C_RefreshInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.SetupValue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             _float_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PreventRecallParent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USliderClamp_Widget_C::SetupValue(double _float_, bool PreventRecallParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.SetupValue");
		
		USliderClamp_Widget_C_SetupValue_Params params {};
		params._float_ = _float_;
		params.PreventRecallParent = PreventRecallParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.BPExecutedCommandForPrimalUI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USliderClamp_Widget_C::BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.BPExecutedCommandForPrimalUI");
		
		USliderClamp_Widget_C_BPExecutedCommandForPrimalUI_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USliderClamp_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.Construct");
		
		USliderClamp_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USliderClamp_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.PreConstruct");
		
		USliderClamp_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateClampLimit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumClampLimits                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USliderClamp_Widget_C::UpdateClampLimit(int32_t NumClampLimits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateClampLimit");
		
		USliderClamp_Widget_C_UpdateClampLimit_Params params {};
		params.NumClampLimits = NumClampLimits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshLimits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USliderClamp_Widget_C::RefreshLimits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshLimits");
		
		USliderClamp_Widget_C_RefreshLimits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USliderClamp_Widget_C::BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USliderClamp_Widget_C_BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USliderClamp_Widget_C::BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USliderClamp_Widget_C_BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SliderClamp_Widget.SliderClamp_Widget_C.ExecuteUbergraph_SliderClamp_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USliderClamp_Widget_C::ExecuteUbergraph_SliderClamp_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SliderClamp_Widget.SliderClamp_Widget_C.ExecuteUbergraph_SliderClamp_Widget");
		
		USliderClamp_Widget_C_ExecuteUbergraph_SliderClamp_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USliderClamp_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USliderClamp_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SliderClamp_Widget.SliderClamp_Widget_C");
		return ptr;
	}

}


