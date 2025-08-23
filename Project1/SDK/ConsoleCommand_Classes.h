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
	 * WidgetBlueprintGeneratedClass ConsoleCommand.ConsoleCommand_C
	 * Size -> 0x0028 (FullSize[0x07E8] - InheritedSize[0x07C0])
	 */
	class UConsoleCommand_C : public UUI_ConsoleCommand
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bracket_SmallText;                                       // 0x07C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style1A_C*                       CloseButton;                                             // 0x07D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UASAUIWidget_Button_Style1A_C*                       EditButton;                                              // 0x07D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    TextBox;                                                 // 0x07E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		bool BPHighlightWidgetOnStart();
		bool BPCycleHighlighted();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
		void ExecuteUbergraph_ConsoleCommand(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
