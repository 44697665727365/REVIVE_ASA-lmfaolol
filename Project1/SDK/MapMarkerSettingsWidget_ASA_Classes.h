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
	 * WidgetBlueprintGeneratedClass MapMarkerSettingsWidget_ASA.MapMarkerSettingsWidget_ASA_C
	 * Size -> 0x0280 (FullSize[0x09D8] - InheritedSize[0x0758])
	 */
	class UMapMarkerSettingsWidget_ASA_C : public UPrimalUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0758(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCustomButtonWidget*                                 AcceptNewWaypoint;                                       // 0x0760(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 AddNewWaypointButton;                                    // 0x0768(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 CancelWaypointButton;                                    // 0x0770(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 CloseWaypointButton;                                     // 0x0778(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          DataMapMarkerList;                                       // 0x0780(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 DeleteWaypoint;                                          // 0x0788(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        EditDeathWaypoint;                                       // 0x0790(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EditMarkIcon;                                            // 0x0798(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EditMarkIcon_TrackedTarget;                              // 0x07A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditMarkNameText;                                        // 0x07A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        EditTrackedActorWaypoint;                                // 0x07B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        EditWaypoint;                                            // 0x07B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ExternalBorder;                                          // 0x07C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 GoToTrackerEntryButton;                                  // 0x07C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          GoToTrackerEntryText;                                    // 0x07D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        HighProgressBar;                                         // 0x07D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             HighSlider;                                              // 0x07E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x07E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_78;                                                // 0x07F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           IsOverridingHeight;                                      // 0x07F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           IsShowingText;                                           // 0x0800(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    LatEditText;                                             // 0x0808(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    LongEditText;                                            // 0x0810(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText;                                             // 0x0818(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_2;                                           // 0x0820(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_3;                                           // 0x0828(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_4;                                           // 0x0830(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_5;                                           // 0x0838(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_6;                                           // 0x0840(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_7;                                           // 0x0848(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_8;                                           // 0x0850(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_9;                                           // 0x0858(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_10;                                          // 0x0860(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_11;                                          // 0x0868(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_12;                                          // 0x0870(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_13;                                          // 0x0878(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText_14;                                          // 0x0880(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             MarkBlueColorSlider;                                     // 0x0888(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MarkColor;                                               // 0x0890(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MarkColor_TrackedTarget;                                 // 0x0898(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             MarkGreenColorSlider;                                    // 0x08A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             MarkRedColorSlider;                                      // 0x08A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             PlayerHighSlider;                                        // 0x08B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBarBlueColorSlider;                              // 0x08B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBarGreenColorSlider;                             // 0x08C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBarRedColorSlider;                               // 0x08C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 removedeathwaypointbutton;                               // 0x08D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 removedeathwaypointbutton_2;                             // 0x08D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          removedeathwaypointtext;                                 // 0x08E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          removedeathwaypointtext_2;                               // 0x08E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 StopTrackingButton;                                      // 0x08F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StopTrackingText;                                        // 0x08F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TrackedTargetName;                                       // 0x0900(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     ViewDistanceComboBox;                                    // 0x0908(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x0910(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              MapMarkerDataWidget;                                     // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxWaypoints;                                            // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NPC7[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTexture2D*>                                  AllMarkWaypointsIcons;                                   // 0x0928(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           CurrentPosition;                                         // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FMinimapMark                                        CurrentEditingMark;                                      // 0x0948(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		class UMinimapWidget_ASA_C*                                MinimapRef;                                              // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClosedUI;                                                // 0x09C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ClickedStopTrackingDeathWaypoint();
		void UpdateEditDeathWaypoint(const struct FMinimapMark& Mark, bool Init);
		void UpdateEditMark_TrackedActorEntry(const struct FMinimapMark& Mark, bool Init);
		void CanEditWaypoint(const struct FMinimapMark& Mark, bool* Can);
		void CreateNewWaypointOnLocation(const struct FVector& InputPin);
		bool TraceGrounWaypointHeight(const struct FVector& inVec, double* ReturnValue2);
		class UWidget* On_ViewDistanceComboBox_GenerateWidget(const class FString& Item);
		void UpdateEditMark(const struct FMinimapMark& Mark, bool Init);
		struct FEventReply OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetMapWaypoints(TArray<struct FMinimapMark>* SavedMinimapMarks);
		void HasLimitedWaypoints(bool GetFirstUnclaimedDefaultNumber, int32_t* Num, bool* Max, int32_t* FirstUnclaimedDefaultNumber);
		void SetupListMapMarker(TArray<struct FMinimapMark>* MapMarker);
		void AssignUpdateRefresh(class UDataListMapMarkerWidget_C* Data);
		void RefreshWaypoints_Event();
		void RefreshConstruct();
		void BndEvt__MapMarkerSettingsWidget_ASA_CloseWaypointButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MapMarkerSettingsWidget_ASA_CancelWaypointButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void EditWaypoint_Event(const struct FMinimapMark& EditMark);
		void BndEvt__MapMarkerSettingsWidget_ASA_EditMarkNameText_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MapMarkerSettingsWidget_ASA_MarkRedColorSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__MapMarkerSettingsWidget_ASA_MarkGreenColorSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__MapMarkerSettingsWidget_ASA_MarkBlueColorSlider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__MapMarkerSettingsWidget_ASA_AcceptNewWaypoint_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MapMarkerSettingsWidget_ASA_LatEditText_K2Node_ComponentBoundEvent_15_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__MapMarkerSettingsWidget_ASA_LongEditText_K2Node_ComponentBoundEvent_16_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__MapMarkerSettingsWidget_ASA_ViewDistanceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__MapMarkerSettingsWidget_ASA_HighSlider_K2Node_ComponentBoundEvent_12_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__MapMarkerSettingsWidget_ASA_AddNewWaypointButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void RemovedFromViewport();
		void WidgetRemovedFromViewport();
		void BndEvt__MapMarkerSettingsWidget_ASA_IsShowingText_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__MapMarkerSettingsWidget_ASA_GoToTrackerEntryButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MapMarkerSettingsWidget_ASA_StopTrackingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MapMarkerSettingsWidget_ASA_DeleteWaypoint_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MapMarkerSettingsWidget_ASA_removedeathwaypointbutton_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_MapMarkerSettingsWidget_ASA(int32_t EntryPoint);
		void ClosedUI__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
