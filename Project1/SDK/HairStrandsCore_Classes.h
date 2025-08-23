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
	 * Class HairStrandsCore.OptimusGroomDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.OptimusGroomDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusGroomDataProvider : public UComputeDataProvider
	{
	public:
		class UGroomComponent*                                     Groom;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.OptimusGroomExecDataInterface
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
	{
	public:
		EOptimusGroomExecDomain                                    Domain;                                                  // 0x0028(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYGR[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.OptimusGroomExecDataProvider
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusGroomExecDataProvider : public UComputeDataProvider
	{
	public:
		class UGroomComponent*                                     GroomComponent;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptimusGroomExecDomain                                    Domain;                                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEB0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.OptimusGroomWriteDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.OptimusGroomWriteDataProvider
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusGroomWriteDataProvider : public UComputeDataProvider
	{
	public:
		class UGroomComponent*                                     GroomComponent;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9F94[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.OptimusGroomComponentSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusGroomComponentSource : public UOptimusComponentSource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCacheImportOptions
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGroomCacheImportOptions : public UObject
	{
	public:
		struct FGroomCacheImportSettings                           ImportSettings;                                          // 0x0028(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCacheImportData
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGroomCacheImportData : public UAssetImportData
	{
	public:
		struct FGroomCacheImportSettings                           Settings;                                                // 0x0028(0x0068) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomActor
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class AGroomActor : public AActor
	{
	public:
		class UGroomComponent*                                     GroomComponent;                                          // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomAsset
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UGroomAsset : public UObject
	{
	public:
		unsigned char                                              UnknownData_TKTO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHairGroupInfoWithVisibility>                HairGroupsInfo;                                          // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsRendering>                        HairGroupsRendering;                                     // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsPhysics>                          HairGroupsPhysics;                                       // 0x0050(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsInterpolation>                    HairGroupsInterpolation;                                 // 0x0060(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsLOD>                              HairGroupsLOD;                                           // 0x0070(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsCardsSourceDescription>           HairGroupsCards;                                         // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsMeshesSourceDescription>          HairGroupsMeshes;                                        // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsMaterial>                         HairGroupsMaterials;                                     // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6IK[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableGlobalInterpolation;                               // 0x00C0(0x0001) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomInterpolationType                                    HairInterpolationType;                                   // 0x00C1(0x0001) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQEH[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       RiggedSkeletalMesh;                                      // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DeformedGroupSections;                                   // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     MinLOD;                                                  // 0x00E0(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPerPlatformBool                                    DisableBelowMinLodStripping;                             // 0x00E4(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WKJ[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              EffectiveLODBias;                                        // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x00F8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGXN[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.HairCardGenerationSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHairCardGenerationSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomAssetImportData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGroomAssetImportData : public UAssetImportData
	{
	public:
		class UGroomImportOptions*                                 ImportOptions;                                           // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomBindingAsset
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGroomBindingAsset : public UObject
	{
	public:
		EGroomBindingMeshType                                      GroomBindingType;                                        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7H4M[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGroomAsset*                                         Groom;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TargetSkeletalMesh;                                      // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGeometryCache*                                      SourceGeometryCache;                                     // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGeometryCache*                                      TargetGeometryCache;                                     // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInterpolationPoints;                                  // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchingSection;                                         // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGoomBindingGroupInfo>                       GroupInfos;                                              // 0x0060(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37Y8[0x40];                                  // 0x0070(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomBindingAssetList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGroomBindingAssetList : public UObject
	{
	public:
		TArray<class UGroomBindingAsset*>                          Bindings;                                                // 0x0028(0x0010) Edit, EditFixedSize, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UGroomBindingAsset* STATIC_CreateNewGroomBindingAssetWithPath(const class FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
		class UGroomBindingAsset* STATIC_CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection);
		class UGroomBindingAsset* STATIC_CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection);
		class UGroomBindingAsset* STATIC_CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection);
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCache
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UGroomCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_QMDK[0x14];                                  // 0x0028(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGroomCacheInfo                                     GroomCacheInfo;                                          // 0x003C(0x0028) Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U2UR[0x14];                                  // 0x0064(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomComponent
	 * Size -> 0x0260 (FullSize[0x0920] - InheritedSize[0x06C0])
	 */
	class UGroomComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_ZS81[0x10];                                  // 0x06C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGroomAsset*                                         GroomAsset;                                              // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGroomCache*                                         GroomCache;                                              // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraComponent*>                           NiagaraComponents;                                       // 0x06E0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x06F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGroomBindingAsset*                                  BindingAsset;                                            // 0x06F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_346E[0x10];                                  // 0x0708(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHairSimulationSettings                             SimulationSettings;                                      // 0x0718(0x0090) Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic
		class UMeshDeformer*                                       MeshDeformer;                                            // 0x07A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshDeformerInstance*                               MeshDeformerInstance;                                    // 0x07B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshDeformerInstanceSettings*                       MeshDeformerInstanceSettings;                            // 0x07B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Strands_DebugMaterial;                                   // 0x07C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Strands_DefaultMaterial;                                 // 0x07C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Cards_DefaultMaterial;                                   // 0x07D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Meshes_DefaultMaterial;                                  // 0x07D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      AngularSpringsSystem;                                    // 0x07E0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      CosseratRodsSystem;                                      // 0x07E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttachmentName;                                          // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Interp, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35IQ[0x90];                                  // 0x0800(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHairGroupDesc>                              GroomGroupsDesc;                                         // 0x0890(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseCards;                                               // 0x08A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x08A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLooping;                                                // 0x08A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bManualTick;                                             // 0x08A3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ElapsedTime;                                             // 0x08A4(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WSIW[0x78];                                  // 0x08A8(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);
		void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);
		void SetHairLengthScaleEnable(bool bEnable);
		void SetHairLengthScale(float Scale);
		void SetGroomAsset(class UGroomAsset* Asset);
		void SetEnableSimulation(bool bInEnableSimulation);
		void SetBindingAsset(class UGroomBindingAsset* InBinding);
		void ResetSimulation();
		void ResetCollisionComponents();
		class UNiagaraComponent* GetNiagaraComponent(int32_t GroupIndex);
		bool GetIsHairLengthScaleEnabled();
		void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCreateBindingOptions
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGroomCreateBindingOptions : public UObject
	{
	public:
		EGroomBindingMeshType                                      GroomBindingType;                                        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CQG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TargetSkeletalMesh;                                      // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGeometryCache*                                      SourceGeometryCache;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGeometryCache*                                      TargetGeometryCache;                                     // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInterpolationPoints;                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MatchingSection;                                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCreateFollicleMaskOptions
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGroomCreateFollicleMaskOptions : public UObject
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RootRadius;                                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFollicleMaskOptions>                        Grooms;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomCreateStrandsTexturesOptions
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGroomCreateStrandsTexturesOptions : public UObject
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStrandsTexturesTraceType                                  TraceType;                                               // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BID[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceDistance;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStrandsTexturesMeshType                                   MeshType;                                                // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8M9[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODIndex;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionIndex;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UVChannelIndex;                                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3P1[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            GroupIndex;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomImportOptions
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGroomImportOptions : public UObject
	{
	public:
		struct FGroomConversionSettings                            ConversionSettings;                                      // 0x0028(0x0030) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FHairGroupsInterpolation>                    InterpolationSettings;                                   // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomHairGroupsPreview
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGroomHairGroupsPreview : public UObject
	{
	public:
		TArray<struct FGroomHairGroupPreview>                      Groups;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.GroomPluginSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGroomPluginSettings : public UObject
	{
	public:
		float                                                      GroomCacheLookAheadBuffer;                               // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PL3F[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.MovieSceneGroomCacheSection
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UMovieSceneGroomCacheSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneGroomCacheParams                         Params;                                                  // 0x00F0(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.MovieSceneGroomCacheTrack
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_OUZE[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          AnimationSections;                                       // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfaceHairStrands
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_F026[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGroomAsset*                                         DefaultSource;                                           // 0x0040(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SourceActor;                                             // 0x0048(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8I3[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          GridSize;                                                // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LDA[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HairStrandsCore.NiagaraDataInterfacePressureGrid
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
