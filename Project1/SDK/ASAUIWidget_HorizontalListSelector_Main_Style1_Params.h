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
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToIndex
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetEnabledStateOfButtonIndex
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetEnabledStateOfButtonIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetPreviousAvailableButtonIndex
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetPreviousAvailableButtonIndex_Params
	{
	public:
		int32_t                                                    StartingIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FirstButton;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetNextAvailableButtonIndex
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetNextAvailableButtonIndex_Params
	{
	public:
		int32_t                                                    StartingIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FirstButton;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.GetLastAvailableButtonIndex
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetLastAvailableButtonIndex_Params
	{
	public:
		int32_t                                                    FirstButton;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Get First Available Button Index
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_GetFirstAvailableButtonIndex_Params
	{
	public:
		int32_t                                                    FirstButton;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.FixConsoleIcons
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_FixConsoleIcons_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SwitchButton
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SwitchButton_Params
	{
	public:
		bool                                                       Next;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDOJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Set All Buttons Inactive
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetAllButtonsInactive_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.PreConstruct
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.UpdateWidget
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_UpdateWidget_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Construct
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_Construct_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.Tick
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.SetToSpecificIndex
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_SetToSpecificIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6AO1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChangedIndex__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChangedIndex__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_10__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_10__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_9__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_9__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_8__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_8__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_7__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_7__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_6__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_6__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_5__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_5__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_4__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_4__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_3__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_3__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_2__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_2__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_1__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_1__DelegateSignature_Params
	{	};

	/**
	 * Function ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C.OnSelectionChanged_0__DelegateSignature
	 */
	struct UASAUIWidget_HorizontalListSelector_Main_Style1_C_OnSelectionChanged_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
