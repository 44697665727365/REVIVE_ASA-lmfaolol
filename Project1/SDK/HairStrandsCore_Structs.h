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
	 * Enum HairStrandsCore.EOptimusGroomExecDomain
	 */
	enum class EOptimusGroomExecDomain : uint8_t
	{
		None         = 0,
		ControlPoint = 1,
		Curve        = 2,
		MAX          = 3
	};

	/**
	 * Enum HairStrandsCore.EGroomCacheImportType
	 */
	enum class EGroomCacheImportType : uint8_t
	{
		None    = 0,
		Strands = 1,
		Guides  = 2,
		All     = 3,
		MAX     = 4
	};

	/**
	 * Enum HairStrandsCore.EHairAtlasTextureType
	 */
	enum class EHairAtlasTextureType : uint8_t
	{
		Depth        = 0,
		Tangent      = 1,
		Attribute    = 2,
		Coverage     = 3,
		AuxilaryData = 4,
		Material     = 5,
		MAX          = 6
	};

	/**
	 * Enum HairStrandsCore.EHairCardsClusterType
	 */
	enum class EHairCardsClusterType : uint8_t
	{
		Low  = 0,
		High = 1,
		MAX  = 2
	};

	/**
	 * Enum HairStrandsCore.EHairCardsGenerationType
	 */
	enum class EHairCardsGenerationType : uint8_t
	{
		CardsCount = 0,
		UseGuides  = 1,
		MAX        = 2
	};

	/**
	 * Enum HairStrandsCore.EHairCardsSourceType
	 */
	enum class EHairCardsSourceType : uint8_t
	{
		Procedural = 0,
		Imported   = 1,
		MAX        = 2
	};

	/**
	 * Enum HairStrandsCore.EHairInterpolationQuality
	 */
	enum class EHairInterpolationQuality : uint8_t
	{
		Low     = 0,
		Medium  = 1,
		High    = 2,
		Unknown = 3,
		MAX     = 4
	};

	/**
	 * Enum HairStrandsCore.EHairInterpolationWeight
	 */
	enum class EHairInterpolationWeight : uint8_t
	{
		Parametric = 0,
		Root       = 1,
		Index      = 2,
		Distance   = 3,
		Unknown    = 4,
		MAX        = 5
	};

	/**
	 * Enum HairStrandsCore.EGroomGeometryType
	 */
	enum class EGroomGeometryType : uint8_t
	{
		Strands = 0,
		Cards   = 1,
		Meshes  = 2,
		MAX     = 3
	};

	/**
	 * Enum HairStrandsCore.EGroomBindingType
	 */
	enum class EGroomBindingType : uint8_t
	{
		NoneBinding = 0,
		Rigid       = 1,
		Skinning    = 2,
		MAX         = 3
	};

	/**
	 * Enum HairStrandsCore.EGroomOverrideType
	 */
	enum class EGroomOverrideType : uint8_t
	{
		Auto    = 0,
		Enable  = 1,
		Disable = 2,
		MAX     = 3
	};

	/**
	 * Enum HairStrandsCore.EGroomNiagaraSolvers
	 */
	enum class EGroomNiagaraSolvers : uint8_t
	{
		None           = 0,
		CosseratRods   = 1,
		AngularSprings = 2,
		CustomSolver   = 3,
		MAX            = 4
	};

	/**
	 * Enum HairStrandsCore.EGroomStrandsSize
	 */
	enum class EGroomStrandsSize : uint8_t
	{
		None   = 0,
		Size2  = 1,
		Size4  = 2,
		Size8  = 3,
		Size16 = 4,
		Size32 = 5,
		MAX    = 6
	};

	/**
	 * Enum HairStrandsCore.EGroomInterpolationType
	 */
	enum class EGroomInterpolationType : uint8_t
	{
		None            = 0,
		RigidTransform  = 1,
		OffsetTransform = 2,
		SmoothTransform = 3,
		MAX             = 4
	};

	/**
	 * Enum HairStrandsCore.EGroomBindingMeshType
	 */
	enum class EGroomBindingMeshType : uint8_t
	{
		SkeletalMesh  = 0,
		GeometryCache = 1,
		MAX           = 2
	};

	/**
	 * Enum HairStrandsCore.EGroomCacheAttributes
	 */
	enum class EGroomCacheAttributes : uint8_t
	{
		None               = 0,
		Position           = 1,
		Width              = 2,
		Color              = 3,
		PositionWidth      = 4,
		PositionColor      = 5,
		WidthColor         = 6,
		PositionWidthColor = 7,
		MAX                = 8
	};

	/**
	 * Enum HairStrandsCore.EGroomCacheType
	 */
	enum class EGroomCacheType : uint8_t
	{
		None    = 0,
		Strands = 1,
		Guides  = 2,
		MAX     = 3
	};

	/**
	 * Enum HairStrandsCore.EGroomBasisType
	 */
	enum class EGroomBasisType : uint8_t
	{
		NoBasis         = 0,
		BezierBasis     = 1,
		BsplineBasis    = 2,
		CatmullromBasis = 3,
		HermiteBasis    = 4,
		PowerBasis      = 5,
		MAX             = 6
	};

	/**
	 * Enum HairStrandsCore.EGroomCurveType
	 */
	enum class EGroomCurveType : uint8_t
	{
		Cubic         = 0,
		Linear        = 1,
		VariableOrder = 2,
		MAX           = 3
	};

	/**
	 * Enum HairStrandsCore.EFollicleMaskChannel
	 */
	enum class EFollicleMaskChannel : uint8_t
	{
		R   = 0,
		G   = 1,
		B   = 2,
		A   = 3,
		MAX = 4
	};

	/**
	 * Enum HairStrandsCore.EStrandsTexturesTraceType
	 */
	enum class EStrandsTexturesTraceType : uint8_t
	{
		TraceInside        = 0,
		TraceOuside        = 1,
		TraceBidirectional = 2,
		MAX                = 3
	};

	/**
	 * Enum HairStrandsCore.EStrandsTexturesMeshType
	 */
	enum class EStrandsTexturesMeshType : uint8_t
	{
		Static   = 0,
		Skeletal = 1,
		MAX      = 2
	};

	/**
	 * Enum HairStrandsCore.EGroomInterpolationQuality
	 */
	enum class EGroomInterpolationQuality : uint8_t
	{
		Low     = 0,
		Medium  = 1,
		High    = 2,
		Unknown = 3,
		MAX     = 4
	};

	/**
	 * Enum HairStrandsCore.EGroomInterpolationWeight
	 */
	enum class EGroomInterpolationWeight : uint8_t
	{
		Parametric = 0,
		Root       = 1,
		Index      = 2,
		Unknown    = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HairStrandsCore.GroomConversionSettings
	 * Size -> 0x0030
	 */
	struct FGroomConversionSettings
	{
	public:
		struct FVector                                             Rotation;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomCacheImportSettings
	 * Size -> 0x0068
	 */
	struct FGroomCacheImportSettings
	{
	public:
		bool                                                       bImportGroomCache;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomCacheImportType                                      ImportType;                                              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HICR[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FrameStart;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameEnd;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipEmptyFrames;                                        // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportGroomAsset;                                       // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKNP[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     GroomAsset;                                              // 0x0010(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideConversionSettings;                             // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB6E[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGroomConversionSettings                            ConversionSettings;                                      // 0x0038(0x0030) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupInfo
	 * Size -> 0x0028
	 */
	struct FHairGroupInfo
	{
	public:
		int32_t                                                    GroupID;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GroupName;                                               // 0x0004(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCurves;                                               // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumGuides;                                               // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCurveVertices;                                        // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumGuideVertices;                                        // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCurveLength;                                          // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxImportedWidth;                                        // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GroupCardsID;                                            // 0x0024(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
	 * Size -> 0x0004 (FullSize[0x002C] - InheritedSize[0x0028])
	 */
	struct FHairGroupInfoWithVisibility : public FHairGroupInfo
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4TM[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGeometrySettings
	 * Size -> 0x000C
	 */
	struct FHairGeometrySettings
	{
	public:
		float                                                      HairWidth;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairRootScale;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairTipScale;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairShadowSettings
	 * Size -> 0x000C
	 */
	struct FHairShadowSettings
	{
	public:
		float                                                      HairShadowDensity;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairRaytracingRadiusScale;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHairRaytracingGeometry;                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoxelize;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_603W[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
	 * Size -> 0x0002
	 */
	struct FHairAdvancedRenderingSettings
	{
	public:
		bool                                                       bUseStableRasterization;                                 // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScatterSceneLighting;                                   // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsRendering
	 * Size -> 0x0030
	 */
	struct FHairGroupsRendering
	{
	public:
		class FName                                                MaterialSlotName;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGeometrySettings                               GeometrySettings;                                        // 0x0010(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairShadowSettings                                 ShadowSettings;                                          // 0x001C(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairAdvancedRenderingSettings                      AdvancedSettings;                                        // 0x0028(0x0002) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT1J[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSolverSettings
	 * Size -> 0x0048
	 */
	struct FHairSolverSettings
	{
	public:
		bool                                                       EnableSimulation;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomNiagaraSolvers                                       NiagaraSolver;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0PD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CustomSystem[0x30];                                      // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      GravityPreloading;                                       // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubSteps;                                                // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IterationCount;                                          // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIRI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairExternalForces
	 * Size -> 0x0038
	 */
	struct FHairExternalForces
	{
	public:
		struct FVector                                             GravityVector;                                           // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirDrag;                                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CPK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AirVelocity;                                             // 0x0020(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairBendConstraint
	 * Size -> 0x0098
	 */
	struct FHairBendConstraint
	{
	public:
		bool                                                       SolveBend;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectBend;                                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKP4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BendDamping;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BendStiffness;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSJM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  BendScale;                                               // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairStretchConstraint
	 * Size -> 0x0098
	 */
	struct FHairStretchConstraint
	{
	public:
		bool                                                       SolveStretch;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectStretch;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYQ2[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchDamping;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchStiffness;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16QO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  StretchScale;                                            // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCollisionConstraint
	 * Size -> 0x00A8
	 */
	struct FHairCollisionConstraint
	{
	public:
		bool                                                       SolveCollision;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectCollision;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX4A[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticFriction;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KineticFriction;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsViscosity;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          GridDimension;                                           // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  RadiusScale;                                             // 0x0020(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairMaterialConstraints
	 * Size -> 0x01D8
	 */
	struct FHairMaterialConstraints
	{
	public:
		struct FHairBendConstraint                                 BendConstraint;                                          // 0x0000(0x0098) Edit, NativeAccessSpecifierPublic
		struct FHairStretchConstraint                              StretchConstraint;                                       // 0x0098(0x0098) Edit, NativeAccessSpecifierPublic
		struct FHairCollisionConstraint                            CollisionConstraint;                                     // 0x0130(0x00A8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairStrandsParameters
	 * Size -> 0x0098
	 */
	struct FHairStrandsParameters
	{
	public:
		EGroomStrandsSize                                          StrandsSize;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVV7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrandsDensity;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsSmoothing;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsThickness;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ThicknessScale;                                          // 0x0010(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsPhysics
	 * Size -> 0x02F0
	 */
	struct FHairGroupsPhysics
	{
	public:
		struct FHairSolverSettings                                 SolverSettings;                                          // 0x0000(0x0048) Edit, NativeAccessSpecifierPublic
		struct FHairExternalForces                                 ExternalForces;                                          // 0x0048(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairMaterialConstraints                            MaterialConstraints;                                     // 0x0080(0x01D8) Edit, NativeAccessSpecifierPublic
		struct FHairStrandsParameters                              StrandsParameters;                                       // 0x0258(0x0098) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairDecimationSettings
	 * Size -> 0x0008
	 */
	struct FHairDecimationSettings
	{
	public:
		float                                                      CurveDecimation;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertexDecimation;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairInterpolationSettings
	 * Size -> 0x000C
	 */
	struct FHairInterpolationSettings
	{
	public:
		bool                                                       bOverrideGuides;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISV3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairToGuideDensity;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairInterpolationQuality                                  InterpolationQuality;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairInterpolationWeight                                   InterpolationDistance;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomizeGuide;                                         // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUniqueGuide;                                         // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairDeformationSettings
	 * Size -> 0x000C
	 */
	struct FHairDeformationSettings
	{
	public:
		bool                                                       bCanEditRigging;                                         // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRigging;                                          // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y48[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumCurves;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPoints;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsInterpolation
	 * Size -> 0x0020
	 */
	struct FHairGroupsInterpolation
	{
	public:
		struct FHairDecimationSettings                             DecimationSettings;                                      // 0x0000(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairInterpolationSettings                          InterpolationSettings;                                   // 0x0008(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairDeformationSettings                            RiggingSettings;                                         // 0x0014(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairLODSettings
	 * Size -> 0x001C
	 */
	struct FHairLODSettings
	{
	public:
		float                                                      CurveDecimation;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VertexDecimation;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularThreshold;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScreenSize;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThicknessScale;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomGeometryType                                         GeometryType;                                            // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomBindingType                                          BindingType;                                             // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomOverrideType                                         Simulation;                                              // 0x0017(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomOverrideType                                         GlobalInterpolation;                                     // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOF4[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsLOD
	 * Size -> 0x0018
	 */
	struct FHairGroupsLOD
	{
	public:
		TArray<struct FHairLODSettings>                            LODs;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ClusterWorldSize;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterScreenSizeScale;                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCardsClusterSettings
	 * Size -> 0x0008
	 */
	struct FHairCardsClusterSettings
	{
	public:
		float                                                      ClusterDecimation;                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairCardsClusterType                                      Type;                                                    // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGuide;                                               // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2TD[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCardsGeometrySettings
	 * Size -> 0x001C
	 */
	struct FHairCardsGeometrySettings
	{
	public:
		EHairCardsGenerationType                                   GenerationType;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF6X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CardsCount;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairCardsClusterType                                      ClusterType;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFJB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSegmentLength;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularThreshold;                                        // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCardsLength;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCardsLength;                                          // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairCardsTextureSettings
	 * Size -> 0x0010
	 */
	struct FHairCardsTextureSettings
	{
	public:
		int32_t                                                    AtlasMaxResolution;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PixelPerCentimeters;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LengthTextureCount;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DensityTextureCount;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsProceduralCards
	 * Size -> 0x0038
	 */
	struct FHairGroupsProceduralCards
	{
	public:
		struct FHairCardsClusterSettings                           ClusterSettings;                                         // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FHairCardsGeometrySettings                          GeometrySettings;                                        // 0x0008(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairCardsTextureSettings                           TextureSettings;                                         // 0x0024(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupCardsTextures
	 * Size -> 0x0038
	 */
	struct FHairGroupCardsTextures
	{
	public:
		class UTexture2D*                                          DepthTexture;                                            // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CoverageTexture;                                         // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TangentTexture;                                          // 0x0010(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AttributeTexture;                                        // 0x0018(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          AuxilaryDataTexture;                                     // 0x0020(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MaterialTexture;                                         // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FOU[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupCardsInfo
	 * Size -> 0x0008
	 */
	struct FHairGroupCardsInfo
	{
	public:
		int32_t                                                    NumCards;                                                // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCardVertices;                                         // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
	 * Size -> 0x00C8
	 */
	struct FHairGroupsCardsSourceDescription
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHairCardsSourceType                                       SourceType;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MB60[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         ProceduralMesh;                                          // 0x0018(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProceduralMeshKey;                                       // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ImportedMesh;                                            // 0x0030(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupsProceduralCards                          ProceduralSettings;                                      // 0x0038(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FHairGroupCardsTextures                             Textures;                                                // 0x0070(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    GroupIndex;                                              // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODIndex;                                                // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupCardsInfo                                 CardsInfo;                                               // 0x00B0(0x0008) Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ImportedMeshKey;                                         // 0x00B8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
	 * Size -> 0x0068
	 */
	struct FHairGroupsMeshesSourceDescription
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ImportedMesh;                                            // 0x0010(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHairGroupCardsTextures                             Textures;                                                // 0x0018(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    GroupIndex;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODIndex;                                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImportedMeshKey;                                         // 0x0058(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupsMaterial
	 * Size -> 0x0010
	 */
	struct FHairGroupsMaterial
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.GoomBindingGroupInfo
	 * Size -> 0x0010
	 */
	struct FGoomBindingGroupInfo
	{
	public:
		int32_t                                                    RenRootCount;                                            // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenLODCount;                                             // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimRootCount;                                            // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimLODCount;                                             // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomAnimationInfo
	 * Size -> 0x0020
	 */
	struct FGroomAnimationInfo
	{
	public:
		uint32_t                                                   NumFrames;                                               // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsPerFrame;                                         // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartFrame;                                              // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndFrame;                                                // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomCacheAttributes                                      Attributes;                                              // 0x001C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AGL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomCacheInfo
	 * Size -> 0x0028
	 */
	struct FGroomCacheInfo
	{
	public:
		int32_t                                                    Version;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomCacheType                                            Type;                                                    // 0x0004(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZGG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGroomAnimationInfo                                 AnimationInfo;                                           // 0x0008(0x0020) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSimulationSetup
	 * Size -> 0x0028
	 */
	struct FHairSimulationSetup
	{
	public:
		bool                                                       bResetSimulation;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugSimulation;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalSimulation;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQHI[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearVelocityScale;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocityScale;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TIH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocalBone;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportDistance;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V85W[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSimulationSolver
	 * Size -> 0x0001
	 */
	struct FHairSimulationSolver
	{
	public:
		bool                                                       bEnableSimulation;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSimulationForces
	 * Size -> 0x0038
	 */
	struct FHairSimulationForces
	{
	public:
		struct FVector                                             GravityVector;                                           // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AirDrag;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6SG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AirVelocity;                                             // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSimulationConstraints
	 * Size -> 0x0020
	 */
	struct FHairSimulationConstraints
	{
	public:
		float                                                      BendDamping;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BendStiffness;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchDamping;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchStiffness;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticFriction;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KineticFriction;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrandsViscosity;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairSimulationSettings
	 * Size -> 0x0090
	 */
	struct FHairSimulationSettings
	{
	public:
		bool                                                       bOverrideSettings;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OZE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHairSimulationSetup                                SimulationSetup;                                         // 0x0008(0x0028) Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic
		struct FHairSimulationSolver                               SolverSettings;                                          // 0x0030(0x0001) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CM4W[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHairSimulationForces                               ExternalForces;                                          // 0x0038(0x0038) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FHairSimulationConstraints                          MaterialConstraints;                                     // 0x0070(0x0020) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.HairGroupDesc
	 * Size -> 0x0040
	 */
	struct FHairGroupDesc
	{
	public:
		float                                                      HairLength;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairWidth;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairWidth_Override;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5AX7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairRootScale;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairRootScale_Override;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J08L[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairTipScale;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairTipScale_Override;                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3UJ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairShadowDensity;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairShadowDensity_Override;                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKHK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairRaytracingRadiusScale;                               // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairRaytracingRadiusScale_Override;                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHairRaytracingGeometry;                              // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHairRaytracingGeometry_Override;                     // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9A2J[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LODBias;                                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStableRasterization;                                 // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStableRasterization_Override;                        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScatterSceneLighting;                                   // 0x0032(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScatterSceneLighting_Override;                          // 0x0033(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportVoxelization;                                    // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportVoxelization_Override;                           // 0x0035(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK0Z[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairLengthScale;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HairLengthScale_Override;                                // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJY5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.FollicleMaskOptions
	 * Size -> 0x0010
	 */
	struct FFollicleMaskOptions
	{
	public:
		class UGroomAsset*                                         Groom;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFollicleMaskChannel                                       Channel;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGX1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomHairGroupPreview
	 * Size -> 0x003C
	 */
	struct FGroomHairGroupPreview
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GroupID;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurveCount;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuideCount;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRootUV;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasClumpID;                                             // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasColor;                                               // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRoughness;                                           // 0x0017(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasAO;                                                  // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasPrecomputedWeights;                                  // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUVA[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHairGroupsInterpolation                            InterpolationSettings;                                   // 0x001C(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
	 * Size -> 0x0020
	 */
	struct FMovieSceneGroomCacheParams
	{
	public:
		class UGroomCache*                                         GroomCache;                                              // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        FirstLoopStartFrameOffset;                               // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x000C(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndFrameOffset;                                          // 0x0010(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse : 1;                                            // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTOX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HairStrandsCore.GroomBuildSettings
	 * Size -> 0x000C
	 */
	struct FGroomBuildSettings
	{
	public:
		bool                                                       bOverrideGuides;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9KY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HairToGuideDensity;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomInterpolationQuality                                 InterpolationQuality;                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroomInterpolationWeight                                  InterpolationDistance;                                   // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomizeGuide;                                         // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseUniqueGuide;                                         // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
	{
	public:
		struct FFrameNumber                                        SectionStartTime;                                        // 0x0020(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndTime;                                          // 0x0024(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneGroomCacheSectionTemplateParameters      Params;                                                  // 0x0020(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
