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
	 * WidgetBlueprintGeneratedClass HairStyle_Selector_ASA.HairStyle_Selector_ASA_C
	 * Size -> 0x0010 (FullSize[0x0391] - InheritedSize[0x0381])
	 */
	class UHairStyle_Selector_ASA_C : public USelector_ASA_Widget_C
	{
	public:
		unsigned char                                              UnknownData_KTFA[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bIsFemale;                                               // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RefreshOptions();
		void GetOptions(TArray<class UTexture2D*>* Icons, TArray<class FString>* Names);
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void ExecuteUbergraph_HairStyle_Selector_ASA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
