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
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.OnConfirmationDialogClosedBP
	 */
	struct UDataListMapMarkerWidget_C_OnConfirmationDialogClosedBP_Params
	{
	public:
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDataListMapMarkerWidget_C_BndEvt__DataListMapMarkerWidget_WaypointRemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshData
	 */
	struct UDataListMapMarkerWidget_C_RefreshData_Params
	{
	public:
		struct FMinimapMark                                        NewMark;                                                 // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       CanEdit;                                                 // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDataListMapMarkerWidget_C_BndEvt__DataListMapMarkerWidget_WaypointEditButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.ExecuteUbergraph_DataListMapMarkerWidget
	 */
	struct UDataListMapMarkerWidget_C_ExecuteUbergraph_DataListMapMarkerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TEY0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.EditWaypoint__DelegateSignature
	 */
	struct UDataListMapMarkerWidget_C_EditWaypoint__DelegateSignature_Params
	{
	public:
		struct FMinimapMark                                        EditMark;                                                // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DataListMapMarkerWidget.DataListMapMarkerWidget_C.RefreshWaypoints__DelegateSignature
	 */
	struct UDataListMapMarkerWidget_C_RefreshWaypoints__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
