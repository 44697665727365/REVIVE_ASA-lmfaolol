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
	 * 		Name   -> Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.InitItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrackResourceItem_Widget_C::InitItem(class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.InitItem");
		
		UTrackResourceItem_Widget_C_InitItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.BndEvt__TrackResourceItem_Widget_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrackResourceItem_Widget_C::BndEvt__TrackResourceItem_Widget_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.BndEvt__TrackResourceItem_Widget_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTrackResourceItem_Widget_C_BndEvt__TrackResourceItem_Widget_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.ExecuteUbergraph_TrackResourceItem_Widget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrackResourceItem_Widget_C::ExecuteUbergraph_TrackResourceItem_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.ExecuteUbergraph_TrackResourceItem_Widget");
		
		UTrackResourceItem_Widget_C_ExecuteUbergraph_TrackResourceItem_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.RemoveIndex__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrackResourceItem_Widget_C::RemoveIndex__DelegateSignature(class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackResourceItem_Widget.TrackResourceItem_Widget_C.RemoveIndex__DelegateSignature");
		
		UTrackResourceItem_Widget_C_RemoveIndex__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrackResourceItem_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrackResourceItem_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrackResourceItem_Widget.TrackResourceItem_Widget_C");
		return ptr;
	}

}


