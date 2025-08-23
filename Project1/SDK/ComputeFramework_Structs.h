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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ComputeFramework.EComputeKernelFlags
	 */
	enum class EComputeKernelFlags : uint8_t
	{
		IsDefaultKernel      = 0,
		IsolatedMemoryWrites = 1,
		MAX                  = 2
	};

	/**
	 * Enum ComputeFramework.EShaderFundamentalType
	 */
	enum class EShaderFundamentalType : uint8_t
	{
		Bool   = 0,
		Int    = 1,
		Uint   = 2,
		Float  = 3,
		Struct = 4,
		None   = 5,
		MAX    = 6
	};

	/**
	 * Enum ComputeFramework.EShaderFundamentalDimensionType
	 */
	enum class EShaderFundamentalDimensionType : uint8_t
	{
		Scalar = 0,
		Vector = 1,
		Matrix = 2,
		MAX    = 3
	};

	/**
	 * Enum ComputeFramework.EShaderParamBindingType
	 */
	enum class EShaderParamBindingType : uint8_t
	{
		None              = 0,
		ConstantParameter = 1,
		ReadOnlyResource  = 2,
		ReadWriteResource = 3,
		MAX               = 4
	};

	/**
	 * Enum ComputeFramework.EShaderResourceType
	 */
	enum class EShaderResourceType : uint8_t
	{
		None              = 0,
		Texture1D         = 1,
		Texture2D         = 2,
		Texture3D         = 3,
		TextureCube       = 4,
		Buffer            = 5,
		StructuredBuffer  = 6,
		ByteAddressBuffer = 7,
		MAX               = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ComputeFramework.ComputeKernelPermutationBool
	 * Size -> 0x0018
	 */
	struct FComputeKernelPermutationBool
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YG59[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ComputeFramework.ComputeKernelPermutationSet
	 * Size -> 0x0010
	 */
	struct FComputeKernelPermutationSet
	{
	public:
		TArray<struct FComputeKernelPermutationBool>               BooleanOptions;                                          // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ComputeFramework.ComputeKernelDefinition
	 * Size -> 0x0020
	 */
	struct FComputeKernelDefinition
	{
	public:
		class FString                                              Symbol;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Define;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ComputeFramework.ComputeKernelDefinitionSet
	 * Size -> 0x0010
	 */
	struct FComputeKernelDefinitionSet
	{
	public:
		TArray<struct FComputeKernelDefinition>                    Defines;                                                 // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ComputeFramework.ShaderValueTypeHandle
	 * Size -> 0x0008
	 */
	struct FShaderValueTypeHandle
	{
	public:
		unsigned char                                              UnknownData_C2AO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ComputeFramework.ShaderParamTypeDefinition
	 * Size -> 0x0030
	 */
	struct FShaderParamTypeDefinition
	{
	public:
		class FString                                              TypeDeclaration;                                         // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShaderValueTypeHandle                              ValueType;                                               // 0x0020(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ArrayElementCount;                                       // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShaderParamBindingType                                    BindingType;                                             // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShaderResourceType                                        ResourceType;                                            // 0x002B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADHD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ComputeFramework.ShaderFunctionDefinition
	 * Size -> 0x0028
	 */
	struct FShaderFunctionDefinition
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FShaderParamTypeDefinition>                  ParamTypes;                                              // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bHasReturnType;                                          // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HA6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ComputeFramework.ComputeGraphEdge
	 * Size -> 0x0038
	 */
	struct FComputeGraphEdge
	{
	public:
		int32_t                                                    KernelIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KernelBindingIndex;                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataInterfaceIndex;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataInterfaceBindingIndex;                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKernelInput;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41UL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BindingFunctionNameOverride;                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BindingFunctionNamespace;                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ComputeFramework.ComputeGraphInstance
	 * Size -> 0x0018
	 */
	struct FComputeGraphInstance
	{
	public:
		TArray<class UComputeDataProvider*>                        DataProviders;                                           // 0x0000(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0S7P[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ComputeFramework.ComputeKernelPermutationVector
	 * Size -> 0x0058
	 */
	struct FComputeKernelPermutationVector
	{
	public:
		TMap<class FString, uint32_t>                              Permutations;                                            // 0x0000(0x0050) NativeAccessSpecifierPublic
		uint32_t                                                   BitCount;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V55G[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ComputeFramework.ShaderValueType
	 * Size -> 0x0020
	 */
	struct FShaderValueType
	{
	public:
		EShaderFundamentalType                                     Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShaderFundamentalDimensionType                            DimensionType;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GCP[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDynamicArray;                                         // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAIL[0x13];                                  // 0x000D(0x0013) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
