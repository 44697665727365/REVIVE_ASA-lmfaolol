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
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.OnConfirmationDialogClosedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAccept                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListMapMarkerWidget_C::OnConfirmationDialogClosedBP(bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.OnConfirmationDialogClosedBP");
		
		UDataListMapMarkerWidget_C_OnConfirmationDialogClosedBP_Params params {};
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDataListMapMarkerWidget_C::BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UDataListMapMarkerWidget_C_BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                NewMark                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CanEdit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListMapMarkerWidget_C::RefreshData(const struct FMinimapMark& NewMark, bool CanEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshData");
		
		UDataListMapMarkerWidget_C_RefreshData_Params params {};
		params.NewMark = NewMark;
		params.CanEdit = CanEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDataListMapMarkerWidget_C::BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UDataListMapMarkerWidget_C_BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.ExecuteUbergraph_DataListMapMarkerWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListMapMarkerWidget_C::ExecuteUbergraph_DataListMapMarkerWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.ExecuteUbergraph_DataListMapMarkerWidget");
		
		UDataListMapMarkerWidget_C_ExecuteUbergraph_DataListMapMarkerWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.EditWaypoint__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                EditMark                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDataListMapMarkerWidget_C::EditWaypoint__DelegateSignature(const struct FMinimapMark& EditMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.EditWaypoint__DelegateSignature");
		
		UDataListMapMarkerWidget_C_EditWaypoint__DelegateSignature_Params params {};
		params.EditMark = EditMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshWaypoints__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UDataListMapMarkerWidget_C::RefreshWaypoints__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshWaypoints__DelegateSignature");
		
		UDataListMapMarkerWidget_C_RefreshWaypoints__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListMapMarkerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListMapMarkerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListMapMarkerWidget.DataListMapMarkerWidget_C");
		return ptr;
	}

}


