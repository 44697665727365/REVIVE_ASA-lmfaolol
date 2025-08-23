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
	 * WidgetBlueprintGeneratedClass DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C
	 * Size -> 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
	 */
	class UDataListButtonVariable_Bool_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              TrueBoolString;                                          // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              FalseBoolString;                                         // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void SetupTextValue(const class FText& Text, class FText* ReturnText);
		void ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
