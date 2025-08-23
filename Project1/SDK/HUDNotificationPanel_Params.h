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
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.GetStatusStateNotifications
	 */
	struct UHUDNotificationPanel_C_GetStatusStateNotifications_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.ShouldShowExtendedInfoButton
	 */
	struct UHUDNotificationPanel_C_ShouldShowExtendedInfoButton_Params
	{
	public:
		TArray<struct FHUDNotificationEntry_Struct>                TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D1Y5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.HaveSameNotificationStyle
	 */
	struct UHUDNotificationPanel_C_HaveSameNotificationStyle_Params
	{
	public:
		struct FHUDNotificationEntry_Struct                        HUDNotificationEntry_Struct;                             // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		struct FHUDNotificationEntry_Struct                        HUDNotificationEntry_Struct2;                            // 0x0050(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IADM[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateNotifications
	 */
	struct UHUDNotificationPanel_C_UpdateNotifications_Params
	{	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateVisibilitySmallNotifications
	 */
	struct UHUDNotificationPanel_C_UpdateVisibilitySmallNotifications_Params
	{	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.Get Quantity Type Notifications Repeated
	 */
	struct UHUDNotificationPanel_C_GetQuantityTypeNotificationsRepeated_Params
	{
	public:
		struct FHUDNotificationEntry_Struct                        notification;                                            // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UPanelWidget*                                        Widget;                                                  // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NDBE[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPrimalUserWidget*>                           ReturnHudNotiifcation1;                                  // 0x0060(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.CreateSmallEntryNotification
	 */
	struct UHUDNotificationPanel_C_CreateSmallEntryNotification_Params
	{
	public:
		struct FHUDNotificationEntry_Struct                        entry;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.CreateEntryWidgetForNotification
	 */
	struct UHUDNotificationPanel_C_CreateEntryWidgetForNotification_Params
	{
	public:
		struct FHUDNotificationEntry_Struct                        entry;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UUniformGridPanel*                                   ToGridPanel;                                             // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       PreventAnim;                                             // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1SLG[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FHUDNotificationEntry_Struct>                Array;                                                   // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.AddHUDNotificationEntry
	 */
	struct UHUDNotificationPanel_C_AddHUDNotificationEntry_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FColor                                              Color;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TTCW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  Material;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Texture;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     DisplayTime;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DisplayScale;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSingleton;                                            // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TOX[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MessageTypeID;                                           // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.Tick
	 */
	struct UHUDNotificationPanel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.OnGamepadActiveChangedBP
	 */
	struct UHUDNotificationPanel_C_OnGamepadActiveChangedBP_Params
	{
	public:
		bool                                                       bIsGamepadActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.Construct
	 */
	struct UHUDNotificationPanel_C_Construct_Params
	{	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.DoExtraScalingForSplitscreen
	 */
	struct UHUDNotificationPanel_C_DoExtraScalingForSplitscreen_Params
	{
	public:
		struct FVector2D                                           PlayerSize;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationPanel.HUDNotificationPanel_C.ExecuteUbergraph_HUDNotificationPanel
	 */
	struct UHUDNotificationPanel_C_ExecuteUbergraph_HUDNotificationPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
