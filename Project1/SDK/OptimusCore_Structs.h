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
	 * Enum OptimusCore.EOptimusDiagnosticLevel
	 */
	enum class EOptimusDiagnosticLevel : uint8_t
	{
		None    = 0,
		Info    = 1,
		Warning = 2,
		Error   = 3,
		MAX     = 4
	};

	/**
	 * Enum OptimusCore.EOptimusBufferWriteType
	 */
	enum class EOptimusBufferWriteType : uint8_t
	{
		Write          = 0,
		WriteAtomicAdd = 1,
		WriteAtomicMin = 2,
		WriteAtomicMax = 3,
		Count          = 4,
		MAX            = 5
	};

	/**
	 * Enum OptimusCore.EOptimusSkinnedMeshExecDomain
	 */
	enum class EOptimusSkinnedMeshExecDomain : uint8_t
	{
		None     = 0,
		Vertex   = 1,
		Triangle = 2,
		MAX      = 3
	};

	/**
	 * Enum OptimusCore.EOptimusTerminalType
	 */
	enum class EOptimusTerminalType : uint8_t
	{
		Unknown = 0,
		Entry   = 1,
		Return  = 2,
		MAX     = 3
	};

	/**
	 * Enum OptimusCore.EOptimusDataDomainType
	 */
	enum class EOptimusDataDomainType : uint8_t
	{
		Dimensional = 0,
		Expression  = 1,
		MAX         = 2
	};

	/**
	 * Enum OptimusCore.EOptimusDataTypeUsageFlags
	 */
	enum class EOptimusDataTypeUsageFlags : uint8_t
	{
		None           = 0,
		Resource       = 1,
		Variable       = 2,
		AnimAttributes = 3,
		MAX            = 4
	};

	/**
	 * Enum OptimusCore.EOptimusDataTypeFlags
	 */
	enum class EOptimusDataTypeFlags : uint8_t
	{
		None         = 0,
		IsStructType = 1,
		ShowElements = 2,
		MAX          = 3
	};

	/**
	 * Enum OptimusCore.EOptimusNodeGraphType
	 */
	enum class EOptimusNodeGraphType : uint8_t
	{
		Setup           = 0,
		Update          = 1,
		ExternalTrigger = 2,
		Function        = 3,
		SubGraph        = 4,
		Transient       = 5,
		MAX             = 6
	};

	/**
	 * Enum OptimusCore.EOptimusNodePinStorageType
	 */
	enum class EOptimusNodePinStorageType : uint8_t
	{
		Value    = 0,
		Resource = 1,
		MAX      = 2
	};

	/**
	 * Enum OptimusCore.EOptimusNodePinDirection
	 */
	enum class EOptimusNodePinDirection : uint8_t
	{
		Unknown = 0,
		Input   = 1,
		Output  = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OptimusCore.OptimusDataTypeRef
	 * Size -> 0x0010
	 */
	struct FOptimusDataTypeRef
	{
	public:
		class FName                                                TypeName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              TypeObject;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusAnimAttributeDescription
	 * Size -> 0x0048
	 */
	struct FOptimusAnimAttributeDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UOptimusValueContainer*                              DefaultValue;                                            // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HlslId;                                                  // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PinName;                                                 // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusAnimAttributeArray
	 * Size -> 0x0010
	 */
	struct FOptimusAnimAttributeArray
	{
	public:
		TArray<struct FOptimusAnimAttributeDescription>            InnerArray;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusDebugDrawParameters
	 * Size -> 0x0014
	 */
	struct FOptimusDebugDrawParameters
	{
	public:
		bool                                                       bForceEnable;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGYM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxLineCount;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTriangleCount;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCharacterCount;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FontSize;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusGraphVariableDescription
	 * Size -> 0x0030
	 */
	struct FOptimusGraphVariableDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShaderValueTypeHandle                              ValueType;                                               // 0x0010(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      Value;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Offset;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDH4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusDataDomain
	 * Size -> 0x0040
	 */
	struct FOptimusDataDomain
	{
	public:
		EOptimusDataDomainType                                     Type;                                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WHJ[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_NVIR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DimensionNames;                                          // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Multiplier;                                              // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L6FS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Expression;                                              // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        LevelNames;                                              // 0x0030(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OptimusCore.OptimusExecutionDomain
	 * Size -> 0x0008
	 */
	struct FOptimusExecutionDomain
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusValidatedName
	 * Size -> 0x0008
	 */
	struct FOptimusValidatedName
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusParameterBinding
	 * Size -> 0x0058
	 */
	struct FOptimusParameterBinding
	{
	public:
		struct FOptimusValidatedName                               Name;                                                    // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FOptimusDataDomain                                  DataDomain;                                              // 0x0018(0x0040) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.Optimus_ShaderBinding
	 * Size -> 0x0018
	 */
	struct FOptimus_ShaderBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusParameterBindingArray
	 * Size -> 0x0010
	 */
	struct FOptimusParameterBindingArray
	{
	public:
		TArray<struct FOptimusParameterBinding>                    InnerArray;                                              // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusSecondaryInputBindingsGroup
	 * Size -> 0x0018
	 */
	struct FOptimusSecondaryInputBindingsGroup
	{
	public:
		struct FOptimusValidatedName                               GroupName;                                               // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FOptimusParameterBindingArray                       BindingArray;                                            // 0x0008(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusShaderText
	 * Size -> 0x0020
	 */
	struct FOptimusShaderText
	{
	public:
		class FString                                              Declarations;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShaderText;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
	 * Size -> 0x0058
	 */
	struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
	{
	public:
		class FName                                                ResourceName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0008(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FOptimusDataDomain                                  DataDomain;                                              // 0x0018(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNode_GetVariable_DuplicationInfo
	 * Size -> 0x0028
	 */
	struct FOptimusNode_GetVariable_DuplicationInfo
	{
	public:
		class FName                                                VariableName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOptimusDataTypeRef                                 DataType;                                                // 0x0008(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusComputeGraphInfo
	 * Size -> 0x0018
	 */
	struct FOptimusComputeGraphInfo
	{
	public:
		EOptimusNodeGraphType                                      GraphType;                                               // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AB2X[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                GraphName;                                               // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQNF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOptimusComputeGraph*                                ComputeGraph;                                            // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusDeformerInstanceComponentBinding
	 * Size -> 0x0010
	 */
	struct FOptimusDeformerInstanceComponentBinding
	{
	public:
		class FName                                                ProviderName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ComponentName;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusDeformerInstanceExecInfo
	 * Size -> 0x0030
	 */
	struct FOptimusDeformerInstanceExecInfo
	{
	public:
		class FName                                                GraphName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptimusNodeGraphType                                      GraphType;                                               // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYR1[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_6ET6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UComputeGraph*                                       ComputeGraph;                                            // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FComputeGraphInstance                               ComputeGraphInstance;                                    // 0x0018(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OptimusCore.OptimusAction
	 * Size -> 0x0018
	 */
	struct FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_AWBD[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusCompoundAction
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FOptimusCompoundAction : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_UMMD[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusComponentBindingAction_AddBinding
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FOptimusComponentBindingAction_AddBinding : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_HV92[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusComponentBindingAction_RemoveBinding
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusComponentBindingAction_RemoveBinding : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_4MQW[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusComponentBindingAction_RenameBinding
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FOptimusComponentBindingAction_RenameBinding : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_9WMW[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusComponentBindingAction_SetComponentSource
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusComponentBindingAction_SetComponentSource : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_FM2T[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_RenameNode
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_RenameNode : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_KFVC[0x40];                                  // 0x0018(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_MoveNode
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_MoveNode : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_D5MU[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_SetPinValue
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_SetPinValue : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_LYIU[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_SetPinName
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_SetPinName : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_YFLI[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_SetPinType
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_SetPinType : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_7ODU[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_SetPinDataDomain
	 * Size -> 0x0090 (FullSize[0x00A8] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_SetPinDataDomain : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_IX8A[0x90];                                  // 0x0018(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_ConnectAdderPin
	 * Size -> 0x0038 (FullSize[0x0050] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_ConnectAdderPin : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_G442[0x38];                                  // 0x0018(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_AddRemovePin
	 * Size -> 0x00A0 (FullSize[0x00B8] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_AddRemovePin : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_SFGX[0xA0];                                  // 0x0018(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_AddPin
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	struct FOptimusNodeAction_AddPin : public FOptimusNodeAction_AddRemovePin
	{	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_AddGroupingPin
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	struct FOptimusNodeAction_AddGroupingPin : public FOptimusNodeAction_AddRemovePin
	{	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_RemovePin
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	struct FOptimusNodeAction_RemovePin : public FOptimusNodeAction_AddRemovePin
	{	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeAction_MovePin
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeAction_MovePin : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_BPT8[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_AddGraph
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_AddGraph : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_9KPB[0x78];                                  // 0x0018(0x0078) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveGraph
	 * Size -> 0x0040 (FullSize[0x0058] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_RemoveGraph : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_2XSE[0x40];                                  // 0x0018(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_RenameGraph
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_RenameGraph : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_32IT[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_AddNode
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_AddNode : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_PNRC[0x88];                                  // 0x0018(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_DuplicateNode
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_DuplicateNode : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_3C6U[0x88];                                  // 0x0018(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveNode
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_RemoveNode : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_KYFX[0x48];                                  // 0x0018(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_AddRemoveLink
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_AddRemoveLink : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_PH85[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_AddLink
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FOptimusNodeGraphAction_AddLink : public FOptimusNodeGraphAction_AddRemoveLink
	{	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_RemoveLink
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FOptimusNodeGraphAction_RemoveLink : public FOptimusNodeGraphAction_AddRemoveLink
	{	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
	 * Size -> 0x0098 (FullSize[0x00B0] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_PackageKernelFunction : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_K8I4[0x98];                                  // 0x0018(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
	 * Size -> 0x0048 (FullSize[0x0060] - InheritedSize[0x0018])
	 */
	struct FOptimusNodeGraphAction_UnpackageKernelFunction : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_EOOV[0x48];                                  // 0x0018(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusResourceAction_AddResource
	 * Size -> 0x0058 (FullSize[0x0070] - InheritedSize[0x0018])
	 */
	struct FOptimusResourceAction_AddResource : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_YM4Y[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusResourceAction_RemoveResource
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusResourceAction_RemoveResource : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_9JQW[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusResourceAction_RenameResource
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FOptimusResourceAction_RenameResource : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_VZU1[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusResourceAction_SetDataType
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusResourceAction_SetDataType : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_ENAG[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusResourceAction_SetDataDomain
	 * Size -> 0x0088 (FullSize[0x00A0] - InheritedSize[0x0018])
	 */
	struct FOptimusResourceAction_SetDataDomain : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_Z80Q[0x88];                                  // 0x0018(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusVariableAction_AddVariable
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FOptimusVariableAction_AddVariable : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_VXJ5[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusVariableAction_RemoveVariable
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusVariableAction_RemoveVariable : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_7D7T[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusVariableAction_RenameVariable
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FOptimusVariableAction_RenameVariable : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_CO83[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusVariableAction_SetDataType
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FOptimusVariableAction_SetDataType : public FOptimusAction
	{
	public:
		unsigned char                                              UnknownData_0K0Z[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusDataType
	 * Size -> 0x0058
	 */
	struct FOptimusDataType
	{
	public:
		class FName                                                TypeName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) NativeAccessSpecifierPublic
		struct FShaderValueTypeHandle                              ShaderValueType;                                         // 0x0020(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShaderValueSize;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TypeCategory;                                            // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              TypeObject;                                              // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasCustomPinColor;                                      // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GH0N[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CustomPinColor;                                          // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptimusDataTypeUsageFlags                                 UsageFlags;                                              // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOptimusDataTypeFlags                                      TypeFlags;                                               // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MURI[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OptimusCore.OptimusVariableMetaDataEntry
	 * Size -> 0x0018
	 */
	struct FOptimusVariableMetaDataEntry
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
