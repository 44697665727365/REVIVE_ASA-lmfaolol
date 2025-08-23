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
	 * Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_QuantityText_Text
	 */
	struct UHUDNotificationEntrySmall_C_Get_QuantityText_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.CheckDestroy
	 */
	struct UHUDNotificationEntrySmall_C_CheckDestroy_Params
	{	};

	/**
	 * Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.UpdateProgressData
	 */
	struct UHUDNotificationEntrySmall_C_UpdateProgressData_Params
	{	};

	/**
	 * Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_Image_NotifIcon_Brush
	 */
	struct UHUDNotificationEntrySmall_C_Get_Image_NotifIcon_Brush_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.InitWidget
	 */
	struct UHUDNotificationEntrySmall_C_InitWidget_Params
	{
	public:
		struct FHUDNotificationEntry_Struct                        entry;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsSmallNotification;                                     // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZN31[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FHUDNotificationEntry_Struct>                Entries;                                                 // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.GetNotifStringColor
	 */
	struct UHUDNotificationEntrySmall_C_GetNotifStringColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
