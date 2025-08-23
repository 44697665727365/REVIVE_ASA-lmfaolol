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
	 * WidgetBlueprintGeneratedClass MainMinimapUI_ASA.MainMinimapUI_ASA_C
	 * Size -> 0x02A0 (FullSize[0x0A08] - InheritedSize[0x0768])
	 */
	class UMainMinimapUI_ASA_C : public UMinimapSubMenuUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0768(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCustomButtonWidget*                                 BeforeCachedMap;                                         // 0x0770(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      BG;                                                      // 0x0778(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BorderExtMinimap;                                        // 0x0780(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             BorderMinimap;                                           // 0x0788(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ButtonShowHide;                                          // 0x0790(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasExternalMinimap;                                   // 0x0798(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasInternalMinimap;                                   // 0x07A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasMinimap;                                           // 0x07A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ChangeMapBox;                                            // 0x07B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ClearTracking;                                           // 0x07B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentLat;                                              // 0x07C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CurrentLong;                                             // 0x07C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CursorImage;                                             // 0x07D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ExternalBorder;                                          // 0x07D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x07E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_118;                                               // 0x07E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      LatLongBox;                                              // 0x07F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftRightCursorLastPos;                                  // 0x07F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0800(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MainLeftCoords;                                          // 0x0808(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MainTopCoords;                                           // 0x0810(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapSelector;                                             // 0x0818(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             MinimapBorder;                                           // 0x0820(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMinimapWidget_ASA_C*                                MiniMapUi;                                               // 0x0828(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 NextCachedMap;                                           // 0x0830(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NextPing_2;                                              // 0x0838(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverlayAligment;                                         // 0x0840(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverlayCanvas;                                           // 0x0848(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ShowDeathsButton;                                        // 0x0850(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ShowDinosButtons;                                        // 0x0858(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ShowPingsButton;                                         // 0x0860(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ShowPlayersButton;                                       // 0x0868(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ShowWaypointsButton;                                     // 0x0870(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TopBottomCursorLastPos;                                  // 0x0878(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 WaypointButtons;                                         // 0x0880(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ZoomBox;                                                 // 0x0888(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ZoomText;                                                // 0x0890(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		double                                                     MaxZoom;                                                 // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinZoom;                                                 // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentZoom;                                             // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MouseCursorLocation;                                     // 0x08B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OriginalZoomDistance;                                    // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ZoomTextString;                                          // 0x08C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector2D                                           OriginalMapSize;                                         // 0x08D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MultiplySpeedMoveMinimap;                                // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MaxMapMovement;                                          // 0x08F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MapMarkerSettingsClass;                                  // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           CurrentCoord;                                            // 0x0908(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanDragMinimap;                                          // 0x0918(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GamepadZoomIn;                                           // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GamepadZoomOut;                                          // 0x091A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_83EK[0x5];                                   // 0x091B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMapMarkerSettingsWidget_ASA_C*                      MarkSettings;                                            // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		ETeamPingType                                              NextPinType;                                             // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IQG1[0x7];                                   // 0x0929(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MouseMinimapCoords;                                      // 0x0930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorLegendSelected;                                     // 0x0940(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorLegendUnselected;                                   // 0x0950(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPingSelectorOnMap_C*                                PingSelector;                                            // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           LastPingLocation;                                        // 0x0968(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MapBorderScale;                                          // 0x0978(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanShowBeds;                                             // 0x0988(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpawnUI;                                               // 0x0989(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UVGL[0x2];                                   // 0x098A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        MinimapBorderColor;                                      // 0x098C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MinimapExtBorderColor;                                   // 0x099C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MainCenterMapBorderColor;                                // 0x09AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JP7U[0x4];                                   // 0x09BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Zoom;                                                    // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              MessageTextNoTribe;                                      // 0x09D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector2D                                           ButtonsLegndPosition;                                    // 0x09E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GamepadZoomSpeed;                                        // 0x09F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GamepadMovementSpeed;                                    // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MouseZoomSpeed;                                          // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TimerWaitDoubleClickMap();
		void OpenSetupNewWaypoint();
		struct FEventReply OnGamepadButtonDownEvent(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
		struct FEventReply OnMouseMove_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void ChangeButtonVisually(class UCustomButtonWidget* CustomButton, bool Selected);
		void UpdateLegendButtons();
		struct FEventReply On_BorderMinimap_MouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnBorderMinimapMouseDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply On_BorderMinimap_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void CreateSettingsWidget(class UMapMarkerSettingsWidget_ASA_C** AsMapMarkerSettingsWidgetASA);
		struct FEventReply OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent);
		void DoPingMinimap(ETeamPingType PingType);
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetMinimapDataRef(class UMinimapData** AsMinimapData);
		void CreateNewWaypointOnLocation(const struct FVector2D& Coords);
		void InputZoomMinimap(double ZoomInInput, double Speed, double ZoomOutInput);
		void SetVirtualMinimapPosition(double XInput, double YInput, double Speed);
		void UpdateMinimapSize(double Zoom);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__MainMinimapUI_ASA_WaypointButtons_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void RefreshTracking_Event(const struct FMinimapMark& Mark, bool IsTracking);
		void RefreshCachedData_Event();
		void BndEvt__MainMinimapUI_ASA_BeforeCachedMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MainMinimapUI_ASA_NextCachedMap_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void HandleEditMark_Event(const struct FMinimapMark& Mark);
		void BndEvt__MainMinimapUI_ASA_MarkSettings_K2Node_ComponentBoundEvent_10_ClosedUI__DelegateSignature();
		void CreateAssignOnMapSettings(class UMapMarkerSettingsWidget_ASA_C* Settings);
		void ClosedUI_Event();
		void BndEvt__MainMinimapUI_ASA_ShowPingsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MainMinimapUI_ASA_ShowPingsButton_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MainMinimapUI_ASA_ShowDinosButtons_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MainMinimapUI_ASA_ShowPlayersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MainMinimapUI_ASA_ShowDeathsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
		void CreatePingSelector(bool OnlyForClose);
		void CallPing_Event(ETeamPingType PingType);
		void BndEvt__MainMinimapUI_ASA_ClearTracking_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_MainMinimapUI_ASA(int32_t EntryPoint);
		void Zoom__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
