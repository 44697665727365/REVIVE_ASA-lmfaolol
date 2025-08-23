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
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Clicked Stop Tracking Death Waypoint
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::ClickedStopTrackingDeathWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Clicked Stop Tracking Death Waypoint");
		
		UMapMarkerSettingsWidget_ASA_C_ClickedStopTrackingDeathWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditDeathWaypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::UpdateEditDeathWaypoint(const struct FMinimapMark& Mark, bool Init)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditDeathWaypoint");
		
		UMapMarkerSettingsWidget_ASA_C_UpdateEditDeathWaypoint_Params params {};
		params.Mark = Mark;
		params.Init = Init;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark_TrackedActorEntry
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::UpdateEditMark_TrackedActorEntry(const struct FMinimapMark& Mark, bool Init)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark_TrackedActorEntry");
		
		UMapMarkerSettingsWidget_ASA_C_UpdateEditMark_TrackedActorEntry_Params params {};
		params.Mark = Mark;
		params.Init = Init;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CanEditWaypoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::CanEditWaypoint(const struct FMinimapMark& Mark, bool* Can)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CanEditWaypoint");
		
		UMapMarkerSettingsWidget_ASA_C_CanEditWaypoint_Params params {};
		params.Mark = Mark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can != nullptr)
			*Can = params.Can;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CreateNewWaypointOnLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::CreateNewWaypointOnLocation(const struct FVector& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CreateNewWaypointOnLocation");
		
		UMapMarkerSettingsWidget_ASA_C_CreateNewWaypointOnLocation_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.TraceGrounWaypointHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     inVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ReturnValue2                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UMapMarkerSettingsWidget_ASA_C::TraceGrounWaypointHeight(const struct FVector& inVec, double* ReturnValue2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.TraceGrounWaypointHeight");
		
		UMapMarkerSettingsWidget_ASA_C_TraceGrounWaypointHeight_Params params {};
		params.inVec = inVec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue2 != nullptr)
			*ReturnValue2 = params.ReturnValue2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.On_ViewDistanceComboBox_GenerateWidget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UMapMarkerSettingsWidget_ASA_C::On_ViewDistanceComboBox_GenerateWidget(const class FString& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.On_ViewDistanceComboBox_GenerateWidget");
		
		UMapMarkerSettingsWidget_ASA_C_On_ViewDistanceComboBox_GenerateWidget_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Init                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::UpdateEditMark(const struct FMinimapMark& Mark, bool Init)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark");
		
		UMapMarkerSettingsWidget_ASA_C_UpdateEditMark_Params params {};
		params.Mark = Mark;
		params.Init = Init;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.OnMouseButtonDown_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMapMarkerSettingsWidget_ASA_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.OnMouseButtonDown_1");
		
		UMapMarkerSettingsWidget_ASA_C_OnMouseButtonDown_1_Params params {};
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
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.GetMapWaypoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMinimapMark>                        SavedMinimapMarks                                          (Parm, OutParm)
	 */
	void UMapMarkerSettingsWidget_ASA_C::GetMapWaypoints(TArray<struct FMinimapMark>* SavedMinimapMarks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.GetMapWaypoints");
		
		UMapMarkerSettingsWidget_ASA_C_GetMapWaypoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SavedMinimapMarks != nullptr)
			*SavedMinimapMarks = params.SavedMinimapMarks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.HasLimitedWaypoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               GetFirstUnclaimedDefaultNumber                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FirstUnclaimedDefaultNumber                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::HasLimitedWaypoints(bool GetFirstUnclaimedDefaultNumber, int32_t* Num, bool* Max, int32_t* FirstUnclaimedDefaultNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.HasLimitedWaypoints");
		
		UMapMarkerSettingsWidget_ASA_C_HasLimitedWaypoints_Params params {};
		params.GetFirstUnclaimedDefaultNumber = GetFirstUnclaimedDefaultNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
		if (Max != nullptr)
			*Max = params.Max;
		if (FirstUnclaimedDefaultNumber != nullptr)
			*FirstUnclaimedDefaultNumber = params.FirstUnclaimedDefaultNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.SetupListMapMarker
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMinimapMark>                        MapMarker                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapMarkerSettingsWidget_ASA_C::SetupListMapMarker(TArray<struct FMinimapMark>* MapMarker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.SetupListMapMarker");
		
		UMapMarkerSettingsWidget_ASA_C_SetupListMapMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapMarker != nullptr)
			*MapMarker = params.MapMarker;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.AssignUpdateRefresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataListMapMarkerWidget_C*                  Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::AssignUpdateRefresh(class UDataListMapMarkerWidget_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.AssignUpdateRefresh");
		
		UMapMarkerSettingsWidget_ASA_C_AssignUpdateRefresh_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RefreshWaypoints_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::RefreshWaypoints_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RefreshWaypoints_Event");
		
		UMapMarkerSettingsWidget_ASA_C_RefreshWaypoints_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RefreshConstruct
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::RefreshConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RefreshConstruct");
		
		UMapMarkerSettingsWidget_ASA_C_RefreshConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.EditWaypoint_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                EditMark                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapMarkerSettingsWidget_ASA_C::EditWaypoint_Event(const struct FMinimapMark& EditMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.EditWaypoint_Event");
		
		UMapMarkerSettingsWidget_ASA_C_EditWaypoint_Event_Params params {};
		params.EditMark = EditMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Construct");
		
		UMapMarkerSettingsWidget_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.PreConstruct");
		
		UMapMarkerSettingsWidget_ASA_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::RemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RemovedFromViewport");
		
		UMapMarkerSettingsWidget_ASA_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.WidgetRemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::WidgetRemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.WidgetRemovedFromViewport");
		
		UMapMarkerSettingsWidget_ASA_C_WidgetRemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ExecuteUbergraph_MapMarkerSettingsWidget_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkerSettingsWidget_ASA_C::ExecuteUbergraph_MapMarkerSettingsWidget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ExecuteUbergraph_MapMarkerSettingsWidget_ASA");
		
		UMapMarkerSettingsWidget_ASA_C_ExecuteUbergraph_MapMarkerSettingsWidget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ClosedUI__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkerSettingsWidget_ASA_C::ClosedUI__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ClosedUI__DelegateSignature");
		
		UMapMarkerSettingsWidget_ASA_C_ClosedUI__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapMarkerSettingsWidget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapMarkerSettingsWidget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C");
		return ptr;
	}

}


