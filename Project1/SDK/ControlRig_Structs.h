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
	 * Enum ControlRig.ERigElementType
	 */
	enum class ERigElementType : uint8_t
	{
		None                          = 0,
		Bone                          = 1,
		Null                          = 2,
		Space                         = 3,
		Control                       = 4,
		Curve                         = 5,
		RigidBody                     = 6,
		Reference                     = 7,
		Last                          = 8,
		All                           = 9,
		ToResetAfterConstructionEvent = 10,
		MAX                           = 11
	};

	/**
	 * Enum ControlRig.ERigControlTransformChannel
	 */
	enum class ERigControlTransformChannel : uint8_t
	{
		TranslationX = 0,
		TranslationY = 1,
		TranslationZ = 2,
		Pitch        = 3,
		Yaw          = 4,
		Roll         = 5,
		ScaleX       = 6,
		ScaleY       = 7,
		ScaleZ       = 8,
		MAX          = 9
	};

	/**
	 * Enum ControlRig.ERigControlVisibility
	 */
	enum class ERigControlVisibility : uint8_t
	{
		UserDefined      = 0,
		BasedOnSelection = 1,
		MAX              = 2
	};

	/**
	 * Enum ControlRig.ERigControlAxis
	 */
	enum class ERigControlAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum ControlRig.ERigControlType
	 */
	enum class ERigControlType : uint8_t
	{
		Bool             = 0,
		Float            = 1,
		Integer          = 2,
		Vector2D         = 3,
		Position         = 4,
		Scale            = 5,
		Rotator          = 6,
		Transform        = 7,
		TransformNoScale = 8,
		EulerTransform   = 9,
		MAX              = 10
	};

	/**
	 * Enum ControlRig.ERigControlAnimationType
	 */
	enum class ERigControlAnimationType : uint8_t
	{
		AnimationControl = 0,
		AnimationChannel = 1,
		ProxyControl     = 2,
		VisualCue        = 3,
		MAX              = 4
	};

	/**
	 * Enum ControlRig.ERigExecutionType
	 */
	enum class ERigExecutionType : uint8_t
	{
		Runtime = 0,
		Editing = 1,
		Max     = 2
	};

	/**
	 * Enum ControlRig.ERigTransformStackEntryType
	 */
	enum class ERigTransformStackEntryType : uint8_t
	{
		TransformPose = 0,
		ControlOffset = 1,
		ControlShape  = 2,
		CurveValue    = 3,
		MAX           = 4
	};

	/**
	 * Enum ControlRig.ERigTransformType
	 */
	enum class ERigTransformType : uint8_t
	{
		InitialLocal      = 0,
		CurrentLocal      = 1,
		InitialGlobal     = 2,
		CurrentGlobal     = 3,
		NumTransformTypes = 4,
		MAX               = 5
	};

	/**
	 * Enum ControlRig.EControlRigInteractionType
	 */
	enum class EControlRigInteractionType : uint8_t
	{
		None      = 0,
		Translate = 1,
		Rotate    = 2,
		Scale     = 3,
		All       = 4,
		MAX       = 5
	};

	/**
	 * Enum ControlRig.EControlRigVectorKind
	 */
	enum class EControlRigVectorKind : uint8_t
	{
		Direction = 0,
		Location  = 1,
		MAX       = 2
	};

	/**
	 * Enum ControlRig.EControlRigComponentSpace
	 */
	enum class EControlRigComponentSpace : uint8_t
	{
		WorldSpace     = 0,
		ActorSpace     = 1,
		ComponentSpace = 2,
		RigSpace       = 3,
		LocalSpace     = 4,
		Max            = 5
	};

	/**
	 * Enum ControlRig.EControlRigComponentMapDirection
	 */
	enum class EControlRigComponentMapDirection : uint8_t
	{
		Input  = 0,
		Output = 1,
		MAX    = 2
	};

	/**
	 * Enum ControlRig.ETransformSpaceMode
	 */
	enum class ETransformSpaceMode : uint8_t
	{
		LocalSpace  = 0,
		GlobalSpace = 1,
		BaseSpace   = 2,
		BaseJoint   = 3,
		Max         = 4
	};

	/**
	 * Enum ControlRig.ETransformGetterType
	 */
	enum class ETransformGetterType : uint8_t
	{
		Initial = 0,
		Current = 1,
		Max     = 2
	};

	/**
	 * Enum ControlRig.EControlRigTestDataPlaybackMode
	 */
	enum class EControlRigTestDataPlaybackMode : uint8_t
	{
		Live         = 0,
		ReplayInputs = 1,
		GroundTruth  = 2,
		Max          = 3
	};

	/**
	 * Enum ControlRig.ECRSimConstraintType
	 */
	enum class ECRSimConstraintType : uint8_t
	{
		Distance      = 0,
		DistanceFromA = 1,
		DistanceFromB = 2,
		Plane         = 3,
		MAX           = 4
	};

	/**
	 * Enum ControlRig.ECRSimPointForceType
	 */
	enum class ECRSimPointForceType : uint8_t
	{
		Direction = 0,
		MAX       = 1
	};

	/**
	 * Enum ControlRig.ECRSimSoftCollisionType
	 */
	enum class ECRSimSoftCollisionType : uint8_t
	{
		Plane  = 0,
		Sphere = 1,
		Cone   = 2,
		MAX    = 3
	};

	/**
	 * Enum ControlRig.EControlRigFKRigExecuteMode
	 */
	enum class EControlRigFKRigExecuteMode : uint8_t
	{
		Replace  = 0,
		Additive = 1,
		Direct   = 2,
		Max      = 3
	};

	/**
	 * Enum ControlRig.ERigBoneType
	 */
	enum class ERigBoneType : uint8_t
	{
		Imported = 0,
		User     = 1,
		MAX      = 2
	};

	/**
	 * Enum ControlRig.ERigMetadataType
	 */
	enum class ERigMetadataType : uint8_t
	{
		Bool               = 0,
		BoolArray          = 1,
		Float              = 2,
		FloatArray         = 3,
		Int32              = 4,
		Int32Array         = 5,
		Name               = 6,
		NameArray          = 7,
		Vector             = 8,
		VectorArray        = 9,
		Rotator            = 10,
		RotatorArray       = 11,
		Quat               = 12,
		QuatArray          = 13,
		Transform          = 14,
		TransformArray     = 15,
		LinearColor        = 16,
		LinearColorArray   = 17,
		RigElementKey      = 18,
		RigElementKeyArray = 19,
		Invalid            = 20,
		MAX                = 21
	};

	/**
	 * Enum ControlRig.ERigHierarchyNotification
	 */
	enum class ERigHierarchyNotification : uint8_t
	{
		ElementAdded                 = 0,
		ElementRemoved               = 1,
		ElementRenamed               = 2,
		ElementSelected              = 3,
		ElementDeselected            = 4,
		ParentChanged                = 5,
		HierarchyReset               = 6,
		ControlSettingChanged        = 7,
		ControlVisibilityChanged     = 8,
		ControlDrivenListChanged     = 9,
		ControlShapeTransformChanged = 10,
		ParentWeightsChanged         = 11,
		InteractionBracketOpened     = 12,
		InteractionBracketClosed     = 13,
		ElementReordered             = 14,
		Max                          = 15
	};

	/**
	 * Enum ControlRig.ERigEvent
	 */
	enum class ERigEvent : uint8_t
	{
		None             = 0,
		RequestAutoKey   = 1,
		OpenUndoBracket  = 2,
		CloseUndoBracket = 3,
		Max              = 4
	};

	/**
	 * Enum ControlRig.EControlRigSetKey
	 */
	enum class EControlRigSetKey : uint8_t
	{
		DoNotCare = 0,
		Always    = 1,
		Never     = 2,
		MAX       = 3
	};

	/**
	 * Enum ControlRig.ERigControlValueType
	 */
	enum class ERigControlValueType : uint8_t
	{
		Initial = 0,
		Current = 1,
		Minimum = 2,
		Maximum = 3,
		MAX     = 4
	};

	/**
	 * Enum ControlRig.ERigSpaceType
	 */
	enum class ERigSpaceType : uint8_t
	{
		Global  = 0,
		Bone    = 1,
		Control = 2,
		Space   = 3,
		MAX     = 4
	};

	/**
	 * Enum ControlRig.EMovieSceneControlRigSpaceType
	 */
	enum class EMovieSceneControlRigSpaceType : uint8_t
	{
		Parent     = 0,
		World      = 1,
		ControlRig = 2,
		MAX        = 3
	};

	/**
	 * Enum ControlRig.EControlRigDrawHierarchyMode
	 */
	enum class EControlRigDrawHierarchyMode : uint8_t
	{
		Axes = 0,
		Max  = 1
	};

	/**
	 * Enum ControlRig.EAimMode
	 */
	enum class EAimMode : uint8_t
	{
		AimAtTarget    = 0,
		OrientToTarget = 1,
		MAX            = 2
	};

	/**
	 * Enum ControlRig.EApplyTransformMode
	 */
	enum class EApplyTransformMode : uint8_t
	{
		Override = 0,
		Additive = 1,
		Max      = 2
	};

	/**
	 * Enum ControlRig.ERigSwitchParentMode
	 */
	enum class ERigSwitchParentMode : uint8_t
	{
		World         = 0,
		DefaultParent = 1,
		ParentItem    = 2,
		MAX           = 3
	};

	/**
	 * Enum ControlRig.EControlRigCurveAlignment
	 */
	enum class EControlRigCurveAlignment : uint8_t
	{
		Front     = 0,
		Stretched = 1,
		MAX       = 2
	};

	/**
	 * Enum ControlRig.EControlRigModifyBoneMode
	 */
	enum class EControlRigModifyBoneMode : uint8_t
	{
		OverrideLocal  = 0,
		OverrideGlobal = 1,
		AdditiveLocal  = 2,
		AdditiveGlobal = 3,
		Max            = 4
	};

	/**
	 * Enum ControlRig.EConstraintInterpType
	 */
	enum class EConstraintInterpType : uint8_t
	{
		Average  = 0,
		Shortest = 1,
		Max      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ControlRig.RigElementKey
	 * Size -> 0x000C
	 */
	struct FRigElementKey
	{
	public:
		ERigElementType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDQG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchySettings
	 * Size -> 0x0004
	 */
	struct FRigHierarchySettings
	{
	public:
		int32_t                                                    ProceduralElementLimit;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlElementCustomization
	 * Size -> 0x0020
	 */
	struct FRigControlElementCustomization
	{
	public:
		TArray<struct FRigElementKey>                              AvailableSpaces;                                         // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              RemovedSpaces;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceEntry
	 * Size -> 0x0020
	 */
	struct FRigInfluenceEntry
	{
	public:
		struct FRigElementKey                                      Source;                                                  // 0x0000(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0J3S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              AffectedList;                                            // 0x0010(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceMap
	 * Size -> 0x0068
	 */
	struct FRigInfluenceMap
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FRigInfluenceEntry>                          Entries;                                                 // 0x0008(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<struct FRigElementKey, int32_t>                       KeyToIndex;                                              // 0x0018(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceMapPerEvent
	 * Size -> 0x0060
	 */
	struct FRigInfluenceMapPerEvent
	{
	public:
		TArray<struct FRigInfluenceMap>                            Maps;                                                    // 0x0000(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, int32_t>                                 EventToIndex;                                            // 0x0010(0x0050) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedElement
	 * Size -> 0x00D0
	 */
	struct FControlRigComponentMappedElement
	{
	public:
		struct FComponentReference                                 ComponentReference;                                      // 0x0000(0x0028) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    TransformIndex;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TransformName;                                           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUDA[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ElementName;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentMapDirection                           Direction;                                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAW5[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Offset;                                                  // 0x0050(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentSpace                                  Space;                                                   // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9EG[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ElementIndex;                                            // 0x00C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubIndex;                                                // 0x00C4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZD6[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigShapeDefinition
	 * Size -> 0x00B0
	 */
	struct FControlRigShapeDefinition
	{
	public:
		class FName                                                ShapeName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticMesh[0x30];                                        // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_Q02H[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLGF[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigTestDataVariable
	 * Size -> 0x0020
	 */
	struct FControlRigTestDataVariable
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CPPType;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CachedRigElement
	 * Size -> 0x0020
	 */
	struct FCachedRigElement
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   Index;                                                   // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QX5T[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ContainerVersion;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M5U7[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigPoseElement
	 * Size -> 0x00F0
	 */
	struct FRigPoseElement
	{
	public:
		struct FCachedRigElement                                   Index;                                                   // 0x0000(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0020(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0080(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXQI[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigPose
	 * Size -> 0x0070
	 */
	struct FRigPose
	{
	public:
		TArray<struct FRigPoseElement>                             Elements;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    HierarchyTopologyVersion;                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PoseHash;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ7D[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigTestDataFrame
	 * Size -> 0x0090
	 */
	struct FControlRigTestDataFrame
	{
	public:
		double                                                     AbsoluteTime;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DeltaTime;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FControlRigTestDataVariable>                 Variables;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0020(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ChannelMapInfo
	 * Size -> 0x0040
	 */
	struct FChannelMapInfo
	{
	public:
		int32_t                                                    ControlIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalChannelIndex;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChannelIndex;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentControlIndex;                                      // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ChannelTypeName;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoesHaveSpace;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46VD[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpaceChannelIndex;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaskIndex;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CategoryIndex;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2DL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           ConstraintsIndex;                                        // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.EnumParameterNameAndCurve
	 * Size -> 0x0110
	 */
	struct FEnumParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneByteChannel                              ParameterCurve;                                          // 0x0008(0x0108) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.IntegerParameterNameAndCurve
	 * Size -> 0x0108
	 */
	struct FIntegerParameterNameAndCurve
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneIntegerChannel                           ParameterCurve;                                          // 0x0008(0x0100) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
	 * Size -> 0x0010
	 */
	struct FMovieSceneControlRigSpaceBaseKey
	{
	public:
		EMovieSceneControlRigSpaceType                             SpaceType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HUC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      ControlRigElement;                                       // 0x0004(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
	 * Size -> 0x00C0 (FullSize[0x0110] - InheritedSize[0x0050])
	 */
	struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                KeyTimes;                                                // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneControlRigSpaceBaseKey>           KeyValues;                                               // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneKeyHandleMap                             KeyHandles;                                              // 0x0070(0x0088) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H7QP[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.SpaceControlNameAndChannel
	 * Size -> 0x0118
	 */
	struct FSpaceControlNameAndChannel
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneControlRigSpaceChannel                   SpaceCurve;                                              // 0x0008(0x0110) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlValueStorage
	 * Size -> 0x0084
	 */
	struct FRigControlValueStorage
	{
	public:
		float                                                      Float00;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float01;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float02;                                                 // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float03;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float10;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float11;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float12;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float13;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float20;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float21;                                                 // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float22;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float23;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float30;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float31;                                                 // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float32;                                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float33;                                                 // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float00_3;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float01_3;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float02_3;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float03_3;                                               // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float10_3;                                               // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float11_3;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float12_3;                                               // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float13_3;                                               // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float20_3;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float21_3;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float22_3;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float23_3;                                               // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float30_3;                                               // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float31_3;                                               // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float32_3;                                               // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Float33_3;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TCL[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlValue
	 * Size -> 0x0084
	 */
	struct FRigControlValue
	{
	public:
		struct FRigControlValueStorage                             FloatStorage;                                            // 0x0000(0x0084) NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigControlCopy
	 * Size -> 0x0230
	 */
	struct FRigControlCopy
	{
	public:
		unsigned char                                              UnknownData_F0Y6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigControlType                                            ControlType;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZJ3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    Value;                                                   // 0x001C(0x0084) NoDestructor, NativeAccessSpecifierPublic
		struct FRigElementKey                                      ParentKey;                                               // 0x00A0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCHW[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x00B0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          ParentTransform;                                         // 0x0110(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0170(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x01D0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigControlPose
	 * Size -> 0x0060
	 */
	struct FControlRigControlPose
	{
	public:
		TArray<struct FRigControlCopy>                             CopyOfControls;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NNX[0x50];                                  // 0x0010(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBaseElement
	 * Size -> 0x00F0
	 */
	struct FRigBaseElement
	{
	public:
		unsigned char                                              UnknownData_Q35B[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Key;                                                     // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LJA2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NameString;                                              // 0x0018(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Index;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    SubIndex;                                                // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelected;                                               // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EKE6[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CreatedAtInstructionIndex;                               // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YY2C[0xB8];                                  // 0x0038(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigComputedTransform
	 * Size -> 0x0070
	 */
	struct FRigComputedTransform
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BRB[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigLocalAndGlobalTransform
	 * Size -> 0x00E0
	 */
	struct FRigLocalAndGlobalTransform
	{
	public:
		struct FRigComputedTransform                               Local;                                                   // 0x0000(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigComputedTransform                               Global;                                                  // 0x0070(0x0070) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigCurrentAndInitialTransform
	 * Size -> 0x01C0
	 */
	struct FRigCurrentAndInitialTransform
	{
	public:
		struct FRigLocalAndGlobalTransform                         Current;                                                 // 0x0000(0x00E0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigLocalAndGlobalTransform                         Initial;                                                 // 0x00E0(0x00E0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigTransformElement
	 * Size -> 0x0200 (FullSize[0x02F0] - InheritedSize[0x00F0])
	 */
	struct FRigTransformElement : public FRigBaseElement
	{
	public:
		struct FRigCurrentAndInitialTransform                      Pose;                                                    // 0x00F0(0x01C0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XHEQ[0x40];                                  // 0x02B0(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigMultiParentElement
	 * Size -> 0x0100 (FullSize[0x03F0] - InheritedSize[0x02F0])
	 */
	struct FRigMultiParentElement : public FRigTransformElement
	{
	public:
		unsigned char                                              UnknownData_D717[0x100];                                 // 0x02F0(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlLimitEnabled
	 * Size -> 0x0002
	 */
	struct FRigControlLimitEnabled
	{
	public:
		bool                                                       bMinimum;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaximum;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlSettings
	 * Size -> 0x01B0
	 */
	struct FRigControlSettings
	{
	public:
		ERigControlAnimationType                                   AnimationType;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigControlType                                            ControlType;                                             // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8C1U[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayName;                                             // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigControlAxis                                            PrimaryAxis;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurve;                                                // 0x000D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O71[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigControlLimitEnabled>                     LimitEnabled;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR3L[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    MinimumValue;                                            // 0x0024(0x0084) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    MaximumValue;                                            // 0x00A8(0x0084) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShapeVisible;                                           // 0x012C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigControlVisibility                                      ShapeVisibility;                                         // 0x012D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3KU[0x2];                                   // 0x012E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ShapeName;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShapeColor;                                              // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTransientControl;                                     // 0x0148(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ18[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               ControlEnum;                                             // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigControlElementCustomization                     Customization;                                           // 0x0158(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              DrivenControls;                                          // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQV0[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bGroupWithParentControl;                                 // 0x0198(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestrictSpaceSwitching;                                 // 0x0199(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRTD[0x6];                                   // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ERigControlTransformChannel>                        FilteredChannels;                                        // 0x01A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigPreferredEulerAngles
	 * Size -> 0x0038
	 */
	struct FRigPreferredEulerAngles
	{
	public:
		EEulerRotationOrder                                        RotationOrder;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5MF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Current;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Initial;                                                 // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlElement
	 * Size -> 0x0570 (FullSize[0x0960] - InheritedSize[0x03F0])
	 */
	struct FRigControlElement : public FRigMultiParentElement
	{
	public:
		struct FRigControlSettings                                 Settings;                                                // 0x03F0(0x01B0) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigCurrentAndInitialTransform                      Offset;                                                  // 0x05A0(0x01C0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigCurrentAndInitialTransform                      Shape;                                                   // 0x0760(0x01C0) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigPreferredEulerAngles                            PreferredEulerAngles;                                    // 0x0920(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E19B[0x8];                                   // 0x0958(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigInstanceData
	 * Size -> 0x0140 (FullSize[0x0148] - InheritedSize[0x0008])
	 */
	struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
	{
	public:
		bool                                                       bAdditive;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBoneFilter;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69P4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputBlendPose                                     BoneFilter;                                              // 0x0010(0x0010) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0020(0x0110) NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationOperand                        Operand;                                                 // 0x0130(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CYX[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigTransformStackEntry
	 * Size -> 0x00F0
	 */
	struct FRigTransformStackEntry
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigTransformStackEntryType                                EntryType;                                               // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigTransformType                                          TransformType;                                           // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOQ5[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OldTransform;                                            // 0x0010(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          NewTransform;                                            // 0x0070(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectChildren;                                         // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SR4J[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Callstack;                                               // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPNU[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigSingleParentElement
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	struct FRigSingleParentElement : public FRigTransformElement
	{
	public:
		unsigned char                                              UnknownData_AWZJ[0x8];                                   // 0x02F0(0x0008) Fix size for supers
	};

	/**
	 * ScriptStruct ControlRig.RigElementWeight
	 * Size -> 0x000C
	 */
	struct FRigElementWeight
	{
	public:
		float                                                      Location;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigElementParentConstraint
	 * Size -> 0x0090
	 */
	struct FRigElementParentConstraint
	{
	public:
		unsigned char                                              UnknownData_DI8D[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoneElement
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	struct FRigBoneElement : public FRigSingleParentElement
	{
	public:
		ERigBoneType                                               BoneType;                                                // 0x02F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5J7R[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigNullElement
	 * Size -> 0x0000 (FullSize[0x03F0] - InheritedSize[0x03F0])
	 */
	struct FRigNullElement : public FRigMultiParentElement
	{	};

	/**
	 * ScriptStruct ControlRig.RigCurveElement
	 * Size -> 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
	 */
	struct FRigCurveElement : public FRigBaseElement
	{
	public:
		unsigned char                                              UnknownData_HBCS[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigRigidBodySettings
	 * Size -> 0x0004
	 */
	struct FRigRigidBodySettings
	{
	public:
		float                                                      Mass;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigRigidBodyElement
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	struct FRigRigidBodyElement : public FRigSingleParentElement
	{
	public:
		struct FRigRigidBodySettings                               Settings;                                                // 0x02F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5NG[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigReferenceElement
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	struct FRigReferenceElement : public FRigSingleParentElement
	{
	public:
		unsigned char                                              UnknownData_ZXQ6[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_8X7B[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
	 * Size -> 0x0200
	 */
	struct FRigHierarchyCopyPasteContentPerElement
	{
	public:
		struct FRigElementKey                                      Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83UW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              content;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementWeight>                           ParentWeights;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigCurrentAndInitialTransform                      Pose;                                                    // 0x0040(0x01C0) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyCopyPasteContent
	 * Size -> 0x0050
	 */
	struct FRigHierarchyCopyPasteContent
	{
	public:
		TArray<struct FRigHierarchyCopyPasteContentPerElement>     Elements;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ERigElementType>                                    Types;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Contents;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  LocalTransforms;                                         // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  GlobalTransforms;                                        // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigExecuteContext
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	struct FControlRigExecuteContext : public FRigVMExecuteContext
	{
	public:
		unsigned char                                              UnknownData_1DOD[0x30];                                  // 0x00F0(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit : public FRigVMStruct
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HighlevelBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnitMutable
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnitMutable : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_FPWA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.StructReference
	 * Size -> 0x0008
	 */
	struct FStructReference
	{
	public:
		unsigned char                                              UnknownData_QLRZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigIOSettings
	 * Size -> 0x0002
	 */
	struct FControlRigIOSettings
	{
	public:
		bool                                                       bUpdatePose;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateCurves;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigAnimNodeEventName
	 * Size -> 0x0008
	 */
	struct FControlRigAnimNodeEventName
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigBase
	 * Size -> 0x0218 (FullSize[0x0270] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0058(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bResetInputPoseToInitial;                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransferInputPose;                                      // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransferInputCurves;                                    // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransferPoseInGlobalSpace;                              // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D0LM[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              InputBonesToTransfer;                                    // 0x0070(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7E7[0x1C0];                                 // 0x0080(0x01C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UNodeMappingContainer>                NodeMappingContainer;                                    // 0x0240(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               InputSettings;                                           // 0x0248(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               OutputSettings;                                          // 0x024A(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bExecute;                                                // 0x024C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VR78[0xB];                                   // 0x024D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FControlRigAnimNodeEventName>                EventQueue;                                              // 0x0258(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DP2T[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig
	 * Size -> 0x0200 (FullSize[0x0470] - InheritedSize[0x0270])
	 */
	struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0270(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlRig*                                         ControlRig;                                              // 0x0278(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Alpha;                                                   // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0284(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlphaBoolEnabled : 1;                                   // 0x0285(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetRefPoseFromSkeleton : 1;                             // 0x0285(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E18N[0x2];                                   // 0x0286(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0288(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0290(0x0048) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                AlphaCurveName;                                          // 0x02D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x02E0(0x0030) Edit, NoDestructor, NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             InputMapping;                                            // 0x0310(0x0050) NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             OutputMapping;                                           // 0x0360(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IKN3[0xB0];                                  // 0x03B0(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODThreshold;                                            // 0x0460(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2OLS[0xC];                                   // 0x0464(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
	{
	public:
		TWeakObjectPtr<class UControlRig>                          ControlRig;                                              // 0x0270(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigAnimInstanceProxy
	 * Size -> 0x00A8 (FullSize[0x0920] - InheritedSize[0x0878])
	 */
	struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_S8GJ[0x8];                                   // 0x0878(0x0008) Fix Super Size
		unsigned char                                              UnknownData_ZCBF[0xA0];                                  // 0x0880(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedComponent
	 * Size -> 0x0018
	 */
	struct FControlRigComponentMappedComponent
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ElementName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigComponentMapDirection                           Direction;                                               // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP08[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedBone
	 * Size -> 0x0010
	 */
	struct FControlRigComponentMappedBone
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentMappedCurve
	 * Size -> 0x0010
	 */
	struct FControlRigComponentMappedCurve
	{
	public:
		class FName                                                Source;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlShapeActorCreationParam
	 * Size -> 0x01D0
	 */
	struct FControlShapeActorCreationParam
	{
	public:
		unsigned char                                              UnknownData_R2GL[0x1D0];                                 // 0x0000(0x01D0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigValidationContext
	 * Size -> 0x0028
	 */
	struct FControlRigValidationContext
	{
	public:
		unsigned char                                              UnknownData_PRY5[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimContainer
	 * Size -> 0x0018
	 */
	struct FCRSimContainer
	{
	public:
		unsigned char                                              UnknownData_VYP6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeStep;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeftForStep;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD13[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimLinearSpring
	 * Size -> 0x0010
	 */
	struct FCRSimLinearSpring
	{
	public:
		int32_t                                                    SubjectA;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubjectB;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Equilibrium;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointConstraint
	 * Size -> 0x0040
	 */
	struct FCRSimPointConstraint
	{
	public:
		ECRSimConstraintType                                       Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTXU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubjectA;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubjectB;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XE3M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DataA;                                                   // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DataB;                                                   // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointForce
	 * Size -> 0x0028
	 */
	struct FCRSimPointForce
	{
	public:
		ECRSimPointForceType                                       ForceType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLOV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0008(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalize;                                              // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZYM[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimSoftCollision
	 * Size -> 0x0080
	 */
	struct FCRSimSoftCollision
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECRSimSoftCollisionType                                    ShapeType;                                               // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9U5[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDistance;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       FalloffType;                                             // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQID[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Coefficient;                                             // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverted;                                               // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2V8[0xB];                                   // 0x0075(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.CRSimPointContainer
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FCRSimPointContainer : public FCRSimContainer
	{
	public:
		TArray<struct FRigVMSimPoint>                              Points;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Springs;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointConstraint>                       Constraints;                                             // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigVMSimPoint>                              PreviousStep;                                            // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.ConstraintNodeData
	 * Size -> 0x0140
	 */
	struct FConstraintNodeData
	{
	public:
		struct FTransform                                          RelativeParent;                                          // 0x0000(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FConstraintOffset                                   ConstraintOffset;                                        // 0x0060(0x00C0) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LinkedNode;                                              // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransformConstraint>                        Constraints;                                             // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QAFM[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.AnimationHierarchy
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FAnimationHierarchy : public FNodeHierarchyWithUserData
	{
	public:
		TArray<struct FConstraintNodeData>                         UserData;                                                // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigElement
	 * Size -> 0x0018
	 */
	struct FRigElement
	{
	public:
		unsigned char                                              UnknownData_H361[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI70[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBone
	 * Size -> 0x0158 (FullSize[0x0170] - InheritedSize[0x0018])
	 */
	struct FRigBone : public FRigElement
	{
	public:
		class FName                                                ParentName;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXL4[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0090(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x00F0(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Dependents;                                              // 0x0150(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		ERigBoneType                                               Type;                                                    // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZV9A[0xF];                                   // 0x0161(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoneHierarchy
	 * Size -> 0x0010
	 */
	struct FRigBoneHierarchy
	{
	public:
		TArray<struct FRigBone>                                    Bones;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigControl
	 * Size -> 0x0348 (FullSize[0x0360] - InheritedSize[0x0018])
	 */
	struct FRigControl : public FRigElement
	{
	public:
		ERigControlType                                            ControlType;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JT4[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayName;                                             // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ParentName;                                              // 0x0024(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpaceName;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpaceIndex;                                              // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9W21[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x0040(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigControlValue                                    InitialValue;                                            // 0x00A0(0x0084) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    Value;                                                   // 0x0124(0x0084) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		ERigControlAxis                                            PrimaryAxis;                                             // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurve;                                                // 0x01A9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimatable;                                             // 0x01AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitTranslation;                                       // 0x01AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRotation;                                          // 0x01AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitScale;                                             // 0x01AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x01AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZUC[0x1];                                   // 0x01AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    MinimumValue;                                            // 0x01B0(0x0084) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    MaximumValue;                                            // 0x0234(0x0084) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bGizmoEnabled;                                           // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGizmoVisible;                                           // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6CE[0x2];                                   // 0x02BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GizmoName;                                               // 0x02BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74ZL[0xC];                                   // 0x02C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GizmoTransform;                                          // 0x02D0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        GizmoColor;                                              // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Dependents;                                              // 0x0340(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		bool                                                       bIsTransientControl;                                     // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXZ2[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               ControlEnum;                                             // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigControlHierarchy
	 * Size -> 0x0010
	 */
	struct FRigControlHierarchy
	{
	public:
		TArray<struct FRigControl>                                 Controls;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigCurve
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FRigCurve : public FRigElement
	{
	public:
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETVL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigCurveContainer
	 * Size -> 0x0010
	 */
	struct FRigCurveContainer
	{
	public:
		TArray<struct FRigCurve>                                   Curves;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigSpace
	 * Size -> 0x00D8 (FullSize[0x00F0] - InheritedSize[0x0018])
	 */
	struct FRigSpace : public FRigElement
	{
	public:
		ERigSpaceType                                              SpaceType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0R0[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentName;                                              // 0x001C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G69I[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0090(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigSpaceHierarchy
	 * Size -> 0x0010
	 */
	struct FRigSpaceHierarchy
	{
	public:
		TArray<struct FRigSpace>                                   Spaces;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyContainer
	 * Size -> 0x0040
	 */
	struct FRigHierarchyContainer
	{
	public:
		struct FRigBoneHierarchy                                   BoneHierarchy;                                           // 0x0000(0x0010) NativeAccessSpecifierPublic
		struct FRigSpaceHierarchy                                  SpaceHierarchy;                                          // 0x0010(0x0010) NativeAccessSpecifierPublic
		struct FRigControlHierarchy                                ControlHierarchy;                                        // 0x0020(0x0010) NativeAccessSpecifierPublic
		struct FRigCurveContainer                                  CurveContainer;                                          // 0x0030(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyRef
	 * Size -> 0x0001
	 */
	struct FRigHierarchyRef
	{
	public:
		unsigned char                                              UnknownData_LYKQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigControlModifiedContext
	 * Size -> 0x0018
	 */
	struct FRigControlModifiedContext
	{
	public:
		unsigned char                                              UnknownData_9NJ6[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigElementKeyCollection
	 * Size -> 0x0010
	 */
	struct FRigElementKeyCollection
	{
	public:
		TArray<struct FRigElementKey>                              Keys;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigEventContext
	 * Size -> 0x0028
	 */
	struct FRigEventContext
	{
	public:
		unsigned char                                              UnknownData_5MIH[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBaseMetadata
	 * Size -> 0x0028
	 */
	struct FRigBaseMetadata
	{
	public:
		unsigned char                                              UnknownData_PHPF[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERigMetadataType                                           Type;                                                    // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AKGE[0xF];                                   // 0x0019(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoolMetadata
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FRigBoolMetadata : public FRigBaseMetadata
	{
	public:
		bool                                                       Value;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YPZW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigBoolArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigBoolArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<bool>                                               Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigFloatMetadata
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FRigFloatMetadata : public FRigBaseMetadata
	{
	public:
		float                                                      Value;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C2X5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigFloatArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigFloatArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<float>                                              Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInt32Metadata
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FRigInt32Metadata : public FRigBaseMetadata
	{
	public:
		int32_t                                                    Value;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LIJ0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigInt32ArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigInt32ArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<int32_t>                                            Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigNameMetadata
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FRigNameMetadata : public FRigBaseMetadata
	{
	public:
		class FName                                                Value;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigNameArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigNameArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<class FName>                                        Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigVectorMetadata
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FRigVectorMetadata : public FRigBaseMetadata
	{
	public:
		struct FVector                                             Value;                                                   // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigVectorArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigVectorArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<struct FVector>                                     Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigRotatorMetadata
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FRigRotatorMetadata : public FRigBaseMetadata
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigRotatorArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigRotatorArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<struct FRotator>                                    Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigQuatMetadata
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FRigQuatMetadata : public FRigBaseMetadata
	{
	public:
		unsigned char                                              UnknownData_8EWJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0030(0x0020) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigQuatArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigQuatArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<struct FQuat>                                       Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigTransformMetadata
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	struct FRigTransformMetadata : public FRigBaseMetadata
	{
	public:
		unsigned char                                              UnknownData_U57S[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0030(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigTransformArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigTransformArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<struct FTransform>                                  Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigLinearColorMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigLinearColorMetadata : public FRigBaseMetadata
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigLinearColorArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<struct FLinearColor>                                Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigElementKeyMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigElementKeyMetadata : public FRigBaseMetadata
	{
	public:
		struct FRigElementKey                                      Value;                                                   // 0x0028(0x000C) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J8E7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigElementKeyArrayMetadata
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
	{
	public:
		TArray<struct FRigElementKey>                              Value;                                                   // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.RigInfluenceEntryModifier
	 * Size -> 0x0010
	 */
	struct FRigInfluenceEntryModifier
	{
	public:
		TArray<struct FRigElementKey>                              AffectedList;                                            // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigInputPose
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E4J[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigLayerInstanceProxy
	 * Size -> 0x00A8 (FullSize[0x0920] - InheritedSize[0x0878])
	 */
	struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_VNBJ[0x8];                                   // 0x0878(0x0008) Fix Super Size
		unsigned char                                              UnknownData_JCQS[0xA0];                                  // 0x0880(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReference
	 * Size -> 0x0008
	 */
	struct FControlRigSequenceObjectReference
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferences
	 * Size -> 0x0010
	 */
	struct FControlRigSequenceObjectReferences
	{
	public:
		TArray<struct FControlRigSequenceObjectReference>          Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
	 * Size -> 0x0020
	 */
	struct FControlRigSequenceObjectReferenceMap
	{
	public:
		TArray<struct FGuid>                                       BindingIds;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FControlRigSequenceObjectReferences>         References;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<struct FEnumParameterNameAndCurve>                  Enums;                                                   // 0x0080(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIntegerParameterNameAndCurve>               Integers;                                                // 0x0090(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSpaceControlNameAndChannel>                 Spaces;                                                  // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FConstraintAndActiveChannel>                 Constraints;                                             // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ControlRig.ControlRigSettingsPerPinBool
	 * Size -> 0x0050
	 */
	struct FControlRigSettingsPerPinBool
	{
	public:
		TMap<class FString, bool>                                  Values;                                                  // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigDispatchFactory
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigDispatchFactory : public FRigVMDispatchFactory
	{	};

	/**
	 * ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
	{
	public:
		unsigned char                                              UnknownData_WJ5Q[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PrimalHitResultNotifyActor
	 * Size -> 0x0120 (FullSize[0x0250] - InheritedSize[0x0130])
	 */
	struct FRigUnit_PrimalHitResultNotifyActor : public FRigUnitMutable
	{
	public:
		class FName                                                NotifyName;                                              // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CustomTag;                                               // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x0140(0x00F0) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0230(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZDR[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceWorld
	 * Size -> 0x0160 (FullSize[0x0168] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceWorld : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          Channel;                                                 // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B3G[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JCV8[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0060(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          WorldSpaceHitResult;                                     // 0x0078(0x00F0) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
	 * Size -> 0x0160 (FullSize[0x0168] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2W2[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE5J[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0060(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          WorldSpaceHitResult;                                     // 0x0078(0x00F0) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
	 * Size -> 0x0168 (FullSize[0x0170] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
	{
	public:
		struct FVector                                             Start;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EObjectTypeQuery>                                   ObjectTypes;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHit;                                                    // 0x004C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZDP[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0050(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0068(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          WorldSpaceHitResult;                                     // 0x0080(0x00F0) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control
	 * Size -> 0x0178 (FullSize[0x0180] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Control : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Transform;                                               // 0x0008(0x0048) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Base;                                                    // 0x0050(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitTransform;                                           // 0x00B0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0110(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0170(0x0009) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x0179(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4WU[0x6];                                   // 0x017A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control_StaticMesh
	 * Size -> 0x0060 (FullSize[0x01E0] - InheritedSize[0x0180])
	 */
	struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
	{
	public:
		struct FTransform                                          MeshTransform;                                           // 0x0180(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezier
	 * Size -> 0x0100 (FullSize[0x0200] - InheritedSize[0x0100])
	 */
	struct FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
	{
	public:
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0100(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHFF[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0190(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKSL[0xF];                                   // 0x01F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
	 * Size -> 0x0100 (FullSize[0x0200] - InheritedSize[0x0100])
	 */
	struct FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
	{
	public:
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0100(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Detail;                                                  // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Space;                                                   // 0x0180(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8NC[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0190(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XERI[0xF];                                   // 0x01F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugHierarchy
	 * Size -> 0x01B8 (FullSize[0x01C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
	{
	public:
		unsigned char                                              UnknownData_PLKV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0134(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQQ6[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQC6[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPose
	 * Size -> 0x0228 (FullSize[0x0230] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugPose : public FRigVMFunction_DebugBase
	{
	public:
		unsigned char                                              UnknownData_IW82[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0130(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x01A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_487P[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x01C0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PD8J[0xF];                                   // 0x0221(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_StartProfilingTimer
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	struct FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_EndProfilingTimer
	 * Size -> 0x0030 (FullSize[0x0130] - InheritedSize[0x0100])
	 */
	struct FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
	{
	public:
		int32_t                                                    NumberOfMeasurements;                                    // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJE6[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Prefix;                                                  // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeasurementsLeft;                                        // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E22O[0xF];                                   // 0x0121(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertTransform
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_8DX3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Input;                                                   // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0070(0x0048) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0SE[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertEulerTransform : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Input;                                                   // 0x0008(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0050(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotation
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotation : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternion
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternion : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_LZ90[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUIG[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToRotation : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotationToVector : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_8M5V[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL8D[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToSwingAndTwist : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_NGU8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YTN[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0050(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0070(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryFloatOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryFloatOp : public FRigUnit
	{
	public:
		float                                                      Argument0;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Argument1;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZEL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Clamp_Float
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Clamp_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MapRange_Float
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MapRange_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinIn;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIn;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinOut;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOut;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_DK8I[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument0;                                               // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Argument1;                                               // 0x0030(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0050(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_UnaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_42SO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseQuaterion
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_G7R3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHL6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7A8D[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAngle
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Argument;                                                // 0x0020(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMRB[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryTransformOp
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryTransformOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_5JVN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Argument0;                                               // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Argument1;                                               // 0x0070(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x00D0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyTransform
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransform
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryVectorOp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryVectorOp : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_VectorVector
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Distance_VectorVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Distance_VectorVector : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GX7L[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
	{
	public:
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0008(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6RN[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0070(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x0088(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
	{
	public:
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0008(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.AimTarget
	 * Size -> 0x0090
	 */
	struct FAimTarget
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_283Y[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AlignVector;                                             // 0x0070(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCGG[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_AimConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint
	 * Size -> 0x0070 (FullSize[0x01A0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_AimConstraint : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimMode                                                   AimMode;                                                 // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAimMode                                                   UpMode;                                                  // 0x0139(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYDZ[0x6];                                   // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimVector;                                               // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpVector;                                                // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAimTarget>                                  AimTargets;                                              // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAimTarget>                                  UpTargets;                                               // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimConstraint_WorkData                     WorkData;                                                // 0x0190(0x0010) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ApplyFK
	 * Size -> 0x00F0 (FullSize[0x0220] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ApplyFK : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IR3N[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x01A0(0x0009) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EApplyTransformMode                                        ApplyTransformMode;                                      // 0x01A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        ApplyTransformSpace;                                     // 0x01AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A65M[0x5];                                   // 0x01AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x01B0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI13[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.BlendTarget
	 * Size -> 0x0070
	 */
	struct FBlendTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEOE[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BlendTransform
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BlendTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_UG8B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Source;                                                  // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBlendTarget>                                Targets;                                                 // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0080(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetJointTransform
	 * Size -> 0x00E0 (FullSize[0x0210] - InheritedSize[0x0130])
	 */
	struct FRigUnit_GetJointTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformGetterType                                       Type;                                                    // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        TransformSpace;                                          // 0x0139(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7RW[0x6];                                   // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRJ4[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Output;                                                  // 0x01B0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
	 * Size -> 0x0310 (FullSize[0x0440] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
	{
	public:
		class FName                                                StartJoint;                                              // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndJoint;                                                // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleTarget;                                              // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spin;                                                    // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTW6[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          EndEffector;                                             // 0x0160(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IKBlend;                                                 // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJRP[0xC];                                   // 0x01C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointFKTransform;                                   // 0x01D0(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointFKTransform;                                     // 0x0230(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointFKTransform;                                     // 0x0290(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PreviousFKIKBlend;                                       // 0x02F0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6JEY[0xC];                                   // 0x02F4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointIKTransform;                                   // 0x0300(0x0060) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointIKTransform;                                     // 0x0360(0x0060) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointIKTransform;                                     // 0x03C0(0x0060) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    StartJointIndex;                                         // 0x0420(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MidJointIndex;                                           // 0x0424(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EndJointIndex;                                           // 0x0428(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UpperLimbLength;                                         // 0x042C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LowerLimbLength;                                         // 0x0430(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInitialized;                                          // 0x0434(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OI06[0xB];                                   // 0x0435(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
	{
	public:
		class FName                                                InstructionName;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99DT[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PK4G[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
	 * Size -> 0x0070 (FullSize[0x01A0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYWW[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BeginExecution
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BeginExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_3BUB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChain
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      FirstItem;                                               // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      LastItem;                                                // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Reverse;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ0A[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChainArray
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      FirstItem;                                               // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      LastItem;                                                // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Reverse;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S954[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionNameSearch
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
	{
	public:
		class FName                                                PartialName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX2G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
	{
	public:
		class FName                                                PartialName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55DF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChildren
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X860[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            TypeToSearch;                                            // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSDG[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetAll
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
	{
	public:
		ERigElementType                                            TypeToSearch;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWPG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveInvalidItems;                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MK0S[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveInvalidItems;                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSYS[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Result;                                                  // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionItems
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XIC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetItems
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ParentIndices;                                           // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionUnion
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDuplicates;                                        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFY3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Collection;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionIntersection
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionDifference
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            A;                                                       // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            B;                                                       // 0x0018(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionReverse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Reversed;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionCount
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31E0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x001C(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionLoop
	 * Size -> 0x0150 (FullSize[0x0280] - InheritedSize[0x0130])
	 */
	struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
	{
	public:
		class FName                                                BlockToRun;                                              // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Collection;                                              // 0x0138(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0148(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0154(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0158(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x015C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           Completed;                                               // 0x0160(0x0120) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CollectionAddItem
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
	{
	public:
		struct FRigElementKeyCollection                            Collection;                                              // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AW6H[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Result;                                                  // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DynamicHierarchyBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AddParent
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z255[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetDefaultParent
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7FL[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SwitchParent
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		ERigSwitchParentMode                                       Mode;                                                    // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q302[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Child;                                                   // 0x0134(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x0140(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainGlobal;                                         // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QL3J[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKZ1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementWeight>                           Weights;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FD8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementWeight>                           Weights;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKGU[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementWeight>                           Weights;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyReset
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		class FName                                                Namespace;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeCurves;                                          // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IE3[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSuccess;                                                // 0x013C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6NG[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddElement
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x013C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0144(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddBone
	 * Size -> 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAA4[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddNull
	 * Size -> 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8RB[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
	 * Size -> 0x0010
	 */
	struct FRigUnit_HierarchyAddControl_Settings
	{
	public:
		unsigned char                                              UnknownData_6P2W[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
	 * Size -> 0x0080
	 */
	struct FRigUnit_HierarchyAddControl_ShapeSettings
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HQ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZBK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
	 * Size -> 0x0020
	 */
	struct FRigUnit_HierarchyAddControl_ProxySettings
	{
	public:
		bool                                                       bIsProxy;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFKX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              DrivenControls;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigControlVisibility                                      ShapeVisibility;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAA5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
	 * Size -> 0x0010
	 */
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings
	{
	public:
		struct FRigControlLimitEnabled                             Limit;                                                   // 0x0000(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FS2H[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJ1P[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
	 * Size -> 0x00C0 (FullSize[0x00D0] - InheritedSize[0x0010])
	 */
	struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
	{
	public:
		ERigControlAxis                                            PrimaryAxis;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOWF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlFloat_LimitSettings     Limits;                                                  // 0x0014(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI2I[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Shape;                                                   // 0x0030(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ProxySettings          Proxy;                                                   // 0x00B0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlElement
	 * Size -> 0x0060 (FullSize[0x01B0] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
	{
	public:
		struct FTransform                                          OffsetTransform;                                         // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
	 * Size -> 0x00E0 (FullSize[0x0290] - InheritedSize[0x01B0])
	 */
	struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
	{
	public:
		float                                                      InitialValue;                                            // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK2Y[0xC];                                   // 0x01B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlFloat_Settings          Settings;                                                // 0x01C0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
	 * Size -> 0x0010
	 */
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings
	{
	public:
		struct FRigControlLimitEnabled                             Limit;                                                   // 0x0000(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGKT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinValue;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q76F[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
	 * Size -> 0x00C0 (FullSize[0x00D0] - InheritedSize[0x0010])
	 */
	struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
	{
	public:
		ERigControlAxis                                            PrimaryAxis;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3UW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlInteger_LimitSettings   Limits;                                                  // 0x0014(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTW4[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Shape;                                                   // 0x0030(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ProxySettings          Proxy;                                                   // 0x00B0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
	 * Size -> 0x00E0 (FullSize[0x0290] - InheritedSize[0x01B0])
	 */
	struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
	{
	public:
		int32_t                                                    InitialValue;                                            // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB92[0xC];                                   // 0x01B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlInteger_Settings        Settings;                                                // 0x01C0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
	 * Size -> 0x0030
	 */
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
	{
	public:
		struct FRigControlLimitEnabled                             LimitX;                                                  // 0x0000(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlLimitEnabled                             LimitY;                                                  // 0x0002(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CS5T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MinValue;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MaxValue;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKSG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
	 * Size -> 0x00F0 (FullSize[0x0100] - InheritedSize[0x0010])
	 */
	struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
	{
	public:
		ERigControlAxis                                            PrimaryAxis;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URW1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlVector2D_LimitSettings  Limits;                                                  // 0x0018(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GV7G[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Shape;                                                   // 0x0050(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ProxySettings          Proxy;                                                   // 0x00D0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<ERigControlTransformChannel>                        FilteredChannels;                                        // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
	 * Size -> 0x0110 (FullSize[0x02C0] - InheritedSize[0x01B0])
	 */
	struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
	{
	public:
		struct FVector2D                                           InitialValue;                                            // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControlVector2D_Settings       Settings;                                                // 0x01C0(0x0100) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
	 * Size -> 0x0040
	 */
	struct FRigUnit_HierarchyAddControlVector_LimitSettings
	{
	public:
		struct FRigControlLimitEnabled                             LimitX;                                                  // 0x0000(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlLimitEnabled                             LimitY;                                                  // 0x0002(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlLimitEnabled                             LimitZ;                                                  // 0x0004(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VH1[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MinValue;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxValue;                                                // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UK6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
	 * Size -> 0x0100 (FullSize[0x0110] - InheritedSize[0x0010])
	 */
	struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
	{
	public:
		bool                                                       bIsPosition;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0Z8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlVector_LimitSettings    Limits;                                                  // 0x0018(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7E5Z[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Shape;                                                   // 0x0060(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ProxySettings          Proxy;                                                   // 0x00E0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<ERigControlTransformChannel>                        FilteredChannels;                                        // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
	 * Size -> 0x0130 (FullSize[0x02E0] - InheritedSize[0x01B0])
	 */
	struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
	{
	public:
		struct FVector                                             InitialValue;                                            // 0x01B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0Q6[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlVector_Settings         Settings;                                                // 0x01D0(0x0110) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
	 * Size -> 0x0040
	 */
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings
	{
	public:
		struct FRigControlLimitEnabled                             LimitPitch;                                              // 0x0000(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlLimitEnabled                             LimitYaw;                                                // 0x0002(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlLimitEnabled                             LimitRoll;                                               // 0x0004(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TH97[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            MinValue;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MaxValue;                                                // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5X72[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
	 * Size -> 0x00F0 (FullSize[0x0100] - InheritedSize[0x0010])
	 */
	struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
	{
	public:
		struct FRigUnit_HierarchyAddControlRotator_LimitSettings   Limits;                                                  // 0x0010(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Shape;                                                   // 0x0050(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ProxySettings          Proxy;                                                   // 0x00D0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<ERigControlTransformChannel>                        FilteredChannels;                                        // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
	 * Size -> 0x0120 (FullSize[0x02D0] - InheritedSize[0x01B0])
	 */
	struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
	{
	public:
		struct FRotator                                            InitialValue;                                            // 0x01B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKIH[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControlRotator_Settings        Settings;                                                // 0x01D0(0x0100) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
	 * Size -> 0x00B0 (FullSize[0x00C0] - InheritedSize[0x0010])
	 */
	struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
	{
	public:
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Shape;                                                   // 0x0010(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControl_ProxySettings          Proxy;                                                   // 0x0090(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<ERigControlTransformChannel>                        FilteredChannels;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
	 * Size -> 0x0120 (FullSize[0x02D0] - InheritedSize[0x01B0])
	 */
	struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
	{
	public:
		struct FTransform                                          InitialValue;                                            // 0x01B0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_HierarchyAddControlTransform_Settings      Settings;                                                // 0x0210(0x00C0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
	{
	public:
		bool                                                       InitialValue;                                            // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MinimumValue;                                            // 0x0151(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MaximumValue;                                            // 0x0152(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OX1C[0xD];                                   // 0x0153(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
	{
	public:
		float                                                      InitialValue;                                            // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumValue;                                            // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumValue;                                            // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6HF[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
	{
	public:
		int32_t                                                    InitialValue;                                            // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumValue;                                            // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumValue;                                            // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR84[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
	 * Size -> 0x0030 (FullSize[0x0180] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
	{
	public:
		struct FVector2D                                           InitialValue;                                            // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MinimumValue;                                            // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MaximumValue;                                            // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
	 * Size -> 0x0050 (FullSize[0x01A0] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
	{
	public:
		struct FVector                                             InitialValue;                                            // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinimumValue;                                            // 0x0168(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaximumValue;                                            // 0x0180(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5MG[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
	 * Size -> 0x0050 (FullSize[0x01A0] - InheritedSize[0x0150])
	 */
	struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
	{
	public:
		struct FRotator                                            InitialValue;                                            // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MinimumValue;                                            // 0x0168(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MaximumValue;                                            // 0x0180(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C8P[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetShapeSettings
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F20Q[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Settings;                                                // 0x0020(0x0080) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetShapeSettings
	 * Size -> 0x0090 (FullSize[0x01C0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QWB[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_HierarchyAddControl_ShapeSettings          Settings;                                                // 0x0140(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParent
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0040(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParents
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChild;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse;                                                // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W33Z[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedParents;                                           // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeChild;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverse;                                                // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5WR[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedParents;                                           // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Parent;                                                  // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeParent;                                          // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADAG[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Children;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedChildren;                                          // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeItem;                                            // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IS4H[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Siblings;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedSiblings;                                          // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeItem;                                            // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECDG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Siblings;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            CachedSiblings;                                          // 0x0048(0x0010) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetPose
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
	{
	public:
		bool                                                       Initial;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7WF[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsToGet;                                              // 0x0010(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0020(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
	{
	public:
		bool                                                       Initial;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6YF[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              ItemsToGet;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0020(0x0070) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetPose
	 * Size -> 0x0090 (FullSize[0x01C0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0130(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x01A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNN0[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsToSet;                                              // 0x01A8(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFY0[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
	 * Size -> 0x0090 (FullSize[0x01C0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0130(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x01A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZVJ[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              ItemsToSet;                                              // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0D3[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseIsEmpty
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsEmpty;                                                 // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLO4[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetItems
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM59[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            Items;                                                   // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPUM[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetDelta
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            PoseA;                                                   // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRigPose                                            PoseB;                                                   // 0x0078(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      PositionThreshold;                                       // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationThreshold;                                       // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleThreshold;                                          // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveThreshold;                                          // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigElementType                                            ElementType;                                             // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x00F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF2O[0x6];                                   // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsToCompare;                                          // 0x0100(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PosesAreEqual;                                           // 0x0110(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHNP[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKeyCollection                            ItemsWithDelta;                                          // 0x0118(0x0010) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetTransform
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x0078(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0085(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0LR[0xA];                                   // 0x0086(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0090(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x00F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseElementIndex;                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseHash;                                          // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IP1X[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0079(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RU9[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseGetCurve
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
	{
	public:
		struct FRigPose                                            Pose;                                                    // 0x0008(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                Curve;                                                   // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0080(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTVA[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveValue;                                              // 0x0084(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseElementIndex;                                  // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedPoseHash;                                          // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PoseLoop
	 * Size -> 0x0280 (FullSize[0x03B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
	{
	public:
		class FName                                                BlockToRun;                                              // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigPose                                            Pose;                                                    // 0x0138(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Item;                                                    // 0x01A8(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G86R[0xC];                                   // 0x01B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GlobalTransform;                                         // 0x01C0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0220(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveValue;                                              // 0x0280(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0284(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0288(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x028C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           Completed;                                               // 0x0290(0x0120) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InteractionExecution
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_InteractionExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_HW4F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseExecution
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_InverseExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_0EJ1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_IsInteracting
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_IsInteracting : public FRigUnit
	{
	public:
		bool                                                       bIsInteracting;                                          // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTranslating;                                          // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRotating;                                             // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsScaling;                                              // 0x000B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIWR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemBase : public FRigUnit
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemBaseMutable
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemExists
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemExists : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Exists;                                                  // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVT8[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemReplace
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Old;                                                     // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                New;                                                     // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Result;                                                  // 0x0024(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFGD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemNotEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IUR[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemTypeEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EK8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      A;                                                       // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      B;                                                       // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI39[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemToName
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemToName : public FRigUnit_ItemBase
	{
	public:
		struct FRigElementKey                                      Value;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Result;                                                  // 0x0014(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0FL[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PrepareForExecution
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_PrepareForExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_U2P1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SequenceExecution
	 * Size -> 0x05A8 (FullSize[0x05B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SequenceExecution : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_2BYR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           A;                                                       // 0x0130(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           B;                                                       // 0x0250(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           C;                                                       // 0x0370(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           D;                                                       // 0x0490(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SequenceAggregate
	 * Size -> 0x0368 (FullSize[0x0370] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SequenceAggregate : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_T3OA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0010(0x0120) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           A;                                                       // 0x0130(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		struct FControlRigExecuteContext                           B;                                                       // 0x0250(0x0120) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AddBoneTransform
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_AddBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S2H[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPostMultiply;                                           // 0x01A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFAD[0x2];                                   // 0x01A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x01A8(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YGJ[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Item
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Item : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5Z9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemArray
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ItemArray : public FRigUnit
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BoneName : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpaceName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpaceName : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ControlName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ControlName : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetAnimationChannelBase : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Channel;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4V1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      CachedChannelKey;                                        // 0x001C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedChannelHash;                                       // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H80O[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		bool                                                       Value;                                                   // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJXH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		float                                                      Value;                                                   // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXXU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8W26[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
	{
	public:
		struct FTransform                                          Value;                                                   // 0x0030(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0030(0x0120) Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		bool                                                       Value;                                                   // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWOV[0xF];                                   // 0x0151(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		float                                                      Value;                                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I8RO[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		int32_t                                                    Value;                                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAC0[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9HP[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O735[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
	 * Size -> 0x0060 (FullSize[0x01B0] - InheritedSize[0x0150])
	 */
	struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
	{
	public:
		struct FTransform                                          Value;                                                   // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetBoneTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetBoneTransform : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADB3[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0080(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInitialTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Q59[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0080(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlBool
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlBool : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WRD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlFloat
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlFloat : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4EK5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInteger
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInteger : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minimum;                                                 // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Maximum;                                                 // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXCY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector2D
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector2D : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Minimum;                                                 // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Maximum;                                                 // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0040(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VW7F[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0060(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlRotator
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlRotator : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKGS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotator;                                                 // 0x0018(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Minimum;                                                 // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Maximum;                                                 // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0060(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlTransform
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D252[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Minimum;                                                 // 0x0080(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Maximum;                                                 // 0x00E0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetCurveValue
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetCurveValue : public FRigUnit
	{
	public:
		class FName                                                Curve;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Valid;                                                   // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED4D[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetInitialBoneTransform : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYCI[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0080(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
	{
	public:
		class FName                                                bone;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R10[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBone;                                              // 0x0080(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpace;                                             // 0x00A0(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChildInitial;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBLY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Parent;                                                  // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0KP[0xB];                                   // 0x0025(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x0090(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x00B0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetSpaceTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetSpaceTransform : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       SpaceType;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP8A[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x0080(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransform : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKDK[0xA];                                   // 0x0016(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0080(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransformArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransformArray : public FRigUnit
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6BP[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetTransformItemArray
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetTransformItemArray : public FRigUnit
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U127[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigDispatch_MetadataBase
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FRigDispatch_MetadataBase : public FRigDispatchFactory
	{
	public:
		unsigned char                                              UnknownData_0N8U[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigDispatch_GetMetadata
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigDispatch_SetMetadata
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RemoveMetadata
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_RemoveMetadata : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x013C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Removed;                                                 // 0x0144(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4VO[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ECS[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Removed;                                                 // 0x013C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EKO[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HasMetadata
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HasMetadata : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigMetadataType                                           Type;                                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Found;                                                   // 0x001D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYDY[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_FindItemsWithMetadata : public FRigUnit
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigMetadataType                                           Type;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRTG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetMetadataTags
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetMetadataTags : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KUI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0028(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMetadataTag
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMetadataTag : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x013C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJMM[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X70P[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OX2[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0150(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x013C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Removed;                                                 // 0x0144(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4868[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCFP[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HasMetadataTag
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HasMetadataTag : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Found;                                                   // 0x001C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N579[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HasMetadataTagArray : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CF1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Found;                                                   // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6GR[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0030(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
	{
	public:
		class FName                                                Tag;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Inclusive;                                               // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0NQ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigElementKey>                              Result;                                                  // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedIndices;                                           // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSW6[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI7H[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x01A8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DP4P[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
	 * Size -> 0x01A0 (FullSize[0x02D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Subject;                                                 // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKeyCollection                            Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialGlobalTransform;                                  // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLC3[0xC];                                   // 0x01B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x01C0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Switched;                                                // 0x0220(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1JN[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSubject;                                           // 0x0228(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0248(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI70[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeOffset;                                          // 0x0270(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
	 * Size -> 0x01A0 (FullSize[0x02D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Subject;                                                 // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParentIndex;                                             // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialGlobalTransform;                                  // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UH5Z[0xC];                                   // 0x01B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x01C0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Switched;                                                // 0x0220(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NZL[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSubject;                                           // 0x0228(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0248(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HKW[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeOffset;                                          // 0x0270(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChildInitial;                                           // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOV6[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      OldParent;                                               // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOldParentInitial;                                       // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_INPT[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      NewParent;                                               // 0x0028(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewParentInitial;                                       // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONKX[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedChild;                                             // 0x00A0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedOldParent;                                         // 0x00C0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedNewParent;                                         // 0x00E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PropagateTransform
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_PropagateTransform : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecomputeGlobal;                                        // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToChildren;                                        // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursive;                                              // 0x013E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW4G[0x1];                                   // 0x013F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0140(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SendEvent
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SendEvent : public FRigUnitMutable
	{
	public:
		ERigEvent                                                  Event;                                                   // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TLB[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Item;                                                    // 0x0134(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetInSeconds;                                         // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable;                                                 // 0x0144(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyDuringInteraction;                                  // 0x0145(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U1Z[0xA];                                   // 0x0146(0x000A) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OG9K[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x01A0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PJK[0x6];                                   // 0x0202(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0208(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJO7[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneRotation
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetBoneRotation : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYR4[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0140(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MV5I[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XE7H[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0170(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTransform
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0JB[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x01A0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0P0A[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8W35[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0210(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTranslation
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0138(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVVV[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYAG[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x0160(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlColor
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlColor : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlColor
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlColor : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2DB[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlDrivenList
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlDrivenList : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Driven;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlDrivenList
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Driven;                                                  // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0148(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZO7Y[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlOffset
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlOffset : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLWG[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Offset;                                                  // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJVN[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x01A8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSGO[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetShapeTransform
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetShapeTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0070(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetShapeTransform
	 * Size -> 0x0090 (FullSize[0x01C0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetShapeTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4J5[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x01A0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlBool
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlBool : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXGO[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlBool_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWCQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlBool
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlBool_Entry>          Entries;                                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0140(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlFloat
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlFloat : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlFloat_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlFloat_Entry>         Entries;                                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DE3U[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1L9Z[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlInteger
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlInteger : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
	 * Size -> 0x000C
	 */
	struct FRigUnit_SetMultiControlInteger_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntegerValue;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlInteger_Entry>       Entries;                                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7VJ[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2B7[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector2D
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlVector2D : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Q9K[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Vector;                                                  // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0150(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
	 * Size -> 0x0018
	 */
	struct FRigUnit_SetMultiControlVector2D_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlVector2D_Entry>      Entries;                                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D91[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83WF[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlVector : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTYC[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7BB[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0160(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlRotator
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlRotator : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGWJ[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotator;                                                 // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I27Z[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0160(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
	 * Size -> 0x0028
	 */
	struct FRigUnit_SetMultiControlRotator_Entry
	{
	public:
		class FName                                                Control;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_365N[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
	{
	public:
		TArray<struct FRigUnit_SetMultiControlRotator_Entry>       Entries;                                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SY6[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBYJ[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlTransform
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSGR[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0FD[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x01A8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTLH[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVisibility
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVisibility : public FRigUnit
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0014(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7LK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedControlIndex;                                      // 0x0018(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVisibility
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetControlVisibility : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULY6[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Pattern;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisible;                                                // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2ZL[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedControlIndices;                                    // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XQ0[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetCurveValue
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetCurveValue : public FRigUnitMutable
	{
	public:
		class FName                                                Curve;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17XF[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x0140(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
	 * Size -> 0x00C0 (FullSize[0x01F0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVKY[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedBone;                                              // 0x01A8(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x01C8(0x0020) Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJWM[0x8];                                   // 0x01E8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
	 * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6URK[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOY7[0x3];                                   // 0x01B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedChild;                                             // 0x01B8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x01D8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EEB[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
	 * Size -> 0x0080 (FullSize[0x01B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO9Y[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Value;                                                   // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x016C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93IF[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedChild;                                             // 0x0170(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0190(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
	 * Size -> 0x0090 (FullSize[0x01C0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      Parent;                                                  // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParentInitial;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2CM[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0150(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0174(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UE4[0x3];                                   // 0x0175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedChild;                                             // 0x0178(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedParent;                                            // 0x0198(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKA3[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
	{
	public:
		class FName                                                SpaceName;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUA7[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x01A0(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ITS[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x0208(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJN3[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceTransform
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Space;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Z39[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       SpaceType;                                               // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96KG[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedSpaceIndex;                                        // 0x01A8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTDD[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransform
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetTransform : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8M9[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BI1D[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x01A8(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJZQ[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTranslation
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetTranslation : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y03U[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Value;                                                   // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x015C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WD3Q[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0160(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRotation
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetRotation : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8WX[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0140(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0164(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8W5[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0168(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSJO[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetScale
	 * Size -> 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetScale : public FRigUnitMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IR6S[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x015C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WD3[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   CachedIndex;                                             // 0x0160(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransformArray
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetTransformArray : public FRigUnitMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0141(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNTF[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x015C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0HC[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetTransformItemArray
	 * Size -> 0x0040 (FullSize[0x0170] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMTransformSpace                                       Space;                                                   // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitial;                                                // 0x0141(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCZW[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x015C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4EB[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           CachedIndex;                                             // 0x0160(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_UnsetCurveValue
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
	{
	public:
		class FName                                                Curve;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedCurveIndex;                                        // 0x0138(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FM04[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_FMS2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          World;                                                   // 0x0070(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Transform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_6KKD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Global;                                                  // 0x0070(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Location : public FRigUnit
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             World;                                                   // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Location : public FRigUnit
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Global;                                                  // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_A65N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               World;                                                   // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_36ZR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Global;                                                  // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
	 * Size -> 0x000C
	 */
	struct FRigUnit_BoneHarmonics_BoneTarget
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
	 * Size -> 0x0010
	 */
	struct FRigUnit_Harmonics_TargetItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
	 * Size -> 0x0028
	 */
	struct FRigUnit_BoneHarmonics_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             WaveTime;                                                // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics
	 * Size -> 0x00C0 (FullSize[0x01F0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_BoneHarmonics_BoneTarget>           Bones;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0170(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0188(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x01A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       WaveEase;                                                // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAAL[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x01C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_419Q[0x2];                                   // 0x01C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x01C8(0x0028) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ItemHarmonics
	 * Size -> 0x00C0 (FullSize[0x01F0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_Harmonics_TargetItem>               Targets;                                                 // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0170(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0188(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x01A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       WaveEase;                                                // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PLK[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrder;                                           // 0x01C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7H9K[0x3];                                   // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x01C8(0x0028) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
	 * Size -> 0x0048
	 */
	struct FRigUnit_ChainHarmonics_Reach
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8OG3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ReachTarget;                                             // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReachAxis;                                               // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMinimum;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMaximum;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       ReachEase;                                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYP2[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
	 * Size -> 0x0078
	 */
	struct FRigUnit_ChainHarmonics_Wave
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A35Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaveFrequency;                                           // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMinimum;                                             // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       WaveEase;                                                // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7DG[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
	 * Size -> 0x0058
	 */
	struct FRigUnit_ChainHarmonics_Pendulum
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVHA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PendulumStiffness;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PendulumGravity;                                         // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumBlend;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumDrag;                                            // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMinimum;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMaximum;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       PendulumEase;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GEW[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UnwindAxis;                                              // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMinimum;                                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMaximum;                                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
	 * Size -> 0x0098
	 */
	struct FRigUnit_ChainHarmonics_WorkData
	{
	public:
		struct FVector                                             Time;                                                    // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           Items;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              Ratio;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     LocalTip;                                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumTip;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumPosition;                                        // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumVelocity;                                        // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HierarchyLine;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VelocityLines;                                           // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics
	 * Size -> 0x02D0 (FullSize[0x0400] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                ChainRoot;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0138(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x0150(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x0198(0x0078) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x0210(0x0088) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x0298(0x0058) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ8T[0xF];                                   // 0x02F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x0300(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x0360(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJRS[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
	 * Size -> 0x02D0 (FullSize[0x0400] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      ChainRoot;                                               // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7LN[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Speed;                                                   // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x0158(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x01A0(0x0078) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x0218(0x0088) Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x02A0(0x0058) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A20I[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x0300(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x0360(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AV2X[0x8];                                   // 0x03F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_Target
	 * Size -> 0x0048
	 */
	struct FRigUnit_AimBone_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J573[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SFO[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Space;                                                   // 0x003C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE1H[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimItem_Target
	 * Size -> 0x0048
	 */
	struct FRigUnit_AimItem_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SC5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Axis;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VU30[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Space;                                                   // 0x003C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
	 * Size -> 0x0070
	 */
	struct FRigUnit_AimBone_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7FP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFEU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBoneMath
	 * Size -> 0x0228 (FullSize[0x0230] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_8VJZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InputTransform;                                          // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Primary;                                                 // 0x0070(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Secondary;                                               // 0x00B8(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_085Q[0xC];                                   // 0x0104(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0110(0x0060) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x0170(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x01E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0200(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71N5[0xF];                                   // 0x0221(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone
	 * Size -> 0x0180 (FullSize[0x02B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Primary;                                                 // 0x0138(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Secondary;                                               // 0x0180(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOOO[0x3];                                   // 0x01CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x01D0(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneIndex;                                         // 0x0240(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0260(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0280(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x02A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G26T[0xF];                                   // 0x02A1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimItem
	 * Size -> 0x0190 (FullSize[0x02C0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94NS[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             Primary;                                                 // 0x0140(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimItem_Target                             Secondary;                                               // 0x0188(0x0048) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76CR[0xC];                                   // 0x01D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x01E0(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItem;                                              // 0x0250(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   PrimaryCachedSpace;                                      // 0x0270(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   SecondaryCachedSpace;                                    // 0x0290(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x02B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULIR[0xF];                                   // 0x02B1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
	 * Size -> 0x0028
	 */
	struct FRigUnit_AimConstraint_WorldUp
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      Kind;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS3R[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      Space;                                                   // 0x001C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
	 * Size -> 0x0080
	 */
	struct FRigUnit_AimConstraint_AdvancedSettings
	{
	public:
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x0000(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrderForFilter;                                  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H34[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ConstraintParent
	 * Size -> 0x0010
	 */
	struct FConstraintParent
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
	 * Size -> 0x0160 (FullSize[0x0290] - InheritedSize[0x0130])
	 */
	struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AimAxis;                                                 // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UpAxis;                                                  // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimConstraint_WorldUp                      WorldUp;                                                 // 0x0170(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMUX[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimConstraint_AdvancedSettings             AdvancedSettings;                                        // 0x01B0(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQHC[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   WorldUpSpaceCache;                                       // 0x0238(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   ChildCache;                                              // 0x0258(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           ParentCaches;                                            // 0x0278(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x0288(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDIN[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
	 * Size -> 0x000C
	 */
	struct FRigUnit_CCDIK_RotationLimit
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
	 * Size -> 0x0010
	 */
	struct FRigUnit_CCDIK_RotationLimitPerItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_CCDIK_WorkData
	{
	public:
		TArray<struct FCCDIKChainLink>                             Chain;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RotationLimitIndex;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              RotationLimitsPerItem;                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffector;                                          // 0x0040(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x01AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOJV[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBLR[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimit>                RotationLimits;                                          // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI4V[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x01D0(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIKPerItem
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x01AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OF0[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUP3[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimitPerItem>         RotationLimits;                                          // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N3H[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x01D0(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIKItemArray
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x01AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH04[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP8O[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimitPerItem>         RotationLimits;                                          // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1N8[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x01D0(0x0060) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
	 * Size -> 0x0030
	 */
	struct FRigUnit_DistributeRotation_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOLQ[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
	 * Size -> 0x0050
	 */
	struct FRigUnit_DistributeRotation_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationA;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationB;                                           // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRotationT;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemLocalTransforms;                                     // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation
	 * Size -> 0x0080 (FullSize[0x01B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       RotationEaseType;                                        // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GG3A[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRDW[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0160(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
	 * Size -> 0x0080 (FullSize[0x01B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       RotationEaseType;                                        // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELA5[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0158(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFKA[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
	 * Size -> 0x0080 (FullSize[0x01B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       RotationEaseType;                                        // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC5L[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0158(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F1B[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
	 * Size -> 0x0040
	 */
	struct FRigUnit_FABRIK_WorkData
	{
	public:
		TArray<struct FFABRIKChainLink>                            Chain;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffector;                                          // 0x0020(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK
	 * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
	 */
	struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8R7U[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x01B0(0x0040) Transient, NativeAccessSpecifierPublic
		bool                                                       bSetEffectorTransform;                                   // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SR5[0xF];                                   // 0x01F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIKPerItem
	 * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
	 */
	struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AUD[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x01B0(0x0040) Transient, NativeAccessSpecifierPublic
		bool                                                       bSetEffectorTransform;                                   // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1IR[0xF];                                   // 0x01F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIKItemArray
	 * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
	 */
	struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V2J[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x01B0(0x0040) Transient, NativeAccessSpecifierPublic
		bool                                                       bSetEffectorTransform;                                   // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RFG[0xF];                                   // 0x01F1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
	 * Size -> 0x0030
	 */
	struct FRigUnit_FitChainToCurve_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8N0F[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
	 * Size -> 0x0090
	 */
	struct FRigUnit_FitChainToCurve_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWIP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CurveColor;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SegmentsColor;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPPS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0030(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
	 * Size -> 0x0098
	 */
	struct FRigUnit_FitChainToCurve_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K99Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     ItemPositions;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemSegments;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CurvePositions;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CurveSegments;                                           // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationA;                                           // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemRotationB;                                           // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRotationT;                                           // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemLocalTransforms;                                     // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve
	 * Size -> 0x0220 (FullSize[0x0350] - InheritedSize[0x0130])
	 */
	struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0140(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2L47[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x01B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x01C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x01E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       RotationEaseType;                                        // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZXE[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14UA[0xF];                                   // 0x0211(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0220(0x0090) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x02B0(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR8R[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
	 * Size -> 0x0220 (FullSize[0x0350] - InheritedSize[0x0130])
	 */
	struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0140(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPYX[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x01B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x01C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x01E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       RotationEaseType;                                        // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F73[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSQW[0xF];                                   // 0x0211(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0220(0x0090) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x02B0(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39R0[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
	 * Size -> 0x0220 (FullSize[0x0350] - InheritedSize[0x0130])
	 */
	struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0140(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EControlRigCurveAlignment                                  Alignment;                                               // 0x01A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YADS[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x01A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SamplingPrecision;                                       // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x01B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x01C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x01E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       RotationEaseType;                                        // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8SL[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RNI[0xF];                                   // 0x0211(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x0220(0x0090) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x02B0(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYET[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
	 * Size -> 0x0070
	 */
	struct FRigUnit_ModifyBoneTransforms_PerBone
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJZ7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_ModifyTransforms_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
	{	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyBoneTransforms_PerBone>       BoneToModify;                                            // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigModifyBoneMode                                  Mode;                                                    // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67EA[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyBoneTransforms_WorkData              WorkData;                                                // 0x0150(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
	 * Size -> 0x0070
	 */
	struct FRigUnit_ModifyTransforms_PerItem
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPCH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyTransforms
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyTransforms_PerItem>           ItemToModify;                                            // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigModifyBoneMode                                  Mode;                                                    // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQQ9[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyTransforms_WorkData                  WorkData;                                                // 0x0150(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
	 * Size -> 0x0068
	 */
	struct FRigUnit_MultiFABRIK_WorkData
	{
	public:
		unsigned char                                              UnknownData_UIMZ[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
	 * Size -> 0x0020
	 */
	struct FRigUnit_MultiFABRIK_EndEffector
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK
	 * Size -> 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                RootBone;                                                // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_MultiFABRIK_EndEffector>            Effectors;                                               // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSEY[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterations;                                           // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYDI[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MultiFABRIK_WorkData                       WorkData;                                                // 0x0158(0x0068) Transient, NativeAccessSpecifierPublic
		bool                                                       bIsInitialized;                                          // 0x01C0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2EA8[0xF];                                   // 0x01C1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
	 * Size -> 0x0048
	 */
	struct FRigUnit_SlideChain_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4ZX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              ItemSegments;                                            // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BlendedTransforms;                                       // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0144(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DOR[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x0148(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChainPerItem
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0144(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J32I[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x0148(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChainItemArray
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigElementKey>                              Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0144(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UANG[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x0148(0x0048) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RegionScaleFactors
	 * Size -> 0x0010
	 */
	struct FRegionScaleFactors
	{
	public:
		float                                                      PositiveWidth;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeWidth;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveHeight;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeHeight;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.SphericalRegion
	 * Size -> 0x0014
	 */
	struct FSphericalRegion
	{
	public:
		unsigned char                                              UnknownData_YT2B[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
	 * Size -> 0x0010
	 */
	struct FSphericalPoseReaderDebugSettings
	{
	public:
		bool                                                       bDrawDebug;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDraw2D;                                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLocalAxes;                                          // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QV3[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugScale;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugSegments;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SphericalPoseReader
	 * Size -> 0x01A0 (FullSize[0x02D0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
	{
	public:
		float                                                      OutputParam;                                             // 0x0130(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      DriverItem;                                              // 0x0134(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DriverAxis;                                              // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationOffset;                                          // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveRegionSize;                                        // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRegionScaleFactors                                 ActiveRegionScaleFactors;                                // 0x0174(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FalloffSize;                                             // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRegionScaleFactors                                 FalloffRegionScaleFactors;                               // 0x0188(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       FlipWidthScaling;                                        // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipHeightScaling;                                       // 0x0199(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIBL[0x2];                                   // 0x019A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      OptionalParentItem;                                      // 0x019C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSphericalPoseReaderDebugSettings                   Debug;                                                   // 0x01A8(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSphericalRegion                                    InnerRegion;                                             // 0x01B8(0x0014) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FSphericalRegion                                    OuterRegion;                                             // 0x01CC(0x0014) Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             DriverNormal;                                            // 0x01E0(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Driver2D;                                                // 0x01F8(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   DriverCache;                                             // 0x0210(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   OptionalParentCache;                                     // 0x0230(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LocalDriverTransformInit;                                // 0x0250(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CachedRotationOffset;                                    // 0x02B0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedInitTransforms;                                   // 0x02C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHNB[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
	 * Size -> 0x0080
	 */
	struct FRigUnit_SpringIK_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDJT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CU6I[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
	 * Size -> 0x00B8
	 */
	struct FRigUnit_SpringIK_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedBones;                                             // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVector;                                        // 0x0010(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FCRSimPointContainer                                Simulation;                                              // 0x0040(0x0078) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK
	 * Size -> 0x01D0 (FullSize[0x0300] - InheritedSize[0x0130])
	 */
	struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HierarchyStrength;                                       // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorStrength;                                        // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorRatio;                                           // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootStrength;                                            // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootRatio;                                               // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipPolePlane;                                          // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVW0[0x2];                                   // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x0174(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DE48[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrimaryAxis;                                             // 0x0180(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0198(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLiveSimulation;                                         // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVJ7[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Iterations;                                              // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x01B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Y3C[0x6];                                   // 0x01BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SpringIK_DebugSettings                     DebugSettings;                                           // 0x01C0(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_SpringIK_WorkData                          WorkData;                                                // 0x0240(0x00B8) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNYL[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.ConstraintTarget
	 * Size -> 0x0070
	 */
	struct FConstraintTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0065(0x0009) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XTB[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_TransformConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     ConstraintDataToTargets;                                 // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint
	 * Size -> 0x00F0 (FullSize[0x0220] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                bone;                                                    // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        BaseTransformSpace;                                      // 0x0138(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ACI[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BaseBone;                                                // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTransforms;                                   // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K86A[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x01C0(0x0060) Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
	 * Size -> 0x0100 (FullSize[0x0230] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Item;                                                    // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformSpaceMode                                        BaseTransformSpace;                                      // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6U0[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      BaseItem;                                                // 0x01A0(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZX38[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseInitialTransforms;                                   // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQFN[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x01C8(0x0060) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5S4W[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
	 * Size -> 0x0002
	 */
	struct FRigUnit_ParentConstraint_AdvancedSettings
	{
	public:
		EConstraintInterpType                                      InterpolationType;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrderForFilter;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ParentConstraint
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x013D(0x0009) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POOH[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_ParentConstraint_AdvancedSettings          AdvancedSettings;                                        // 0x0158(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3VO[0x2];                                   // 0x015A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x015C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   ChildCache;                                              // 0x0160(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           ParentCaches;                                            // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PositionConstraint
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66CF[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZKL[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   ChildCache;                                              // 0x0158(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           ParentCaches;                                            // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LA9[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
	 * Size -> 0x0002
	 */
	struct FRigUnit_RotationConstraint_AdvancedSettings
	{
	public:
		EConstraintInterpType                                      InterpolationType;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEulerRotationOrder                                        RotationOrderForFilter;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RotationConstraint
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_RotationConstraint_AdvancedSettings        AdvancedSettings;                                        // 0x0150(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FI81[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZRR[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRigUnit_RotationConstraint_AdvancedSettings        AdvancedSettings;                                        // 0x0150(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1BC[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   ChildCache;                                              // 0x0158(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           ParentCaches;                                            // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFCI[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ScaleConstraint
	 * Size -> 0x0030 (FullSize[0x0160] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1B3[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
	 * Size -> 0x0060 (FullSize[0x0190] - InheritedSize[0x0130])
	 */
	struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      Child;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x013C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                Filter;                                                  // 0x013D(0x0003) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraintParent>                           Parents;                                                 // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47WL[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCachedRigElement                                   ChildCache;                                              // 0x0158(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           ParentCaches;                                            // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2W4[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
	 * Size -> 0x0030
	 */
	struct FRigUnit_TwistBones_WorkData
	{
	public:
		TArray<struct FCachedRigElement>                           CachedItems;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ItemRatios;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ItemTransforms;                                          // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBones
	 * Size -> 0x0080 (FullSize[0x01B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleAxis;                                                // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       TwistEaseType;                                           // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WL2[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DNE[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwistBones_WorkData                        WorkData;                                                // 0x0180(0x0030) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
	 * Size -> 0x0080 (FullSize[0x01B0] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKeyCollection                            Items;                                                   // 0x0130(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0140(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleAxis;                                                // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMAnimEasingType                                       TwistEaseType;                                           // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B8A[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC89[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwistBones_WorkData                        WorkData;                                                // 0x0180(0x0030) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
	 * Size -> 0x0070
	 */
	struct FRigUnit_TwoBoneIKSimple_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8A4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72BW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
	 * Size -> 0x01F0 (FullSize[0x0320] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                BoneA;                                                   // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneB;                                                   // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3NN[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x01B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x01C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVBJ[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PoleVector;                                              // 0x01E8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLXX[0x3];                                   // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x0204(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x020C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0G0[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x021C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0224(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBD7[0xB];                                   // 0x0225(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x0230(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneAIndex;                                        // 0x02A0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedBoneBIndex;                                        // 0x02C0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffectorBoneIndex;                                 // 0x02E0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVectorSpaceIndex;                              // 0x0300(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
	 * Size -> 0x0200 (FullSize[0x0330] - InheritedSize[0x0130])
	 */
	struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
	{
	public:
		struct FRigElementKey                                      ItemA;                                                   // 0x0130(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      ItemB;                                                   // 0x013C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigElementKey                                      EffectorItem;                                            // 0x0148(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPJ5[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0160(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x01C0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x01D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VZG[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PoleVector;                                              // 0x01F8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControlRigVectorKind                                      PoleVectorKind;                                          // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GN1Y[0x3];                                   // 0x0211(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      PoleVectorSpace;                                         // 0x0214(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x0220(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C85W[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemALength;                                             // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemBLength;                                             // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9X8[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x0240(0x0070) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItemAIndex;                                        // 0x02B0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedItemBIndex;                                        // 0x02D0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedEffectorItemIndex;                                 // 0x02F0(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCachedRigElement                                   CachedPoleVectorSpaceIndex;                              // 0x0310(0x0020) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
	{
	public:
		struct FVector                                             Root;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Effector;                                                // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JMW[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1D4U[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Elbow;                                                   // 0x0068(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_LWSS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Root;                                                    // 0x0010(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0070(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7L3V[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0090(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x00F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x0108(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RD3S[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWYF[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Elbow;                                                   // 0x0140(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
	 * Size -> 0x0080
	 */
	struct FRigUnit_PointSimulation_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IRM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPointsAsSpheres;                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76XZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
	 * Size -> 0x0014
	 */
	struct FRigUnit_PointSimulation_BoneTarget
	{
	public:
		class FName                                                bone;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslationPoint;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryAimPoint;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryAimPoint;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
	 * Size -> 0x0088
	 */
	struct FRigUnit_PointSimulation_WorkData
	{
	public:
		struct FCRSimPointContainer                                Simulation;                                              // 0x0000(0x0078) NativeAccessSpecifierPublic
		TArray<struct FCachedRigElement>                           BoneIndices;                                             // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation
	 * Size -> 0x0210 (FullSize[0x0310] - InheritedSize[0x0100])
	 */
	struct FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
	{
	public:
		TArray<struct FRigVMSimPoint>                              Points;                                                  // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          links;                                                   // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SimulatedStepsPerSecond;                                 // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMSimPointIntegrateType                                IntegratorType;                                          // 0x0144(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVKT[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerletBlend;                                             // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9GY[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_PointSimulation_BoneTarget>         BoneTargets;                                             // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0161(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0M7Z[0x6];                                   // 0x0162(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrimaryAimAxis;                                          // 0x0168(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAimAxis;                                        // 0x0180(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPJ9[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_PointSimulation_DebugSettings              DebugSettings;                                           // 0x01A0(0x0080) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigVMFourPointBezier                               Bezier;                                                  // 0x0220(0x0060) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_PointSimulation_WorkData                   WorkData;                                                // 0x0280(0x0088) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3N2[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterp : public FRigVMFunction_SimBase
	{
	public:
		float                                                      Current;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Target;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatSpringState                                   SpringState;                                             // 0x0020(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94NZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpVector
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
	{
	public:
		struct FVector                                             Current;                                                 // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFXS[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorSpringState                                  SpringState;                                             // 0x0060(0x0038) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpV2
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
	{
	public:
		float                                                      Target;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Force;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurrentInput;                                        // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVZ8[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Current;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetVelocityAmount;                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializeFromTarget;                                   // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0MM[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Velocity;                                                // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulatedResult;                                         // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatSpringState                                   SpringState;                                             // 0x0034(0x000C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
	{
	public:
		struct FVector                                             Target;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Force;                                                   // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurrentInput;                                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DFB[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Current;                                                 // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetVelocityAmount;                                    // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializeFromTarget;                                   // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W51F[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0068(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0080(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SimulatedResult;                                         // 0x0098(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorSpringState                                  SpringState;                                             // 0x00B0(0x0038) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
	{
	public:
		unsigned char                                              UnknownData_US7N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Target;                                                  // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Torque;                                                  // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurrentInput;                                        // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEGF[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Current;                                                 // 0x0060(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetVelocityAmount;                                    // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitializeFromTarget;                                   // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V86F[0xB];                                   // 0x0085(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0090(0x0020) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x00B0(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYS9[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               SimulatedResult;                                         // 0x00D0(0x0020) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuaternionSpringState                              SpringState;                                             // 0x00F0(0x0040) NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
