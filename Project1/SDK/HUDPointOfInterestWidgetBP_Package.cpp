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
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.FixConsoleIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDPointOfInterestWidgetBP_C::FixConsoleIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.FixConsoleIcon");
		
		UHUDPointOfInterestWidgetBP_C_FixConsoleIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDPointOfInterestWidgetBP_C::DestroyPointOfInterestWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyPointOfInterestWidget");
		
		UHUDPointOfInterestWidgetBP_C_DestroyPointOfInterestWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDPointOfInterestWidgetBP_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Construct");
		
		UHUDPointOfInterestWidgetBP_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDPointOfInterestWidgetBP_C::DestroyWidgetAfterAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.DestroyWidgetAfterAnim");
		
		UHUDPointOfInterestWidgetBP_C_DestroyWidgetAfterAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDPointOfInterestWidgetBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.Tick");
		
		UHUDPointOfInterestWidgetBP_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.PlayPulseAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDPointOfInterestWidgetBP_C::PlayPulseAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.PlayPulseAnimation");
		
		UHUDPointOfInterestWidgetBP_C_PlayPulseAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.SetDismissOverlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDPointOfInterestWidgetBP_C::SetDismissOverlay(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.SetDismissOverlay");
		
		UHUDPointOfInterestWidgetBP_C_SetDismissOverlay_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDPointOfInterestWidgetBP_C::ExecuteUbergraph_HUDPointOfInterestWidgetBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C.ExecuteUbergraph_HUDPointOfInterestWidgetBP");
		
		UHUDPointOfInterestWidgetBP_C_ExecuteUbergraph_HUDPointOfInterestWidgetBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDPointOfInterestWidgetBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDPointOfInterestWidgetBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C");
		return ptr;
	}

}


