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
	 * WidgetBlueprintGeneratedClass DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C
	 * Size -> 0x0030 (FullSize[0x04A8] - InheritedSize[0x0478])
	 */
	class UDataListButtonVariable_ColorPicker_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             ChangedColor;                                            // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bHideColor;                                              // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JRWC[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SelectedOption;                                          // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption);
		void SetupTextValue(const class FText& Text, class FText* ReturnText);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void UpdateColorPicker(const struct FVector2D& ColorPickerSliderValue);
		void ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32_t EntryPoint);
		void SelectedOption__DelegateSignature(bool Toggle);
		void ChangedColor__DelegateSignature(const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
