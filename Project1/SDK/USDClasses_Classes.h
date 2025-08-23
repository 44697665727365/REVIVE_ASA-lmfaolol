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
	 * Class USDClasses.UsdAssetCache
	 * Size -> 0x01C0 (FullSize[0x01E8] - InheritedSize[0x0028])
	 */
	class UUsdAssetCache : public UObject
	{
	public:
		TMap<class FString, class UObject*>                        TransientStorage;                                        // 0x0028(0x0050) Edit, Transient, EditConst, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<class FString, class UObject*>                        PersistentStorage;                                       // 0x0078(0x0050) Edit, EditConst, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate
		bool                                                       bAllowPersistentStorage;                                 // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B7FE[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OwnedAssets[0x50];                                       // 0x00D0(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class FString, TWeakObjectPtr<class UObject>>         PrimPathToAssets;                                        // 0x0120(0x0050) NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M539[0x78];                                  // 0x0170(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class USDClasses.UsdAssetCache2
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UUsdAssetCache2 : public UObject
	{
	public:
		double                                                     UnreferencedAssetStorageSizeMB;                          // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     PersistentAssetStorageSizeMB;                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UObject*>                        AssetStorage;                                            // 0x0038(0x0050) Edit, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EA0P[0x118];                                 // 0x0088(0x0118) MISSED OFFSET (PADDING)

	public:
		void Reset();
		bool RemoveAssetReference(class UObject* Asset, class UObject* Referencer);
		class UObject* RemoveAsset(const class FString& Hash);
		bool RemoveAllAssetReferences(class UObject* Referencer);
		void RefreshStorage();
		bool IsAssetOwnedByCache(const class FString& AssetPath);
		int32_t GetNumAssets();
		class FString GetHashForAsset(class UObject* Asset);
		class UObject* GetCachedAsset(const class FString& Hash);
		TArray<class UObject*> GetAllLoadedAssets();
		TArray<class FString> GetAllCachedAssetPaths();
		TArray<class FString> GetAllAssetHashes();
		bool CanRemoveAsset(const class FString& Hash);
		void CacheAsset(const class FString& Hash, class UObject* Asset, class UObject* Referencer);
		bool AddAssetReference(class UObject* Asset, class UObject* Referencer);
		static UClass* StaticClass();
	};

	/**
	 * Class USDClasses.UsdAssetImportData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UUsdAssetImportData : public UAssetImportData
	{
	public:
		class FString                                              PrimPath;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ImportOptions;                                           // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class USDClasses.UsdAnimSequenceAssetImportData
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UUsdAnimSequenceAssetImportData : public UUsdAssetImportData
	{
	public:
		float                                                      LayerStartOffsetSeconds;                                 // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSQJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class USDClasses.UsdMeshAssetImportData
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UUsdMeshAssetImportData : public UUsdAssetImportData
	{
	public:
		TMap<int32_t, struct FUsdPrimPathList>                     MaterialSlotToPrimPaths;                                 // 0x0040(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class USDClasses.UsdProjectSettings
	 * Size -> 0x01C8 (FullSize[0x0200] - InheritedSize[0x0038])
	 */
	class UUsdProjectSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FDirectoryPath>                              AdditionalPluginDirectories;                             // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FName>                                        AdditionalMaterialPurposes;                              // 0x0048(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     DefaultAssetCache;                                       // 0x0058(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCreateDefaultAssetCacheDialog;                      // 0x0078(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowConfirmationWhenClearingLayers;                     // 0x0079(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowConfirmationWhenMutingDirtyLayers;                  // 0x007A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowOverriddenOpinionsWarning;                          // 0x007B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWarningOnIncompleteDuplication;                     // 0x007C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTransformTrackOnCameraComponentWarning;             // 0x007D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsdSaveDialogBehavior                                     ShowSaveLayersDialogWhenSaving;                          // 0x007E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsdSaveDialogBehavior                                     ShowSaveLayersDialogWhenClosing;                         // 0x007F(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceMaterial;                         // 0x0080(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceTranslucentMaterial;              // 0x00A0(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceTwoSidedMaterial;                 // 0x00C0(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceTranslucentTwoSidedMaterial;      // 0x00E0(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceVTMaterial;                       // 0x0100(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceTranslucentVTMaterial;            // 0x0120(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceTwoSidedVTMaterial;               // 0x0140(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferencePreviewSurfaceTranslucentTwoSidedVTMaterial;    // 0x0160(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferenceDisplayColorMaterial;                           // 0x0180(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferenceDisplayColorAndOpacityMaterial;                 // 0x01A0(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferenceDisplayColorTwoSidedMaterial;                   // 0x01C0(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     ReferenceDisplayColorAndOpacityTwoSidedMaterial;         // 0x01E0(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class USDClasses.UsdReferenceOptions
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UUsdReferenceOptions : public UObject
	{
	public:
		bool                                                       bInternalReference;                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KE7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           TargetFile;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDefaultPrim;                                         // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMTD[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetPrimPath;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeCodeOffset;                                          // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeCodeScale;                                           // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
