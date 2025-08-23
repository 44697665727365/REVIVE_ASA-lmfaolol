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
	 * WidgetBlueprintGeneratedClass NinjaLiveGUI.NinjaLiveGUI_C
	 * Size -> 0x0368 (FullSize[0x0698] - InheritedSize[0x0330])
	 */
	class UNinjaLiveGUI_C : public UPrimalUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    BlinkingText1;                                           // 0x0338(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class USpinBox*                                            _001_SpinBox_BrushSize;                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _002_SpinBox_BrushDensity;                               // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _003_SpinBox_BrushHardness;                              // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _004_SpinBox_BrushNoise;                                 // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _005_SpinBox_BrushRnd;                                   // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _006_SpinBox_BrushPersist;                               // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           _007_Checkbox_BrushInvert;                               // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _008_SpinBox_BrushDrag;                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _009_SpinBox_BrushPuncture;                              // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _010_SpinBox_SimFeedback;                                // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             _011_Button_SimClear;                                    // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _012_SpinBox_SimSpeed;                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _013_SpinBox_SimTurbulence;                              // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _014_SpinBox_VeloAmp;                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _015_SpinBox_VeloOffsetX;                                // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _016_SpinBox_VeloOffsetY;                                // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _017_SpinBox_VeloAmpNoise;                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _018_SpinBox_VeloDirNoise;                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _019_SpinBox_VeloDirNoiseSize;                           // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _020_SpinBox_VeloDirNoiseOffs;                           // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     _021_ComboBox_VeloFromBitmap;                            // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _022_SpinBox_VeloRotate;                                 // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _023_SpinBox_VeloOffset;                                 // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _024_SpinBox_VeloTile;                                   // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             _024b_Border_Warning_VelocityFromBitmap;                 // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _025_SimareaMoFx;                                        // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _025_SimareaMoOffset;                                    // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     _026_ComboBox_DensFromBitmap;                            // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             _026b_Border_Warning_DensityFromBitmap;                  // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _027_SpinBox_DensityOffsetX;                             // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _028_SpinBox_DensityOffsetY;                             // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _029_SpinBox_DensityTile;                                // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     _030_ComboBox_DensFromMaterial;                          // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _031_SpinBox_DensityFieldAmp;                            // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _032_SpinBox_DensityFieldAmpNois;                        // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _033_SpinBox_DensityFieldAmpNoisOfs;                     // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _034_SpinBox_DensityFieldAmpNoisTile;                    // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _035_SpinBox_BouncyEdges;                                // 0x0468(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _036_SpinBox_SimEdgeFadePow;                             // 0x0470(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            _037_SpinBox_SimEdgeFadeWidth;                           // 0x0478(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     _038_ComboBox_OutputMaterial;                            // 0x0480(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             _039_Button_SavePaintBuffer;                             // 0x0488(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             _040_Button_SaveSimBuffer;                               // 0x0490(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          _041_TextBlock_MetaInfo;                                 // 0x0498(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border;                                                  // 0x04A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Main0_StatusBorder;                                      // 0x04A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Main1_Button_Minimize;                                   // 0x04B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           Main2_TooltipCheckBox;                                   // 0x04B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Main3_Button_CloseProgram;                               // 0x04C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     Main4_ComboBox_MainMenu;                                 // 0x04C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     Main5_ComboBox_Presets;                                  // 0x04D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Main6_Button_OverWritePreset;                            // 0x04D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Main7_Button_DuplicatePreset;                            // 0x04E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MenuFrame1;                                              // 0x04E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MenuFrame2;                                              // 0x04F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MenuFrame3;                                              // 0x04F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableText*                              MultiLineEditableText_MetaData;                          // 0x0500(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_empty;                                         // 0x0508(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          NamedSlot_FluidNinja;                                    // 0x0510(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_BRUSH;                                         // 0x0518(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_FIELDS;                                        // 0x0520(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_SIM;                                           // 0x0528(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             UE5SaveWarningImageButton;                               // 0x0530(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              SelectedProjectItem;                                     // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SelectedPresetItem;                                      // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SelectedPresetItemTemp;                                  // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              NullString;                                              // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DefaultSelection;                                        // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UNamedSlot*>                                  ArrayOfWidgets;                                          // 0x0588(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    Counter;                                                 // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedActorIndex;                                      // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PresetsDetected;                                         // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5YZO[0x7];                                   // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPresetSelectionChanged;                                // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPresetSave;                                            // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     Timer;                                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerTemp;                                               // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NinjaBaseArraysConstructed;                              // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PresetSaveOverWriteFlag;                                 // 0x05E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OLM1[0x6];                                   // 0x05EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TempVarOfParticleTemplatePackages;                       // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempVarOfDensityTemplatePackages;                        // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempVarOfVelocityTemplatePackages;                       // 0x0610(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempVarOfOutputMaterials;                                // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ArrayOfPresetNamesUnsorted;                              // 0x0630(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ArrayOfPresetNamesSorted;                                // 0x0640(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SaveBasicAtlasPlayer;                                    // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveBasicFlowPlayer;                                     // 0x0651(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NinjaViewPortToolsVisibilityFlag;                        // 0x0652(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4B6G[0x5];                                   // 0x0653(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDensityMapSave;                                        // 0x0658(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SystemOn;                                                // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RecordingStarted;                                        // 0x0669(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SNM8[0x2];                                   // 0x066A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempVecfieldIndex;                                       // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPresetDuplicated;                                      // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ForcePreferredPreset;                                    // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8HM9[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SelectedActor;                                           // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UNinjaLiveComponent_C*                               SelectedActorComponent;                                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void GetSelectedActor(int32_t SelectedActorIndex, class ANinjaLive_C** NinjaLiveActor);
		void BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature();
		void BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature();
		void OnPresetDuplicationFinished(class UDataTable* DuplicatedPreset);
		void BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnInitialized();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature();
		void BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature();
		void BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void ExecuteUbergraph_NinjaLiveGUI(int32_t EntryPoint);
		void OnPresetDuplicated__DelegateSignature(class UDataTable* DuplicatedPreset);
		void OnDensityMapSave__DelegateSignature(bool SavePaintBuffer);
		void OnPresetSave__DelegateSignature(const class FString& SelectedProject, const class FString& SelectedPreset, bool OverWriteOrNot);
		void OnPresetSelectionChanged__DelegateSignature(const class FString& SelectedPreset, bool ForceAutoLoadPreset);
		void OnSelectionChanged__DelegateSignature(const class FString& SelectedMenuItem, const class FString& SelectedActorName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
