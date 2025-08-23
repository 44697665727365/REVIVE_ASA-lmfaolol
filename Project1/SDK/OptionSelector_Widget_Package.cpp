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
	 * 		Name   -> Function OptionSelector_Widget.OptionSelector_Widget_C.BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOptionSelector_Widget_C::BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSelector_Widget.OptionSelector_Widget_C.BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UOptionSelector_Widget_C_BndEvt__OptionSelector_Widget_CustomButton_HUB_ASA_C_40_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OptionSelector_Widget.OptionSelector_Widget_C.InitOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsToggled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOptionSelector_Widget_C::InitOption(class UTexture2D* Icon, bool IsToggled, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSelector_Widget.OptionSelector_Widget_C.InitOption");
		
		UOptionSelector_Widget_C_InitOption_Params params {};
		params.Icon = Icon;
		params.IsToggled = IsToggled;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OptionSelector_Widget.OptionSelector_Widget_C.ExecuteUbergraph_OptionSelector_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionSelector_Widget_C::ExecuteUbergraph_OptionSelector_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSelector_Widget.OptionSelector_Widget_C.ExecuteUbergraph_OptionSelector_Widget");
		
		UOptionSelector_Widget_C_ExecuteUbergraph_OptionSelector_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionSelector_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionSelector_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionSelector_Widget.OptionSelector_Widget_C");
		return ptr;
	}

}


