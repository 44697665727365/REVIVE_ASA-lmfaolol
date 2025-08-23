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
	 * WidgetBlueprintGeneratedClass DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C
	 * Size -> 0x00B8 (FullSize[0x0478] - InheritedSize[0x03C0])
	 */
	class UDataListButtonVariable_Widget_ASA_C : public UDataListValueGeneric
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDataListButton_Widget_ASA_C*                        DataListButton_Widget_ASA;                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MainButtonGeneric;                                       // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SafeZone;                                                // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                VariableText;                                            // 0x03E0(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             ReturnValue;                                             // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UClass*>                                      WidgetOptionsToAdd;                                      // 0x0408(0x0010) Edit, BlueprintVisible
		TArray<class FText>                                        OptionsMinValues;                                        // 0x0418(0x0010) Edit, BlueprintVisible
		TArray<class FText>                                        OptionsMaxValues;                                        // 0x0428(0x0010) Edit, BlueprintVisible
		TArray<class FText>                                        OptionsExtraData;                                        // 0x0438(0x0010) Edit, BlueprintVisible
		int32_t                                                    OptionSelectedIndex;                                     // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SupportMultipleOptions;                                  // 0x044C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PNN9[0x3];                                   // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MultiplyValueToText;                                     // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Test;                                                    // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KXSC[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaximumFractionalDigits;                                 // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanEditTextVariable;                                     // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceMinMaxEditChange;                                   // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTextUseGrouping;                                        // 0x0462(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JJ6Y[0x5];                                   // 0x0463(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimalUserWidget*>                           OptionsWidgets;                                          // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		bool IsExpanded();
		void CloseSlider();
		class USlider* HasSlider();
		class USlider* HasExpandedSlider();
		void HideValueLabel(bool HideValue);
		bool GetIsSelectedBP();
		TArray<class UWidget*> GetAllValueWidgets();
		void SetupTextValueOverride(const class FText& Text, class FText* ReturnText);
		void SetupNewValueWidget(const class FString& InString, int32_t InputPin, bool PreventParentCall);
		void ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption);
		void SetupTextValue(const class FText& Text, class FText* ReturnText);
		void ExtraSetupWidget(class UPrimalUserWidget* UserWidget, int32_t Index);
		void SetupOptionWidgets();
		void GetWidgetsToAdd(TArray<class UPrimalUserWidget*>* UserWidgets);
		void SetupValuesIndex(int32_t Index, bool PreventCallParent);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set, bool FromSelectOtherOption);
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SetParameterValue(const class FString& Value, bool bPreventCallParent);
		void OnOverridedParameterValue(const class FString& Value, bool bPreventCallParent);
		void SetIsSelectedBP(bool Selected);
		void UpdateColorPicker(const struct FVector2D& ColorPickerSliderValue);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_DataListButtonVariable_Widget_ASA(int32_t EntryPoint);
		void ReturnValue__DelegateSignature(const class FText& ReturnValue, int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
