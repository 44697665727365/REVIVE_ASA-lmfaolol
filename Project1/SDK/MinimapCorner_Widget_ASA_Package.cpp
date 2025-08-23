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
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMinimapCorner_Widget_ASA_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.OnMouseWheel");
		
		UMinimapCorner_Widget_ASA_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.UpdateZoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimapCorner_Widget_ASA_C::UpdateZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.UpdateZoom");
		
		UMinimapCorner_Widget_ASA_C_UpdateZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Zoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Qty                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapCorner_Widget_ASA_C::Zoom(double Qty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Zoom");
		
		UMinimapCorner_Widget_ASA_C_Zoom_Params params {};
		params.Qty = Qty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMinimapCorner_Widget_ASA_C::RemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.RemovedFromViewport");
		
		UMinimapCorner_Widget_ASA_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapCorner_Widget_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Tick");
		
		UMinimapCorner_Widget_ASA_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMinimapCorner_Widget_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.Construct");
		
		UMinimapCorner_Widget_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.OnGamepadActiveChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsGamepadActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapCorner_Widget_ASA_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.OnGamepadActiveChangedBP");
		
		UMinimapCorner_Widget_ASA_C_OnGamepadActiveChangedBP_Params params {};
		params.bIsGamepadActive = bIsGamepadActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.ExecuteUbergraph_MinimapCorner_Widget_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapCorner_Widget_ASA_C::ExecuteUbergraph_MinimapCorner_Widget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C.ExecuteUbergraph_MinimapCorner_Widget_ASA");
		
		UMinimapCorner_Widget_ASA_C_ExecuteUbergraph_MinimapCorner_Widget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinimapCorner_Widget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinimapCorner_Widget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MinimapCorner_Widget_ASA.MinimapCorner_Widget_ASA_C");
		return ptr;
	}

}


