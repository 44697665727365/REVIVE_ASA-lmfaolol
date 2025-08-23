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
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Clicked Stop Tracking Death Waypoint
	 */
	struct UMapMarkerSettingsWidget_ASA_C_ClickedStopTrackingDeathWaypoint_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditDeathWaypoint
	 */
	struct UMapMarkerSettingsWidget_ASA_C_UpdateEditDeathWaypoint_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Init;                                                    // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark_TrackedActorEntry
	 */
	struct UMapMarkerSettingsWidget_ASA_C_UpdateEditMark_TrackedActorEntry_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Init;                                                    // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XHPY[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CanEditWaypoint
	 */
	struct UMapMarkerSettingsWidget_ASA_C_CanEditWaypoint_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Can;                                                     // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.CreateNewWaypointOnLocation
	 */
	struct UMapMarkerSettingsWidget_ASA_C_CreateNewWaypointOnLocation_Params
	{
	public:
		struct FVector                                             InputPin;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.TraceGrounWaypointHeight
	 */
	struct UMapMarkerSettingsWidget_ASA_C_TraceGrounWaypointHeight_Params
	{
	public:
		struct FVector                                             inVec;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LJP0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ReturnValue2;                                            // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.On_ViewDistanceComboBox_GenerateWidget
	 */
	struct UMapMarkerSettingsWidget_ASA_C_On_ViewDistanceComboBox_GenerateWidget_Params
	{
	public:
		class FString                                              Item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.UpdateEditMark
	 */
	struct UMapMarkerSettingsWidget_ASA_C_UpdateEditMark_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Init;                                                    // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JYRR[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.OnMouseButtonDown_1
	 */
	struct UMapMarkerSettingsWidget_ASA_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.GetMapWaypoints
	 */
	struct UMapMarkerSettingsWidget_ASA_C_GetMapWaypoints_Params
	{
	public:
		TArray<struct FMinimapMark>                                SavedMinimapMarks;                                       // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.HasLimitedWaypoints
	 */
	struct UMapMarkerSettingsWidget_ASA_C_HasLimitedWaypoints_Params
	{
	public:
		bool                                                       GetFirstUnclaimedDefaultNumber;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LU8S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Num;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Max;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NSW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FirstUnclaimedDefaultNumber;                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.SetupListMapMarker
	 */
	struct UMapMarkerSettingsWidget_ASA_C_SetupListMapMarker_Params
	{
	public:
		TArray<struct FMinimapMark>                                MapMarker;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.AssignUpdateRefresh
	 */
	struct UMapMarkerSettingsWidget_ASA_C_AssignUpdateRefresh_Params
	{
	public:
		class UDataListMapMarkerWidget_C*                          Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RefreshWaypoints_Event
	 */
	struct UMapMarkerSettingsWidget_ASA_C_RefreshWaypoints_Event_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RefreshConstruct
	 */
	struct UMapMarkerSettingsWidget_ASA_C_RefreshConstruct_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.EditWaypoint_Event
	 */
	struct UMapMarkerSettingsWidget_ASA_C_EditWaypoint_Event_Params
	{
	public:
		struct FMinimapMark                                        EditMark;                                                // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.Construct
	 */
	struct UMapMarkerSettingsWidget_ASA_C_Construct_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.PreConstruct
	 */
	struct UMapMarkerSettingsWidget_ASA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.RemovedFromViewport
	 */
	struct UMapMarkerSettingsWidget_ASA_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.WidgetRemovedFromViewport
	 */
	struct UMapMarkerSettingsWidget_ASA_C_WidgetRemovedFromViewport_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ExecuteUbergraph_MapMarkerSettingsWidget_ASA
	 */
	struct UMapMarkerSettingsWidget_ASA_C_ExecuteUbergraph_MapMarkerSettingsWidget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C.ClosedUI__DelegateSignature
	 */
	struct UMapMarkerSettingsWidget_ASA_C_ClosedUI__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
