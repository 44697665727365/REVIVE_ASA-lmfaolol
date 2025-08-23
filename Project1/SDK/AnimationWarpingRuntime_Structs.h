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
	 * Enum AnimationWarpingRuntime.EFootPlacementLockType
	 */
	enum class EFootPlacementLockType : uint8_t
	{
		Unlocked         = 0,
		PivotAroundBall  = 1,
		PivotAroundAnkle = 2,
		LockRotation     = 3,
		MAX              = 4
	};

	/**
	 * Enum AnimationWarpingRuntime.EPelvisHeightMode
	 */
	enum class EPelvisHeightMode : uint8_t
	{
		AllLegs                                  = 0,
		AllPlantedFeet                           = 1,
		FrontPlantedFeetUphill_FrontFeetDownhill = 2,
		MAX                                      = 3
	};

	/**
	 * Enum AnimationWarpingRuntime.EActorMovementCompensationMode
	 */
	enum class EActorMovementCompensationMode : uint8_t
	{
		ComponentSpace   = 0,
		WorldSpace       = 1,
		SuddenMotionOnly = 2,
		MAX              = 3
	};

	/**
	 * Enum AnimationWarpingRuntime.EOffsetRootBoneMode
	 */
	enum class EOffsetRootBoneMode : uint8_t
	{
		Accumulate  = 0,
		Interpolate = 1,
		Hold        = 2,
		Release     = 3,
		MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimationWarpingRuntime.FootPlacementInterpolationSettings
	 * Size -> 0x0024
	 */
	struct FFootPlacementInterpolationSettings
	{
	public:
		float                                                      UnplantLinearStiffness;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnplantLinearDamping;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnplantAngularStiffness;                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnplantAngularDamping;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorLinearStiffness;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorLinearDamping;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorAngularStiffness;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloorAngularDamping;                                     // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFloorInterpolation;                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0O4[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.FootPlacementTraceSettings
	 * Size -> 0x001C
	 */
	struct FFootPlacementTraceSettings
	{
	public:
		float                                                      StartOffset;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SweepRadius;                                             // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceTypeQuery                                            ComplexTraceChannel;                                     // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PS2H[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxGroundPenetration;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimpleCollisionInfluence;                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceTypeQuery                                            SimpleTraceChannel;                                      // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1X5[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.FootPlacementRootDefinition
	 * Size -> 0x0020
	 */
	struct FFootPlacementRootDefinition
	{
	public:
		struct FBoneReference                                      PelvisBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKRootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.FootPlacementPelvisSettings
	 * Size -> 0x001C
	 */
	struct FFootPlacementPelvisSettings
	{
	public:
		float                                                      MaxOffset;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearStiffness;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearDamping;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalRebalancingWeight;                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOffsetHorizontal;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeelLiftRatio;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPelvisHeightMode                                          PelvisHeightMode;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EActorMovementCompensationMode                             ActorMovementCompensationMode;                           // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableInterpolation;                                    // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PJ1[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.FootPlacemenLegDefinition
	 * Size -> 0x0044
	 */
	struct FFootPlacemenLegDefinition
	{
	public:
		struct FBoneReference                                      FKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      BallBone;                                                // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpeedCurveName;                                          // 0x0034(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DisableLockCurveName;                                    // 0x003C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.FootPlacementPlantSettings
	 * Size -> 0x0034
	 */
	struct FFootPlacementPlantSettings
	{
	public:
		float                                                      SpeedThreshold;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToGround;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFootPlacementLockType                                     LockType;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRCW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnplantRadius;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplantRadiusRatio;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnplantAngle;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReplantAngleRatio;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxExtensionRatio;                                       // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinExtensionRatio;                                       // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparatingDistance;                                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnalignmentSpeedThreshold;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnkleTwistReduction;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustHeelBeforePlanting;                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACK1[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_FootPlacement
	 * Size -> 0x0348 (FullSize[0x0410] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
	{
	public:
		EWarpingEvaluationMode                                     PlantSpeedMode;                                          // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZO0A[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      IKFootRootBone;                                          // 0x00CC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00DC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FFootPlacementPelvisSettings                        PelvisSettings;                                          // 0x00EC(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FFootPlacemenLegDefinition>                  LegDefinitions;                                          // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FFootPlacementPlantSettings                         PlantSettings;                                           // 0x0118(0x0034) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFootPlacementInterpolationSettings                 InterpolationSettings;                                   // 0x014C(0x0024) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFootPlacementTraceSettings                         TraceSettings;                                           // 0x0170(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUG3[0x284];                                 // 0x018C(0x0284) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_OffsetRootBone
	 * Size -> 0x00C8 (FullSize[0x0190] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_OffsetRootBone : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_I33V[0xC8];                                  // 0x00C8(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
	 * Size -> 0x00D0 (FullSize[0x0198] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		EWarpingEvaluationMode                                     Mode;                                                    // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RN4L[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrientationAngle;                                        // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocomotionAngle;                                         // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRootMotionSpeedThreshold;                             // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocomotionAngleDeltaThreshold;                           // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLNY[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              SpineBones;                                              // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKFootRootBone;                                          // 0x00F0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKFootBones;                                             // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EAxis                                                      RotationAxis;                                            // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WID[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistributedBoneOrientationAlpha;                         // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationInterpSpeed;                                     // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WarpingAlpha;                                            // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetAlpha;                                             // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOffsetAngle;                                          // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_492X[0x70];                                  // 0x0128(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
	 * Size -> 0x0028
	 */
	struct FSlopeWarpingFootDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootSize;                                                // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
	 * Size -> 0x00B0
	 */
	struct FSlopeWarpingFootData
	{
	public:
		unsigned char                                              UnknownData_0WU6[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
	 * Size -> 0x0218 (FullSize[0x02E0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_5NY0[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      IKFootRootBone;                                          // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00F0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootDefinition>                 FeetDefinitions;                                         // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSlopeWarpingFootData>                       FeetData;                                                // 0x0110(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                        PelvisOffsetInterpolator;                                // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UPZ[0x58];                                  // 0x0128(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GravityDir;                                              // 0x0180(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CustomFloorOffset;                                       // 0x0198(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedDeltaTime;                                         // 0x01B0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QTT[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetFloorNormalWorldSpace;                             // 0x01B8(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                        FloorNormalInterpolator;                                 // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XVJK[0x58];                                  // 0x01D8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetFloorOffsetLocalSpace;                             // 0x0230(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVectorRK4SpringInterpolator                        FloorOffsetInterpolator;                                 // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9QR[0x58];                                  // 0x0250(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxStepHeight;                                           // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepMeshInsideOfCapsule : 1;                            // 0x02AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPullPelvisDown : 1;                                     // 0x02AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomFloorOffset : 1;                               // 0x02AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasOnGround : 1;                                        // 0x02AC(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebug : 1;                                          // 0x02AC(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFloorSmoothingInitialized : 1;                          // 0x02AC(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JVY[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ActorLocation;                                           // 0x02B0(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityDirCompSpace;                                     // 0x02C8(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
	 * Size -> 0x0030
	 */
	struct FStrideWarpingFootDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ThighBone;                                               // 0x0020(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
	 * Size -> 0x0180 (FullSize[0x0248] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
	{
	public:
		EWarpingEvaluationMode                                     Mode;                                                    // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07WG[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StrideDirection;                                         // 0x00D0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StrideScale;                                             // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocomotionSpeed;                                         // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRootMotionSpeedThreshold;                             // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      PelvisBone;                                              // 0x00F4(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      IKFootRootBone;                                          // 0x0104(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I90Z[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStrideWarpingFootDefinition>                FootDefinitions;                                         // 0x0118(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FInputClampConstants                                StrideScaleModifier;                                     // 0x0128(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDY7[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWarpingVectorValue                                 FloorNormalDirection;                                    // 0x0140(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWarpingVectorValue                                 GravityDirection;                                        // 0x0160(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FIKFootPelvisPullDownSolver                         PelvisIKFootSolver;                                      // 0x0180(0x0080) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOrientStrideDirectionUsingFloorNormal;                  // 0x0200(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompensateIKUsingFKThighRotation;                       // 0x0201(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampIKUsingFKLimits;                                   // 0x0202(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K7EE[0x45];                                  // 0x0203(0x0045) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
