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
	 * Class ComputeFramework.ComputeDataInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComputeDataInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComputeDataProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeKernelSource
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UComputeKernelSource : public UObject
	{
	public:
		class FString                                              EntryPoint;                                              // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          GroupSize;                                               // 0x0038(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFHM[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComputeKernelPermutationSet                        PermutationSet;                                          // 0x0048(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		struct FComputeKernelDefinitionSet                         DefinitionsSet;                                          // 0x0058(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		TArray<class UComputeSource*>                              AdditionalSources;                                       // 0x0068(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FShaderFunctionDefinition>                   ExternalInputs;                                          // 0x0078(0x0010) Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FShaderFunctionDefinition>                   ExternalOutputs;                                         // 0x0088(0x0010) Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeSource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UComputeSource : public UObject
	{
	public:
		TArray<class UComputeSource*>                              AdditionalSources;                                       // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeGraph
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UComputeGraph : public UObject
	{
	public:
		TArray<class UComputeKernel*>                              KernelInvocations;                                       // 0x0028(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UComputeDataInterface*>                       DataInterfaces;                                          // 0x0038(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<struct FComputeGraphEdge>                           GraphEdges;                                              // 0x0048(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      Bindings;                                                // 0x0058(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<int32_t>                                            DataInterfaceToBinding;                                  // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QFSK[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeGraphComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UComputeGraphComponent : public UActorComponent
	{
	public:
		class UComputeGraph*                                       ComputeGraph;                                            // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FComputeGraphInstance                               ComputeGraphInstance;                                    // 0x00C0(0x0018) NativeAccessSpecifierPrivate

	public:
		void QueueExecute();
		void DestroyDataProviders();
		void CreateDataProviders(int32_t InBindingIndex, class UObject* InBindingObject);
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeKernel
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UComputeKernel : public UObject
	{
	public:
		class UComputeKernelSource*                                KernelSource;                                            // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KernelFlags;                                             // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5ST[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeKernelFromText
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UComputeKernelFromText : public UComputeKernelSource
	{
	public:
		struct FFilePath                                           SourceFile;                                              // 0x0098(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ComputeFramework.ComputeSourceFromText
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UComputeSourceFromText : public UComputeSource
	{
	public:
		struct FFilePath                                           SourceFile;                                              // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
