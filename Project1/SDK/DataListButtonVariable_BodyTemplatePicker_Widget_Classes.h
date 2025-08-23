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
	 * WidgetBlueprintGeneratedClass DataListButtonVariable_BodyTemplatePicker_Widget.DataListButtonVariable_BodyTemplatePicker_Widget_C
	 * Size -> 0x0008 (FullSize[0x0480] - InheritedSize[0x0478])
	 */
	class UDataListButtonVariable_BodyTemplatePicker_Widget_C : public UDataListButtonVariable_Widget_ASA_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void ExecuteUbergraph_DataListButtonVariable_BodyTemplatePicker_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
