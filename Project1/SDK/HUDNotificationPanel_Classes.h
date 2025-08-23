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
	 * WidgetBlueprintGeneratedClass HUDNotificationPanel.HUDNotificationPanel_C
	 * Size -> 0x0168 (FullSize[0x08C0] - InheritedSize[0x0758])
	 */
	class UHUDNotificationPanel_C : public UPrimalUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0758(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Reopen;                                                  // 0x0760(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_NotifPanel;                                  // 0x0768(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   HUDNotifPanel_UniformGridPanel;                          // 0x0770(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   HUDNotifPanel_UniformGridPanel_ExtraInfo;                // 0x0778(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            PositionCanvas;                                          // 0x0780(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SmallNotificationsBox;                                   // 0x0788(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcherNotifications;                             // 0x0790(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UHUDNotificationEntry_C*>                     HUDNotificationEntriesWidgets;                           // 0x0798(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FHUDNotificationEntry_Struct>                HUDNotificationEntries;                                  // 0x07A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MaxDisplayedEntries;                                     // 0x07B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ENCZ[0x4];                                   // 0x07BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHUDNotificationEntry_C*>                     SingletonHUDNotificationEntriesWidgets;                  // 0x07C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FHUDNotificationEntry_Struct>                SingletonHUDNotificationEntries;                         // 0x07D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SingletonMaxDisplayedEntries;                            // 0x07E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SFAS[0x4];                                   // 0x07E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHUDNotificationEntrySmall_C*>                SmallNotificationsWidgets;                               // 0x07E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       ShowingExtraInfo;                                        // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1DKF[0x7];                                   // 0x07F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeRefresh;                                         // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          ButtonGamepad;                                           // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                KBMButtonName;                                           // 0x0810(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     LastTimeUpdateKeyboardKeybinding;                        // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           NotificationPanelPosition;                               // 0x0830(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHUDNotificationEntry_Struct                        LastNotification;                                        // 0x0840(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		double                                                     LastTimeRepeatedNotification;                            // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceSmallNotiifcations;                                 // 0x0898(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7UYE[0x7];                                   // 0x0899(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DinoNotificationString;                                  // 0x08A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              PlayerNotificationString;                                // 0x08B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetStatusStateNotifications(class UObject* Object);
		bool ShouldShowExtendedInfoButton(TArray<struct FHUDNotificationEntry_Struct> TargetArray);
		bool HaveSameNotificationStyle(const struct FHUDNotificationEntry_Struct& HUDNotificationEntry_Struct, const struct FHUDNotificationEntry_Struct& HUDNotificationEntry_Struct2);
		void UpdateNotifications();
		void UpdateVisibilitySmallNotifications();
		void GetQuantityTypeNotificationsRepeated(const struct FHUDNotificationEntry_Struct& notification, class UPanelWidget* Widget, int32_t* Quantity, TArray<class UPrimalUserWidget*>* ReturnHudNotiifcation1);
		void CreateSmallEntryNotification(const struct FHUDNotificationEntry_Struct& entry, int32_t Quantity);
		void CreateEntryWidgetForNotification(const struct FHUDNotificationEntry_Struct& entry, class UUniformGridPanel* ToGridPanel, bool PreventAnim, TArray<struct FHUDNotificationEntry_Struct>* Array);
		void AddHUDNotificationEntry(const class FString& String, const struct FColor& Color, class UMaterialInterface* Material, class UTexture2D* Texture, double DisplayTime, double DisplayScale, bool bIsSingleton, int32_t MessageTypeID, int32_t Priority);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnGamepadActiveChangedBP(bool bIsGamepadActive);
		void Construct();
		void DoExtraScalingForSplitscreen(const struct FVector2D& PlayerSize);
		void ExecuteUbergraph_HUDNotificationPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
