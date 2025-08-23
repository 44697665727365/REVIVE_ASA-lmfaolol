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
	 * WidgetBlueprintGeneratedClass Selector_ASA_Widget.Selector_ASA_Widget_C
	 * Size -> 0x0051 (FullSize[0x0381] - InheritedSize[0x0330])
	 */
	class USelector_ASA_Widget_C : public UPrimalUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   Grid;                                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  IconsForOptions;                                         // 0x0340(0x0010) Edit, BlueprintVisible
		int32_t                                                    SelectedOption;                                          // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I71V[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              OptionClass;                                             // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxItemsColumn;                                          // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentRow;                                              // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentColumn;                                           // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R6P0[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      OptionsNames;                                            // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       PreventNamesOnSelections;                                // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOptions(TArray<class UTexture2D*>* Icons, TArray<class FString>* Names);
		void SetValueChangedToParent();
		void RefreshOptions();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void ExecuteUbergraph_Selector_ASA_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
