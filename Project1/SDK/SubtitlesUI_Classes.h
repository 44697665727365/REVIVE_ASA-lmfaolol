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
	 * WidgetBlueprintGeneratedClass SubtitlesUI.SubtitlesUI_C
	 * Size -> 0x00F4 (FullSize[0x08DC] - InheritedSize[0x07E8])
	 */
	class USubtitlesUI_C : public UUI_Subtitles
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    IconGlideOutSkip;                                        // 0x07F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    IconGlideInSkip;                                         // 0x07F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HLNAIconGlideOut;                                        // 0x0800(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HLNAIconGlideIn;                                         // 0x0808(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0810(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0818(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              DialogueIconImage;                                       // 0x0820(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPrimalRichTextBlock*                                DialogueRichText;                                        // 0x0828(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SubtitleTextBlock;                                       // 0x0830(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      ExtAscensionSubtitles;                                   // 0x0838(0x0010) Edit, BlueprintVisible
		TArray<struct FSlateColor>                                 ExSubtitleColors;                                        // 0x0848(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Gen2IntroSubtitles;                                      // 0x0858(0x0010) Edit, BlueprintVisible
		TArray<struct FSlateColor>                                 Gen2IntroSubtitleColors;                                 // 0x0868(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Gen2EndingSubtitles;                                     // 0x0878(0x0010) Edit, BlueprintVisible
		TArray<struct FSlateColor>                                 Gen2EndingSubtitleColors;                                // 0x0888(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Gen2StingerSubtitles;                                    // 0x0898(0x0010) Edit, BlueprintVisible
		TArray<struct FSlateColor>                                 Gen2StingerSubtitleColors;                               // 0x08A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrentIndex;                                            // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CurrentSubtitleSet;                                      // 0x08BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasChatBoxShown;                                         // 0x08C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFadingOut;                                             // 0x08C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UY6Q[0x2];                                   // 0x08C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         DefaultSubtitleColor;                                    // 0x08C8(0x0014) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetSubtitleColors(TArray<struct FSlateColor>* Colors);
		void ProcessDynamicMaterialForDialogueIcon();
		void OnShowSubtitles();
		void GetSubtitles(TArray<class FString>* Subtitles);
		void ShowSubtitleAtIndex(int32_t Index);
		void FadeOutSubtitles();
		void AddedToViewport();
		void ShowNextSubtitle();
		void ResetToStart(const class FName& SubtitleSet);
		void OnHideSubtitles();
		void ExecuteUbergraph_SubtitlesUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
