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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.TimerWaitDoubleClickMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::TimerWaitDoubleClickMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.TimerWaitDoubleClickMap");
		
		UMainMinimapUI_ASA_C_TimerWaitDoubleClickMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OpenSetupNewWaypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::OpenSetupNewWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OpenSetupNewWaypoint");
		
		UMainMinimapUI_ASA_C_OpenSetupNewWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnGamepadButtonDownEvent
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FControllerEvent                            ControllerEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnGamepadButtonDownEvent(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnGamepadButtonDownEvent");
		
		UMainMinimapUI_ASA_C_OnGamepadButtonDownEvent_Params params {};
		params.MyGeometry = MyGeometry;
		params.ControllerEvent = ControllerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnMouseMove_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove_1");
		
		UMainMinimapUI_ASA_C_OnMouseMove_1_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ChangeButtonVisually
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCustomButtonWidget*                         CustomButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::ChangeButtonVisually(class UCustomButtonWidget* CustomButton, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ChangeButtonVisually");
		
		UMainMinimapUI_ASA_C_ChangeButtonVisually_Params params {};
		params.CustomButton = CustomButton;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Update Legend Buttons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::UpdateLegendButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Update Legend Buttons");
		
		UMainMinimapUI_ASA_C_UpdateLegendButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseMove
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::On_BorderMinimap_MouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseMove");
		
		UMainMinimapUI_ASA_C_On_BorderMinimap_MouseMove_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On Border Minimap Mouse Double Click
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnBorderMinimapMouseDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On Border Minimap Mouse Double Click");
		
		UMainMinimapUI_ASA_C_OnBorderMinimapMouseDoubleClick_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseButtonDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::On_BorderMinimap_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseButtonDown");
		
		UMainMinimapUI_ASA_C_On_BorderMinimap_MouseButtonDown_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateSettingsWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMapMarkerSettingsWidget_ASA_C*              AsMapMarkerSettingsWidgetASA                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::CreateSettingsWidget(class UMapMarkerSettingsWidget_ASA_C** AsMapMarkerSettingsWidgetASA)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateSettingsWidget");
		
		UMainMinimapUI_ASA_C_CreateSettingsWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsMapMarkerSettingsWidgetASA != nullptr)
			*AsMapMarkerSettingsWidgetASA = params.AsMapMarkerSettingsWidgetASA;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnKeyDownEvent
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyboardEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnKeyDownEvent");
		
		UMainMinimapUI_ASA_C_OnKeyDownEvent_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyboardEvent = InKeyboardEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.DoPingMinimap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETeamPingType                                      PingType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::DoPingMinimap(ETeamPingType PingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.DoPingMinimap");
		
		UMainMinimapUI_ASA_C_DoPingMinimap_Params params {};
		params.PingType = PingType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonUp");
		
		UMainMinimapUI_ASA_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove");
		
		UMainMinimapUI_ASA_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonDown");
		
		UMainMinimapUI_ASA_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMainMinimapUI_ASA_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseWheel");
		
		UMainMinimapUI_ASA_C_OnMouseWheel_Params params {};
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
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.GetMinimapDataRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMinimapData*                                AsMinimapData                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::GetMinimapDataRef(class UMinimapData** AsMinimapData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.GetMinimapDataRef");
		
		UMainMinimapUI_ASA_C_GetMinimapDataRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsMinimapData != nullptr)
			*AsMinimapData = params.AsMinimapData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateNewWaypointOnLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Coords                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::CreateNewWaypointOnLocation(const struct FVector2D& Coords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateNewWaypointOnLocation");
		
		UMainMinimapUI_ASA_C_CreateNewWaypointOnLocation_Params params {};
		params.Coords = Coords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.InputZoomMinimap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ZoomInInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZoomOutInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::InputZoomMinimap(double ZoomInInput, double Speed, double ZoomOutInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.InputZoomMinimap");
		
		UMainMinimapUI_ASA_C_InputZoomMinimap_Params params {};
		params.ZoomInInput = ZoomInInput;
		params.Speed = Speed;
		params.ZoomOutInput = ZoomOutInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.SetVirtualMinimapPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             XInput                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             YInput                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::SetVirtualMinimapPosition(double XInput, double YInput, double Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.SetVirtualMinimapPosition");
		
		UMainMinimapUI_ASA_C_SetVirtualMinimapPosition_Params params {};
		params.XInput = XInput;
		params.YInput = YInput;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.UpdateMinimapSize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Zoom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::UpdateMinimapSize(double Zoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.UpdateMinimapSize");
		
		UMainMinimapUI_ASA_C_UpdateMinimapSize_Params params {};
		params.Zoom = Zoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Construct");
		
		UMainMinimapUI_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.PreConstruct");
		
		UMainMinimapUI_ASA_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshTracking_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTracking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::RefreshTracking_Event(const struct FMinimapMark& Mark, bool IsTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshTracking_Event");
		
		UMainMinimapUI_ASA_C_RefreshTracking_Event_Params params {};
		params.Mark = Mark;
		params.IsTracking = IsTracking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshCachedData_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::RefreshCachedData_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshCachedData_Event");
		
		UMainMinimapUI_ASA_C_RefreshCachedData_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMainMinimapUI_ASA_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseLeave");
		
		UMainMinimapUI_ASA_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Tick");
		
		UMainMinimapUI_ASA_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.HandleEditMark_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMainMinimapUI_ASA_C::HandleEditMark_Event(const struct FMinimapMark& Mark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.HandleEditMark_Event");
		
		UMainMinimapUI_ASA_C_HandleEditMark_Event_Params params {};
		params.Mark = Mark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateAssignOnMapSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMapMarkerSettingsWidget_ASA_C*              Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::CreateAssignOnMapSettings(class UMapMarkerSettingsWidget_ASA_C* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateAssignOnMapSettings");
		
		UMainMinimapUI_ASA_C_CreateAssignOnMapSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ClosedUI_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::ClosedUI_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ClosedUI_Event");
		
		UMainMinimapUI_ASA_C_ClosedUI_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreatePingSelector
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnlyForClose                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::CreatePingSelector(bool OnlyForClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreatePingSelector");
		
		UMainMinimapUI_ASA_C_CreatePingSelector_Params params {};
		params.OnlyForClose = OnlyForClose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CallPing_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETeamPingType                                      PingType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::CallPing_Event(ETeamPingType PingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CallPing_Event");
		
		UMainMinimapUI_ASA_C_CallPing_Event_Params params {};
		params.PingType = PingType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ExecuteUbergraph_MainMinimapUI_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMainMinimapUI_ASA_C::ExecuteUbergraph_MainMinimapUI_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ExecuteUbergraph_MainMinimapUI_ASA");
		
		UMainMinimapUI_ASA_C_ExecuteUbergraph_MainMinimapUI_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Zoom__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UMainMinimapUI_ASA_C::Zoom__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Zoom__DelegateSignature");
		
		UMainMinimapUI_ASA_C_Zoom__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainMinimapUI_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainMinimapUI_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMinimapUI_ASA.MainMinimapUI_ASA_C");
		return ptr;
	}

}


