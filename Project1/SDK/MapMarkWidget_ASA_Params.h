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
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Track Entry
	 */
	struct UMapMarkWidget_ASA_C_HandleClickingTrackEntry_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       clickwastotrack;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Death Marks
	 */
	struct UMapMarkWidget_ASA_C_HandleClickingDeathMarks_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       clickwastotrack;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.OnPreviewMouseButtonDown
	 */
	struct UMapMarkWidget_ASA_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetProgressPercent
	 */
	struct UMapMarkWidget_ASA_C_SetProgressPercent_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.IsTracking
	 */
	struct UMapMarkWidget_ASA_C_IsTracking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Init
	 */
	struct UMapMarkWidget_ASA_C_Init_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.CanTrackMark
	 */
	struct UMapMarkWidget_ASA_C_CanTrackMark_Params
	{
	public:
		bool                                                       Can;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateVisualStyle
	 */
	struct UMapMarkWidget_ASA_C_UpdateVisualStyle_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTrackStyle
	 */
	struct UMapMarkWidget_ASA_C_SetTrackStyle_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetNormalStyle
	 */
	struct UMapMarkWidget_ASA_C_SetNormalStyle_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTextAndBG
	 */
	struct UMapMarkWidget_ASA_C_SetTextAndBG_Params
	{
	public:
		class FString                                              NewText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        BGColor;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetHoverStyle
	 */
	struct UMapMarkWidget_ASA_C_SetHoverStyle_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Construct
	 */
	struct UMapMarkWidget_ASA_C_Construct_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.PreConstruct
	 */
	struct UMapMarkWidget_ASA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.RefreshConstruct
	 */
	struct UMapMarkWidget_ASA_C_RefreshConstruct_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapMarkWidget_ASA_C_BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateTextSize
	 */
	struct UMapMarkWidget_ASA_C_UpdateTextSize_Params
	{
	public:
		double                                                     Scale;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.ExecuteUbergraph_MapMarkWidget_ASA
	 */
	struct UMapMarkWidget_ASA_C_ExecuteUbergraph_MapMarkWidget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0XQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HaandleEditMark__DelegateSignature
	 */
	struct UMapMarkWidget_ASA_C_HaandleEditMark__DelegateSignature_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HandleTracking__DelegateSignature
	 */
	struct UMapMarkWidget_ASA_C_HandleTracking__DelegateSignature_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTracking;                                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
