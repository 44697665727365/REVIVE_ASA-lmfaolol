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
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.GetAllTrackingResourcesWIdgets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTrackResourceItem_Widget_C*>         Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UTrackingItemsInfoUI_C::GetAllTrackingResourcesWIdgets(TArray<class UTrackResourceItem_Widget_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.GetAllTrackingResourcesWIdgets");
		
		UTrackingItemsInfoUI_C_GetAllTrackingResourcesWIdgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrackingItemsInfoUI_C::BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTrackingItemsInfoUI_C_BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrackingItemsInfoUI_C::BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UTrackingItemsInfoUI_C_BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrackingItemsInfoUI_C::BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UTrackingItemsInfoUI_C_BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTrackingItemsInfoUI_C::RemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.RemovedFromViewport");
		
		UTrackingItemsInfoUI_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTrackingItemsInfoUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.Construct");
		
		UTrackingItemsInfoUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.RemoveIndex_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrackingItemsInfoUI_C::RemoveIndex_Event(class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.RemoveIndex_Event");
		
		UTrackingItemsInfoUI_C_RemoveIndex_Event_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.UpdateTrackingInfoBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTrackingItemsInfoUI_C::UpdateTrackingInfoBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.UpdateTrackingInfoBP");
		
		UTrackingItemsInfoUI_C_UpdateTrackingInfoBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.ExecuteUbergraph_TrackingItemsInfoUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrackingItemsInfoUI_C::ExecuteUbergraph_TrackingItemsInfoUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackingItemsInfoUI.TrackingItemsInfoUI_C.ExecuteUbergraph_TrackingItemsInfoUI");
		
		UTrackingItemsInfoUI_C_ExecuteUbergraph_TrackingItemsInfoUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrackingItemsInfoUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrackingItemsInfoUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrackingItemsInfoUI.TrackingItemsInfoUI_C");
		return ptr;
	}

}


