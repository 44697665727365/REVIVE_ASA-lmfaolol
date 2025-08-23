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
	 * WidgetBlueprintGeneratedClass HUDNotificationEntry.HUDNotificationEntry_C
	 * Size -> 0x00AA (FullSize[0x0802] - InheritedSize[0x0758])
	 */
	class UHUDNotificationEntry_C : public UPrimalUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0758(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Close;                                                   // 0x0760(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0768(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x0770(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ButtonGamepad;                                           // 0x0778(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ButtonKeyboard;                                          // 0x0780(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUDNotificationEntrySmall_C*                        HUDNotificationEntrySmall;                               // 0x0788(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftBracket;                                             // 0x0790(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftBracket_2;                                           // 0x0798(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_NotifText;                                          // 0x07A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextKeyboardButton;                                      // 0x07A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FHUDNotificationEntry_Struct                        HUDNotificationEntry;                                    // 0x07B0(0x0050) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       IsDestroying;                                            // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FirstInit;                                               // 0x0801(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupButtonExtendedHUD(bool show, class UTexture2D* Icon, const class FText& Keybinding);
		void DestroyWidget();
		void InitWidget(const struct FHUDNotificationEntry_Struct& entry, bool PreventAnim, TArray<struct FHUDNotificationEntry_Struct>* Entries, bool ShowButtonForInfo, class UTexture2D* ButtonTex, const class FText& KBM_ButtonName);
		void InitFadeAnim(bool PreventAnim);
		void ResizeEntry();
		struct FSlateColor GetNotifStringColor();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_HUDNotificationEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
