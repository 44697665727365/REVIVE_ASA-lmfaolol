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
	 * Enum MeshModelingToolsExp.EBakeNormalSpace
	 */
	enum class EBakeNormalSpace : uint8_t
	{
		Tangent = 0,
		Object  = 1,
		MAX     = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeCurvatureTypeMode
	 */
	enum class EBakeCurvatureTypeMode : uint8_t
	{
		MeanAverage = 0,
		Max         = 1,
		Min         = 2,
		Gaussian    = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeCurvatureColorMode
	 */
	enum class EBakeCurvatureColorMode : uint8_t
	{
		Grayscale    = 0,
		RedBlue      = 1,
		RedGreenBlue = 2,
		MAX          = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeCurvatureClampMode
	 */
	enum class EBakeCurvatureClampMode : uint8_t
	{
		None         = 0,
		OnlyPositive = 1,
		OnlyNegative = 2,
		MAX          = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EExtrudeMeshSelectionInteractionMode
	 */
	enum class EExtrudeMeshSelectionInteractionMode : uint8_t
	{
		Interactive = 0,
		Fixed       = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EExtrudeMeshSelectionRegionModifierMode
	 */
	enum class EExtrudeMeshSelectionRegionModifierMode : uint8_t
	{
		OriginalShape  = 0,
		FlattenToPlane = 1,
		RaycastToPlane = 2,
		MAX            = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EPlaneBrushSideMode
	 */
	enum class EPlaneBrushSideMode : uint8_t
	{
		BothSides   = 0,
		PushDown    = 1,
		PullTowards = 2,
		MAX         = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EOffsetMeshSelectionInteractionMode
	 */
	enum class EOffsetMeshSelectionInteractionMode : uint8_t
	{
		Fixed = 0,
		MAX   = 1
	};

	/**
	 * Enum MeshModelingToolsExp.EOffsetMeshSelectionDirectionMode
	 */
	enum class EOffsetMeshSelectionDirectionMode : uint8_t
	{
		VertexNormals = 0,
		FaceNormals   = 1,
		ConstantWidth = 2,
		MAX           = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EPatternToolShape
	 */
	enum class EPatternToolShape : uint8_t
	{
		Line   = 0,
		Grid   = 1,
		Circle = 2,
		MAX    = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EPatternToolSingleAxis
	 */
	enum class EPatternToolSingleAxis : uint8_t
	{
		XAxis = 0,
		YAxis = 1,
		ZAxis = 2,
		MAX   = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EPatternToolSinglePlane
	 */
	enum class EPatternToolSinglePlane : uint8_t
	{
		XYPlane = 0,
		XZPlane = 1,
		YZPlane = 2,
		MAX     = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EPatternToolAxisSpacingMode
	 */
	enum class EPatternToolAxisSpacingMode : uint8_t
	{
		ByCount  = 0,
		StepSize = 1,
		Packed   = 2,
		MAX      = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshBoundaryConstraint
	 */
	enum class EMeshBoundaryConstraint : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		MAX    = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EGroupBoundaryConstraint
	 */
	enum class EGroupBoundaryConstraint : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		Ignore = 3,
		MAX    = 4
	};

	/**
	 * Enum MeshModelingToolsExp.EMaterialBoundaryConstraint
	 */
	enum class EMaterialBoundaryConstraint : uint8_t
	{
		Fixed  = 0,
		Refine = 1,
		Free   = 2,
		Ignore = 3,
		MAX    = 4
	};

	/**
	 * Enum MeshModelingToolsExp.EAlignObjectsAlignTypes
	 */
	enum class EAlignObjectsAlignTypes : uint8_t
	{
		Pivots        = 0,
		BoundingBoxes = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EAlignObjectsAlignToOptions
	 */
	enum class EAlignObjectsAlignToOptions : uint8_t
	{
		FirstSelected = 0,
		LastSelected  = 1,
		Combined      = 2,
		MAX           = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EAlignObjectsBoxPoint
	 */
	enum class EAlignObjectsBoxPoint : uint8_t
	{
		Center = 0,
		Bottom = 1,
		Top    = 2,
		Left   = 3,
		Right  = 4,
		Front  = 5,
		Back   = 6,
		Min    = 7,
		Max    = 8
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeMapType
	 */
	enum class EBakeMapType : uint8_t
	{
		None               = 0,
		TangentSpaceNormal = 1,
		ObjectSpaceNormal  = 2,
		FaceNormal         = 3,
		BentNormal         = 4,
		Position           = 5,
		Curvature          = 6,
		AmbientOcclusion   = 7,
		Texture            = 8,
		MultiTexture       = 9,
		VertexColor        = 10,
		MaterialID         = 11,
		All                = 12,
		MAX                = 13
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeVertexOutput
	 */
	enum class EBakeVertexOutput : uint8_t
	{
		RGBA       = 0,
		PerChannel = 1,
		MAX        = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeVertexChannel
	 */
	enum class EBakeVertexChannel : uint8_t
	{
		R    = 0,
		G    = 1,
		B    = 2,
		A    = 3,
		RGBA = 4,
		MAX  = 5
	};

	/**
	 * Enum MeshModelingToolsExp.EBakeScaleMethod
	 */
	enum class EBakeScaleMethod : uint8_t
	{
		BakeFullScale       = 0,
		BakeNonuniformScale = 1,
		DoNotBakeScale      = 2,
		MAX                 = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EConvertToPolygonsMode
	 */
	enum class EConvertToPolygonsMode : uint8_t
	{
		FaceNormalDeviation       = 0,
		FindPolygons              = 1,
		FromUVIslands             = 2,
		FromNormalSeams           = 3,
		FromConnectedTris         = 4,
		FromFurthestPointSampling = 5,
		CopyFromLayer             = 6,
		MAX                       = 7
	};

	/**
	 * Enum MeshModelingToolsExp.ECubeGridToolFaceSelectionMode
	 */
	enum class ECubeGridToolFaceSelectionMode : uint8_t
	{
		OutsideBasedOnNormal  = 0,
		InsideBasedOnNormal   = 1,
		OutsideBasedOnViewRay = 2,
		InsideBasedOnViewRay  = 3,
		MAX                   = 4
	};

	/**
	 * Enum MeshModelingToolsExp.ECubeGridToolAction
	 */
	enum class ECubeGridToolAction : uint8_t
	{
		NoAction          = 0,
		Push              = 1,
		Pull              = 2,
		Flip              = 3,
		SlideForward      = 4,
		SlideBack         = 5,
		DecreaseGridPower = 6,
		IncreaseGridPower = 7,
		CornerMode        = 8,
		ResetFromActor    = 9,
		Done              = 10,
		Cancel            = 11,
		MAX               = 12
	};

	/**
	 * Enum MeshModelingToolsExp.EGroupTopologyDeformationStrategy
	 */
	enum class EGroupTopologyDeformationStrategy : uint8_t
	{
		Linear    = 0,
		Laplacian = 1,
		MAX       = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EWeightScheme
	 */
	enum class EWeightScheme : uint8_t
	{
		Uniform          = 0,
		Umbrella         = 1,
		Valence          = 2,
		MeanValue        = 3,
		Cotangent        = 4,
		ClampedCotangent = 5,
		IDTCotangent     = 6,
		MAX              = 7
	};

	/**
	 * Enum MeshModelingToolsExp.EQuickTransformerMode
	 */
	enum class EQuickTransformerMode : uint8_t
	{
		AxisTranslation = 0,
		AxisRotation    = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EDisplaceMeshToolDisplaceType
	 */
	enum class EDisplaceMeshToolDisplaceType : uint8_t
	{
		Constant        = 0,
		DisplacementMap = 1,
		RandomNoise     = 2,
		PerlinNoise     = 3,
		SineWave        = 4,
		MAX             = 5
	};

	/**
	 * Enum MeshModelingToolsExp.EDisplaceMeshToolSubdivisionType
	 */
	enum class EDisplaceMeshToolSubdivisionType : uint8_t
	{
		Flat        = 0,
		PNTriangles = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EDisplaceMeshToolTriangleSelectionType
	 */
	enum class EDisplaceMeshToolTriangleSelectionType : uint8_t
	{
		None     = 0,
		Material = 1,
		MAX      = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EDisplaceMeshToolChannelType
	 */
	enum class EDisplaceMeshToolChannelType : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		MAX   = 4
	};

	/**
	 * Enum MeshModelingToolsExp.EDrawPolyPathWidthMode
	 */
	enum class EDrawPolyPathWidthMode : uint8_t
	{
		Fixed       = 0,
		Interactive = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EDrawPolyPathRadiusMode
	 */
	enum class EDrawPolyPathRadiusMode : uint8_t
	{
		Fixed       = 0,
		Interactive = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EDrawPolyPathExtrudeMode
	 */
	enum class EDrawPolyPathExtrudeMode : uint8_t
	{
		Flat            = 0,
		Fixed           = 1,
		Interactive     = 2,
		RampFixed       = 3,
		RampInteractive = 4,
		MAX             = 5
	};

	/**
	 * Enum MeshModelingToolsExp.EDrawPolyPathExtrudeDirection
	 */
	enum class EDrawPolyPathExtrudeDirection : uint8_t
	{
		SelectionNormal = 0,
		WorldX          = 1,
		WorldY          = 2,
		WorldZ          = 3,
		LocalX          = 4,
		LocalY          = 5,
		LocalZ          = 6,
		MAX             = 7
	};

	/**
	 * Enum MeshModelingToolsExp.EDynamicMeshSculptBrushType
	 */
	enum class EDynamicMeshSculptBrushType : uint8_t
	{
		Move             = 0,
		PullKelvin       = 1,
		PullSharpKelvin  = 2,
		Smooth           = 3,
		Offset           = 4,
		SculptView       = 5,
		SculptMax        = 6,
		Inflate          = 7,
		ScaleKelvin      = 8,
		Pinch            = 9,
		TwistKelvin      = 10,
		Flatten          = 11,
		Plane            = 12,
		PlaneViewAligned = 13,
		FixedPlane       = 14,
		Resample         = 15,
		LastValue        = 16,
		MAX              = 17
	};

	/**
	 * Enum MeshModelingToolsExp.EEditPivotSnapDragRotationMode
	 */
	enum class EEditPivotSnapDragRotationMode : uint8_t
	{
		Ignore       = 0,
		Align        = 1,
		AlignFlipped = 2,
		LastValue    = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingToolsExp.EEditPivotToolActions
	 */
	enum class EEditPivotToolActions : uint8_t
	{
		NoAction    = 0,
		Center      = 1,
		Bottom      = 2,
		Top         = 3,
		Left        = 4,
		Right       = 5,
		Front       = 6,
		Back        = 7,
		WorldOrigin = 8,
		MAX         = 9
	};

	/**
	 * Enum MeshModelingToolsExp.EHoleFillToolActions
	 */
	enum class EHoleFillToolActions : uint8_t
	{
		NoAction       = 0,
		SelectAll      = 1,
		ClearSelection = 2,
		MAX            = 3
	};

	/**
	 * Enum MeshModelingToolsExp.ELatticeInterpolationType
	 */
	enum class ELatticeInterpolationType : uint8_t
	{
		Linear = 0,
		Cubic  = 1,
		MAX    = 2
	};

	/**
	 * Enum MeshModelingToolsExp.ELatticeDeformerToolAction
	 */
	enum class ELatticeDeformerToolAction : uint8_t
	{
		NoAction         = 0,
		Constrain        = 1,
		ClearConstraints = 2,
		MAX              = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EBrushActionMode
	 */
	enum class EBrushActionMode : uint8_t
	{
		Paint     = 0,
		FloodFill = 1,
		MAX       = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshAttributePaintToolActions
	 */
	enum class EMeshAttributePaintToolActions : uint8_t
	{
		NoAction = 0,
		MAX      = 1
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshGroupPaintInteractionType
	 */
	enum class EMeshGroupPaintInteractionType : uint8_t
	{
		Brush     = 0,
		Fill      = 1,
		GroupFill = 2,
		PolyLasso = 3,
		LastValue = 4,
		MAX       = 5
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshGroupPaintBrushType
	 */
	enum class EMeshGroupPaintBrushType : uint8_t
	{
		Paint     = 0,
		Erase     = 1,
		LastValue = 2,
		MAX       = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshGroupPaintBrushAreaType
	 */
	enum class EMeshGroupPaintBrushAreaType : uint8_t
	{
		Connected  = 0,
		Volumetric = 1,
		MAX        = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshGroupPaintVisibilityType
	 */
	enum class EMeshGroupPaintVisibilityType : uint8_t
	{
		None        = 0,
		FrontFacing = 1,
		Unoccluded  = 2,
		MAX         = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshGroupPaintToolActions
	 */
	enum class EMeshGroupPaintToolActions : uint8_t
	{
		NoAction         = 0,
		ClearFrozen      = 1,
		FreezeCurrent    = 2,
		FreezeOthers     = 3,
		GrowCurrent      = 4,
		ShrinkCurrent    = 5,
		ClearCurrent     = 6,
		FloodFillCurrent = 7,
		ClearAll         = 8,
		MAX              = 9
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshInspectorToolDrawIndexMode
	 */
	enum class EMeshInspectorToolDrawIndexMode : uint8_t
	{
		None       = 0,
		VertexID   = 1,
		TriangleID = 2,
		GroupID    = 3,
		EdgeID     = 4,
		MAX        = 5
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshInspectorMaterialMode
	 */
	enum class EMeshInspectorMaterialMode : uint8_t
	{
		Original      = 0,
		FlatShaded    = 1,
		Grey          = 2,
		Transparent   = 3,
		TangentNormal = 4,
		VertexColor   = 5,
		GroupColor    = 6,
		Checkerboard  = 7,
		Override      = 8,
		MAX           = 9
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshSelectionToolActions
	 */
	enum class EMeshSelectionToolActions : uint8_t
	{
		NoAction                         = 0,
		SelectAll                        = 1,
		SelectAllByMaterial              = 2,
		ClearSelection                   = 3,
		InvertSelection                  = 4,
		GrowSelection                    = 5,
		ShrinkSelection                  = 6,
		ExpandToConnected                = 7,
		SelectLargestComponentByTriCount = 8,
		SelectLargestComponentByArea     = 9,
		OptimizeSelection                = 10,
		DeleteSelected                   = 11,
		DisconnectSelected               = 12,
		SeparateSelected                 = 13,
		DuplicateSelected                = 14,
		FlipSelected                     = 15,
		CreateGroup                      = 16,
		SmoothBoundary                   = 17,
		CycleSelectionMode               = 18,
		CycleViewMode                    = 19,
		MAX                              = 20
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshSelectionToolPrimaryMode
	 */
	enum class EMeshSelectionToolPrimaryMode : uint8_t
	{
		Brush           = 0,
		VolumetricBrush = 1,
		AngleFiltered   = 2,
		Visible         = 3,
		AllConnected    = 4,
		AllInGroup      = 5,
		ByMaterial      = 6,
		ByMaterialAll   = 7,
		ByUVIsland      = 8,
		AllWithinAngle  = 9,
		MAX             = 10
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshFacesColorMode
	 */
	enum class EMeshFacesColorMode : uint8_t
	{
		None         = 0,
		ByGroup      = 1,
		ByMaterialID = 2,
		ByUVIsland   = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingToolsExp.ENonlinearOperationType
	 */
	enum class ENonlinearOperationType : uint8_t
	{
		Bend  = 0,
		Flare = 1,
		Twist = 2,
		MAX   = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EFlareProfileType
	 */
	enum class EFlareProfileType : uint8_t
	{
		SinMode        = 0,
		SinSquaredMode = 1,
		TriangleMode   = 2,
		MAX            = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshSpaceDeformerToolAction
	 */
	enum class EMeshSpaceDeformerToolAction : uint8_t
	{
		NoAction      = 0,
		ShiftToCenter = 1,
		MAX           = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshVertexSculptBrushType
	 */
	enum class EMeshVertexSculptBrushType : uint8_t
	{
		Move             = 0,
		PullKelvin       = 1,
		PullSharpKelvin  = 2,
		Smooth           = 3,
		SmoothFill       = 4,
		Offset           = 5,
		SculptView       = 6,
		SculptMax        = 7,
		Inflate          = 8,
		ScaleKelvin      = 9,
		Pinch            = 10,
		TwistKelvin      = 11,
		Flatten          = 12,
		Plane            = 13,
		PlaneViewAligned = 14,
		FixedPlane       = 15,
		LastValue        = 16,
		MAX              = 17
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshVertexSculptBrushFilterType
	 */
	enum class EMeshVertexSculptBrushFilterType : uint8_t
	{
		None      = 0,
		Component = 1,
		PolyGroup = 2,
		MAX       = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EMirrorSaveMode
	 */
	enum class EMirrorSaveMode : uint8_t
	{
		UpdateAssets    = 0,
		CreateNewAssets = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMirrorOperationMode
	 */
	enum class EMirrorOperationMode : uint8_t
	{
		MirrorAndAppend = 0,
		MirrorExisting  = 1,
		MAX             = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMirrorCtrlClickBehavior
	 */
	enum class EMirrorCtrlClickBehavior : uint8_t
	{
		Reposition            = 0,
		RepositionAndReorient = 1,
		MAX                   = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMirrorToolAction
	 */
	enum class EMirrorToolAction : uint8_t
	{
		NoAction      = 0,
		ShiftToCenter = 1,
		Left          = 2,
		Right         = 3,
		Up            = 4,
		Down          = 5,
		Forward       = 6,
		Backward      = 7,
		MAX           = 8
	};

	/**
	 * Enum MeshModelingToolsExp.EOffsetMeshToolOffsetType
	 */
	enum class EOffsetMeshToolOffsetType : uint8_t
	{
		Iterative = 0,
		Implicit  = 1,
		MAX       = 2
	};

	/**
	 * Enum MeshModelingToolsExp.ECollisionGeometryMode
	 */
	enum class ECollisionGeometryMode : uint8_t
	{
		Default            = 0,
		SimpleAndComplex   = 1,
		UseSimpleAsComplex = 2,
		UseComplexAsSimple = 3,
		MAX                = 4
	};

	/**
	 * Enum MeshModelingToolsExp.EExtractCollisionOutputType
	 */
	enum class EExtractCollisionOutputType : uint8_t
	{
		Simple  = 0,
		Complex = 1,
		MAX     = 2
	};

	/**
	 * Enum MeshModelingToolsExp.ESetCollisionGeometryInputMode
	 */
	enum class ESetCollisionGeometryInputMode : uint8_t
	{
		CombineAll       = 0,
		PerInputObject   = 1,
		PerMeshComponent = 2,
		PerMeshGroup     = 3,
		MAX              = 4
	};

	/**
	 * Enum MeshModelingToolsExp.ECollisionGeometryType
	 */
	enum class ECollisionGeometryType : uint8_t
	{
		KeepExisting   = 0,
		AlignedBoxes   = 1,
		OrientedBoxes  = 2,
		MinimalSpheres = 3,
		Capsules       = 4,
		ConvexHulls    = 5,
		SweptHulls     = 6,
		LevelSets      = 7,
		MinVolume      = 8,
		None           = 9,
		MAX            = 10
	};

	/**
	 * Enum MeshModelingToolsExp.EProjectedHullAxis
	 */
	enum class EProjectedHullAxis : uint8_t
	{
		X                    = 0,
		Y                    = 1,
		Z                    = 2,
		SmallestBoxDimension = 3,
		SmallestVolume       = 4,
		MAX                  = 5
	};

	/**
	 * Enum MeshModelingToolsExp.EPlaneCutToolActions
	 */
	enum class EPlaneCutToolActions : uint8_t
	{
		NoAction  = 0,
		Cut       = 1,
		FlipPlane = 2,
		MAX       = 3
	};

	/**
	 * Enum MeshModelingToolsExp.EOcclusionTriangleSamplingUIMode
	 */
	enum class EOcclusionTriangleSamplingUIMode : uint8_t
	{
		Vertices             = 0,
		VerticesAndCentroids = 1,
		MAX                  = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EOcclusionCalculationUIMode
	 */
	enum class EOcclusionCalculationUIMode : uint8_t
	{
		GeneralizedWindingNumber = 0,
		RaycastOcclusionSamples  = 1,
		MAX                      = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EOccludedAction
	 */
	enum class EOccludedAction : uint8_t
	{
		Remove      = 0,
		SetNewGroup = 1,
		MAX         = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EBrushToolSizeType
	 */
	enum class EBrushToolSizeType : uint8_t
	{
		Adaptive = 0,
		World    = 1,
		MAX      = 2
	};

	/**
	 * Enum MeshModelingToolsExp.EMeshSculptFalloffType
	 */
	enum class EMeshSculptFalloffType : uint8_t
	{
		Smooth     = 0,
		Linear     = 1,
		Inverse    = 2,
		Round      = 3,
		BoxSmooth  = 4,
		BoxLinear  = 5,
		BoxInverse = 6,
		BoxRound   = 7,
		LastValue  = 8,
		MAX        = 9
	};

	/**
	 * Enum MeshModelingToolsExp.ESkinWeightsBindType
	 */
	enum class ESkinWeightsBindType : uint8_t
	{
		DirectDistance = 0,
		GeodesicVoxel  = 1,
		MAX            = 2
	};

	/**
	 * Enum MeshModelingToolsExp.ESmoothMeshToolSmoothType
	 */
	enum class ESmoothMeshToolSmoothType : uint8_t
	{
		Iterative = 0,
		Implicit  = 1,
		Diffusion = 2,
		MAX       = 3
	};

	/**
	 * Enum MeshModelingToolsExp.ETransformMeshesTransformMode
	 */
	enum class ETransformMeshesTransformMode : uint8_t
	{
		SharedGizmo      = 0,
		SharedGizmoLocal = 1,
		PerObjectGizmo   = 2,
		LastValue        = 3,
		MAX              = 4
	};

	/**
	 * Enum MeshModelingToolsExp.ETransformMeshesSnapDragSource
	 */
	enum class ETransformMeshesSnapDragSource : uint8_t
	{
		ClickPoint = 0,
		Pivot      = 1,
		LastValue  = 2,
		MAX        = 3
	};

	/**
	 * Enum MeshModelingToolsExp.ETransformMeshesSnapDragRotationMode
	 */
	enum class ETransformMeshesSnapDragRotationMode : uint8_t
	{
		Ignore       = 0,
		Align        = 1,
		AlignFlipped = 2,
		LastValue    = 3,
		MAX          = 4
	};

	/**
	 * Enum MeshModelingToolsExp.EVoxelBlendOperation
	 */
	enum class EVoxelBlendOperation : uint8_t
	{
		Union    = 0,
		Subtract = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MeshModelingToolsExp.BakeMultiMeshDetailProperties
	 * Size -> 0x0018
	 */
	struct FBakeMultiMeshDetailProperties
	{
	public:
		class UStaticMesh*                                         SourceMesh;                                              // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SourceTexture;                                           // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SourceTextureUVLayer;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9HQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.PerlinLayerProperties
	 * Size -> 0x0008
	 */
	struct FPerlinLayerProperties
	{
	public:
		float                                                      Frequency;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.BrushToolRadius
	 * Size -> 0x0014
	 */
	struct FBrushToolRadius
	{
	public:
		EBrushToolSizeType                                         SizeType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ23[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdaptiveSize;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldRadius;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQQG[0x8];                                   // 0x000C(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.EditPivotTarget
	 * Size -> 0x0010
	 */
	struct FEditPivotTarget
	{
	public:
		class UTransformProxy*                                     TransformProxy;                                          // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCombinedTransformGizmo*                             TransformGizmo;                                          // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.PhysicsSphereData
	 * Size -> 0x00A0
	 */
	struct FPhysicsSphereData
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GSG[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0070(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.PhysicsBoxData
	 * Size -> 0x00B0
	 */
	struct FPhysicsBoxData
	{
	public:
		struct FVector                                             Dimensions;                                              // 0x0000(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DUJ[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0080(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.PhysicsCapsuleData
	 * Size -> 0x00A0
	 */
	struct FPhysicsCapsuleData
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W77[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0070(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.PhysicsConvexData
	 * Size -> 0x0038
	 */
	struct FPhysicsConvexData
	{
	public:
		int32_t                                                    NumVertices;                                             // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFaces;                                                // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKShapeElem                                         Element;                                                 // 0x0008(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.PhysicsLevelSetData
	 * Size -> 0x0030
	 */
	struct FPhysicsLevelSetData
	{
	public:
		struct FKShapeElem                                         Element;                                                 // 0x0000(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MeshModelingToolsExp.TransformMeshesTarget
	 * Size -> 0x0010
	 */
	struct FTransformMeshesTarget
	{
	public:
		class UTransformProxy*                                     TransformProxy;                                          // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCombinedTransformGizmo*                             TransformGizmo;                                          // 0x0008(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
