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
	 * BlueprintGeneratedClass NinjaLive_PresetManager.NinjaLive_PresetManager_C
	 * Size -> 0x0201 (FullSize[0x06B9] - InheritedSize[0x04B8])
	 */
	class ANinjaLive_PresetManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                WriteDataTableUtility;                                   // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialBillboardComponent*                         EditorIcon;                                              // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                AssetTrimmedName_Global;                                 // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                AssetPath_Global;                                        // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNinjaLiveGUI_C*                                     BP_Widget_GUI1_Var;                                      // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DefaultActor;                                            // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefaultLiveActorIndex;                                   // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N8P5[0x4];                                   // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ArrayOfLevelActors;                                      // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FString                                              NinjaLiveAssetTrimmedName;                               // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                NinjaLivePath;                                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UNamedSlot*>                                  ArrayOfLevelActorNamedSlots;                             // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    RT_counter;                                              // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F6DH[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RT_RenderPathDynamic;                                    // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              RT_RenderPathStatic;                                     // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       GUIWidgetInitDone;                                       // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D3F7[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UNamedSlot*>                                  NamedSlots;                                              // 0x0568(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UDataTable*                                          LoadedDataTable;                                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              LoadedDatatablePath;                                     // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              TextureCompression;                                      // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LICL[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PNGExportGamma;                                          // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveTexturesWithsRGB;                                    // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V878[0x7];                                   // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     VelocityMapDownscaleFactor;                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CompensateUEGammaCorrection;                             // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XI84[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DensityMapTextureCompressionIndex;                       // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    VelocityMapTextureCompressionIndex;                      // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CustomTickRate;                                          // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsePluginForFGAExport;                                   // 0x05BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisablePresetManager;                                    // 0x05BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_32XA[0x1];                                   // 0x05BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DefaultLiveStageActor;                                   // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		bool                                                       HighlightSelectedActors;                                 // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D8V2[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InternalSavePath;                                        // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ExternalSavePath;                                        // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DefaultPreset;                                           // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              NinjaRootFolder;                                         // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DefaultLiveActor;                                        // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       FirstStart;                                              // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WEJ5[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAssetData>                                  AvailableImagesData;                                     // 0x0628(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        AvailableImagesNames;                                    // 0x0638(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FAssetData>                                  AvailableParticlesData;                                  // 0x0648(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        AvailableParticleNames;                                  // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ArraysConstructed;                                       // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PMInitFinished;                                          // 0x0669(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugPerformance;                                        // 0x066A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       PoolManagerDetected;                                     // 0x066B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoConnectToMemoryPoolIFFound;                          // 0x066C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PresetManagerDebugPrint;                                 // 0x066D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveDebugTextToDefaultLog;                               // 0x066E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TXM1[0x1];                                   // 0x066F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DebugTextLifetime;                                       // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              HighlightColor;                                          // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_RZ2B[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     HighlightThickness;                                      // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     HighlightDuration;                                       // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HighlightRefreshRate;                                    // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       ShowMouseCursor;                                         // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_77HX[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            RenderBufferSaver;                                       // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      PresetSavingBugWorkaroundUEversions;                     // 0x06A8(0x0010) Edit, BlueprintVisible
		bool                                                       DisableGUIWarningOnPresetSaving;                         // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MarkForSave_UE426_BugWorkaround(class UObject* CurrentAsset);
		void ConvertToPowerOfTwo(int32_t In, int32_t* Out);
		void MarkNewFilesAsUnsaved(TArray<struct FAssetData>* ArrayOfUnsaveAssetData);
		void DataTable_SingleKeyPicker_DT(class UDataTable* DataTableIn, const class FString& KeyToPick, class FString* PickedKeyValue, bool* NotFound);
		void AssetDataFromObject(class UObject* InputObject, struct FAssetData* ComboAssetData, class FName* ObjectPath, class FName* PackageName, class FName* PackagePath, class FName* AssetName, class FName* AssetClass);
		void Preset_to_InternalCSV_to_DT_Saver(bool OverWriteFlag, const class FString& VarAsString, const class FString& SelectedItem, TArray<class FName>* AssetPaths, const class FName& AssetName);
		void RenderTargetExportSingleV2(class UTextureRenderTarget2D* TextureRenderTarget, bool InternalSave, bool SRGB, bool NoAlpha, bool SaveWithDialog, const class FName& InternalFilePath, const class FName& ExternalFilePath, const class FString& Filename, const class FString& Extension);
		void RenderTargetExportSingleV1(class UTextureRenderTarget2D* TextureRenderTarget, bool InternalSave, bool SRGB, bool NoAlpha, bool SaveWithDialog, const class FName& InternalFilePath, const class FName& ExternalFilePath, const class FString& Filename, const class FString& Extension, class FName* SavedAssetPath, struct FAssetData* SavedAssetData);
		void SetAssetNameAndPath(class UObject* Object, class FName* AssetTrimmedName, class FName* AssetPath);
		void UserConstructionScript();
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void WriteDataTableFunction(class UDataTable* InputTable, const class FString& InputData);
		void OnDensityMapSave(bool SavePaintBuffer);
		void ExecuteUbergraph_NinjaLive_PresetManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
