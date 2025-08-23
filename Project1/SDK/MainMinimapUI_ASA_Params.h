#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.TimerWaitDoubleClickMap
	 */
	struct UMainMinimapUI_ASA_C_TimerWaitDoubleClickMap_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OpenSetupNewWaypoint
	 */
	struct UMainMinimapUI_ASA_C_OpenSetupNewWaypoint_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnGamepadButtonDownEvent
	 */
	struct UMainMinimapUI_ASA_C_OnGamepadButtonDownEvent_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove_1
	 */
	struct UMainMinimapUI_ASA_C_OnMouseMove_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ChangeButtonVisually
	 */
	struct UMainMinimapUI_ASA_C_ChangeButtonVisually_Params
	{
	public:
		class UCustomButtonWidget*                                 CustomButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4Q3T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Update Legend Buttons
	 */
	struct UMainMinimapUI_ASA_C_UpdateLegendButtons_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseMove
	 */
	struct UMainMinimapUI_ASA_C_On_BorderMinimap_MouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On Border Minimap Mouse Double Click
	 */
	struct UMainMinimapUI_ASA_C_OnBorderMinimapMouseDoubleClick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseButtonDown
	 */
	struct UMainMinimapUI_ASA_C_On_BorderMinimap_MouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateSettingsWidget
	 */
	struct UMainMinimapUI_ASA_C_CreateSettingsWidget_Params
	{
	public:
		class UMapMarkerSettingsWidget_ASA_C*                      AsMapMarkerSettingsWidgetASA;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnKeyDownEvent
	 */
	struct UMainMinimapUI_ASA_C_OnKeyDownEvent_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyboardEvent;                                         // 0x0038(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.DoPingMinimap
	 */
	struct UMainMinimapUI_ASA_C_DoPingMinimap_Params
	{
	public:
		ETeamPingType                                              PingType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMC5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonUp
	 */
	struct UMainMinimapUI_ASA_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove
	 */
	struct UMainMinimapUI_ASA_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonDown
	 */
	struct UMainMinimapUI_ASA_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseWheel
	 */
	struct UMainMinimapUI_ASA_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.GetMinimapDataRef
	 */
	struct UMainMinimapUI_ASA_C_GetMinimapDataRef_Params
	{
	public:
		class UMinimapData*                                        AsMinimapData;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateNewWaypointOnLocation
	 */
	struct UMainMinimapUI_ASA_C_CreateNewWaypointOnLocation_Params
	{
	public:
		struct FVector2D                                           Coords;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.InputZoomMinimap
	 */
	struct UMainMinimapUI_ASA_C_InputZoomMinimap_Params
	{
	public:
		double                                                     ZoomInInput;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Speed;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ZoomOutInput;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.SetVirtualMinimapPosition
	 */
	struct UMainMinimapUI_ASA_C_SetVirtualMinimapPosition_Params
	{
	public:
		double                                                     XInput;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     YInput;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Speed;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.UpdateMinimapSize
	 */
	struct UMainMinimapUI_ASA_C_UpdateMinimapSize_Params
	{
	public:
		double                                                     Zoom;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Construct
	 */
	struct UMainMinimapUI_ASA_C_Construct_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.PreConstruct
	 */
	struct UMainMinimapUI_ASA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshTracking_Event
	 */
	struct UMainMinimapUI_ASA_C_RefreshTracking_Event_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTracking;                                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshCachedData_Event
	 */
	struct UMainMinimapUI_ASA_C_RefreshCachedData_Event_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseLeave
	 */
	struct UMainMinimapUI_ASA_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Tick
	 */
	struct UMainMinimapUI_ASA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.HandleEditMark_Event
	 */
	struct UMainMinimapUI_ASA_C_HandleEditMark_Event_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateAssignOnMapSettings
	 */
	struct UMainMinimapUI_ASA_C_CreateAssignOnMapSettings_Params
	{
	public:
		class UMapMarkerSettingsWidget_ASA_C*                      Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ClosedUI_Event
	 */
	struct UMainMinimapUI_ASA_C_ClosedUI_Event_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreatePingSelector
	 */
	struct UMainMinimapUI_ASA_C_CreatePingSelector_Params
	{
	public:
		bool                                                       OnlyForClose;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CallPing_Event
	 */
	struct UMainMinimapUI_ASA_C_CallPing_Event_Params
	{
	public:
		ETeamPingType                                              PingType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ExecuteUbergraph_MainMinimapUI_ASA
	 */
	struct UMainMinimapUI_ASA_C_ExecuteUbergraph_MainMinimapUI_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Zoom__DelegateSignature
	 */
	struct UMainMinimapUI_ASA_C_Zoom__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
