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
	 * WidgetBlueprintGeneratedClass TutorialUI.TutorialUI_C
	 * Size -> 0x0021 (FullSize[0x07A9] - InheritedSize[0x0788])
	 */
	class UTutorialUI_C : public UUI_Tutorial
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0788(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Close;                                                   // 0x0790(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Open;                                                    // 0x0798(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              TutorialImage;                                           // 0x07A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bRemoving;                                               // 0x07A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemovedFromViewport();
		void AddedToViewport();
		void ExecuteUbergraph_TutorialUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
