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
	 * WidgetBlueprintGeneratedClass Hub.Hub_C
	 * Size -> 0x0148 (FullSize[0x0AF0] - InheritedSize[0x09A8])
	 */
	class UHub_C : public UUI_Hub
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ExtraClose;                                              // 0x09B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ExtraOpen;                                               // 0x09B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Close;                                                   // 0x09C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Open;                                                    // 0x09C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCustomButtonWidget*                                 CloseHubButton;                                          // 0x09D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             EngramsMenuButton;                                       // 0x09D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_FaceBottom;                          // 0x09E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_FaceLeft;                            // 0x09E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_FaceRight;                           // 0x09F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_FaceTop;                             // 0x09F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_LeftShoulder;                        // 0x0A00(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_LeftStick;                           // 0x0A08(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_LeftTrigger;                         // 0x0A10(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_RightStick;                          // 0x0A18(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_RightTrigger;                        // 0x0A20(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_Start;                               // 0x0A28(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GamepadIcon_NextMenu;                                    // 0x0A30(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              GamepadIcon_PrevMenu;                                    // 0x0A38(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      GamepadTooltips;                                         // 0x0A40(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0A48(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0A50(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0A58(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_55;                                                // 0x0A60(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_56;                                                // 0x0A68(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_57;                                                // 0x0A70(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_59;                                                // 0x0A78(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_66;                                                // 0x0A80(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_367;                                               // 0x0A88(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_462;                                               // 0x0A90(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_517;                                               // 0x0A98(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             InventoryMenuButton;                                     // 0x0AA0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             MinimapMenuButton;                                       // 0x0AA8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             MissionListMenuButton;                                   // 0x0AB0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 OpenPauseMenu;                                           // 0x0AB8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SubMenuSwitcher;                                         // 0x0AC0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             SurvivorProfileMenuButton;                               // 0x0AC8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             TameGroupsMenuButton;                                    // 0x0AD0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             TamingListMenuButton;                                    // 0x0AD8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             TrackDinoListMenuButton;                                 // 0x0AE0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButton_HUB_ASA_C*                             TribeManagerMenuButton;                                  // 0x0AE8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnButtonHover();
		void Construct();
		void OnGamepadActiveChangedBP(bool bIsGamepadActive);
		void BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_Hub(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
