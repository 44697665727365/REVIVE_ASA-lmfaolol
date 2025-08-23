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
	 * Class HoudiniEngineRuntime.HoudiniAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHoudiniAsset : public UObject
	{
	public:
		class FString                                              AssetFileName;                                           // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      AssetBytes;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		uint32_t                                                   AssetBytesCount;                                         // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAssetLimitedCommercial;                                 // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAssetNonCommercial;                                     // 0x004D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAssetExpanded;                                          // 0x004E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FKW7[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetActor
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class AHoudiniAssetActor : public AActor
	{
	public:
		class UHoudiniAssetComponent*                              HoudiniAssetComponent;                                   // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetComponent
	 * Size -> 0x0500 (FullSize[0x0B80] - InheritedSize[0x0680])
	 */
	class UHoudiniAssetComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_GH6L[0x8];                                   // 0x0680(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoudiniAsset*                                       HoudiniAsset;                                            // 0x0688(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnParameterChange;                                  // 0x0690(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUploadTransformsToHoudiniEngine;                        // 0x0691(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnTransformChange;                                  // 0x0692(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnAssetInputCook;                                   // 0x0693(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutputless;                                             // 0x0694(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutputTemplateGeos;                                     // 0x0695(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOutputNodes;                                         // 0x0696(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DG95[0x1];                                   // 0x0697(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      TemporaryCookFolder;                                     // 0x0698(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      BakeFolder;                                              // 0x06A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniStaticMeshMethod                                   StaticMeshMethod;                                        // 0x06B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB25[0x7];                                   // 0x06B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHoudiniStaticMeshGenerationProperties              StaticMeshGenerationProperties;                          // 0x06C0(0x0188) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FMeshBuildSettings                                  StaticMeshBuildSettings;                                 // 0x0848(0x0048) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideGlobalProxyStaticMeshSettings;                  // 0x0890(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshOverride;                          // 0x0891(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementByTimerOverride;         // 0x0892(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLC6[0x1];                                   // 0x0893(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProxyMeshAutoRefineTimeoutSecondsOverride;               // 0x0894(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;  // 0x0898(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;   // 0x0899(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeUseTempLayers;                                 // 0x089A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXGG[0x1];                                   // 0x089B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssetId;                                                 // 0x089C(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<int32_t>                                            NodeIdsToCook;                                           // 0x08A0(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		TMap<int32_t, int32_t>                                     OutputNodeCookCounts;                                    // 0x08B0(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              DownstreamHoudiniAssets[0x50];                           // 0x0900(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FGuid                                               ComponentGUID;                                           // 0x0950(0x0010) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               HapiGUID;                                                // 0x0960(0x0010) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              HapiAssetName;                                           // 0x0970(0x0010) ZeroConstructor, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniAssetState                                         AssetState;                                              // 0x0980(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniAssetState                                         DebugLastAssetState;                                     // 0x0981(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniAssetStateResult                                   AssetStateResult;                                        // 0x0982(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z6KY[0xD];                                   // 0x0983(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LastComponentTransform;                                  // 0x0990(0x0060) DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   SubAssetIndex;                                           // 0x09F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AssetCookCount;                                          // 0x09F4(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasBeenLoaded;                                          // 0x09F8(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasBeenDuplicated;                                      // 0x09F9(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingDelete;                                          // 0x09FA(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRecookRequested;                                        // 0x09FB(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRebuildRequested;                                       // 0x09FC(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableCooking;                                          // 0x09FD(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForceNeedUpdate;                                        // 0x09FE(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLastCookSuccess;                                        // 0x09FF(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bParameterDefinitionUpdateNeeded;                        // 0x0A00(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlueprintStructureModified;                             // 0x0A01(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlueprintModified;                                      // 0x0A02(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0VHZ[0x5];                                   // 0x0A03(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameter*>                           Parameters;                                              // 0x0A08(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UHoudiniInput*>                               Inputs;                                                  // 0x0A18(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UHoudiniOutput*>                              Outputs;                                                 // 0x0A28(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FHoudiniBakedOutput>                         BakedOutputs;                                            // 0x0A38(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class AActor>>                       UntrackedOutputs;                                        // 0x0A48(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UHoudiniHandleComponent*>                     HandleComponents;                                        // 0x0A58(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasComponentTransformChanged;                           // 0x0A68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFullyLoaded;                                            // 0x0A69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N21R[0x6];                                   // 0x0A6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoudiniPDGAssetLink*                                PDGAssetLink;                                            // 0x0A70(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        RefineMeshesTimer;                                       // 0x0A78(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1Q13[0x18];                                  // 0x0A80(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bNoProxyMeshNextCookRequested;                           // 0x0A98(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AN93[0x7];                                   // 0x0A99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, int32_t>                              InputPresets;                                            // 0x0AA0(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		bool                                                       bBakeAfterNextCook;                                      // 0x0AF0(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KRJ9[0x5F];                                  // 0x0AF1(0x005F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCachedIsPreview;                                        // 0x0B50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YISZ[0xF];                                   // 0x0B51(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTickTime;                                            // 0x0B60(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VZXS[0x18];                                  // 0x0B68(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
	 * Size -> 0x0100 (FullSize[0x0C80] - InheritedSize[0x0B80])
	 */
	class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
	{
	public:
		unsigned char                                              UnknownData_06P9[0x48];                                  // 0x0B80(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       FauxBPProperty;                                          // 0x0BC8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHoudiniAssetChanged;                                    // 0x0BC9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpdatedFromTemplate;                                    // 0x0BCA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsInBlueprintEditor;                                    // 0x0BCB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x0BCC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasRegisteredComponentTemplate;                         // 0x0BCD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JFEA[0xA];                                   // 0x0BCE(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid>  CachedOutputNodes;                                       // 0x0BD8(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<struct FGuid, struct FGuid>                           CachedInputNodes;                                        // 0x0C28(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y592[0x8];                                   // 0x0C78(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetToggleValueAt(const class FString& Name, bool Value, int32_t Index);
		void SetFloatParameter(const class FString& Name, float Value, int32_t Index);
		bool HasParameter(const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameter
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetParameter : public UObject
	{
	public:
		unsigned char                                              UnknownData_FZ9C[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterButton
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_20I2[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterColor
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_KBPO[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFile
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_4J6H[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_3TKP[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterInt
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_V5V9[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_U4FL[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_3XQY[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterString
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterString : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_MQ00[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_XCDN[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetComponentMaterials_V1 : public UObject
	{
	public:
		unsigned char                                              UnknownData_8NHU[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
	 * Size -> 0x0098 (FullSize[0x0360] - InheritedSize[0x02C8])
	 */
	class UHoudiniHandleComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_V7J5[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_TL1E[0x90];                                  // 0x02D0(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
	 * Size -> 0x0128 (FullSize[0x03F0] - InheritedSize[0x02C8])
	 */
	class UHoudiniSplineComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_IPD9[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_IFWG[0x120];                                 // 0x02D0(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetInput
	 * Size -> 0x0160 (FullSize[0x01E0] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetInput : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_EDCD[0x160];                                 // 0x0080(0x0160) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
	 * Size -> 0x0110 (FullSize[0x0190] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_F94W[0x110];                                 // 0x0080(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
	 * Size -> 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetInstanceInputField : public UObject
	{
	public:
		unsigned char                                              UnknownData_D2N8[0x198];                                 // 0x0028(0x0198) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
	 * Size -> 0x0500 (FullSize[0x0B80] - InheritedSize[0x0680])
	 */
	class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
	{
	public:
		bool                                                       bGeneratedDoubleSidedGeometry : 1;                       // 0x0680(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0841[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   GeneratedPhysMaterial;                                   // 0x0688(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBodyInstance                                       DefaultBodyInstance;                                     // 0x0690(0x0138) Edit, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        GeneratedCollisionTraceFlag;                             // 0x07C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_729J[0x3];                                   // 0x07C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GeneratedLightMapResolution;                             // 0x07CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeneratedDistanceFieldResolutionScale;                   // 0x07D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWalkableSlopeOverride                              GeneratedWalkableSlopeOverride;                          // 0x07D4(0x0010) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    GeneratedLightMapCoordinateIndex;                        // 0x07E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGeneratedUseMaximumStreamingTexelRatio : 1;             // 0x07E8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZ6C[0x3];                                   // 0x07E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GeneratedStreamingDistanceMultiplier;                    // 0x07EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFoliageType_InstancedStaticMesh*                    GeneratedFoliageDefaultSettings;                         // 0x07F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              GeneratedAssetUserData;                                  // 0x07F8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		class FText                                                BakeFolder;                                              // 0x0808(0x0018) NativeAccessSpecifierPublic
		class FText                                                TempCookFolder;                                          // 0x0820(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG0L[0x348];                                 // 0x0838(0x0348) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UHoudiniInstancedActorComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_OKWT[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_0EME[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
	 * Size -> 0x0028 (FullSize[0x02F0] - InheritedSize[0x02C8])
	 */
	class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_YZ94[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_BUOD[0x20];                                  // 0x02D0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHoudiniEngineCopyPropertiesInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniHandleParameter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHoudiniHandleParameter : public UObject
	{
	public:
		class UHoudiniParameter*                                   AssetParameter;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TupleIndex;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDME[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniHandleComponent
	 * Size -> 0x0038 (FullSize[0x0300] - InheritedSize[0x02C8])
	 */
	class UHoudiniHandleComponent : public USceneComponent
	{
	public:
		TArray<class UHoudiniHandleParameter*>                     XformParms;                                              // 0x02C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UHoudiniHandleParameter*                             RSTParm;                                                 // 0x02D8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniHandleParameter*                             RotOrderParm;                                            // 0x02E0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniHandleType                                         HandleType;                                              // 0x02E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AU0S[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HandleName;                                              // 0x02F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInput
	 * Size -> 0x0220 (FullSize[0x0248] - InheritedSize[0x0028])
	 */
	class UHoudiniInput : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Label;                                                   // 0x0038(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniInputType                                          Type;                                                    // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniInputType                                          PreviousType;                                            // 0x0049(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WRT0[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssetNodeId;                                             // 0x004C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InputNodeId;                                             // 0x0050(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InputIndex;                                              // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ParmId;                                                  // 0x0058(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsObjectPathParameter;                                  // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L78B[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            CreatedDataNodeIds;                                      // 0x0060(0x0010) ZeroConstructor, Transient, DuplicateTransient, NonTransactional, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasChanged;                                             // 0x0070(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x0071(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PLPB[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                CachedBounds;                                            // 0x0078(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FString                                              Help;                                                    // 0x00B0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniXformType                                          KeepWorldTransform;                                      // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPackBeforeMerge;                                        // 0x00C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReference;                                      // 0x00C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceRotScaleEnabled;                       // 0x00C3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceBboxEnabled;                           // 0x00C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceMaterialEnabled;                       // 0x00C5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportLODs;                                             // 0x00C6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportSockets;                                          // 0x00C7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPreferNaniteFallbackMesh;                               // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportColliders;                                        // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportMaterialParameters;                               // 0x00CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCookOnCurveChanged;                                     // 0x00CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XMHQ[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         GeometryInputObjects;                                    // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bStaticMeshChanged;                                      // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N14B[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         AssetInputObjects;                                       // 0x00E8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bInputAssetConnectedInHoudini;                           // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YT2A[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         CurveInputObjects;                                       // 0x0100(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      DefaultCurveOffset;                                      // 0x0110(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAddRotAndScaleAttributesOnCurves;                       // 0x0114(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseLegacyInputCurves;                                   // 0x0115(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XFQB[0x2];                                   // 0x0116(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         LandscapeInputObjects;                                   // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bLandscapeHasExportTypeChanged;                          // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D6K9[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         WorldInputObjects;                                       // 0x0130(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      WorldInputBoundSelectorObjects;                          // 0x0140(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsWorldInputBoundSelector;                              // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWorldInputBoundSelectorAutoUpdate;                      // 0x0151(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0AT6[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnrealSplineResolution;                                  // 0x0154(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         SkeletalInputObjects;                                    // 0x0158(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         GeometryCollectionInputObjects;                          // 0x0168(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              LandscapeSelectedComponents[0x50];                       // 0x0178(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              InputNodesPendingDelete[0x50];                           // 0x01C8(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class UHoudiniInputHoudiniSplineComponent*>         LastInsertedInputs;                                      // 0x0218(0x0010) ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UHoudiniInputObject*>                         LastUndoDeletedInputs;                                   // 0x0228(0x0010) ZeroConstructor, Transient, DuplicateTransient, NonTransactional, NativeAccessSpecifierPublic
		bool                                                       bUpdateInputLandscape;                                   // 0x0238(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniLandscapeExportType                                LandscapeExportType;                                     // 0x0239(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportSelectionOnly;                           // 0x023A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeControlVisiblity;                              // 0x023B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeAutoSelectComponent;                           // 0x023C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportMaterials;                               // 0x023D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportLighting;                                // 0x023E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportNormalizedUVs;                           // 0x023F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportTileUVs;                                 // 0x0240(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x0241(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7T7U[0x6];                                   // 0x0242(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputObject
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UHoudiniInputObject : public UObject
	{
	public:
		unsigned char                                              InputObject[0x30];                                       // 0x0028(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_CSL9[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0060(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniInputObjectType                                    Type;                                                    // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPK1[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputNodeId;                                             // 0x00C4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputObjectNodeId;                                       // 0x00C8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x00CC(0x0010) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73EZ[0x2C];                                  // 0x00DC(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasChanged;                                             // 0x0108(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x0109(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransformChanged;                                       // 0x010A(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReference;                                      // 0x010B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceRotScaleEnabled;                       // 0x010C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceBboxEnabled;                           // 0x010D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceMaterialEnabled;                       // 0x010E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7EIT[0x1];                                   // 0x010F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MaterialReferences;                                      // 0x0110(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XR45[0x7];                                   // 0x0121(0x0007) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputStaticMesh
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UHoudiniInputStaticMesh : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_JNH9[0x8];                                   // 0x0128(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_GAOX[0x8];                                   // 0x0128(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UHoudiniInputGeometryCollection : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_D5XJ[0x8];                                   // 0x0128(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSceneComponent
	 * Size -> 0x0068 (FullSize[0x0190] - InheritedSize[0x0128])
	 */
	class UHoudiniInputSceneComponent : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_RSQM[0x8];                                   // 0x0128(0x0008) Fix Super Size
		struct FTransform                                          ActorTransform;                                          // 0x0130(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputMeshComponent
	 * Size -> 0x0030 (FullSize[0x01C0] - InheritedSize[0x0190])
	 */
	class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
	{
	public:
		unsigned char                                              StaticMesh[0x30];                                        // 0x0190(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
	 * Size -> 0x0010 (FullSize[0x01D0] - InheritedSize[0x01C0])
	 */
	class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
	{
	public:
		TArray<struct FTransform>                                  InstanceTransforms;                                      // 0x01C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSplineComponent
	 * Size -> 0x0020 (FullSize[0x01B0] - InheritedSize[0x0190])
	 */
	class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
	{
	public:
		int32_t                                                    NumberOfSplineControlPoints;                             // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineLength;                                            // 0x0194(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineResolution;                                        // 0x0198(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplineClosed;                                            // 0x019C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BRQ[0x3];                                   // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SplineControlPoints;                                     // 0x01A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
	 * Size -> 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
	 */
	class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_ZOCO[0x8];                                   // 0x0128(0x0008) Fix Super Size
		class UHoudiniSplineComponent*                             CachedComponent;                                         // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GMKU[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputCameraComponent
	 * Size -> 0x0020 (FullSize[0x01B0] - InheritedSize[0x0190])
	 */
	class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
	{
	public:
		float                                                      FOV;                                                     // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AspectRatio;                                             // 0x0194(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOrthographic;                                         // 0x0198(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOHV[0x3];                                   // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrthoWidth;                                              // 0x019C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoNearClipPlane;                                      // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoFarClipPlane;                                       // 0x01A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYKA[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_J3WU[0x8];                                   // 0x0128(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputActor
	 * Size -> 0x0068 (FullSize[0x0190] - InheritedSize[0x0128])
	 */
	class UHoudiniInputActor : public UHoudiniInputObject
	{
	public:
		TArray<class UHoudiniInputSceneComponent*>                 ActorComponents;                                         // 0x0128(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ActorSceneComponents[0x50];                              // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    LastUpdateNumComponentsAdded;                            // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LastUpdateNumComponentsRemoved;                          // 0x018C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputLandscape
	 * Size -> 0x0010 (FullSize[0x01A0] - InheritedSize[0x0190])
	 */
	class UHoudiniInputLandscape : public UHoudiniInputActor
	{
	public:
		int32_t                                                    CachedNumLandscapeComponents;                            // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1BU[0xC];                                   // 0x0194(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputBrush
	 * Size -> 0x0020 (FullSize[0x01B0] - InheritedSize[0x0190])
	 */
	class UHoudiniInputBrush : public UHoudiniInputActor
	{
	public:
		TArray<struct FHoudiniBrushInfo>                           BrushesInfo;                                             // 0x0190(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UModel*                                              CombinedModel;                                           // 0x01A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreInputObject;                                      // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBrushType                                                 CachedInputBrushType;                                    // 0x01A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XS8K[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputDataTable
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UHoudiniInputDataTable : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_Q6CX[0x8];                                   // 0x0128(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputBlueprint
	 * Size -> 0x0068 (FullSize[0x0190] - InheritedSize[0x0128])
	 */
	class UHoudiniInputBlueprint : public UHoudiniInputObject
	{
	public:
		TArray<class UHoudiniInputSceneComponent*>                 BPComponents;                                            // 0x0128(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              BPSceneComponents[0x50];                                 // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    LastUpdateNumComponentsAdded;                            // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LastUpdateNumComponentsRemoved;                          // 0x018C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
	 * Size -> 0x0018 (FullSize[0x02E0] - InheritedSize[0x02C8])
	 */
	class UHoudiniInstancedActorComponent : public USceneComponent
	{
	public:
		class UObject*                                             InstancedObject;                                         // 0x02C8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      InstancedActors;                                         // 0x02D0(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
	 * Size -> 0x0028 (FullSize[0x02F0] - InheritedSize[0x02C8])
	 */
	class UHoudiniMeshSplitInstancerComponent : public USceneComponent
	{
	public:
		TArray<class UStaticMeshComponent*>                        Instances;                                               // 0x02C8(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x02D8(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate
		class UStaticMesh*                                         InstancedMesh;                                           // 0x02E8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniLandscapePtr
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UHoudiniLandscapePtr : public UObject
	{
	public:
		unsigned char                                              LandscapeSoftPtr[0x30];                                  // 0x0028(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EHoudiniLandscapeOutputBakeType                            BakeType;                                                // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M58Z[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EditLayerName;                                           // 0x005C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9THA[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UHoudiniLandscapeTargetLayerOutput : public UObject
	{
	public:
		class ALandscape*                                          Landscape;                                               // 0x0028(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALandscapeProxy*                                     LandscapeProxy;                                          // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BakedEditLayer;                                          // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CookedEditLayer;                                         // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetLayer;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHoudiniExtents                                     Extents;                                                 // 0x0068(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClearLayer;                                             // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreatedLandscape;                                       // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookedLayerRequiresBaking;                              // 0x007A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OVL[0x5];                                   // 0x007B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BakedLandscapeName;                                      // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ULandscapeLayerInfoObject*>                   LayerInfoObjects;                                        // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              BakeOutlinerFolder;                                      // 0x00A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialInstance;                                        // 0x00B0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniLandscapeOutput
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UHoudiniLandscapeOutput : public UObject
	{
	public:
		class ALandscape*                                          Landscape;                                               // 0x0028(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BakedName;                                               // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UHoudiniLandscapeTargetLayerOutput*>          Layers;                                                  // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCreated;                                                // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXI4[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniOutput
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UHoudiniOutput : public UObject
	{
	public:
		EHoudiniOutputType                                         Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WQXK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHoudiniGeoPartObject>                       HoudiniGeoPartObjects;                                   // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                           // 0x0040(0x0050) DuplicateTransient, Protected, NativeAccessSpecifierProtected
		TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                        // 0x0090(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UMaterialInterface*>             AssignementMaterials;                                    // 0x00E0(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UMaterialInterface*>             ReplacementMaterials;                                    // 0x0130(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AR4P[0x4];                                   // 0x0180(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLandscapeWorldComposition;                              // 0x0184(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_62YY[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      HoudiniCreatedSocketActors;                              // 0x0188(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      HoudiniAttachedSocketActors;                             // 0x0198(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsEditableNode;                                         // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasEditableNodeBuilt;                                   // 0x01A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsUpdating;                                             // 0x01AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x01AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EGNI[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameter
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UHoudiniParameter : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Label;                                                   // 0x0038(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniParameterType                                      ParmType;                                                // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q8C0[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   TupleSize;                                               // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NodeID;                                                  // 0x0050(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ParmId;                                                  // 0x0054(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ParentParmId;                                            // 0x0058(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ChildIndex;                                              // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsVisible;                                              // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsParentFolderVisible;                                  // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDisabled;                                             // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasChanged;                                             // 0x0063(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDefault;                                              // 0x0065(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSpare;                                                // 0x0066(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bJoinNext;                                               // 0x0067(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsChildOfMultiParm;                                     // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDirectChildOfMultiParm;                               // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingRevertToDefault;                                 // 0x006A(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YOMY[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TuplePendingRevertToDefault;                             // 0x0070(0x0010) ZeroConstructor, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		class FString                                              Help;                                                    // 0x0080(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   TagCount;                                                // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ValueIndex;                                              // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasExpression;                                          // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowExpression;                                         // 0x0099(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8B3[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ParamExpression;                                         // 0x00A0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class FString>                         Tags;                                                    // 0x00B0(0x0050) Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoUpdate;                                             // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VAEQ[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterButton
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterButton : public UHoudiniParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterButtonStrip : public UHoudiniParameter
	{
	public:
		int32_t                                                    Count;                                                   // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY4K[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Labels;                                                  // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Values;                                                  // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterChoice
	 * Size -> 0x0070 (FullSize[0x0178] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterChoice : public UHoudiniParameter
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DefaultIntValue;                                         // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StringValue;                                             // 0x0110(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultStringValue;                                      // 0x0120(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      StringChoiceValues;                                      // 0x0130(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      StringChoiceLabels;                                      // 0x0140(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BAV0[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsChildOfRamp;                                          // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NIFS[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            IntValuesArray;                                          // 0x0168(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterColor
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterColor : public UHoudiniParameter
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0108(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultColor;                                            // 0x0118(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsChildOfRamp;                                          // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1XF1[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFile
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFile : public UHoudiniParameter
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              Filters;                                                 // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsReadOnly;                                             // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2XHK[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFloat
	 * Size -> 0x0050 (FullSize[0x0158] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFloat : public UHoudiniParameter
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              Unit;                                                    // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoSwap;                                                 // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMin;                                                 // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMax;                                                 // 0x013A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMin;                                               // 0x013B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMax;                                               // 0x013C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsLogarithmic;                                          // 0x013D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_703B[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Min;                                                     // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Max;                                                     // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UIMin;                                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UIMax;                                                   // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsChildOfRamp;                                          // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9ABS[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFolder
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFolder : public UHoudiniParameter
	{
	public:
		EHoudiniFolderParameterType                                FolderType;                                              // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bExpanded;                                               // 0x0109(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bChosen;                                                 // 0x010A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6B0D[0x1];                                   // 0x010B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChildCounter;                                            // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsContentShown;                                         // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3MMX[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFolderList
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFolderList : public UHoudiniParameter
	{
	public:
		bool                                                       bIsTabMenu;                                              // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTabsShown;                                            // 0x0109(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVZN[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterFolder*>                     TabFolders;                                              // 0x0110(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterInt
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterInt : public UHoudiniParameter
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              Unit;                                                    // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMin;                                                 // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMax;                                                 // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMin;                                               // 0x013A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMax;                                               // 0x013B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsLogarithmic;                                          // 0x013C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IGP7[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Min;                                                     // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Max;                                                     // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    UIMin;                                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    UIMax;                                                   // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterLabel
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterLabel : public UHoudiniParameter
	{
	public:
		TArray<class FString>                                      LabelStrings;                                            // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterMultiParm
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterMultiParm : public UHoudiniParameter
	{
	public:
		bool                                                       bIsShown;                                                // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YALH[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TemplateName;                                            // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiparmValue;                                          // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MultiParmInstanceNum;                                    // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MultiParmInstanceLength;                                 // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MultiParmInstanceCount;                                  // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   InstanceStartOffset;                                     // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V1Y[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EHoudiniMultiParmModificationType>                  MultiParmInstanceLastModifyArray;                        // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    DefaultInstanceCount;                                    // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6MP[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterOperatorPath : public UHoudiniParameter
	{
	public:
		TWeakObjectPtr<class UHoudiniInput>                        HoudiniInput;                                            // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHoudiniParameterRampModificationEvent : public UObject
	{
	public:
		bool                                                       bIsInsertEvent;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsFloatRamp;                                            // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E49T[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DeleteInstanceIndex;                                     // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertPosition;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertFloat;                                             // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InsertColor;                                             // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRampInterpolationType                              InsertInterpolation;                                     // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GUG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHoudiniParameterRampFloatPoint : public UObject
	{
	public:
		float                                                      position;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRampInterpolationType                              Interpolation;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GP9V[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InstanceIndex;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterFloat*                              PositionParentParm;                                      // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterFloat*                              ValueParentParm;                                         // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterChoice*                             InterpolationParentParm;                                 // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UHoudiniParameterRampColorPoint : public UObject
	{
	public:
		float                                                      position;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRampInterpolationType                              Interpolation;                                           // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDCG[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InstanceIndex;                                           // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RAI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoudiniParameterFloat*                              PositionParentParm;                                      // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterColor*                              ValueParentParm;                                         // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterChoice*                             InterpolationParentParm;                                 // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampFloat
	 * Size -> 0x0068 (FullSize[0x01B8] - InheritedSize[0x0150])
	 */
	class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
	{
	public:
		TArray<class UHoudiniParameterRampFloatPoint*>             Points;                                                  // 0x0150(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UHoudiniParameterRampFloatPoint*>             CachedPoints;                                            // 0x0160(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultPositions;                                        // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultValues;                                           // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DefaultChoices;                                          // 0x0190(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumDefaultPoints;                                        // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaching;                                                // 0x01A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5J8F[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterRampModificationEvent*>      ModificationEvents;                                      // 0x01A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampColor
	 * Size -> 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
	 */
	class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
	{
	public:
		TArray<class UHoudiniParameterRampColorPoint*>             Points;                                                  // 0x0150(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bCaching;                                                // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYZC[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterRampColorPoint*>             CachedPoints;                                            // 0x0168(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultPositions;                                        // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                DefaultValues;                                           // 0x0188(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DefaultChoices;                                          // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumDefaultPoints;                                        // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJ4G[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterRampModificationEvent*>      ModificationEvents;                                      // 0x01B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterSeparator
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterSeparator : public UHoudiniParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterString
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterString : public UHoudiniParameter
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class FString>                                      DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UObject*>                                     ChosenAssets;                                            // 0x0128(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsAssetRef;                                             // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K4EU[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterToggle
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterToggle : public UHoudiniParameter
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.TOPNode
	 * Size -> 0x0378 (FullSize[0x03A0] - InheritedSize[0x0028])
	 */
	class UTOPNode : public UObject
	{
	public:
		int32_t                                                    NodeID;                                                  // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5ZT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NodePath;                                                // 0x0040(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParentName;                                              // 0x0050(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             WorkResultParent;                                        // 0x0060(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTOPWorkResult>                              WorkResult;                                              // 0x0068(0x0010) ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic
		bool                                                       bHidden;                                                 // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoLoad;                                               // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPDGNodeState                                              NodeState;                                               // 0x007A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedHaveNotLoadedWorkResults;                         // 0x007B(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedHaveLoadedWorkResults;                            // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasChildNodes;                                          // 0x007D(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEJY[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClearedLandscapeLayers[0x50];                            // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bShow;                                                   // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9E53[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                            // 0x00D8(0x0050) Protected, NativeAccessSpecifierProtected
		struct FWorkItemTally                                      WorkItemTally;                                           // 0x0128(0x0238) Transient, NonTransactional, Protected, NativeAccessSpecifierProtected
		struct FAggregatedWorkItemTally                            AggregatedWorkItemTally;                                 // 0x0360(0x0028) Transient, NonTransactional, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasReceivedCookCompleteEvent;                           // 0x0388(0x0001) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V3RL[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOutputActorOwner                                   OutputActorOwner;                                        // 0x0390(0x0010) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.TOPNetwork
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UTOPNetwork : public UObject
	{
	public:
		int32_t                                                    NodeID;                                                  // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM9V[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NodePath;                                                // 0x0040(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTOPNode*>                                    AllTOPNodes;                                             // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SelectedTOPIndex;                                        // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYCX[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ParentName;                                              // 0x0068(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowResults;                                            // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoLoadResults;                                        // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TG9O[0x1E];                                  // 0x007A(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniPDGAssetLink
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UHoudiniPDGAssetLink : public UObject
	{
	public:
		class FString                                              AssetName;                                               // 0x0028(0x0010) ZeroConstructor, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetNodePath;                                           // 0x0038(0x0010) ZeroConstructor, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AssetId;                                                 // 0x0048(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PKL[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTOPNetwork*>                                 AllTOPNetworks;                                          // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SelectedTOPNetworkIndex;                                 // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPDGLinkState                                              LinkState;                                               // 0x0064(0x0001) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCook;                                               // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTOPNodeFilter;                                       // 0x0066(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTOPOutputFilter;                                     // 0x0067(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TOPNodeFilter;                                           // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TOPOutputFilter;                                         // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumWorkItems;                                            // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVHP[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAggregatedWorkItemTally                            WorkItemTally;                                           // 0x0090(0x0028) Transient, NonTransactional, NativeAccessSpecifierPublic
		class FString                                              OutputCachePath;                                         // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsUIRefresh;                                         // 0x00C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8X5R[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OutputParentActor;                                       // 0x00D0(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      BakeFolder;                                              // 0x00D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKU5[0x48];                                  // 0x00E8(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniRuntimeSettings
	 * Size -> 0x02C0 (FullSize[0x02E8] - InheritedSize[0x0028])
	 */
	class UHoudiniRuntimeSettings : public UObject
	{
	public:
		EHoudiniRuntimeSettingsSessionType                         SessionType;                                             // 0x0028(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R1T[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerHost;                                              // 0x0030(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0040(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OI9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerPipeName;                                          // 0x0048(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartAutomaticServer;                                   // 0x0058(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE81[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutomaticServerTimeout;                                  // 0x005C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncWithHoudiniCook;                                    // 0x0060(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookUsingHoudiniTime;                                   // 0x0061(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncViewport;                                           // 0x0062(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncHoudiniViewport;                                    // 0x0063(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncUnrealViewport;                                     // 0x0064(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowMultiAssetDialog;                                   // 0x0065(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferHdaMemoryCopyOverHdaSourceFile;                   // 0x0066(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseCookingOnStart;                                    // 0x0067(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplaySlateCookingNotifications;                       // 0x0068(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8I3O[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultTemporaryCookFolder;                              // 0x0070(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultBakeFolder;                                       // 0x0080(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTheReferenceCountedInputSystem;                   // 0x0090(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MarshallingLandscapesUseDefaultUnrealScaling;            // 0x0091(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MarshallingLandscapesUseFullResolution;                  // 0x0092(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MarshallingLandscapesForceMinMaxValues;                  // 0x0093(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarshallingLandscapesForcedMinValue;                     // 0x0094(0x0004) Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarshallingLandscapesForcedMaxValue;                     // 0x0098(0x0004) Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddRotAndScaleAttributesOnCurves;                       // 0x009C(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLegacyInputCurves;                                   // 0x009D(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USB4[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MarshallingSplineResolution;                             // 0x00A0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMesh;                                  // 0x00A4(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDefaultMesh;                                        // 0x00A5(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferNaniteFallbackMesh;                               // 0x00A6(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementByTimer;                 // 0x00A7(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProxyMeshAutoRefineTimeoutSeconds;                       // 0x00A8(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreSaveWorld;          // 0x00AC(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreBeginPIE;           // 0x00AD(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCXX[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDoubleSidedGeometry : 1;                                // 0x00B0(0x0001) BIT_FIELD Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TIK[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x00B8(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBodyInstance                                       DefaultBodyInstance;                                     // 0x00C0(0x0138) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        CollisionTraceFlag;                                      // 0x01F8(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWKN[0x3];                                   // 0x01F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightMapResolution;                                      // 0x01FC(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LpvBiasMultiplier;                                       // 0x0200(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeneratedDistanceFieldResolutionScale;                   // 0x0204(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWalkableSlopeOverride                              WalkableSlopeOverride;                                   // 0x0208(0x0010) Edit, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    LightMapCoordinateIndex;                                 // 0x0218(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaximumStreamingTexelRatio : 1;                      // 0x021C(0x0001) BIT_FIELD Edit, Config, GlobalConfig, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UQ0[0x3];                                   // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StreamingDistanceMultiplier;                             // 0x0220(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCEH[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType_InstancedStaticMesh*                    FoliageDefaultSettings;                                  // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x0230(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bUseFullPrecisionUVs;                                    // 0x0240(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WT8Z[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SrcLightmapIndex;                                        // 0x0244(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstLightmapIndex;                                        // 0x0248(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLightmapResolution;                                   // 0x024C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveDegenerates;                                      // 0x0250(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRuntimeSettingsRecomputeFlag                       GenerateLightmapUVsFlag;                                 // 0x0251(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRuntimeSettingsRecomputeFlag                       RecomputeNormalsFlag;                                    // 0x0252(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRuntimeSettingsRecomputeFlag                       RecomputeTangentsFlag;                                   // 0x0253(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMikkTSpace;                                          // 0x0254(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBuildAdjacencyBuffer;                                   // 0x0255(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeWeightedNormals : 1;                             // 0x0256(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBuildReversedIndexBuffer : 1;                           // 0x0256(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHighPrecisionTangentBasis : 1;                       // 0x0256(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPJW[0x1];                                   // 0x0257(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceFieldResolutionScale;                            // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateDistanceFieldAsIfTwoSided : 1;                  // 0x025C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportFaceRemap : 1;                                   // 0x025C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPDGAsyncCommandletImportEnabled;                        // 0x025D(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableBackwardCompatibility;                            // 0x025E(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticLegacyHDARebuild;                              // 0x025F(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomHoudiniLocation;                               // 0x0260(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU2E[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      CustomHoudiniLocation;                                   // 0x0268(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniExecutableType                                     HoudiniExecutable;                                       // 0x0278(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUKG[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      CustomHoudiniHomeLocation;                               // 0x0280(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CookingThreadStackSize;                                  // 0x0290(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPAF[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HoudiniEnvironmentFiles;                                 // 0x0298(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OtlSearchPath;                                           // 0x02A8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DsoSearchPath;                                           // 0x02B8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImageDsoSearchPath;                                      // 0x02C8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AudioDsoSearchPath;                                      // 0x02D8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniSplineComponent
	 * Size -> 0x0308 (FullSize[0x05D0] - InheritedSize[0x02C8])
	 */
	class UHoudiniSplineComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_DTNS[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		TArray<struct FTransform>                                  CurvePoints;                                             // 0x02D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector3d>                                   DisplayPoints;                                           // 0x02E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DisplayPointIndexDivider;                                // 0x02F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              HoudiniSplineName;                                       // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosed;                                                 // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReversed;                                               // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTCG[0x2];                                   // 0x0312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurveOrder;                                              // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHoudiniSplineVisible;                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveType                                          CurveType;                                               // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveMethod                                        CurveMethod;                                             // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveBreakpointParameterization                    CurveBreakpointParameterization;                         // 0x031B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOutputCurve;                                          // 0x031C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnCurveChanged;                                     // 0x031D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLegacyInputCurve;                                     // 0x031E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEK5[0x291];                                 // 0x031F(0x0291) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasChanged;                                             // 0x05B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x05B1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInputCurve;                                           // 0x05B2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEditableOutputCurve;                                  // 0x05B3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NodeID;                                                  // 0x05B4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PartName;                                                // 0x05B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0IQX[0x8];                                   // 0x05C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniStaticMesh
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHoudiniStaticMesh : public UObject
	{
	public:
		bool                                                       bHasNormals;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasTangents;                                            // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasColors;                                              // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PGT0[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NumUVLayers;                                             // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasPerFaceMaterials;                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9DYO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector3f>                                   VertexPositions;                                         // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FIntVector>                                  TriangleIndices;                                         // 0x0048(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FColor>                                      VertexInstanceColors;                                    // 0x0058(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector3f>                                   VertexInstanceNormals;                                   // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector3f>                                   VertexInstanceUTangents;                                 // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector3f>                                   VertexInstanceVTangents;                                 // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector2f>                                   VertexInstanceUVs;                                       // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<int32_t>                                            MaterialIDsPerTriangle;                                  // 0x00A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FStaticMaterial>                             StaticMaterials;                                         // 0x00B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetVertexPosition(uint32_t InVertexIndex, const struct FVector3f& InPosition);
		void SetTriangleVertexVTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InVTangent);
		void SetTriangleVertexUV(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, unsigned char InUVLayer, const struct FVector2f& InUV);
		void SetTriangleVertexUTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InUTangent);
		void SetTriangleVertexNormal(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector3f& InNormal);
		void SetTriangleVertexIndices(uint32_t InTriangleIndex, const struct FIntVector& InTriangleVertexIndices);
		void SetTriangleVertexColor(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FColor& InColor);
		void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID);
		void SetStaticMaterial(uint32_t InMaterialIndex, const struct FStaticMaterial& InStaticMaterial);
		void SetNumUVLayers(uint32_t InNumUVLayers);
		void SetNumStaticMaterials(uint32_t InNumStaticMaterials);
		void SetHasTangents(bool bInHasTangents);
		void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
		void SetHasNormals(bool bInHasNormals);
		void SetHasColors(bool bInHasColors);
		void Optimize();
		bool IsValid(bool bInSkipVertexIndicesCheck);
		void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
		bool HasTangents();
		bool HasPerFaceMaterials();
		bool HasNormals();
		bool HasColors();
		TArray<struct FVector3f> GetVertexPositions();
		TArray<struct FVector3f> GetVertexInstanceVTangents();
		TArray<struct FVector2f> GetVertexInstanceUVs();
		TArray<struct FVector3f> GetVertexInstanceUTangents();
		TArray<struct FVector3f> GetVertexInstanceNormals();
		TArray<struct FColor> GetVertexInstanceColors();
		TArray<struct FIntVector> GetTriangleIndices();
		TArray<struct FStaticMaterial> GetStaticMaterials();
		uint32_t GetNumVertices();
		uint32_t GetNumVertexInstances();
		uint32_t GetNumUVLayers();
		uint32_t GetNumTriangles();
		uint32_t GetNumStaticMaterials();
		int32_t GetMaterialIndex(const class FName& InMaterialSlotName);
		TArray<int32_t> GetMaterialIDsPerTriangle();
		class UMaterialInterface* GetMaterial(int32_t InMaterialIndex);
		void CalculateTangents(bool bInComputeWeightedNormals);
		void CalculateNormals(bool bInComputeWeightedNormals);
		struct FBox CalcBounds();
		uint32_t AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial);
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
	 * Size -> 0x0050 (FullSize[0x0710] - InheritedSize[0x06C0])
	 */
	class UHoudiniStaticMeshComponent : public UMeshComponent
	{
	public:
		class UHoudiniStaticMesh*                                  Mesh;                                                    // 0x06C0(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                LocalBounds;                                             // 0x06C8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bHoudiniIconVisible;                                     // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W2HB[0xF];                                   // 0x0701(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetMesh(class UHoudiniStaticMesh* InMesh);
		void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
		void NotifyMeshUpdated();
		bool IsHoudiniIconVisible();
		class UHoudiniStaticMesh* GetMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetStateEvents
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetStateEvents : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
