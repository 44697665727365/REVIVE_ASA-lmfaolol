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
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.IsExpanded
	 */
	struct UDataListButtonVariable_Widget_ASA_C_IsExpanded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.CloseSlider
	 */
	struct UDataListButtonVariable_Widget_ASA_C_CloseSlider_Params
	{	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasSlider
	 */
	struct UDataListButtonVariable_Widget_ASA_C_HasSlider_Params
	{
	public:
		class USlider*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HasExpandedSlider
	 */
	struct UDataListButtonVariable_Widget_ASA_C_HasExpandedSlider_Params
	{
	public:
		class USlider*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.HideValueLabel
	 */
	struct UDataListButtonVariable_Widget_ASA_C_HideValueLabel_Params
	{
	public:
		bool                                                       HideValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetIsSelectedBP
	 */
	struct UDataListButtonVariable_Widget_ASA_C_GetIsSelectedBP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetAllValueWidgets
	 */
	struct UDataListButtonVariable_Widget_ASA_C_GetAllValueWidgets_Params
	{
	public:
		TArray<class UWidget*>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValueOverride
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetupTextValueOverride_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ReturnText;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupNewValueWidget
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetupNewValueWidget_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InputPin;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PreventParentCall;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DC6G[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupToggledButton
	 */
	struct UDataListButtonVariable_Widget_ASA_C_ExtraSetupToggledButton_Params
	{
	public:
		bool                                                       Toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromSelectOtherOption;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupTextValue
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetupTextValue_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ReturnText;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExtraSetupWidget
	 */
	struct UDataListButtonVariable_Widget_ASA_C_ExtraSetupWidget_Params
	{
	public:
		class UPrimalUserWidget*                                   UserWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetupOptionWidgets
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetupOptionWidgets_Params
	{	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.GetWidgetsToAdd
	 */
	struct UDataListButtonVariable_Widget_ASA_C_GetWidgetsToAdd_Params
	{
	public:
		TArray<class UPrimalUserWidget*>                           UserWidgets;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Setup Values Index
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetupValuesIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PreventCallParent;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H2PN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Construct
	 */
	struct UDataListButtonVariable_Widget_ASA_C_Construct_Params
	{	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.PreConstruct
	 */
	struct UDataListButtonVariable_Widget_ASA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature
	 */
	struct UDataListButtonVariable_Widget_ASA_C_BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature_Params
	{
	public:
		bool                                                       Set;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromSelectOtherOption;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BPExecutedCommandForPrimalUI
	 */
	struct UDataListButtonVariable_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDataListButtonVariable_Widget_ASA_C_BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetParameterValue
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetParameterValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bPreventCallParent;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.OnOverridedParameterValue
	 */
	struct UDataListButtonVariable_Widget_ASA_C_OnOverridedParameterValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bPreventCallParent;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.SetIsSelectedBP
	 */
	struct UDataListButtonVariable_Widget_ASA_C_SetIsSelectedBP_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.UpdateColorPicker
	 */
	struct UDataListButtonVariable_Widget_ASA_C_UpdateColorPicker_Params
	{
	public:
		struct FVector2D                                           ColorPickerSliderValue;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.Tick
	 */
	struct UDataListButtonVariable_Widget_ASA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Widget_ASA
	 */
	struct UDataListButtonVariable_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Widget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C.ReturnValue__DelegateSignature
	 */
	struct UDataListButtonVariable_Widget_ASA_C_ReturnValue__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
