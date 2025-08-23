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
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.SetupButtonExtendedHUD
	 */
	struct UHUDNotificationEntry_C_SetupButtonExtendedHUD_Params
	{
	public:
		bool                                                       show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E733[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Keybinding;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.DestroyWidget
	 */
	struct UHUDNotificationEntry_C_DestroyWidget_Params
	{	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.InitWidget
	 */
	struct UHUDNotificationEntry_C_InitWidget_Params
	{
	public:
		struct FHUDNotificationEntry_Struct                        entry;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       PreventAnim;                                             // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GAK6[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FHUDNotificationEntry_Struct>                Entries;                                                 // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShowButtonForInfo;                                       // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_84PE[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ButtonTex;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                KBM_ButtonName;                                          // 0x0078(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.InitFadeAnim
	 */
	struct UHUDNotificationEntry_C_InitFadeAnim_Params
	{
	public:
		bool                                                       PreventAnim;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UARP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.ResizeEntry
	 */
	struct UHUDNotificationEntry_C_ResizeEntry_Params
	{	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.GetNotifStringColor
	 */
	struct UHUDNotificationEntry_C_GetNotifStringColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.Tick
	 */
	struct UHUDNotificationEntry_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationEntry.HUDNotificationEntry_C.ExecuteUbergraph_HUDNotificationEntry
	 */
	struct UHUDNotificationEntry_C_ExecuteUbergraph_HUDNotificationEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
