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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass HUDNotificationEntrySmall.HUDNotificationEntrySmall_C
	 * Size -> 0x00F0 (FullSize[0x0420] - InheritedSize[0x0330])
	 */
	class UHUDNotificationEntrySmall_C : public UPrimalUserWidget
	{
	public:
		class UBorder*                                             Border;                                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border1;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_NotifIcon;                                         // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          QuantityText;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FHUDNotificationEntry_Struct                        HUDNotificationEntry;                                    // 0x0350(0x0050) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    NotificationsQuantity;                                   // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VF3D[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeInit;                                            // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          GenericAlertIcon;                                        // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FHUDNotificationEntry_Struct>                HUDNotificationArray;                                    // 0x03B8(0x0010) Edit, BlueprintVisible
		bool                                                       IsSmallNotification;                                     // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R5CE[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDNotificationEntry_Struct                        CurrentNotiifcationWithProgress;                         // 0x03D0(0x0050) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		class FText Get_QuantityText_Text();
		void CheckDestroy();
		void UpdateProgressData();
		class UTexture2D* Get_Image_NotifIcon_Brush();
		void InitWidget(const struct FHUDNotificationEntry_Struct& entry, bool IsSmallNotification, TArray<struct FHUDNotificationEntry_Struct>* Entries);
		struct FSlateColor GetNotifStringColor();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
