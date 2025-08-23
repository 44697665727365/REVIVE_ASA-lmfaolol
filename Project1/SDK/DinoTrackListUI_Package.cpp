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
	 * 		Name   -> Function DinoTrackListUI.DinoTrackListUI_C.BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoTrackListUI_C::BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTrackListUI.DinoTrackListUI_C.BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDinoTrackListUI_C_BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoTrackListUI.DinoTrackListUI_C.BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoTrackListUI_C::BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTrackListUI.DinoTrackListUI_C.BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDinoTrackListUI_C_BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoTrackListUI.DinoTrackListUI_C.ExecuteUbergraph_DinoTrackListUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoTrackListUI_C::ExecuteUbergraph_DinoTrackListUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTrackListUI.DinoTrackListUI_C.ExecuteUbergraph_DinoTrackListUI");
		
		UDinoTrackListUI_C_ExecuteUbergraph_DinoTrackListUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTrackListUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTrackListUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoTrackListUI.DinoTrackListUI_C");
		return ptr;
	}

}


