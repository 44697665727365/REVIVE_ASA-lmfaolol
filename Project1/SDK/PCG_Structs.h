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
	 * Enum PCG.EPCGAttributeAccessorFlags
	 */
	enum class EPCGAttributeAccessorFlags : uint8_t
	{
		StrictType           = 0,
		AllowBroadcast       = 1,
		AllowConstructible   = 2,
		AllowSetDefaultValue = 3,
		MAX                  = 4
	};

	/**
	 * Enum PCG.EPCGAttributePropertySelection
	 */
	enum class EPCGAttributePropertySelection : uint8_t
	{
		Attribute     = 0,
		PointProperty = 1,
		MAX           = 2
	};

	/**
	 * Enum PCG.EPCGChangeType
	 */
	enum class EPCGChangeType : uint8_t
	{
		None       = 0,
		Cosmetic   = 1,
		Settings   = 2,
		Input      = 3,
		Edge       = 4,
		Node       = 5,
		Structural = 6,
		MAX        = 7
	};

	/**
	 * Enum PCG.EPCGDataType
	 */
	enum class EPCGDataType : uint8_t
	{
		None            = 0,
		Point           = 1,
		Spline          = 2,
		LandscapeSpline = 3,
		PolyLine        = 4,
		Landscape       = 5,
		Texture         = 6,
		RenderTarget    = 7,
		BaseTexture     = 8,
		Surface         = 9,
		Volume          = 10,
		Primitive       = 11,
		Concrete        = 12,
		Composite       = 13,
		Spatial         = 14,
		Param           = 15,
		Settings        = 16,
		Other           = 17,
		Any             = 18,
		MAX             = 19
	};

	/**
	 * Enum PCG.PCGDistanceShape
	 */
	enum class EPCGDistanceShape : uint8_t
	{
		PCGDistanceShapeSphereBounds         = 0,
		PCGDistanceShapeBoxBounds            = 1,
		PCGDistanceShapeCenter               = 2,
		PCGDistanceShapePCGDistanceShape_MAX = 3
	};

	/**
	 * Enum PCG.EPCGMetadataTypes
	 */
	enum class EPCGMetadataTypes : uint8_t
	{
		Float      = 0,
		Double     = 1,
		Integer32  = 2,
		Integer64  = 3,
		Vector2    = 4,
		Vector     = 5,
		Vector4    = 6,
		Quaternion = 7,
		Transform  = 8,
		String     = 9,
		Boolean    = 10,
		Rotator    = 11,
		Name       = 12,
		Count      = 13,
		Unknown    = 14,
		MAX        = 15
	};

	/**
	 * Enum PCG.EPCGMetadataOp
	 */
	enum class EPCGMetadataOp : uint8_t
	{
		Min         = 0,
		Max         = 1,
		Sub         = 2,
		Add         = 3,
		Mul         = 4,
		Div         = 5,
		SourceValue = 6,
		TargetValue = 7
	};

	/**
	 * Enum PCG.EPCGMetadataFilterMode
	 */
	enum class EPCGMetadataFilterMode : uint8_t
	{
		ExcludeAttributes = 0,
		IncludeAttributes = 1,
		MAX               = 2
	};

	/**
	 * Enum PCG.EPCGMetadataTypesConstantStructStringMode
	 */
	enum class EPCGMetadataTypesConstantStructStringMode : uint8_t
	{
		String         = 0,
		SoftObjectPath = 1,
		SoftClassPath  = 2,
		MAX            = 3
	};

	/**
	 * Enum PCG.PCGNormalToDensityMode
	 */
	enum class EPCGNormalToDensityMode : uint8_t
	{
		PCGNormalToDensityModeSet                        = 0,
		PCGNormalToDensityModeMinimum                    = 1,
		PCGNormalToDensityModeMaximum                    = 2,
		PCGNormalToDensityModeAdd                        = 3,
		PCGNormalToDensityModeSubtract                   = 4,
		PCGNormalToDensityModeMultiply                   = 5,
		PCGNormalToDensityModeDivide                     = 6,
		PCGNormalToDensityModePCGNormalToDensityMode_MAX = 7
	};

	/**
	 * Enum PCG.EPCGDifferenceDensityFunction
	 */
	enum class EPCGDifferenceDensityFunction : uint8_t
	{
		Minimum             = 0,
		ClampedSubstraction = 1,
		Binary              = 2,
		MAX                 = 3
	};

	/**
	 * Enum PCG.EPCGDifferenceMode
	 */
	enum class EPCGDifferenceMode : uint8_t
	{
		Inferred   = 0,
		Continuous = 1,
		Discrete   = 2,
		MAX        = 3
	};

	/**
	 * Enum PCG.EPCGIntersectionDensityFunction
	 */
	enum class EPCGIntersectionDensityFunction : uint8_t
	{
		Multiply = 0,
		Minimum  = 1,
		MAX      = 2
	};

	/**
	 * Enum PCG.EPCGTextureColorChannel
	 */
	enum class EPCGTextureColorChannel : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		MAX   = 4
	};

	/**
	 * Enum PCG.EPCGTextureDensityFunction
	 */
	enum class EPCGTextureDensityFunction : uint8_t
	{
		Ignore   = 0,
		Multiply = 1,
		MAX      = 2
	};

	/**
	 * Enum PCG.EPCGUnionType
	 */
	enum class EPCGUnionType : uint8_t
	{
		LeftToRightPriority = 0,
		RightToLeftPriority = 1,
		KeepAll             = 2,
		MAX                 = 3
	};

	/**
	 * Enum PCG.EPCGUnionDensityFunction
	 */
	enum class EPCGUnionDensityFunction : uint8_t
	{
		Maximum         = 0,
		ClampedAddition = 1,
		Binary          = 2,
		MAX             = 3
	};

	/**
	 * Enum PCG.EPCGWorldQueryFilterByTag
	 */
	enum class EPCGWorldQueryFilterByTag : uint8_t
	{
		NoTagFilter   = 0,
		IncludeTagged = 1,
		ExcludeTagged = 2,
		MAX           = 3
	};

	/**
	 * Enum PCG.EPCGMedadataBitwiseOperation
	 */
	enum class EPCGMedadataBitwiseOperation : uint8_t
	{
		And = 0,
		Not = 1,
		Or  = 2,
		Xor = 3,
		MAX = 4
	};

	/**
	 * Enum PCG.EPCGMedadataBooleanOperation
	 */
	enum class EPCGMedadataBooleanOperation : uint8_t
	{
		And = 0,
		Not = 1,
		Or  = 2,
		Xor = 3,
		MAX = 4
	};

	/**
	 * Enum PCG.EPCGMedadataCompareOperation
	 */
	enum class EPCGMedadataCompareOperation : uint8_t
	{
		Equal          = 0,
		NotEqual       = 1,
		Greater        = 2,
		GreaterOrEqual = 3,
		Less           = 4,
		LessOrEqual    = 5,
		MAX            = 6
	};

	/**
	 * Enum PCG.EPCGMetadataOperationTarget
	 */
	enum class EPCGMetadataOperationTarget : uint8_t
	{
		PropertyToAttribute  = 0,
		AttributeToProperty  = 1,
		AttributeToAttribute = 2,
		MAX                  = 3
	};

	/**
	 * Enum PCG.EPCGMetadataMakeVector3
	 */
	enum class EPCGMetadataMakeVector3 : uint8_t
	{
		ThreeValues     = 0,
		Vector2AndValue = 1,
		MAX             = 2
	};

	/**
	 * Enum PCG.EPCGMetadataMakeVector4
	 */
	enum class EPCGMetadataMakeVector4 : uint8_t
	{
		FourValues          = 0,
		Vector2AndTwoValues = 1,
		TwoVector2          = 2,
		Vector3AndValue     = 3,
		MAX                 = 4
	};

	/**
	 * Enum PCG.EPCGMedadataMathsOperation
	 */
	enum class EPCGMedadataMathsOperation : uint8_t
	{
		UnaryOp   = 0,
		Sign      = 1,
		Frac      = 2,
		Truncate  = 3,
		Round     = 4,
		Sqrt      = 5,
		Abs       = 6,
		Floor     = 7,
		Ceil      = 8,
		BinaryOp  = 9,
		Add       = 10,
		Subtract  = 11,
		Multiply  = 12,
		Divide    = 13,
		Max       = 14,
		Min       = 15,
		Pow       = 16,
		ClampMin  = 17,
		ClampMax  = 18,
		Modulo    = 19,
		TernaryOp = 20,
		Clamp     = 21,
		Lerp      = 22
	};

	/**
	 * Enum PCG.EPCGMetadataSettingsBaseMode
	 */
	enum class EPCGMetadataSettingsBaseMode : uint8_t
	{
		Inferred    = 0,
		NoBroadcast = 1,
		Broadcast   = 2,
		MAX         = 3
	};

	/**
	 * Enum PCG.EPCGMetadataSettingsBaseTypes
	 */
	enum class EPCGMetadataSettingsBaseTypes : uint8_t
	{
		AutoUpcastTypes = 0,
		StrictTypes     = 1,
		MAX             = 2
	};

	/**
	 * Enum PCG.EPCGMedadataRotatorOperation
	 */
	enum class EPCGMedadataRotatorOperation : uint8_t
	{
		RotatorOp                = 0,
		Combine                  = 1,
		Invert                   = 2,
		Lerp                     = 3,
		TransformOp              = 4,
		TransformRotation        = 5,
		InverseTransformRotation = 6,
		MAX                      = 7
	};

	/**
	 * Enum PCG.EPCGMedadataTransformOperation
	 */
	enum class EPCGMedadataTransformOperation : uint8_t
	{
		Compose = 0,
		Invert  = 1,
		Lerp    = 2,
		MAX     = 3
	};

	/**
	 * Enum PCG.EPCGTransformLerpMode
	 */
	enum class EPCGTransformLerpMode : uint8_t
	{
		QuatInterp     = 0,
		EulerInterp    = 1,
		DualQuatInterp = 2,
		MAX            = 3
	};

	/**
	 * Enum PCG.EPCGMedadataTrigOperation
	 */
	enum class EPCGMedadataTrigOperation : uint8_t
	{
		Acos     = 0,
		Asin     = 1,
		Atan     = 2,
		Atan2    = 3,
		Cos      = 4,
		Sin      = 5,
		Tan      = 6,
		DegToRad = 7,
		RadToDeg = 8,
		MAX      = 9
	};

	/**
	 * Enum PCG.EPCGMedadataVectorOperation
	 */
	enum class EPCGMedadataVectorOperation : uint8_t
	{
		VectorOp                  = 0,
		Cross                     = 1,
		Dot                       = 2,
		Distance                  = 3,
		Normalize                 = 4,
		Length                    = 5,
		RotateAroundAxis          = 6,
		TransformOp               = 7,
		TransformDirection        = 8,
		TransformLocation         = 9,
		InverseTransformDirection = 10,
		InverseTransformLocation  = 11,
		MAX                       = 12
	};

	/**
	 * Enum PCG.EPCGActorSelection
	 */
	enum class EPCGActorSelection : uint8_t
	{
		ByTag   = 0,
		ByName  = 1,
		ByClass = 2,
		MAX     = 3
	};

	/**
	 * Enum PCG.EPCGActorFilter
	 */
	enum class EPCGActorFilter : uint8_t
	{
		Self           = 0,
		Parent         = 1,
		Root           = 2,
		AllWorldActors = 3,
		Original       = 4,
		MAX            = 5
	};

	/**
	 * Enum PCG.EPCGAttributeFilterOperation
	 */
	enum class EPCGAttributeFilterOperation : uint8_t
	{
		KeepSelectedAttributes   = 0,
		DeleteSelectedAttributes = 1,
		MAX                      = 2
	};

	/**
	 * Enum PCG.EPCGAttributeReduceOperation
	 */
	enum class EPCGAttributeReduceOperation : uint8_t
	{
		Average = 0,
		Max     = 1,
		Min     = 2
	};

	/**
	 * Enum PCG.EPCGAttributeSelectOperation
	 */
	enum class EPCGAttributeSelectOperation : uint8_t
	{
		Min    = 0,
		Max    = 1,
		Median = 2
	};

	/**
	 * Enum PCG.EPCGAttributeSelectAxis
	 */
	enum class EPCGAttributeSelectAxis : uint8_t
	{
		X          = 0,
		Y          = 1,
		Z          = 2,
		W          = 3,
		CustomAxis = 4,
		MAX        = 5
	};

	/**
	 * Enum PCG.EPCGBoundsModifierMode
	 */
	enum class EPCGBoundsModifierMode : uint8_t
	{
		Set       = 0,
		Intersect = 1,
		Include   = 2,
		Translate = 3,
		Scale     = 4,
		MAX       = 5
	};

	/**
	 * Enum PCG.EPCGCopyPointsInheritanceMode
	 */
	enum class EPCGCopyPointsInheritanceMode : uint8_t
	{
		Relative = 0,
		Source   = 1,
		Target   = 2,
		MAX      = 3
	};

	/**
	 * Enum PCG.EPCGCopyPointsMetadataInheritanceMode
	 */
	enum class EPCGCopyPointsMetadataInheritanceMode : uint8_t
	{
		SourceFirst = 0,
		TargetFirst = 1,
		SourceOnly  = 2,
		TargetOnly  = 3,
		None        = 4,
		MAX         = 5
	};

	/**
	 * Enum PCG.EPCGCreateSplineMode
	 */
	enum class EPCGCreateSplineMode : uint8_t
	{
		CreateDataOnly  = 0,
		CreateComponent = 1,
		CreateNewActor  = 2,
		MAX             = 3
	};

	/**
	 * Enum PCG.EPCGGetDataFromActorMode
	 */
	enum class EPCGGetDataFromActorMode : uint8_t
	{
		ParseActorComponents                     = 0,
		GetSinglePoint                           = 1,
		GetDataFromProperty                      = 2,
		GetDataFromPCGComponent                  = 3,
		GetDataFromPCGComponentOrParseComponents = 4,
		MAX                                      = 5
	};

	/**
	 * Enum PCG.EPCGDensityNoiseMode
	 */
	enum class EPCGDensityNoiseMode : uint8_t
	{
		Set      = 0,
		Minimum  = 1,
		Maximum  = 2,
		Add      = 3,
		Multiply = 4,
		MAX      = 5
	};

	/**
	 * Enum PCG.EPCGFilterByTagOperation
	 */
	enum class EPCGFilterByTagOperation : uint8_t
	{
		KeepTagged   = 0,
		RemoveTagged = 1,
		MAX          = 2
	};

	/**
	 * Enum PCG.EPCGPointExtentsModifierMode
	 */
	enum class EPCGPointExtentsModifierMode : uint8_t
	{
		Set      = 0,
		Minimum  = 1,
		Maximum  = 2,
		Add      = 3,
		Multiply = 4,
		MAX      = 5
	};

	/**
	 * Enum PCG.EPCGPointTargetFilterType
	 */
	enum class EPCGPointTargetFilterType : uint8_t
	{
		Property = 0,
		Metadata = 1,
		MAX      = 2
	};

	/**
	 * Enum PCG.EPCGPointThresholdType
	 */
	enum class EPCGPointThresholdType : uint8_t
	{
		Property = 0,
		Metadata = 1,
		Constant = 2,
		MAX      = 3
	};

	/**
	 * Enum PCG.EPCGPointFilterConstantType
	 */
	enum class EPCGPointFilterConstantType : uint8_t
	{
		Integer64 = 0,
		Float     = 1,
		Vector    = 2,
		Vector4   = 3,
		String    = 4,
		Unknown   = 5,
		MAX       = 6
	};

	/**
	 * Enum PCG.EPCGPointFilterOperator
	 */
	enum class EPCGPointFilterOperator : uint8_t
	{
		Greater        = 0,
		GreaterOrEqual = 1,
		Lesser         = 2,
		LesserOrEqual  = 3,
		Equal          = 4,
		NotEqual       = 5,
		MAX            = 6
	};

	/**
	 * Enum PCG.EPCGSelfPruningType
	 */
	enum class EPCGSelfPruningType : uint8_t
	{
		LargeToSmall     = 0,
		SmallToLarge     = 1,
		AllEqual         = 2,
		None             = 3,
		RemoveDuplicates = 4,
		MAX              = 5
	};

	/**
	 * Enum PCG.EPCGSpawnActorOption
	 */
	enum class EPCGSpawnActorOption : uint8_t
	{
		CollapseActors = 0,
		MergePCGOnly   = 1,
		NoMerging      = 2,
		MAX            = 3
	};

	/**
	 * Enum PCG.EPCGSpawnActorGenerationTrigger
	 */
	enum class EPCGSpawnActorGenerationTrigger : uint8_t
	{
		Default               = 0,
		ForceGenerate         = 1,
		DoNotGenerateInEditor = 2,
		DoNotGenerate         = 3,
		MAX                   = 4
	};

	/**
	 * Enum PCG.EPCGSplineSamplingMode
	 */
	enum class EPCGSplineSamplingMode : uint8_t
	{
		Subdivision = 0,
		Distance    = 1,
		MAX         = 2
	};

	/**
	 * Enum PCG.EPCGSplineSamplingDimension
	 */
	enum class EPCGSplineSamplingDimension : uint8_t
	{
		OnSpline     = 0,
		OnHorizontal = 1,
		OnVertical   = 2,
		OnVolume     = 3,
		OnInterior   = 4,
		MAX          = 5
	};

	/**
	 * Enum PCG.EPCGSplineSamplingFill
	 */
	enum class EPCGSplineSamplingFill : uint8_t
	{
		Fill      = 0,
		EdgesOnly = 1,
		MAX       = 2
	};

	/**
	 * Enum PCG.EPCGSplineSamplingInteriorOrientation
	 */
	enum class EPCGSplineSamplingInteriorOrientation : uint8_t
	{
		Uniform         = 0,
		FollowCurvature = 1,
		MAX             = 2
	};

	/**
	 * Enum PCG.EPCGMeshSelectorMaterialOverrideMode
	 */
	enum class EPCGMeshSelectorMaterialOverrideMode : uint8_t
	{
		NoOverride          = 0,
		StaticOverride      = 1,
		ByAttributeOverride = 2,
		MAX                 = 3
	};

	/**
	 * Enum PCG.EPCGComponentInput
	 */
	enum class EPCGComponentInput : uint8_t
	{
		Actor     = 0,
		Landscape = 1,
		Other     = 2,
		MAX       = 3
	};

	/**
	 * Enum PCG.EPCGComponentGenerationTrigger
	 */
	enum class EPCGComponentGenerationTrigger : uint8_t
	{
		GenerateOnLoad   = 0,
		GenerateOnDemand = 1,
		MAX              = 2
	};

	/**
	 * Enum PCG.EPCGComponentDirtyFlag
	 */
	enum class EPCGComponentDirtyFlag : uint8_t
	{
		None      = 0,
		Actor     = 1,
		Landscape = 2,
		Input     = 3,
		Data      = 4,
		All       = 5,
		MAX       = 6
	};

	/**
	 * Enum PCG.EPCGExecutionPhase
	 */
	enum class EPCGExecutionPhase : uint8_t
	{
		NotExecuted = 0,
		PrepareData = 1,
		Execute     = 2,
		PostExecute = 3,
		Done        = 4,
		MAX         = 5
	};

	/**
	 * Enum PCG.EPCGDebugVisScaleMethod
	 */
	enum class EPCGDebugVisScaleMethod : uint8_t
	{
		Relative = 0,
		Absolute = 1,
		Extents  = 2,
		MAX      = 3
	};

	/**
	 * Enum PCG.EPCGPointProperties
	 */
	enum class EPCGPointProperties : uint8_t
	{
		Density     = 0,
		BoundsMin   = 1,
		BoundsMax   = 2,
		Extents     = 3,
		Color       = 4,
		Position    = 5,
		Rotation    = 6,
		Scale       = 7,
		Transform   = 8,
		Steepness   = 9,
		LocalCenter = 10,
		MAX         = 11
	};

	/**
	 * Enum PCG.EPCGSettingsExecutionMode
	 */
	enum class EPCGSettingsExecutionMode : uint8_t
	{
		Enabled  = 0,
		Debug    = 1,
		Isolated = 2,
		Disabled = 3,
		MAX      = 4
	};

	/**
	 * Enum PCG.EPCGSettingsType
	 */
	enum class EPCGSettingsType : uint8_t
	{
		InputOutput = 0,
		Spatial     = 1,
		Density     = 2,
		Blueprint   = 3,
		Metadata    = 4,
		Filter      = 5,
		Sampler     = 6,
		Spawner     = 7,
		Subgraph    = 8,
		Debug       = 9,
		Generic     = 10,
		Param       = 11,
		MAX         = 12
	};

	/**
	 * Enum PCG.EDeterminismLevel
	 */
	enum class EDeterminismLevel : uint8_t
	{
		None             = 0,
		NoDeterminism    = 1,
		Basic            = 2,
		OrderOrthogonal  = 3,
		OrderConsistent  = 4,
		OrderIndependent = 5,
		Deterministic    = 6,
		MAX              = 7
	};

	/**
	 * Enum PCG.EPCGUnitTestDummyEnum
	 */
	enum class EPCGUnitTestDummyEnum : uint8_t
	{
		One   = 0,
		Two   = 1,
		Three = 2,
		MAX   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PCG.PCGSettingsOverridableParam
	 * Size -> 0x0030
	 */
	struct FPCGSettingsOverridableParam
	{
	public:
		class FName                                                Label;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PropertiesNames;                                         // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UStruct*                                             PropertyClass;                                           // 0x0018(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN19[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGPoint
	 * Size -> 0x00D0
	 */
	struct FPCGPoint
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DMD[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoundsMin;                                               // 0x0068(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundsMax;                                               // 0x0080(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEB6[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Color;                                                   // 0x00A0(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Steepness;                                               // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    MetadataEntry;                                           // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGProjectionParams
	 * Size -> 0x0020
	 */
	struct FPCGProjectionParams
	{
	public:
		bool                                                       bProjectPositions;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectRotations;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectScales;                                          // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectColors;                                          // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PISN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttributeList;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGMetadataFilterMode                                     AttributeMode;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGMetadataOp                                             AttributeMergeOperation;                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AT0F[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGSplineStruct
	 * Size -> 0x0160
	 */
	struct FPCGSplineStruct
	{
	public:
		struct FSplineCurves                                       SplineCurves;                                            // 0x0000(0x0070) NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0070(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DefaultUpVector;                                         // 0x00D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReparamStepsPerSegment;                                  // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosedLoop;                                             // 0x00EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MV2P[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoxSphereBounds                                    LocalBounds;                                             // 0x00F0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0128(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGWorldCommonQueryParams
	 * Size -> 0x0070
	 */
	struct FPCGWorldCommonQueryParams
	{
	public:
		bool                                                       bIgnorePCGHits;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreSelfHits;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          CollisionChannel;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceComplex;                                           // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGWorldQueryFilterByTag                                  ActorTagFilter;                                          // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UK2[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              ActorTagsList;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreLandscapeHits;                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SRK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ParsedActorTagsList[0x50];                               // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct PCG.PCGWorldVolumetricQueryParams
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams
	{
	public:
		bool                                                       bSearchForOverlap;                                       // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2375[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGWorldRayHitQueryParams
	 * Size -> 0x0048 (FullSize[0x00B8] - InheritedSize[0x0070])
	 */
	struct FPCGWorldRayHitQueryParams : public FPCGWorldCommonQueryParams
	{
	public:
		bool                                                       bOverrideDefaultParams;                                  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YV76[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RayOrigin;                                               // 0x0078(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RayDirection;                                            // 0x0090(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     RayLength;                                               // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyMetadataFromLandscape;                             // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PN3P[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGAttributePropertySelector
	 * Size -> 0x0020
	 */
	struct FPCGAttributePropertySelector
	{
	public:
		EPCGAttributePropertySelection                             Selection;                                               // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DISF[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                AttributeName;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGPointProperties                                        PointProperty;                                           // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6JB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ExtraNames;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGMetadataTypesConstantStruct
	 * Size -> 0x0170
	 */
	struct FPCGMetadataTypesConstantStruct
	{
	public:
		EPCGMetadataTypes                                          Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XKN9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPCGMetadataTypesConstantStructStringMode                  StringMode;                                              // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAPN[0x3];                                   // 0x0005(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      FloatValue;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int32Value;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DoubleValue;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    IntValue;                                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector2Value;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VectorValue;                                             // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14AV[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Vector4Value;                                            // 0x0050(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               QuatValue;                                               // 0x0070(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          TransformValue;                                          // 0x0090(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringValue;                                             // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4M4[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotatorValue;                                            // 0x0108(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                NameValue;                                               // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      SoftClassPathValue;                                      // 0x0128(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SoftObjectPathValue;                                     // 0x0148(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowsTypeChange;                                       // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UW4I[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGActorSelectorSettings
	 * Size -> 0x0020
	 */
	struct FPCGActorSelectorSettings
	{
	public:
		EPCGActorFilter                                            ActorFilter;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustOverlapSelf;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChildren;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableFilter;                                          // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGActorSelection                                         ActorSelection;                                          // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NT29[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActorSelectionTag;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorSelectionClass;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectMultiple;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4JC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGPinProperties
	 * Size -> 0x0010
	 */
	struct FPCGPinProperties
	{
	public:
		class FName                                                Label;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGDataType                                               AllowedTypes;                                            // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40FL[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bAllowMultipleData;                                      // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleConnections;                               // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdvancedPin;                                            // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A591[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGActorPropertyOverride
	 * Size -> 0x0030
	 */
	struct FPCGActorPropertyOverride
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		class FString                                              PropertyTarget;                                          // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGSplineSamplerParams
	 * Size -> 0x00C8
	 */
	struct FPCGSplineSamplerParams
	{
	public:
		EPCGSplineSamplingMode                                     Mode;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGSplineSamplingDimension                                Dimension;                                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGSplineSamplingFill                                     Fill;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILF2[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubdivisionsPerSegment;                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceIncrement;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlanarSubdivisions;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumHeightSubdivisions;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeDirectionDelta;                                  // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XOW[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NextDirectionDeltaAttribute;                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeCurvature;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFP5[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurvatureAttribute;                                      // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorSampleSpacing;                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorBorderSampleSpacing;                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTreatSplineAsPolyline;                                  // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGSplineSamplingInteriorOrientation                      InteriorOrientation;                                     // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectOntoSurface;                                     // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OC8F[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  InteriorDensityFalloffCurve;                             // 0x0038(0x0088) Edit, NativeAccessSpecifierPublic
		bool                                                       bSeedFromLocalPosition;                                  // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSeedFrom2DPosition;                                     // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S92J[0x6];                                   // 0x00C2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGStaticMeshSpawnerEntry
	 * Size -> 0x0048
	 */
	struct FPCGStaticMeshSpawnerEntry
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RI1P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Mesh[0x30];                                              // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bOverrideCollisionProfile;                               // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUIF[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCollisionProfileName                               CollisionProfile;                                        // 0x003C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBTE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGMatchAndSetByAttributeEntry
	 * Size -> 0x02E0
	 */
	struct FPCGMatchAndSetByAttributeEntry
	{
	public:
		struct FPCGMetadataTypesConstantStruct                     ValueToMatch;                                            // 0x0000(0x0170) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGMetadataTypesConstantStruct                     Value;                                                   // 0x0170(0x0170) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGMatchAndSetWeightedEntry
	 * Size -> 0x0180
	 */
	struct FPCGMatchAndSetWeightedEntry
	{
	public:
		struct FPCGMetadataTypesConstantStruct                     Value;                                                   // 0x0000(0x0170) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYDQ[0xC];                                   // 0x0174(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGMatchAndSetWeightedByCategoryEntryList
	 * Size -> 0x0190
	 */
	struct FPCGMatchAndSetWeightedByCategoryEntryList
	{
	public:
		struct FPCGMetadataTypesConstantStruct                     CategoryValue;                                           // 0x0000(0x0170) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsDefault;                                              // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SJ7[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPCGMatchAndSetWeightedEntry>                WeightedEntries;                                         // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74S3[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGMeshSelectorWeightedEntry
	 * Size -> 0x01D8
	 */
	struct FPCGMeshSelectorWeightedEntry
	{
	public:
		struct FSoftISMComponentDescriptor                         Descriptor;                                              // 0x0000(0x01D0) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU1Y[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGWeightedByCategoryEntryList
	 * Size -> 0x0028
	 */
	struct FPCGWeightedByCategoryEntryList
	{
	public:
		class FString                                              CategoryEntry;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDefault;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4G9P[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPCGMeshSelectorWeightedEntry>               WeightedMeshEntries;                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGTaggedData
	 * Size -> 0x0068
	 */
	struct FPCGTaggedData
	{
	public:
		class UPCGData*                                            Data;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Tags[0x50];                                              // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		class FName                                                Pin;                                                     // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPinlessData;                                            // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4683[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGDataCollection
	 * Size -> 0x0020
	 */
	struct FPCGDataCollection
	{
	public:
		TArray<struct FPCGTaggedData>                              TaggedData;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bCancelExecutionOnEmpty;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKS7[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGOverrideInstancedPropertyBag
	 * Size -> 0x0060
	 */
	struct FPCGOverrideInstancedPropertyBag
	{
	public:
		struct FInstancedPropertyBag                               Parameters;                                              // 0x0000(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              PropertiesIDsOverridden[0x50];                           // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct PCG.PCGCrc
	 * Size -> 0x0008
	 */
	struct FPCGCrc
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bValid;                                                  // 0x0004(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z015[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGAttributeExtractorTestStructDepth2
	 * Size -> 0x0004
	 */
	struct FPCGAttributeExtractorTestStructDepth2
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGAttributeExtractorTestStructDepth1
	 * Size -> 0x0008
	 */
	struct FPCGAttributeExtractorTestStructDepth1
	{
	public:
		struct FPCGAttributeExtractorTestStructDepth2              Depth2Struct;                                            // 0x0000(0x0004) NoDestructor, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGAttributeExtractorTestStruct
	 * Size -> 0x0010
	 */
	struct FPCGAttributeExtractorTestStruct
	{
	public:
		struct FPCGAttributeExtractorTestStructDepth1              DepthStruct;                                             // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		class UPCGAttributeExtractorTestObject*                    Object;                                                  // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGDataTableRowToParamDataTestStruct
	 * Size -> 0x00A0
	 */
	struct FPCGDataTableRowToParamDataTestStruct
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    I32;                                                     // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWNW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    I64;                                                     // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      F32;                                                     // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GUV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     F64;                                                     // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           v2;                                                      // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             V3;                                                      // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            V4;                                                      // 0x0060(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SoftPath;                                                // 0x0080(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGDeterminismSettings
	 * Size -> 0x0010
	 */
	struct FPCGDeterminismSettings
	{
	public:
		bool                                                       bNativeTests;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBlueprintDeterminismTest;                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K892[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DeterminismTestBlueprint;                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGContext
	 * Size -> 0x0098
	 */
	struct FPCGContext
	{
	public:
		unsigned char                                              UnknownData_55GI[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGStaticMeshSpawnerContext
	 * Size -> 0x01A8 (FullSize[0x0240] - InheritedSize[0x0098])
	 */
	struct FPCGStaticMeshSpawnerContext : public FPCGContext
	{
	public:
		unsigned char                                              UnknownData_HJST[0x1A8];                                 // 0x0098(0x01A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.PCGLandscapeLayerWeight
	 * Size -> 0x000C
	 */
	struct FPCGLandscapeLayerWeight
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGPackedCustomData
	 * Size -> 0x0018
	 */
	struct FPCGPackedCustomData
	{
	public:
		int32_t                                                    NumCustomDataFloats;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGQP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              CustomData;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGMeshInstanceList
	 * Size -> 0x01F0
	 */
	struct FPCGMeshInstanceList
	{
	public:
		struct FSoftISMComponentDescriptor                         Descriptor;                                              // 0x0000(0x01D0) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Instances;                                               // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            InstancesMetadataEntry;                                  // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PCG.PCGComponentInstanceData
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	struct FPCGComponentInstanceData : public FActorComponentInstanceData
	{
	public:
		TArray<class UPCGManagedResource*>                         GeneratedResources;                                      // 0x0068(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UPCGComponent*                                       SourceComponent;                                         // 0x0078(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct PCG.PCGDebugVisualizationSettings
	 * Size -> 0x0070
	 */
	struct FPCGDebugVisualizationSettings
	{
	public:
		float                                                      PointScale;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGDebugVisScaleMethod                                    ScaleMethod;                                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89P0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PointMesh[0x30];                                         // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MaterialOverride[0x30];                                  // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bCheckForDuplicates;                                     // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4MD[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PCG.DeterminismTestResult
	 * Size -> 0x0088
	 */
	struct FDeterminismTestResult
	{
	public:
		class FName                                                TestResultTitle;                                         // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TestResultName;                                          // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGDataType                                               DataTypesTested;                                         // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZY3[0x3];                                   // 0x001D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TMap<class FName, EDeterminismLevel>                       TestResults;                                             // 0x0020(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      AdditionalDetails;                                       // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bFlagRaised;                                             // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYRA[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
