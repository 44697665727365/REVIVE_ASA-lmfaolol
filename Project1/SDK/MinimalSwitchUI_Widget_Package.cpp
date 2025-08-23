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
	 * 		Name   -> Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.FixConsoleIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimalSwitchUI_Widget_C::FixConsoleIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.FixConsoleIcons");
		
		UMinimalSwitchUI_Widget_C_FixConsoleIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.UpdateTooltipMoreInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimalSwitchUI_Widget_C::UpdateTooltipMoreInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.UpdateTooltipMoreInfo");
		
		UMinimalSwitchUI_Widget_C_UpdateTooltipMoreInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimalSwitchUI_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Tick");
		
		UMinimalSwitchUI_Widget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMinimalSwitchUI_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Construct");
		
		UMinimalSwitchUI_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.ExecuteUbergraph_MinimalSwitchUI_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimalSwitchUI_Widget_C::ExecuteUbergraph_MinimalSwitchUI_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.ExecuteUbergraph_MinimalSwitchUI_Widget");
		
		UMinimalSwitchUI_Widget_C_ExecuteUbergraph_MinimalSwitchUI_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinimalSwitchUI_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinimalSwitchUI_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C");
		return ptr;
	}

}


