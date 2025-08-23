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
	 * WidgetBlueprintGeneratedClass ASAUIWidget_Button.ASAUIWidget_Button_C
	 * Size -> 0x0660 (FullSize[0x0990] - InheritedSize[0x0330])
	 */
	class UASAUIWidget_Button_C : public UPrimalUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bracket;                                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button;                                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Button_SizeBox;                                          // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Button_Text_ControllerIcon;                              // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Button_Text_Left;                                        // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Button_Text_Right;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedLine;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ButtonLabel_Left;                                        // 0x0370(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UTexture2D*                                          ButtonLabel_Icon;                                        // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ButtonLabel_Icon_Size;                                   // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ButtonLabel_Right;                                       // 0x03B0(0x0018) Edit, BlueprintVisible
		struct FSlateFontInfo                                      ButtonLabel_Font;                                        // 0x03C8(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		double                                                     HeightOverride;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WidthOverride;                                           // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0430(0x03F0) Edit, BlueprintVisible
		struct FSlateBrush                                         BracketBrush;                                            // 0x0820(0x00D0) Edit, BlueprintVisible
		struct FLinearColor                                        TextColor_Normal_Inactive;                               // 0x08F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor_Normal_Active;                                 // 0x0900(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor_Hovered;                                       // 0x0910(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor_Pressed;                                       // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BracketColor_Normal;                                     // 0x0930(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BracketColor_Hovered;                                    // 0x0940(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BracketColor_Pressed;                                    // 0x0950(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Initialized;                                             // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Active;                                                  // 0x0961(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E9U0[0x6];                                   // 0x0962(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionKey;                                               // 0x0968(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UTexture2D*                                          ButtonLabelIconKBM;                                      // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       PreventButtonOnKBM;                                      // 0x0980(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGamepadActive;                                         // 0x0981(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsesSelectedLine;                                        // 0x0982(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V3P2[0x5];                                   // 0x0983(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ButtonIconDefault;                                       // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetButtonText(const class FText& theText);
		void FixPSIcons();
		void UpdateInputIcon();
		void UpdateBracketAndTextColors();
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void UpdateButton();
		void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void SetActive(bool newActive);
		void Construct();
		void OnWidgetGamepadActiveChangedBP(bool bIsGamepadActive);
		void ExecuteUbergraph_ASAUIWidget_Button(int32_t EntryPoint);
		void OnButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
