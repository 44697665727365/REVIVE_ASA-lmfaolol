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
	 * WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C
	 * Size -> 0x0200 (FullSize[0x0530] - InheritedSize[0x0330])
	 */
	class UASAUIWidget_HorizontalListSelector_Main_Style1_C : public UPrimalUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UASAUIWidget_Button_Style2A_C*                       Button0;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button1;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button10;                                                // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button2;                                                 // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button3;                                                 // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button4;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button5;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button6;                                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button7;                                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button8;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style2A_C*                       Button9;                                                 // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Header_NavLeft;                                          // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Header_NavRight;                                         // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox;                                                 // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionChanged_1;                                    // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    NumButtons;                                              // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrSelection;                                           // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastSelection;                                           // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5L9K[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged_2;                                    // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_3;                                    // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_4;                                    // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_5;                                    // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_6;                                    // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_7;                                    // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_8;                                    // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_9;                                    // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_10;                                   // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectionChanged_11;                                   // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FText>                                        ButtonLabels_Left;                                       // 0x0470(0x0010) Edit, BlueprintVisible
		TArray<class UTexture2D*>                                  ButtonLabels_Icon;                                       // 0x0480(0x0010) Edit, BlueprintVisible
		TArray<struct FVector2D>                                   ButtonLabels_Icon_Size;                                  // 0x0490(0x0010) Edit, BlueprintVisible
		TArray<class FText>                                        ButtonLabels_Right;                                      // 0x04A0(0x0010) Edit, BlueprintVisible
		struct FSlateFontInfo                                      ButtonLabels_Font;                                       // 0x04B0(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<class UASAUIWidget_Button_Style2A_C*>               buttons;                                                 // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		double                                                     ButtonWidth;                                             // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectionChangedIndex;                                 // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetToIndex(int32_t NewIndex, bool* Valid);
		void SetEnabledStateOfButtonIndex(int32_t Index, bool Enabled);
		void GetPreviousAvailableButtonIndex(int32_t StartingIndex, int32_t* FirstButton);
		void GetNextAvailableButtonIndex(int32_t StartingIndex, int32_t* FirstButton);
		void GetLastAvailableButtonIndex(int32_t* FirstButton);
		void GetFirstAvailableButtonIndex(int32_t* FirstButton);
		void FixConsoleIcons();
		void SwitchButton(bool Next, class UWidget** Widget);
		void SetAllButtonsInactive();
		void BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
		void BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
		void UpdateWidget();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetToSpecificIndex(int32_t Index);
		void ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1(int32_t EntryPoint);
		void OnSelectionChangedIndex__DelegateSignature(int32_t Index);
		void OnSelectionChanged_10__DelegateSignature();
		void OnSelectionChanged_9__DelegateSignature();
		void OnSelectionChanged_8__DelegateSignature();
		void OnSelectionChanged_7__DelegateSignature();
		void OnSelectionChanged_6__DelegateSignature();
		void OnSelectionChanged_5__DelegateSignature();
		void OnSelectionChanged_4__DelegateSignature();
		void OnSelectionChanged_3__DelegateSignature();
		void OnSelectionChanged_2__DelegateSignature();
		void OnSelectionChanged_1__DelegateSignature();
		void OnSelectionChanged_0__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
