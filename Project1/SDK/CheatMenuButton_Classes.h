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
	 * WidgetBlueprintGeneratedClass CheatMenuButton.CheatMenuButton_C
	 * Size -> 0x0088 (FullSize[0x03B8] - InheritedSize[0x0330])
	 */
	class UCheatMenuButton_C : public UUI_DebugSpawnMenuEntry
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ButtonText;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SpawnButton;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              DinoToSpawn[0x30];                                       // 0x0348(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class UCheatMenu_C*                                        AttachedMenu;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class ADino_Character_BP_C*                                SpawnedDino;                                             // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Saddle[0x30];                                            // 0x0388(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0(class UClass* Loaded);
		void OnLoaded_E74A95AD4E858FEFB820B09140E2E827(class UClass* Loaded);
		void BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_CheatMenuButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
