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
	 * WidgetBlueprintGeneratedClass BodyTemplates_Selector_ASA.BodyTemplates_Selector_ASA_C
	 * Size -> 0x0037 (FullSize[0x03B8] - InheritedSize[0x0381])
	 */
	class UBodyTemplates_Selector_ASA_C : public USelector_ASA_Widget_C
	{
	public:
		unsigned char                                              UnknownData_DAVM[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bPCCIsFemale;                                            // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQXV[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedCustomData;                                      // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  HairIconsFemale;                                         // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTexture2D*>                                  HairIconsMale;                                           // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetValueChangedToParent();
		void RefreshOptions();
		void GetOptions(TArray<class UTexture2D*>* Icons, TArray<class FString>* Names);
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void ExecuteUbergraph_BodyTemplates_Selector_ASA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
