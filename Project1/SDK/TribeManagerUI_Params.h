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
	 * Function TribeManagerUI.TribeManagerUI_C.Get_TribeWarPanel_Visibility
	 */
	struct UTribeManagerUI_C_Get_TribeWarPanel_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.CheckToBool
	 */
	struct UTribeManagerUI_C_CheckToBool_Params
	{
	public:
		class UDataListButtonVariable_Widget_ASA_C*                Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Byte;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MCVF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.SliderToByte
	 */
	struct UTribeManagerUI_C_SliderToByte_Params
	{
	public:
		class UDataListButtonVariable_Widget_ASA_C*                Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Byte;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OEKO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.SetupSwitchButtons
	 */
	struct UTribeManagerUI_C_SetupSwitchButtons_Params
	{
	public:
		class UWidget*                                             TextureEffectToHide;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             TextureEffectToShow;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        ButtonToShow;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        ButtonToHide;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexSelected
	 */
	struct UTribeManagerUI_C_BPRankGroupIndexSelected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexApplied
	 */
	struct UTribeManagerUI_C_BPRankGroupIndexApplied_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.Construct
	 */
	struct UTribeManagerUI_C_Construct_Params
	{	};

	/**
	 * Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI
	 */
	struct UTribeManagerUI_C_ExecuteUbergraph_TribeManagerUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
