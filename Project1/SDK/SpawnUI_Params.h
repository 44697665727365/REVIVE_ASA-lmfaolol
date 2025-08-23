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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SpawnUI.SpawnUI_C.GetCameraSettings
	 */
	struct USpawnUI_C_GetCameraSettings_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T762[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCameraLocationSetting                              Return;                                                  // 0x0008(0x0040)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.SizeZoomUpdate
	 */
	struct USpawnUI_C_SizeZoomUpdate_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.Get Preview Mesh Normalized Height
	 */
	struct USpawnUI_C_GetPreviewMeshNormalizedHeight_Params
	{
	public:
		double                                                     Height;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.OnPreviewKeyDown
	 */
	struct USpawnUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.FixPS5Icons
	 */
	struct USpawnUI_C_FixPS5Icons_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.HeadZoomUpdate
	 */
	struct USpawnUI_C_HeadZoomUpdate_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.HandleConsoleIcons
	 */
	struct USpawnUI_C_HandleConsoleIcons_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.IsFastTravelTeleport
	 */
	struct USpawnUI_C_IsFastTravelTeleport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Get_BorderCharacterCreation_Visibility
	 */
	struct USpawnUI_C_Get_BorderCharacterCreation_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateHairLenghtSettings
	 */
	struct USpawnUI_C_UpdateHairLenghtSettings_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.RemoveBed
	 */
	struct USpawnUI_C_RemoveBed_Params
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.GetAllColorSliders
	 */
	struct USpawnUI_C_GetAllColorSliders_Params
	{
	public:
		TArray<class UDataListValueGeneric*>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.GetAllFloatSliders
	 */
	struct USpawnUI_C_GetAllFloatSliders_Params
	{
	public:
		TArray<class UDataListValueGeneric*>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateCameraPerTab
	 */
	struct USpawnUI_C_UpdateCameraPerTab_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.OnGamepadButtonDownEvent
	 */
	struct USpawnUI_C_OnGamepadButtonDownEvent_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FControllerEvent                                    ControllerEvent;                                         // 0x0038(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.CombineDynamicMaterialSlidersToFVectors
	 */
	struct USpawnUI_C_CombineDynamicMaterialSlidersToFVectors_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.SetupNameValueOnSlider
	 */
	struct USpawnUI_C_SetupNameValueOnSlider_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.GetIndexSelectedBodyPart
	 */
	struct USpawnUI_C_GetIndexSelectedBodyPart_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.SetupMultiBedButtons
	 */
	struct USpawnUI_C_SetupMultiBedButtons_Params
	{
	public:
		TArray<int32_t>                                            AverrageIDSSpan;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    IdSpawnSelected;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MHCM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBedSpawnWidget_ASA_C*                               Bed;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateBedButton
	 */
	struct USpawnUI_C_UpdateBedButton_Params
	{
	public:
		double                                                     OldTime;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanUse;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C28N[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataListButton_ASA_C*                               BedButton;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FString                                              BedName;                                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateSelectedBed
	 */
	struct USpawnUI_C_UpdateSelectedBed_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.CalculateAverageBeds
	 */
	struct USpawnUI_C_CalculateAverageBeds_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.SetupUpdateBedSpawn
	 */
	struct USpawnUI_C_SetupUpdateBedSpawn_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SpawnPointID;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     NextAllowedUseTime;                                      // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAllowedUse;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NJGI[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumBeds;                                                 // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              BedName;                                                 // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.SetupUpdateSpawnRegion
	 */
	struct USpawnUI_C_SetupUpdateSpawnRegion_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Difficult;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.GetCanvasLocationForMinimapPoint
	 */
	struct USpawnUI_C_GetCanvasLocationForMinimapPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.GetDifficultRegionString
	 */
	struct USpawnUI_C_GetDifficultRegionString_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UCDF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.GetRespawnPanelMap
	 */
	struct USpawnUI_C_GetRespawnPanelMap_Params
	{
	public:
		class USpawnMapWidget*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BP_FinalAdjustPlayerCharacterConfigBeforeSpawn
	 */
	struct USpawnUI_C_BP_FinalAdjustPlayerCharacterConfigBeforeSpawn_Params
	{
	public:
		struct FPrimalPlayerCharacterConfigStruct                  InPlayerCharacterConfig;                                 // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FPrimalPlayerCharacterConfigStruct                  ReturnValue;                                             // 0x0110(0x0110)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Get or Create Dynamic Material
	 */
	struct USpawnUI_C_GetorCreateDynamicMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Shuffle-SliderValues
	 */
	struct USpawnUI_C_ShuffleSliderValues_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.Settings-UpdateHistory
	 */
	struct USpawnUI_C_SettingsUpdateHistory_Params
	{
	public:
		bool                                                       ReviseHistory;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AKEB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FS_CC_Settings                                      S_CC_Settings;                                           // 0x0008(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9
	 */
	struct USpawnUI_C_OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateVectorParameter
	 */
	struct USpawnUI_C_UpdateVectorParameter_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      R;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      G;                                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      B;                                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      A;                                                       // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateScalarParameter
	 */
	struct USpawnUI_C_UpdateScalarParameter_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateBodyPartByType
	 */
	struct USpawnUI_C_UpdateBodyPartByType_Params
	{
	public:
		class FString                                              A;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              B;                                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Tick
	 */
	struct USpawnUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BPSetSelectedSpawnRegion
	 */
	struct USpawnUI_C_BPSetSelectedSpawnRegion_Params
	{
	public:
		int32_t                                                    spawnRegionIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_STQM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Construct
	 */
	struct USpawnUI_C_Construct_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BPCreatedSpawnRegionWidget
	 */
	struct USpawnUI_C_BPCreatedSpawnRegionWidget_Params
	{
	public:
		int32_t                                                    spawnRegionIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KY5J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Difficult;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.AssignSpawnRegionSelect
	 */
	struct USpawnUI_C_AssignSpawnRegionSelect_Params
	{
	public:
		class USpawnRegionWidget_ASA_C*                            SpawnRegion;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Clicked_Event
	 */
	struct USpawnUI_C_Clicked_Event_Params
	{
	public:
		class USpawnRegionWidget_ASA_C*                            SpawnRegion;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BPSetupButtonDataForSpawnRegion
	 */
	struct USpawnUI_C_BPSetupButtonDataForSpawnRegion_Params
	{
	public:
		int32_t                                                    spawnRegionIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DFC8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SecondText;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Clicked_Event_1
	 */
	struct USpawnUI_C_Clicked_Event_1_Params
	{
	public:
		class UDinoListButtonWidget*                               DataList;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BPSetupBed
	 */
	struct USpawnUI_C_BPSetupBed_Params
	{
	public:
		int32_t                                                    BedIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SpawnPointID;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              BedName;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             AtLocation;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     NextAllowedUseTime;                                      // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAllowedUse;                                             // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_24HN[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumBeds;                                                 // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.AssignBedSpawnSelect
	 */
	struct USpawnUI_C_AssignBedSpawnSelect_Params
	{
	public:
		class UBedSpawnWidget_ASA_C*                               SpawnRegion;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Clicked_Event_2
	 */
	struct USpawnUI_C_Clicked_Event_2_Params
	{
	public:
		class UBedSpawnWidget_ASA_C*                               BedSpawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.AssignBedsButtonSelect
	 */
	struct USpawnUI_C_AssignBedsButtonSelect_Params
	{
	public:
		class UDataListButton_ASA_C*                               Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.Clicked_Event_3
	 */
	struct USpawnUI_C_Clicked_Event_3_Params
	{
	public:
		class UDinoListButtonWidget*                               DataList;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.OnGamepadActiveChangedBP
	 */
	struct USpawnUI_C_OnGamepadActiveChangedBP_Params
	{
	public:
		bool                                                       bIsGamepadActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateCharacterFirstSpawnBP
	 */
	struct USpawnUI_C_UpdateCharacterFirstSpawnBP_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BPExecutedCommandForPrimalUI
	 */
	struct USpawnUI_C_BPExecutedCommandForPrimalUI_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.SwitchTheButton
	 */
	struct USpawnUI_C_SwitchTheButton_Params
	{
	public:
		bool                                                       Next;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BPRemoveBed
	 */
	struct USpawnUI_C_BPRemoveBed_Params
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.OnGenderChange
	 */
	struct USpawnUI_C_OnGenderChange_Params
	{
	public:
		bool                                                       isFemale;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.UpdateHairCameraOffset
	 */
	struct USpawnUI_C_UpdateHairCameraOffset_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.AddedToViewport
	 */
	struct USpawnUI_C_AddedToViewport_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.RemovedFromViewport
	 */
	struct USpawnUI_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature
	 */
	struct USpawnUI_C_BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnUI.SpawnUI_C.OnResetToDefault
	 */
	struct USpawnUI_C_OnResetToDefault_Params
	{	};

	/**
	 * Function SpawnUI.SpawnUI_C.ExecuteUbergraph_SpawnUI
	 */
	struct USpawnUI_C_ExecuteUbergraph_SpawnUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NFD6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
