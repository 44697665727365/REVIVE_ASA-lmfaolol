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
	 * WidgetBlueprintGeneratedClass DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C
	 * Size -> 0x0010 (FullSize[0x0488] - InheritedSize[0x0478])
	 */
	class UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsFemaleChar;                                            // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YWAL[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetCollapsedPreviewIcon(int32_t Input);
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void SetParameterValue(const class FString& Value, bool bPreventCallParent);
		void RefreshEyebrows(bool isFemale);
		void ExecuteUbergraph_DataListButtonVariable_EyebrowStylePicker_Widget_ASA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
