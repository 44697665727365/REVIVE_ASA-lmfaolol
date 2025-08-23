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
	 * WidgetBlueprintGeneratedClass CheatMenuEggButton.CheatMenuEggButton_C
	 * Size -> 0x0098 (FullSize[0x03C8] - InheritedSize[0x0330])
	 */
	class UCheatMenuEggButton_C : public UUI_DebugSpawnMenuEntry
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ButtonImage;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ButtonText;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SpawnButton;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheatMenu_C*                                        AttachedMenu;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FString                                              ItemSpawnString;                                         // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              BlueprintID[0x30];                                       // 0x0368(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              FertBlueprintID[0x30];                                   // 0x0398(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_CheatMenuEggButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
