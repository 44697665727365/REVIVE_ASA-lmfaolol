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
	 * Class OptimusCore.OptimusComputeDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusComputeDataInterface : public UComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusComponentSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusComponentSource : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusComponentBindingProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusComponentBindingProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusComputeKernelProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusComputeKernelProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDataInterfaceProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusDataInterfaceProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusExecutionDomainProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusExecutionDomainProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusGeneratedClassDefiner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusGeneratedClassDefiner : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodeAdderPinProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusNodeAdderPinProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodeFunctionLibraryOwner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusNodeFunctionLibraryOwner : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodeGraphCollectionOwner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusNodeGraphCollectionOwner : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodePinRouter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusNodePinRouter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusParameterBindingProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusParameterBindingProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusPathResolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusPathResolver : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusShaderTextProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusShaderTextProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusValueProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusValueProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusKernelSource
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UOptimusKernelSource : public UComputeKernelSource
	{
	public:
		class FString                                              Source;                                                  // 0x0098(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSceneComponentSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSceneComponentSource : public UOptimusComponentSource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshComponentSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkeletalMeshComponentSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusAnimAttributeDataInterface
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
	{
	public:
		struct FOptimusAnimAttributeArray                          AttributeArray;                                          // 0x0028(0x0010) Edit, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusAnimAttributeDataProvider
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KW6O[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusClothDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusClothDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusClothDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusClothDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusConnectivityDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusConnectivityDataProvider
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UOptimusConnectivityDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB5S[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDebugDrawDataInterface
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
	{
	public:
		struct FOptimusDebugDrawParameters                         DebugDrawParameters;                                     // 0x0028(0x0014) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDAJ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDebugDrawDataProvider
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UOptimusDebugDrawDataProvider : public UComputeDataProvider
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDebugDrawParameters                         DebugDrawParameters;                                     // 0x0030(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGD9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDuplicateVerticesDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDuplicateVerticesDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusGraphDataInterface
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UOptimusGraphDataInterface : public UComputeDataInterface
	{
	public:
		TArray<struct FOptimusGraphVariableDescription>            Variables;                                               // 0x0028(0x0010) BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    ParameterBufferSize;                                     // 0x0038(0x0004) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MBWI[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusGraphDataProvider
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOptimusGraphDataProvider : public UComputeDataProvider
	{
	public:
		class UMeshComponent*                                      MeshComponent;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOptimusDeformerInstance*                            DeformerInstance;                                        // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOptimusGraphVariableDescription>            Variables;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EV46[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusHalfEdgeDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusHalfEdgeDataProvider
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UXS[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusMorphTargetDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusMorphTargetDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusMorphTargetDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusRawBufferDataInterface
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
	{
	public:
		struct FShaderValueTypeHandle                              ValueType;                                               // 0x0028(0x0008) BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataDomain                                  DataDomain;                                              // 0x0030(0x0040) BlueprintReadOnly, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOptimusComponentSourceBinding>       ComponentSourceBinding;                                  // 0x0070(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusTransientBufferDataInterface
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusPersistentBufferDataInterface
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
	{
	public:
		class FName                                                ResourceName;                                            // 0x0078(0x0008) BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusRawBufferDataProvider
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UOptimusRawBufferDataProvider : public UComputeDataProvider
	{
	public:
		TWeakObjectPtr<class UActorComponent>                      Component;                                               // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOptimusComponentSource>              ComponentSource;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataDomain                                  DataDomain;                                              // 0x0038(0x0040) NativeAccessSpecifierPublic
		int32_t                                                    ElementStride;                                           // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RawStride;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusTransientBufferDataProvider
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusPersistentBufferDataProvider
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
	{
	public:
		unsigned char                                              UnknownData_S1CT[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSceneDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSceneDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusSceneDataProvider : public UComputeDataProvider
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkeletonDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkeletonDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusSkeletonDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshDataProvider
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshExecDataInterface
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
	{
	public:
		EOptimusSkinnedMeshExecDomain                              Domain;                                                  // 0x0028(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAOG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshExecDataProvider
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptimusSkinnedMeshExecDomain                              Domain;                                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FT3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshWriteDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSkinnedMeshWriteDataProvider
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
	{
	public:
		class USkinnedMeshComponent*                               SkinnedMesh;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8HT[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UOptimusNode : public UObject
	{
	public:
		unsigned char                                              UnknownData_VK95[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x0030(0x0018) NonTransactional, NativeAccessSpecifierPrivate
		struct FVector2D                                           GraphPosition;                                           // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UOptimusNodePin*>                             Pins;                                                    // 0x0058(0x0010) ZeroConstructor, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              ExpandedPins[0x50];                                      // 0x0068(0x0050) UNKNOWN PROPERTY: SetProperty
		EOptimusDiagnosticLevel                                    DiagnosticLevel;                                         // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KR8L[0x57];                                  // 0x00B9(0x0057) MISSED OFFSET (PADDING)

	public:
		bool SetGraphPosition(const struct FVector2D& InPosition);
		class FName GetNodeName();
		class FName GetNodeCategory();
		struct FVector2D GetGraphPosition();
		class FText GetDisplayName();
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_DataInterface
	 * Size -> 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
	 */
	class UOptimusNode_DataInterface : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_Z5MC[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DataInterfaceClass;                                      // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOptimusComputeDataInterface*                        DataInterfaceData;                                       // 0x0120(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_AnimAttributeDataInterface
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ComponentSource
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UOptimusNode_ComponentSource : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_OHA0[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOptimusComponentSourceBinding*                      Binding;                                                 // 0x0118(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ComputeKernelBase
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UOptimusNode_ComputeKernelBase : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_8N4B[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
	{
	public:
		class FName                                                Category;                                                // 0x0220(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                KernelName;                                              // 0x0228(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusExecutionDomain                             ExecutionDomain;                                         // 0x0230(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FIntVector                                          GroupSize;                                               // 0x0238(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KCB[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOptimusParameterBinding>                    InputBindings;                                           // 0x0248(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FOptimusParameterBinding>                    OutputBindings;                                          // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ShaderSource;                                            // 0x0268(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96Z4[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ComputeKernelFunction
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ConstantValueGeneratorClass
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UOptimusNode_ConstantValueGeneratorClass : public UClass
	{
	public:
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0220(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ConstantValue
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UOptimusNode_ConstantValue : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_DZYO[0x10];                                  // 0x0110(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_CustomComputeKernel
	 * Size -> 0x00D8 (FullSize[0x01F0] - InheritedSize[0x0118])
	 */
	class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
	{
	public:
		unsigned char                                              UnknownData_URXD[0x20];                                  // 0x0118(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Category;                                                // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusValidatedName                               KernelName;                                              // 0x0140(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FOptimusExecutionDomain                             ExecutionDomain;                                         // 0x0148(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FIntVector                                          GroupSize;                                               // 0x0150(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IMG[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOptimus_ShaderBinding>                      Parameters;                                              // 0x0160(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FOptimusParameterBinding>                    InputBindings;                                           // 0x0170(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<struct FOptimusParameterBinding>                    OutputBindings;                                          // 0x0180(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		struct FOptimusParameterBindingArray                       InputBindingArray;                                       // 0x0190(0x0010) Edit, NativeAccessSpecifierPublic
		struct FOptimusParameterBindingArray                       OutputBindingArray;                                      // 0x01A0(0x0010) Edit, NativeAccessSpecifierPublic
		TArray<struct FOptimusSecondaryInputBindingsGroup>         SecondaryInputBindingGroups;                             // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UComputeSource*>                              AdditionalSources;                                       // 0x01C0(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		struct FOptimusShaderText                                  ShaderSource;                                            // 0x01D0(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_FunctionReference
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UOptimusNode_FunctionReference : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_OQCA[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOptimusFunctionNodeGraph*                           FunctionGraph;                                           // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_ResourceAccessorBase
	 * Size -> 0x0078 (FullSize[0x0188] - InheritedSize[0x0110])
	 */
	class UOptimusNode_ResourceAccessorBase : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_ATHD[0x10];                                  // 0x0110(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UOptimusResourceDescription>          ResourceDesc;                                            // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EOptimusBufferWriteType                                    WriteType;                                               // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XV65[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOptimusNode_ResourceAccessorBase_DuplicationInfo   DuplicationInfo;                                         // 0x0130(0x0058) DuplicateTransient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_GetResource
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_GetVariable
	 * Size -> 0x0038 (FullSize[0x0148] - InheritedSize[0x0110])
	 */
	class UOptimusNode_GetVariable : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_521F[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UOptimusVariableDescription>          VariableDesc;                                            // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FOptimusNode_GetVariable_DuplicationInfo            DuplicationInfo;                                         // 0x0120(0x0028) DuplicateTransient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_GraphTerminal
	 * Size -> 0x0018 (FullSize[0x0128] - InheritedSize[0x0110])
	 */
	class UOptimusNode_GraphTerminal : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_9G6G[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOptimusTerminalType                                       TerminalType;                                            // 0x0118(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q9GY[0x3];                                   // 0x0119(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TWeakObjectPtr<class UOptimusNodeSubGraph>                 OwningGraph;                                             // 0x011C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FI0Y[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_Resource
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_SetResource
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNode_SubGraphReference
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UOptimusNode_SubGraphReference : public UOptimusNode
	{
	public:
		unsigned char                                              UnknownData_ZNDF[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOptimusNodeSubGraph*                                SubGraph;                                                // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusActionStack
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UOptimusActionStack : public UObject
	{
	public:
		int32_t                                                    TransactedActionIndex;                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E390[0xB4];                                  // 0x002C(0x00B4) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusComponentSourceBinding
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UOptimusComponentSourceBinding : public UObject
	{
	public:
		class FName                                                BindingName;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ComponentType;                                           // 0x0030(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ComponentTags;                                           // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsPrimaryBinding;                                       // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZSBR[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusComputeGraph
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UOptimusComputeGraph : public UComputeGraph
	{
	public:
		TArray<TWeakObjectPtr<class UOptimusNode>>                 KernelToNode;                                            // 0x0090(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusComponentSourceBindingContainer
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusComponentSourceBindingContainer : public UObject
	{
	public:
		TArray<class UOptimusComponentSourceBinding*>              Bindings;                                                // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusVariableContainer
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusVariableContainer : public UObject
	{
	public:
		TArray<class UOptimusVariableDescription*>                 Descriptions;                                            // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusResourceContainer
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusResourceContainer : public UObject
	{
	public:
		TArray<class UOptimusResourceDescription*>                 Descriptions;                                            // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDeformer
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UOptimusDeformer : public UMeshDeformer
	{
	public:
		unsigned char                                              UnknownData_MNP4[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       Mesh;                                                    // 0x0048(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FOptimusComputeGraphInfo>                    ComputeGraphs;                                           // 0x0050(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UOptimusActionStack*                                 ActionStack;                                             // 0x0060(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UOptimusNodeGraph*>                           Graphs;                                                  // 0x0068(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		class UOptimusComponentSourceBindingContainer*             Bindings;                                                // 0x0078(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOptimusVariableContainer*                           Variables;                                               // 0x0080(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOptimusResourceContainer*                           Resources;                                               // 0x0088(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6M2F[0x90];                                  // 0x0090(0x0090) MISSED OFFSET (PADDING)

	public:
		TArray<class UOptimusVariableDescription*> GetVariables();
		TArray<class UOptimusResourceDescription*> GetResources();
		TArray<class UOptimusComponentSourceBinding*> GetComponentBindings();
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDeformerInstanceSettings
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
	{
	public:
		TWeakObjectPtr<class UOptimusDeformer>                     Deformer;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FOptimusDeformerInstanceComponentBinding>    Bindings;                                                // 0x0030(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusDeformerInstance
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UOptimusDeformerInstance : public UMeshDeformerInstance
	{
	public:
		TWeakObjectPtr<class UMeshComponent>                       MeshComponent;                                           // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UOptimusDeformerInstanceSettings>     InstanceSettings;                                        // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FOptimusDeformerInstanceExecInfo>            ComputeGraphExecInfos;                                   // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UOptimusVariableContainer*                           Variables;                                               // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_28QI[0x90];                                  // 0x0050(0x0090) MISSED OFFSET (PADDING)

	public:
		bool SetVectorVariable(const class FName& InVariableName, const struct FVector& InValue);
		bool SetVector4Variable(const class FName& InVariableName, const struct FVector4& InValue);
		bool SetTransformVariable(const class FName& InVariableName, const struct FTransform& InValue);
		bool SetIntVariable(const class FName& InVariableName, int32_t InValue);
		bool SetFloatVariable(const class FName& InVariableName, double InValue);
		bool SetBoolVariable(const class FName& InVariableName, bool InValue);
		TArray<class UOptimusVariableDescription*> GetVariables();
		bool EnqueueTriggerGraph(const class FName& InTriggerGraphName);
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodeGraph
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UOptimusNodeGraph : public UObject
	{
	public:
		unsigned char                                              UnknownData_5X2S[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOptimusNodeGraphType                                      GraphType;                                               // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_20SH[0x3];                                   // 0x0031(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_LFGR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UOptimusNode*>                                Nodes;                                                   // 0x0038(0x0010) ZeroConstructor, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UOptimusNodeLink*>                            links;                                                   // 0x0048(0x0010) ZeroConstructor, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UOptimusNodeGraph*>                           Subgraphs;                                               // 0x0058(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HIQ9[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)

	public:
		bool RenameGraph(class UOptimusNodeGraph* InGraph, const class FString& InNewName);
		bool RemoveNodes(TArray<class UOptimusNode*> InNodes);
		bool RemoveNode(class UOptimusNode* InNode);
		bool RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
		bool RemoveAllLinks(class UOptimusNodePin* InNodePin);
		bool MoveGraph(class UOptimusNodeGraph* InGraph, int32_t InInsertBefore);
		bool IsSubGraphReference(class UOptimusNode* InNode);
		bool IsKernelFunction(class UOptimusNode* InNode);
		bool IsFunctionReference(class UOptimusNode* InNode);
		bool IsFunctionGraph();
		bool IsExecutionGraph();
		bool IsCustomKernel(class UOptimusNode* InNode);
		EOptimusNodeGraphType GetGraphType();
		TArray<class UOptimusNodeGraph*> GetGraphs();
		int32_t GetGraphIndex();
		TArray<class UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode* InFunctionNode);
		bool DuplicateNodes(TArray<class UOptimusNode*> InNodes, const struct FVector2D& InPosition);
		class UOptimusNode* DuplicateNode(class UOptimusNode* InNode, const struct FVector2D& InPosition);
		class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction);
		class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel);
		class UOptimusNode* CollapseNodesToSubGraph(TArray<class UOptimusNode*> InNodes);
		class UOptimusNode* CollapseNodesToFunction(TArray<class UOptimusNode*> InNodes);
		class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, const struct FVector2D& InPosition);
		class UOptimusNode* AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef, const struct FVector2D& InPosition);
		class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition);
		class UOptimusNode* AddResourceNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition);
		class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition);
		class UOptimusNode* AddNode(class UClass* InNodeClass, const struct FVector2D& InPosition);
		bool AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
		class UOptimusNode* AddDataInterfaceNode(class UClass* InDataInterfaceClass, const struct FVector2D& InPosition);
		class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, const struct FVector2D& InPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodeSubGraph
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UOptimusNodeSubGraph : public UOptimusNodeGraph
	{
	public:
		TArray<struct FOptimusParameterBinding>                    InputBindings;                                           // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FOptimusParameterBinding>                    OutputBindings;                                          // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOptimusNode_GraphTerminal>           EntryNode;                                               // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOptimusNode_GraphTerminal>           ReturnNode;                                              // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusFunctionNodeGraph
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
	{
	public:
		class FName                                                Category;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodeLink
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOptimusNodeLink : public UObject
	{
	public:
		class UOptimusNodePin*                                     NodeOutputPin;                                           // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOptimusNodePin*                                     NodeInputPin;                                            // 0x0030(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusNodePin
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOptimusNodePin : public UObject
	{
	public:
		bool                                                       bIsGroupingPin;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOptimusNodePinDirection                                   Direction;                                               // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOptimusNodePinStorageType                                 StorageType;                                             // 0x002A(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XYHE[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOptimusDataDomain                                  DataDomain;                                              // 0x0030(0x0040) NativeAccessSpecifierPrivate
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0070(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		TArray<class UOptimusNodePin*>                             SubPins;                                                 // 0x0080(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusResourceDescription
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOptimusResourceDescription : public UObject
	{
	public:
		class FName                                                ResourceName;                                            // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UOptimusComponentSourceBinding>       ComponentBinding;                                        // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataDomain                                  DataDomain;                                              // 0x0048(0x0040) Edit, NativeAccessSpecifierPublic
		class UOptimusPersistentBufferDataInterface*               DataInterface;                                           // 0x0088(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusSource
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOptimusSource : public UComputeSource
	{
	public:
		unsigned char                                              UnknownData_FSMV[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceText;                                              // 0x0040(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusValueContainerGeneratorClass
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class UOptimusValueContainerGeneratorClass : public UClass
	{
	public:
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0220(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusValueContainer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOptimusValueContainer : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OptimusCore.OptimusVariableDescription
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UOptimusVariableDescription : public UObject
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VariableName;                                            // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0040(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UOptimusValueContainer*                              DefaultValue;                                            // 0x0050(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ValueData;                                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
