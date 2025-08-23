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
	 * BlueprintGeneratedClass Dino_Character_BP_Climber.Dino_Character_BP_Climber_C
	 * Size -> 0x0FA0 (FullSize[0x4288] - InheritedSize[0x32E8])
	 */
	class ADino_Character_BP_Climber_C : public ADino_Character_BP_NoBossArena_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bAllowClimber_RotateToLookDirWhileClimbing;              // 0x32F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_AttachFromGround;                          // 0x32F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_ClimbAroundCorners;                        // 0x32F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_ClimbOutOfWater;                           // 0x32F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SW8Z[0x4];                                   // 0x32F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DistanceFromWaterSurfaceToAllowClimbing;                 // 0x32F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimbingConsumesStamina;                                // 0x3300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreventRiderWeaponsWhenClimbing;                        // 0x3301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldBoostUpAtTopOfClimb;                              // 0x3302(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G4SW[0x5];                                   // 0x3303(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             reachedTopOfClimbImpulse;                                // 0x3308(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreventAimOffsetsWhileClimbing;                         // 0x3320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_DinoClimberState                                         CurrentClimberState_Base;                                // 0x3321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J6Y7[0x6];                                   // 0x3322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETraceTypeQuery>                                    ClimbableObjectTypes;                                    // 0x3328(0x0010) Edit, BlueprintVisible
		double                                                     GravityScale_Climbing;                                   // 0x3338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Seeking_Rider;                             // 0x3340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Seeking_NoRider_MIN;                       // 0x3348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Seeking_NoRider_MAX;                       // 0x3350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Climbing_Rider;                            // 0x3358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Climbing_NoRider_MIN;                      // 0x3360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Climbing_NoRider_MAX;                      // 0x3368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Attaching;                                 // 0x3370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Skidding;                                  // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Attached_NoRider_MIN;                      // 0x3380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Attached_NoRider_MAX;                      // 0x3388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Attached_Rider;                            // 0x3390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_AttachingMontage_Ground;                             // 0x3398(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_AttachingMontage_Air;                                // 0x33A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_OrientTPVCameraToCurrentSurface;           // 0x33A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AutoPlayCameraShake_Jump;                       // 0x33A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AutoPlayCameraShake_Land;                       // 0x33AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AutoPlayCameraShake_Attach_Air;                 // 0x33AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AutoPlayCameraShake_Detach;                     // 0x33AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AutoPlayCameraShake_WallJump;                   // 0x33AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_11BI[0x2];                                   // 0x33AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ClimberTPVCameraOffsetInterpSpeed;                       // 0x33B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_DetachMontage;                                       // 0x33B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbableSurfaceMinDot;                                  // 0x33C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FlipPastDotWithFlipAxis;                                 // 0x33C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        TraceMap_SocketNames_Server;                             // 0x33D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     SurfaceTraceDistance_Climbing;                           // 0x33E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsReadyToClimb;                                         // 0x33E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRestoringToAttached;                                  // 0x33E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_PreventUpdateClimbingRotationWhileAttached;     // 0x33EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BUK9[0x5];                                   // 0x33EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     startClimbingDelay;                                      // 0x33F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     requiredDistanceAboveNonClimbableSurface;                // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AI_AttachedToSurface;                           // 0x3400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_General;                                   // 0x3401(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_HoldJumpToSeekWhileFalling;                // 0x3402(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_PressJumpToToggleSeek;                     // 0x3403(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_RotateToLookDirOnSeekStart;                // 0x3404(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_RequireDistanceAboveNonWalkableSurface_Seeking; // 0x3405(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberRestoreToAttached;                               // 0x3406(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29AM[0x1];                                   // 0x3407(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     requiredNormalDotToClimb_MAX;                            // 0x3408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     requiredNormalDotToClimb_MIN;                            // 0x3410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     currentDistanceToSurface;                                // 0x3418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RequiredDistanceFromSurface_MAX;                         // 0x3420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberAi_Spawning_LookForSurfaceRadius;                 // 0x3428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_isMeshInterpolating;                            // 0x3430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R401[0x7];                                   // 0x3431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentMeshInterpSpeed_rotation;                         // 0x3438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentMeshInterpSpeed_location;                         // 0x3440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimberWallJump;                                   // 0x3448(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDidWallJump;                                            // 0x3449(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HYMX[0x6];                                   // 0x344A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            WallJumpRotation;                                        // 0x3450(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     wallJumpVelocity;                                        // 0x3468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             meshTargetLocation;                                      // 0x3470(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            meshTargetRotation;                                      // 0x3488(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     lastWallJumpStartTime;                                   // 0x34A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     noClimbTimeAfterWallJump;                                // 0x34A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingStaminaCost_Attached;                            // 0x34B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingStaminaCost_Skidding;                            // 0x34B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingStaminaCost_Climbing;                            // 0x34C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingStaminaCost_Climbing_RunMultiplier;              // 0x34C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RequiredStaminaToClimb;                                  // 0x34D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastJumpFromGroundTime;                                  // 0x34D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     jumpFromGroundClimbDelay;                                // 0x34E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingStaminaCost_WallJump;                            // 0x34E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastStaminaCostTime;                                     // 0x34F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              LowStaminaMessage_Climbing;                              // 0x34F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              LowStaminaMessage_WallJump;                              // 0x3508(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       bCanClimberPlayLandingAnim;                              // 0x3518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LNIV[0x7];                                   // 0x3519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MeshClimbingOffset;                                      // 0x3520(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_DinoClimberState                                         PreviousClimberState_Base;                               // 0x3538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CurrentClimberStateIndex;                                // 0x3539(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_Skid;                                      // 0x353A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_OnlySkidOnAttach;                               // 0x353B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0K1E[0x4];                                   // 0x353C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AttachBelowAbsSkiddingVelocity;                          // 0x3540(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    minRequiredClimbableTraceHits;                           // 0x3548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VN2C[0x4];                                   // 0x354C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                ClimbingAnimsToClean;                                    // 0x3550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystem*                                     Ref_Climber_AttachVFX;                                   // 0x3560(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     JumpDelay;                                               // 0x3568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AllowForwardInputAboveForwardSkiddingVelocity;   // 0x3570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastAttachToSurfaceStartTime;                            // 0x3578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     maxTimeToAttachToSurface;                                // 0x3580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StayOnSurfaceVelocity_Failsafe;                          // 0x3588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastServerTickTime;                                      // 0x3590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingVelocity_Walk;                                   // 0x3598(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingVelocity_RunMultiplier;                          // 0x35A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastDetachStartTime;                                     // 0x35A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     currentDetachDuration;                                   // 0x35B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_ToAttach_Ground;                             // 0x35B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_ToAttach_Air;                                // 0x35C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_ToDetach;                                    // 0x35C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              IsClimbingIndex_MAX;                                     // 0x35D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3SYB[0x7];                                   // 0x35D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentClimbableSurfaceLocation;                         // 0x35D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentClimbableSurfaceLocation_Move;                    // 0x35F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             currentClimbableSurfaceNormal;                           // 0x3608(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentClimbableSurfaceFwdMoveDir;                       // 0x3620(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxClimbVelocity_ReachedError;                           // 0x3638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              IsClimbingIndex_MIN;                                     // 0x3640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimbingClimberFlipWithLookDir;                    // 0x3641(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TXTE[0x6];                                   // 0x3642(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ignoreControlRotationForFlipBelowUpDot;                  // 0x3648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       RiderAnim_Climbing_Idle;                                 // 0x3650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       RiderAnim_Climbing_Move;                                 // 0x3658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     attachAroundCornerPadding;                               // 0x3660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_CanRotateToLookDirWhileClimbingBackwards;       // 0x3668(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_RotateInPlaceWhileAttached;                // 0x3669(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_68XZ[0x6];                                   // 0x366A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_FlipMontage_Left;                                    // 0x3670(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_FlipMontage_Right;                                   // 0x3678(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MeshClimbingOffset_Attaching_Ground;                     // 0x3680(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MeshClimbingOffset_Attaching_Air;                        // 0x3698(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AttachFromGroundHeight_Depricated;                       // 0x36B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimberFlipped;                                       // 0x36B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VK54[0x7];                                   // 0x36B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RequiredDistanceFromSurface_MIN;                         // 0x36C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_AllowClimbInput_Flip;                        // 0x36C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForceNetUpdateThisServerTick;                           // 0x36D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7OF5[0x7];                                   // 0x36D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            currentRiderViewRotation;                                // 0x36D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     SyncControlRotationInterval;                             // 0x36F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastSyncControlRotationTime;                             // 0x36F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ClimbingRiderFPVSocketName;                              // 0x3700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OnDetachImpulse;                                         // 0x3708(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_ToAlignToSurface_AttachGround;               // 0x3720(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_MovementCalc_UseClimbingTraceHitsAboveDotToVelocity; // 0x3728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            NonControlledClimberRotation_Previous;                   // 0x3730(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceClimberFlipHardSetRotation;                        // 0x3748(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IVPR[0x7];                                   // 0x3749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SurfaceTraceOffsetTransforms;                            // 0x3750(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      TraceMap_SocketNames_ClimbingIK;                         // 0x3760(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<E_DinoClimber_TraceType>                            TraceMap_TraceTypes;                                     // 0x3770(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_NormalWeights;                                  // 0x3780(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_NormalWeights_NoRider;                          // 0x3790(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_NormalWeights_Seeking;                          // 0x37A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_NormalWeights_Climbing_Forward;                 // 0x37B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_NormalWeights_Climbing_Backward;                // 0x37C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_NormalWeights_ReplaceFailure;                   // 0x37D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_LookLockDots;                                   // 0x37E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             TraceMap_CustomTraceDistances;                           // 0x37F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            TraceMap_MaxRetries;                                     // 0x3800(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Idle;                                // 0x3810(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Forward;                             // 0x3820(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Backward;                            // 0x3830(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Falling;                             // 0x3840(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Seeking_Swimming;                            // 0x3850(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Attaching;                          // 0x3860(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Skidding;                           // 0x3870(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Forward;                            // 0x3880(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Forward_NoRider;                    // 0x3890(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Backward;                           // 0x38A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Climbing_Backward_NoRider;                   // 0x38B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Attached_Rider;                              // 0x38C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               UseTraceMap_Attached_NoRider;                            // 0x38D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     RequiredClimbingTurnDeltaForTurnAnims;                   // 0x38E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>                                               UseTraceMap_CheckForGround;                              // 0x38E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     StayOnSurfaceVelocity_MAX;                               // 0x38F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StayOnSurfaceVelocity_MIN;                               // 0x3900(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_ClimbingClientDesyncErrorToleranceOverride;      // 0x3908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DistanceBelowClimberToCheckForCorners_Seeking;           // 0x3910(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DistanceBelowClimberToCheckForCorners_MAX;               // 0x3918(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AutoDetachOnFlatGroundAboveUpDot;                // 0x3920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PreventLandingAnimDuration;                              // 0x3928(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PreventLandingAnimDuration_NoRider;                      // 0x3930(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PreventUpdateTargetOrientationBelowDotToSurface;         // 0x3938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LerpTargetOrientationMaxSpeed;                           // 0x3940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRequireDistanceAboveNonWalkableSurface_Climbing;        // 0x3948(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q0IR[0x7];                                   // 0x3949(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MeshInterpSpeed_Location_Climbing;                       // 0x3950(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_GroundAttach;                   // 0x3958(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_AirAttach;                      // 0x3960(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_Climbing;                       // 0x3968(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_Climbing_Running;               // 0x3970(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Location_Climbing_Running;               // 0x3978(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Location_NotClimbing;                    // 0x3980(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberUseDetachImpulse;                                // 0x3988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberHasPassedAttachFromGroundDot;                    // 0x3989(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BPT5[0x6];                                   // 0x398A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Climber_ForceDetachAboveUpDot;                           // 0x3990(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RemoteClientClimber_RotationInterpSpeed_Climbing;        // 0x3998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberInput_Server_Run_Pressed;                        // 0x39A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_RunBackwardsWhileClimbing;                 // 0x39A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberInput_Client_Run_Pressed;                        // 0x39A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_IgnoreLookLockTracesWhenClimbingBackwards;      // 0x39A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8EFI[0x4];                                   // 0x39A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             previousWorldLocation;                                   // 0x39A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentClimbingCameraOrientation;                        // 0x39C0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetClimbingCameraOrientation;                         // 0x39D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     ClimberCameraOrientationInterpSpeed;                     // 0x39F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TraceDistance_CheckForGround;                            // 0x39F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberCameraFinalRotationLerpTime_MAX_Current;          // 0x3A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NonDediClimberClimbingVelocity;                          // 0x3A08(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APrimalBuff*                                         Ref_IsClimbingBuff;                                      // 0x3A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Ref_IsClimbingBuffClass;                                 // 0x3A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClimberTPVCameraOffset_Seeking;                          // 0x3A30(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClimberTPVCameraOffset_Attached;                         // 0x3A48(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClimberTPVCameraOffset_Climbing;                         // 0x3A60(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClimberTPVCameraOffset_CurrTarget;                       // 0x3A78(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RequiredClimbingTurnDeltaForTurnAnims_RemoteClient;      // 0x3A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DistanceBelowClimberToCheckForCorners_MIN;               // 0x3A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentCornerStartCheckDistanceBelowClimber;             // 0x3AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingCostsStaminaBelowClimberUpDot;                   // 0x3AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberClampRiderControlRotationYawToAngleRange;         // 0x3AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimbingClampArmedFPVRiderControlRotationYaw;           // 0x3AB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5LP2[0x7];                                   // 0x3AB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimerInterval_Flipping;                                  // 0x3AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimerInterval_Detaching;                                 // 0x3AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>                                               TraceMap_ReplaceFailure;                                 // 0x3AD0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bSeekingClimberPlayClimbingAnims_Idle;                   // 0x3AE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSeekingClimberPlayClimbingAnims_Move;                   // 0x3AE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSeekingClimberPlayClimbingAnims_Run;                    // 0x3AE2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7DB4[0x5];                                   // 0x3AE3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CenterSphereTraceForSurfaceLocation_Distance;            // 0x3AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            NonControlledClimberResetRotation;                       // 0x3AF0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     RemoteClientClimber_RotationInterpSpeed_Reset;           // 0x3B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RemoteClientClimber_RotationInterpSpeed_Reset_Detaching; // 0x3B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_WallJump;                       // 0x3B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_Detaching;                      // 0x3B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MeshInterpSpeed_Rotation_NotClimbing;                    // 0x3B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CenterSphereTraceForSurface_RelativeRadiusMultiplier;    // 0x3B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberInput_Server_Seek_Pressed;                       // 0x3B38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRestoreToSeeking;                                       // 0x3B39(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ASR[0x6];                                   // 0x3B3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SurfaceTraceDistance_Seeking;                            // 0x3B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_ClimbingIK;                                // 0x3B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_ClimbingAI;                                // 0x3B49(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_DrawClimbingTraces;                        // 0x3B4A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_WildSpawnAttaching;                        // 0x3B4B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_PreventAllClimbingLogicStaminaLoss;        // 0x3B4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_PreventAiAttachOnSpawn;                    // 0x3B4D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugClimber_SimulateClimbLogicBetweenFrames;           // 0x3B4E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQ9Z[0x1];                                   // 0x3B4F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DebugClimber_Duration_ClimbingTrace;                     // 0x3B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeAfterStopClimbingToPreventSeeking;                   // 0x3B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonDediClimberClimbingVelocity_InterpSpeed;              // 0x3B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PreventDetachAnimWhenDetachingAboveUpDot;                // 0x3B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberGroundAttachDuration;                             // 0x3B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_AI_WanderWhileClimbing;                    // 0x3B78(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_AI_PursueTargetWhileClimbing;              // 0x3B79(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AI_ClimbWander_OnlyWhenUntamed;                 // 0x3B7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AI_ClimbWander_CanWanderOntoWalls;              // 0x3B7B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AI_DetachWhenDamaged;                           // 0x3B7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimberClimbWandering;                                // 0x3B7D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YE4L[0x2];                                   // 0x3B7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Climber_AI_Spawning_MaxAllowedDistanceFromOrigin;        // 0x3B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberAi_Spawning_CheckForGroundDistance;               // 0x3B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RiderDismountOffset;                                     // 0x3B90(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberOverrideRiderDismountLocationBelowUpDot;          // 0x3BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ListenServerClimberOrientToLookSpeedScale;               // 0x3BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_MovementCalc_UseClimbingTraceHitsBelowAngleDeltaToVelocity; // 0x3BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_PreventClimbingMovement;                        // 0x3BC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreventAiClimberDetachForDeadTarget_Wild;               // 0x3BC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreventAiClimberDetachForDeadTarget_Tamed;              // 0x3BC2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D3CA[0x5];                                   // 0x3BC3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ClimberRestoreToClimbingRotation;                        // 0x3BC8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             ClimbingNewFallVelocity;                                 // 0x3BE0(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_SurfaceTrace_ValidHit;            // 0x3BF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_SurfaceTrace_Retry_Success;       // 0x3C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_SurfaceTrace_Initial;             // 0x3C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_Velocity_StayOnSurface;           // 0x3C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_CurrentNormal;                    // 0x3C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_CurrentNormal_Move;               // 0x3C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Length_CurrentNormal_Move;                  // 0x3C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_DesiredClimbingDir;               // 0x3C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_Velocity_AntiSkid;                // 0x3C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_RotationAxes;                     // 0x3C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_SurfaceTrace_GroundCheck;         // 0x3C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Thickness_SurfaceTrace_Retry_Attempt;       // 0x3C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Climber_AttachedCustomMovementMode;                      // 0x3C58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8TCG[0x3];                                   // 0x3C59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ClimberAttachVFX_SocketName;                             // 0x3C5C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9AQG[0x4];                                   // 0x3C64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Climber_AttachVFX_Scale;                                 // 0x3C68(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     Ref_VFX_ClimbingFootstep;                                // 0x3C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Ref_SFX_ClimbingFootstep;                                // 0x3C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     VFX_Scale_ClimbingFootstep;                              // 0x3C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MaxClimberStateIndex;                                    // 0x3C98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R5JV[0x7];                                   // 0x3C99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentAttachDuration;                                   // 0x3CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentFlipDuration;                                     // 0x3CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastFlipStartTime;                                       // 0x3CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AllowBackwardsInputBelowForwardSkiddingVelocity; // 0x3CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SkidIntensity_Forward;                                   // 0x3CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SkidIntensity_Right;                                     // 0x3CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RequiredDistanceFromSurface_ToAttach;                    // 0x3CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLockClimbingMeshRotationInterpSpeed;                    // 0x3CD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AEJ8[0x7];                                   // 0x3CD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DebugClimber_Length_DesiredMoveDir;                      // 0x3CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ClimberClimbingRotation_Current;                         // 0x3CE8(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            NonControlledClimberRotation_Target;                     // 0x3D00(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<struct FRotator>                                    recentClimbingRotations;                                 // 0x3D18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     ClimbingClimberRotationRate;                             // 0x3D28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingClimberRotationRate_NoRider_NoTarget;            // 0x3D30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingClimberRotationRate_NoRider_Target;              // 0x3D38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingClimberRotationRate_RunMultiplier_Rider;         // 0x3D40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdateClimberRotationPastError_Attached;                 // 0x3D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdateClimberRotationPastError_Climbing_CurrentRotation_Pitch; // 0x3D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdateClimberRotationPastError_Climbing_CurrentRotation_Roll; // 0x3D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdateClimberRotationPastError_Climbing_PrevRotations_Pitch; // 0x3D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdateClimberRotationPastError_Climbing_PrevRotations_Roll; // 0x3D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_ReachedClimbingRotationBelowError;               // 0x3D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LerpTargetRotationAboveLookDotToUp;                      // 0x3D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     IgnoreClimberRotationAboveAttachViewRotationDot;         // 0x3D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShooterCharacter*                                   Ref_LastSetRider;                                        // 0x3D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AShooterCharacter*                                   Ref_LastClearedRider;                                    // 0x3D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClimberTPVCameraOffset_Skidding;                         // 0x3D98(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_FOV_WarpMultiplier_Target;                       // 0x3DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_FOV_WarpPercent;                                 // 0x3DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_RiderStartFOV;                                   // 0x3DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_WarpFOV;                                   // 0x3DC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TVFA[0x7];                                   // 0x3DC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Climber_FOV_InterpSpeed;                                 // 0x3DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimberWarpingFOV;                                    // 0x3DD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FV9A[0x7];                                   // 0x3DD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Climber_FOV_WarpMultiplier_Current;                      // 0x3DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WorldSpaceCameraOverride_ActivateAboveCameraAbsUpDots;   // 0x3DE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WorldSpaceCameraOverride_PreventAboveAbsUpDots;          // 0x3DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WorldSpaceCameraOverride_ActivateBelowClimberUpVectorDownDot; // 0x3DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ClimberAttachViewRotation;                               // 0x3E00(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     Climber_AI_ChanceToAttachOnSpawn;                        // 0x3E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_JumpMontage;                                         // 0x3E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_LandingMontage;                                      // 0x3E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_ToJump;                                      // 0x3E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AnimPercent_ToWallJump;                                  // 0x3E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Ref_WallJumpMontage;                                     // 0x3E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<struct FRotator>                                    ClimbingCameraFinalRotationRiderTargets;                 // 0x3E48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             ClimbingCameraFinalRotationLerpTimes;                    // 0x3E58(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     ResetControlRotationOnZoomWhenAboveDotToClimbingNormal_ZoomOut; // 0x3E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ResetControlRotationOnZoomWhenAboveDotToClimbingNormal_ZoomIn; // 0x3E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>                                               ClimbingCameraFinalRotationsReached;                     // 0x3E78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     ClimberCameraFinalRotationLerpTime_MAX_Attach;           // 0x3E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimberCameraFinalRotationLerpTime_MAX_Detach;           // 0x3E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AnimPlayRate_Attach;                             // 0x3E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AnimPlayRate_Detach;                             // 0x3EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    maxNumPrevClimbingRotationSamples;                       // 0x3EA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RAGG[0x4];                                   // 0x3EAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShake_Jump;                                        // 0x3EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Jump_Scale;                                  // 0x3EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Jump_Speed;                                  // 0x3EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CameraShake_Land;                                        // 0x3EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Land_Scale;                                  // 0x3ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Land_Speed;                                  // 0x3ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CameraShake_Attach_Air;                                  // 0x3EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Attach_Air_Scale;                            // 0x3EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Attach_Air_Speed;                            // 0x3EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CameraShake_Detach;                                      // 0x3EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Detach_Scale;                                // 0x3F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_Detach_Speed;                                // 0x3F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CameraShake_WallJump;                                    // 0x3F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_WallJump_Scale;                              // 0x3F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraShake_WallJump_Speed;                              // 0x3F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AttachFromGroundUpDotThreshold;                  // 0x3F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimberInput_Client_Seek_Pressed;                       // 0x3F30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimber_Jumping_Client;                               // 0x3F31(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WAGI[0x6];                                   // 0x3F32(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ChangeWallJumpToNormalJumpAboveUpDot;                    // 0x3F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxWallJumpToSurfaceNormalLerpPercent;                   // 0x3F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_UseClimbingIK;                             // 0x3F48(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2ULQ[0x7];                                   // 0x3F49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ClimbingIK_SocketName_Substring_Groups;                  // 0x3F50(0x0010) Edit, BlueprintVisible
		class FString                                              ClimbingIK_SocketName_Substring_UseFloorLocationOverride; // 0x3F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FVector2D                                           ClimbingIK_CurrentBlendspaceAxes_Front;                  // 0x3F70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ClimbingIK_CurrentBlendspaceAxes_Back;                   // 0x3F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_Current;                     // 0x3F90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_InterpSpeed;                 // 0x3F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffsetTrace_Length;                 // 0x3FA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffsetTraceRadius_CapsulePercent;   // 0x3FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_FromBend_Up;                 // 0x3FB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_FromBend_Running_Up;         // 0x3FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_FromBend_Down;               // 0x3FC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_FromBend_Running_Down;       // 0x3FC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_AdditionalZ;                 // 0x3FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_CanUpdateAxesPastErrorWithPrev;               // 0x3FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_CanUpdateAxesAboveDotToSurfaceNormal;         // 0x3FE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MaxDotToSurfaceNormal;                        // 0x3FE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MaxAxisClamp;                                 // 0x3FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_TraceRadius;                                  // 0x3FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_TraceLength;                                  // 0x4000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_TraceStartOffset_X;                           // 0x4008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_TraceStartOffset_Z;                           // 0x4010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RequiredVelocity_StartUsingMovingSeekTraces;             // 0x4018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastStopClimbingTime;                                    // 0x4020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_TimeAfterStopClimbingToPreventFallDamage;        // 0x4028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimber_WallJumping;                                  // 0x4030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OQGH[0x7];                                   // 0x4031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastUpVectorAboveForceStopClimbingDotTime;               // 0x4038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimberCheckingForForceDetach;                        // 0x4040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MNRF[0x7];                                   // 0x4041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Climber_AllowedTimeAboveForceDetachDot;                  // 0x4048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_ClimbingWander_PercentChanceToWander;         // 0x4050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_ClimbingWander_PercentChanceToUpdateTargetRotation; // 0x4058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Climber_AI_ClimbingWander_TargetForward;                 // 0x4060(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastUpdateClimbWanderingTime;                            // 0x4078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_ClimbWandering_Duration_Current;              // 0x4080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_ClimbWandering_Duration_MIN;                  // 0x4088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_ClimbWandering_Duration_MAX;                  // 0x4090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             Climber_AI_AttachedSpawnTraceDirArray_Pitch;             // 0x4098(0x0010) Edit, BlueprintVisible
		TArray<double>                                             Climber_AI_AttachedSpawnTraceDirArray_Yaw;               // 0x40A8(0x0010) Edit, BlueprintVisible
		double                                                     Climber_AI_RequiredClearRadiusForAttachedSpawn;          // 0x40B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             ClimbingIK_CurrentMeshBendDotProducts;                   // 0x40C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     lastRestoreToSeekingTime;                                // 0x40D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_RestartSeekingDelay_MIN;                      // 0x40D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AI_RestartSeekingDelay_MAX;                      // 0x40E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Length_RotationAxes;                        // 0x40E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_ClimbingIK_TraceLength_BendHitDir;          // 0x40F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_ClimbingIK_TraceThickness_BendHitDir;       // 0x40F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_ClimbingIK_BoxExtent_TraceFloor;            // 0x4100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_ClimbingIK_SphereRadius_HeightOffsetHit;    // 0x4108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClimbingIK_MeshBendOffset_Current;                       // 0x4110(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonRiddenClimber_ListenServer_RotationInterpSpeed_Climbing; // 0x4128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonRiddenClimber_ListenServer_RotationInterpSpeed_Reset; // 0x4130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonRiddenClimber_ListenServer_RotationInterpSpeed_Reset_Detaching; // 0x4138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingIK_MeshHeightOffset_InterpSpeed_Running;         // 0x4140(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Radius_CurrentLocation;                     // 0x4148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugClimber_Radius_CurrentLocation_Move;                // 0x4150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_StayOnSurfaceVelocity_RunMultiplier;             // 0x4158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLockSeeking;                                            // 0x4160(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimberCheckingForAutoDetach;                         // 0x4161(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MDGR[0x6];                                   // 0x4162(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastUpVectorAboveAutoDetachDotTime;                      // 0x4168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Climber_AllowedTimeAboveAutoDetachDot;                   // 0x4170(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRealJump;                                             // 0x4178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5Q9G[0x7];                                   // 0x4179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ClimbingClimberRotationRate_RunMultiplier_NoRider;       // 0x4180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AI_AllowAILogicWhileClimbing;                   // 0x4188(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AI_ForceSeekWhilePursuingTarget;                // 0x4189(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9DBY[0x6];                                   // 0x418A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Climber_CurrReplicatedLoc;                               // 0x4190(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Climber_CurrReplicatedRot;                               // 0x41A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     NonControlledClimber_CorrectLocation_ErrorTolerance;     // 0x41C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonControlledClimber_CorrectLocation_InterpSpeed;        // 0x41C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClimber_Jumping_Server;                               // 0x41D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_PreventSeekTraces;                              // 0x41D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EJLH[0x6];                                   // 0x41D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EncumberedMessage_Climbing;                              // 0x41D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              EncumberedMessage_WallJump;                              // 0x41E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       bClimber_OverrideStateIsMovement;                        // 0x41F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bClimber_AllowClimbRunAnim;                              // 0x41F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ICUH[0x6];                                   // 0x41FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ClimberLookRotationDeadzoneAngle;                        // 0x4200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimulateLogicBetweenFrames_Climbing_StepDeltaTime;       // 0x4208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimulateLogicBetweenFrames_Climbing_PositionErrorToleranceSqrd; // 0x4210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowClimber_SimulateClimbLogicBetweenFrames;           // 0x4218(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EY7M[0x7];                                   // 0x4219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStruct_ClimberSimulatedMoveData                    LastCachedServerClimberMoveData;                         // 0x4220(0x0048) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentClimbableSurfaceNormal_Move;                      // 0x4268(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimulateLogicBetweenFrames_Seeking_StepDeltaTime;        // 0x4280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPSkipMovementOptimization();
		void OnClimberFinishedAttaching();
		void IsClimbingTraceHitResultValid(bool bValidHit, struct FHitResult* Hit, const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t TraceRetryNum, bool* bResult);
		void CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult);
		void AdjustClimbTraceTransform(const class FName& WithSocketName, struct FTransform* WithTraceTransform, struct FTransform* ClimberTransform, struct FTransform* AdjustedTransform);
		void Tick_SimulateSeekingBetweenFrames(bool* bFoundSurface);
		void ClearCachedServerClimberMoveData();
		void CacheServerClimberMoveData();
		void Tick_SimulateClimbingBetweenFrames();
		void OnWalkableGroundFoundWhileClimbing();
		void GetDesiredMoveDirection(struct FVector* Direction);
		void GetCorrectSurfaceTraceOffsetUseTraceMapOverride(TArray<bool>* UseTraceMap);
		void GetCorrectClimbingTraceWeightOverride(bool* UseResult, TArray<double>* Weights);
		void ClimberUpdateServerTimerByClimberStateOverride();
		void CalcCurrentClimbingVelocityOverrideState(const struct FVector& CurrentVelocity, bool* ShouldOverrideVelocity, struct FVector* Velocity);
		void Climber_AllowMovementWhileClimbing(bool* Result);
		void IsClimberDetaching_Pure(bool checkPrevious, bool* Result);
		void ClimberCanEverJump_Pure(bool* Result);
		void Climber_CanEverJump(bool* Result);
		void OnJumped();
		void NetSync_ClimberIsJumping(bool Newval);
		void BP_OnPostNetReplication(const struct FVector& ReplicatedLoc, const struct FRotator& ReplicatedRot);
		void Climber_AI_OnPreventStopServerTick();
		void Climber_AI_CanStopServerTick(bool* Result);
		void ShouldClimberLockInputsWhileAttached(bool* Result);
		void Climber_AI_ClimbingCanAttack(int32_t AttackIndex, bool* Result);
		void Climber_AI_OnFlee();
		void Climber_AI_CheckForAttackWhileClimbing();
		bool BPOnStartJump();
		void Climber_OnRunReleased();
		void Climber_OnRunPressed();
		void BPCharacterUnsleeped();
		void BPCharacterSleeped();
		void ClimberAI_UpdateHasTargetWhileClimbing();
		void IsClimberPlayingPreventInputAnim(bool* Result);
		void BP_OnSetDeath();
		void IsClimberInClimbingStateRange(E_DinoClimberState startState, E_DinoClimberState EndState, bool checkPrevious, bool* Result);
		void BPOrderedMoveToLoc(const struct FVector& DestLoc);
		bool BP_IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried);
		void BPCharacterDetach();
		void IsClimberNearWaterSurface(double Distance, bool* Result);
		void IsClimberClimbing_Pure(bool isFinishedAttaching, bool includeSeekingwhenabovefalse, bool includeDetaching, bool checkPrevious, bool* Result);
		void GetCorrectWallJumpAnim(const struct FVector& wallJumpVelocity, class UAnimMontage** Anim);
		void ShouldUseTraceHitForClimbingMovement(const struct FVector& HitLocation, bool* Result);
		void ShouldClimberCheckNewClimbingRotation(const struct FRotator& climbingRotation, bool* Result);
		void IsClimberMovingOnSurface_Pure(bool checkPrevious, bool* Result);
		void CanClimberSoftSetRotation(bool* Result);
		void ConvertClimberSpaceVectorToWorld_Pure(const struct FVector& climberSpaceVector, struct FVector* WorldVector);
		void ConvertClimberSpaceVectorToWorld(const struct FVector& climberSpaceVector, struct FVector* WorldVector);
		void ConvertVectorToWorld_Pure(const struct FVector& LocalVector, struct FVector* WorldVector);
		void ConvertRotatorToWorld_Pure(const struct FRotator& localRotator, struct FRotator* worldRotator);
		void ConvertRotatorToWorld(const struct FRotator& localRotator, struct FRotator* worldRotator);
		void ConvertVectorToWorld(const struct FVector& LocalVector, struct FVector* WorldVector);
		void ClimberUpdateServerTimer(double newMIN, double newMAX);
		void IsClimberFalling_Pure(bool* Result);
		void IsClimberFalling(bool* Result);
		void Climber_TraceForMoveNormal(const struct FVector& TargetLocation, bool* foundHit, struct FVector* newMoveNormal);
		bool CanClimberRestoreToSeeking();
		void Climber_AI_CanWanderOntoWalls(bool* Result);
		void ClimbingIK_SetNewBlendspaceAxes();
		void DebugClimber_NetDrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, double Duration, bool allowDraw, bool forceDebug, bool preventReplication);
		void DebugClimber_NetDrawDebug_Sphere(const struct FVector& Center, double Radius, int32_t Segments, const struct FLinearColor& Color, double Duration, bool allowDraw, bool forceDebug, bool preventReplication);
		void ClimberUpdateServerTimerByClimberState();
		void Climber_AI_CanStopAttachedServerTick(bool* Result);
		void Climber_AI_Update_ClimbWandering_Duration();
		void Climber_AI_CanUpdateClimbWandering(bool* Result);
		void UpdateClimbingClimber_AI();
		void Climber_AI_Update_IsClimbWandering(bool forceStartWandering);
		void Climber_AI_Update_ClimbWander_TargetRotation();
		void ConvertRotatorToLocal(const struct FRotator& Rotator, struct FRotator* localRotator);
		void ClimbingIK_UpdateMeshBendDotProducts();
		void Climber_AI_CanWanderWhileClimbing(bool* Result);
		void GetCorrectClimbingTraceMaxRetryCount_Pure(int32_t Index, int32_t* Count);
		void GetCorrectClimbingTraceMaxRetryCount(int32_t Index, int32_t* Count);
		void GetCorrectClimbingTraceType_Pure(int32_t Index, E_DinoClimber_TraceType* Type);
		void GetCorrectClimbingTraceType(int32_t Index, E_DinoClimber_TraceType* Type);
		void GetCorrectLookLockDot_Pure(int32_t traceIndex, double* dot);
		void GetCorrectLookLockDot(int32_t traceIndex, double* dot);
		void GetCorrectClimbingTraceWeight_Pure(int32_t traceIndex, bool isForReplace, double* Weight);
		void GetCorrectClimbingTraceWeight(int32_t traceIndex, bool isForReplace, double* Weight);
		void ShouldClimberUseClimbingTraceHit(int32_t traceIndex, const struct FVector& HitLocation, const struct FVector& HitNormal, bool* Result);
		void CanClimberRetryClimbingTrace(int32_t traceIndex, bool* Result);
		void ProcessResultsOfClimbingTraces(int32_t numValidTraceHits, TArray<int32_t>* traceIndecesArray, bool requireAllTraceHitsValid, int32_t numTraceSockets, const struct FTransform& currentClimberTransform, TArray<bool>* traceHitsArray, TArray<struct FVector>* traceHitLocationsArray, TArray<struct FVector>* traceNormalsArray, bool centerTraceHit, const struct FVector& desiredSurfaceLocation, bool* isSurfaceValid, struct FVector* surfaceLocation, struct FVector* SurfaceNormal, struct FVector* surfaceLocation_Move, struct FVector* SurfaceNormal_Move);
		void CenterSphereTraceForSurfaceLocation(const struct FTransform& currTransform, bool* foundSurface, struct FVector* surfaceLocation);
		void TraceForClimbableSurface(TArray<struct FTransform>* traceSocketOffsetTransforms, const struct FTransform& ClimberTransform, double TraceLength, bool preventTraceRetries, TArray<int32_t>* currSurfaceTraceIndecesArray, bool* foundAnyValidTraceHits, int32_t* numValidTraceHits, TArray<bool>* validTraceHits, TArray<struct FVector>* traceHitLocations, TArray<struct FVector>* traceHitNormals);
		void ConvertRotatorToLocal_Pure(const struct FRotator& Rotator, struct FRotator* localRotator);
		void ClimbingIK_TraceForNewSurfaceNormals(const class FString& socketGroupSubstring, double* dot);
		void ClimbingIK_UpdateMeshHeightOffset();
		void UpdateClimbingIK();
		void GetClimberDesiredWallJumpDir(struct FVector* desiredDir);
		void OnStartSeeking();
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void OnClimberAttached();
		void Climber_PlayCameraShake_Client(class UClass* Shake, double Scale, double Speed);
		void BP_OnZoomOut();
		void BP_OnZoomIn();
		void GetAverageMaxDeltawithRotatorArray(TArray<struct FRotator>* Array, const struct FRotator& Rotator, double* averageDelta);
		void GetAverageMeanDeltawithRotatorArray(TArray<struct FRotator>* Array, const struct FRotator& Rotator, double* averageDelta);
		void GetMaxDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, double* Delta);
		void GetAverageDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, double* Delta);
		void AddRiderToFinalCameraRotationArrays(class AShooterCharacter* RiderToAdd);
		void DetermineNewRiderFinalCameraRotationIndex(class AShooterCharacter* theRider, int32_t* Index);
		void RemoveRiderFromFinalCameraRotationArrays(class AShooterCharacter* RiderToRemove);
		void GetClimberLookDirDotToClimbingNormal_Pure(double* dot);
		void GetClimberLookDirDotToClimbingNormal(double* dot);
		void GetClimberUpVector_Pure(struct FVector* Up);
		void GetCurrentRiderFinalCameraRotationArrayIndex(class AShooterCharacter* thisRider, int32_t* Index);
		void UpdateRidingPlayersFinalCameraRotations(bool startedClimbing);
		void BPDoAttack(int32_t AttackIndex);
		void CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result);
		void CanClimberStopNonDediTick_NonControlled(bool* Result);
		void Input_Jump_Released();
		void Input_Jump_Pressed();
		void Climber_AI_CanAttachOnSpawn(bool* Result);
		void GetClimberLookDir(struct FVector* lookDir);
		void IsPrimalCharacterFriendly(class APrimalCharacter* Character, bool* Result);
		void GetClimberLookDirDottoNormal(const struct FVector& Normal, double* dot);
		void GetClimberViewLocation_Pure(struct FVector* Location);
		void GetClimberViewLocation(struct FVector* Location);
		void CanClimberSeek(bool isForStart, bool* Result);
		void IsClimberClimbingSimple_Pure(bool excludeDetaching, bool checkPrev, bool* Result);
		void IsClimberClimbing_Simple(bool excludeDetaching, bool checkPrev, bool* Result);
		void ClimberOnServerRunReleased();
		void Climber_OnServerRunPressed();
		void ClientTick_UpdateClimberTargetFOV();
		void CanClimberStopNonDediTick_Controlled(bool* Result);
		float BPModifyFOV(float FOVIn);
		void HasClimberResetTPVCamera(bool* Result);
		void StopAllClimberLogic();
		void GetClimbingSurfaceNormalFromRotation(const struct FRotator& climbingRotation, struct FVector* SurfaceNormal);
		void GetAngleDeltaBetweenVectors(const struct FVector& VectorA, const struct FVector& VectorB, const struct FVector& AroundAxis, double* theta);
		void RotateRotatorForwardVectortoTargetConstant(const struct FRotator& currentRotator, const struct FVector& targetForward, double RotationRate, struct FRotator* newRotator);
		void RemoveAxisFromVector(const struct FVector& Vector, const struct FVector& Axis, struct FVector* newVector);
		void IsClimberSwimming_Pure(bool* Result);
		void CanClimberFinishAttaching(bool* Result);
		void CanClimberFinishSkidding(bool* Result);
		void CanClimberSkid(bool* Result);
		void ServerTick_Flipping();
		void DoesClimberHaveEnoughStaminaPure(double needsStamina, bool* Result);
		void DoesClimberHaveEnoughStamina(double needsStamina, bool* Result);
		void CanClimberCallServerRunInputEvents(bool newRunPressed, bool* Result);
		void IsClimberGrounded_Pure(bool* Result);
		void Input_Run_Toggle();
		void Input_Run_Released();
		void Input_Run_Pressed();
		void ResetShouldDrawCrosshair();
		void ClimberCheckforObstaclesInDir(const struct FVector& checkDir, double checkTrace_Distance, double checkTrace_Padding, ETraceTypeQuery checkTrace_Channel, bool forceDebug, bool* NoObstacles, struct FHitResult* obstacleHit);
		void DebugClimber_NetDrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, double Duration, double Thickness, bool allowDraw, bool forceDebug, bool preventReplication);
		void GetClimberRightVector_Pure(struct FVector* Right);
		void GetClimberForwardVector_Pure(struct FVector* Forward);
		void OnWallJump(const struct FVector& wallJumpVelocity);
		void CanWallJump(bool* Result);
		bool BP_PreventMovementMode(EMovementMode newMovementMode, unsigned char newCustomMode);
		struct FVector BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime);
		void GetCurrentClimberLookRotation(bool bIgnoreDeadzone, struct FRotator* lookRot);
		void IsRemoteClientClimber(bool* Result);
		void Climber_AI_OnSetTamedFollowTarget();
		bool AllowGrappling();
		void Climber_AI_OnSetTarget(class AActor* NewTarget);
		void ClimberStartSeeking();
		void ClimberStopSeeking();
		void SetClimberIK_Active(bool newActive);
		void GetClimbingIK_BlendspaceAxes_Back(struct FVector2D* axes);
		void GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes);
		void UpdateNonDediClimberMesh();
		bool BPDesiredRotationIsLocalSpace();
		void ClimberCheckForAboveWalkableGround(bool* Result);
		bool BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation);
		void BPSetupTamed(bool bWasJustTamed);
		void IsClimberSeeking(bool checkPrevious, bool* Result);
		void DidClimberJustStartorStopClimbing(bool* Result);
		void IsClimberSwimming(bool* Result);
		void ResetClimbingVars();
		void UpdateClimberInputs();
		void IsOwningClientClimber(bool* Result);
		void CanClimberUpdateClimbingCameraFinalOrientation(class AShooterCharacter* viewingRider, bool* Result);
		void CanUpdateClimberTPV_CameraOffset(bool* Result);
		void ClientTickUpdateClimberTPV_CameraOffset();
		void UpdateOwningClientIsClimbingBuff();
		void StoreNonDediClimberClimbingVelocity();
		struct FRotator BPCameraRotationFinal(class APrimalCharacter* viewingCharacter, const struct FRotator& InCurrentFinalRot);
		void GetClimberCapsuleBottomWorldLocation(double offsetTowardsCenter, struct FVector* Bottom);
		void GetClimberVelocityPure(bool forceUseWorldDeltaSeconds, struct FVector* Velocity);
		bool BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter);
		struct FVector BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter);
		struct FRotator BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation);
		float BPModifyViewHitDir(class APrimalCharacter* viewingCharacter, float InViewHitDir);
		struct FRotator BPCameraBaseOrientation(class APrimalCharacter* viewingCharacter);
		void GetClimberVelocityAlongNormal(const struct FVector& Normal, double* Velocity);
		void GetClimberVelocity(bool forceUseWorldDeltaSeconds, struct FVector* Velocity);
		void GetCurrentClimbingStaminaCost(double* cost);
		void GetCurrentClimbingRotationSpeed(double* RotationSpeed);
		void GetCurrentClimbingMoveVector(const struct FVector& OverrideMoveDir, struct FVector* moveVector);
		void GetCurrentClimbingVelocityMax(double* Velocity);
		void OnSeekReleased(bool Toggle);
		void OnSeekPressed(bool Toggle);
		void Climber_OnClientRunReleased();
		void Climber_OnClientRunPressed();
		void OnClimbingTracesFoundNoValidSurface(TArray<bool>* hitMap);
		void GetNewTraceVectorsForAroundCornerCheck(const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retryTrace, struct FVector* updatedTraceStart, struct FVector* updatedTraceEnd, bool* overrideTraceHit, struct FVector* newHitLoc, struct FVector* newHitNormal);
		void GetCustomSurfaceTraceDistance(int32_t traceIndex, double* customDistance);
		void ShouldClimber_CenterSphereTraceForSurfaceLocation(bool* Result);
		void SetNewClimbingRotation(const struct FRotator& NewRotation);
		void ForceStopClimbingNow();
		void CanClimberApplyDetachImpulse(bool* Result);
		void LerpRotatorToTarget(const struct FRotator& currentRotator, const struct FRotator& targetRotator, double lerpSpeed, struct FRotator* lerpedRotator);
		void TraceforNonClimbableSurface(const struct FVector& traceDir, bool* Found);
		void GetSurfaceTraceOffsetArrayfromUseTraceMap(TArray<bool>* useMap, TArray<struct FTransform>* Result, TArray<int32_t>* IndexArray);
		void MakeClimbingRotationFromForwardVector(const struct FVector& newForward, struct FRotator* NewRotation);
		void GetCurrentClimbingTurnAngleDelta(double* Delta);
		void DebugClimber_NetDrawDebug_RotationAxes(const struct FRotator& Rotator, const struct FVector& Origin, double Length, double Duration, double Thickness, bool allowDraw, bool forceDebug, bool preventReplication);
		void SetClimbableSurfaceVars(const struct FVector& newSurfaceNormal, const struct FVector& newSurfaceNormal_Move, const struct FVector& newSurfaceLocation, const struct FVector& newSurfaceLocation_Move);
		void SnapClimberToSurface();
		void GetClimberStateIndex(bool GetPrevious, unsigned char* Index);
		void CanClimberUpdateClimbingRotation(const struct FRotator& NewRotation, bool* Result, struct FRotator* approvedRotation);
		void CheckForRetrySurfaceTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retry, struct FVector* retryStart, struct FVector* retryEnd, bool* overrideTraceHit, struct FVector* NewLocation, struct FVector* NewNormal);
		void GetClimbingTurnDirection(int32_t* turnDir);
		void GetClimberFlippedRotation(struct FRotator* flipRotation);
		void GetClimberFlipAxis(struct FVector* Axis);
		void GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir);
		void MakeClimbingRotationfromSurfaceNormal(const struct FVector& SurfaceNormal, struct FRotator* Rotation);
		void GetClimberRightVector(struct FVector* Right);
		void GetClimberForwardVector(struct FVector* Forward);
		void GetClimberUpVector(struct FVector* Up);
		void SetClimberCanIgnoreWater(bool restoreToDefault, bool Newval);
		void CanClimberCurrentlyClimbOutOfWater(bool* Result);
		void CheckForClimbOutOfWater(bool* AllowClimbing);
		void UpdateControlledClientClimber();
		void ClimberTick_Server();
		void ClimberTick_NonDedi();
		void UpdateNonControlledClimber();
		void UpdateClimberMovementMode();
		void OnClimberDetached();
		void UpdateClimberOverrideFallVelocity();
		void CanClimberRotatetoTargetRotation(bool* Result);
		void IsClimberDetaching(bool checkPrevious, bool* Result);
		void SyncRiderLookDirection();
		void OnRep_CurrentClimberStateIndex();
		void CanClimberMeshInterpolate(bool* Result);
		void GetClimberFlipCheckNormal(struct FVector* Normal);
		void GetCorrectFlippingAnim(class UAnimMontage** Anim);
		void CanClimberAttachFromGround(bool* Result);
		void GetCorrectClimberRotation(bool* updateRotation, struct FRotator* Rotation);
		void CanReceiveClimbingInputBackward(bool* Result);
		void CanReceiveClimbingInput_Forward(bool* Result);
		void GetCorrectSurfaceTraceDistance(bool isForRetry, double* traceDist);
		void UpdateClimbingClimber(bool IgnoreFailure, bool* canKeepClimbing);
		void GetCorrectSurfaceTraceOffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct FTransform>* offsetTransforms, TArray<int32_t>* TraceIndeces);
		void GetCorrectDetachAnim(class UAnimMontage** Anim);
		void IsClimberPlayingAnim(class UAnimMontage* checkAnim, bool* Result);
		void InterpClimbertoTransform(const struct FTransform& Transform, double LocationInterpSpeed, double RotationInterpSpeed, double DeltaTime, bool* reachedTransform);
		void SoftSetClimberTransform(const struct FTransform& NewTransform);
		void GetCorrectAttachAnim(class UAnimMontage** Anim);
		void GetCorrectMeshOffset(struct FVector* Offset);
		void StoreClimbTraceSocketOffsets();
		void IsClimberAttaching(bool checkPrevious, bool* Result);
		void RotateClimberToLookRotation();
		void CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* AllowClimbing);
		void UpdateRiderWithClimberState();
		void IsClimberInAnyClimberState(bool checkPrevious, bool* Result);
		void FlipAttachedClimber();
		void CanAttachedClimberFlip(bool* Result);
		void CheckforAttachedClimberFlip();
		void IsClimberMovingonSurface(bool checkPrevious, bool* Result);
		void GetClimbingForwardVelocity(double* ForwardVelocity);
		void GetClimbingRightVelocity(double* RightVelocity);
		void DetachClimberfromSurface();
		void ServerTick_Detaching();
		void GetServerTickDeltaTime(double* DeltaTime);
		void Skid(const struct FVector& currVelocity, const struct FVector& dir, double InterpSpeed, struct FVector* NewVelocity);
		void GetMoveonSurfaceVelocity(struct FVector* Velocity);
		void CanClimberContinueAttaching(bool* Result);
		void RotateClimberToTargetClimbingRotation();
		void UpdateClimberTargetClimbingRotation();
		void AttachClimbertoSurface();
		void IsClimbingIndexEqualToCurrent(unsigned char Index, bool* Result);
		void IsClimberMovingAbsoluteUp(bool* Result);
		void ServerTick_Override();
		void StopClimbing(bool resetRestoreToSeeking, bool skipDetach);
		void ReplicateIndexUpdateNonDediClimber();
		void FindValidAiSpawnTransform(bool* canSpawn, struct FTransform* validTransform);
		void ReplicateIndexUpdateTargetTPV_CameraOffset();
		void ReplicateIndexUpdateServerAndClientClimber();
		void ReachedTopOfClimb();
		void UpdateClimbingVars(bool validSurfaceFound, const struct FVector& SurfaceNormal, const struct FVector& SurfaceNormal_Move, const struct FVector& surfaceLocation, const struct FVector& surfaceLocation_Move, TArray<bool>* hitMap, TArray<int32_t>* traceIndexArray);
		void IsHitSurfaceClimbable(const struct FHitResult& Hit, bool* Result);
		void ReplicateClimbingIndex();
		void UpdateServerClimberByClimbingIndex();
		void UpdateClimberStateByClimbingIndex(unsigned char NewIndex);
		void UpdateClimbingVelocity();
		void CalcCurrentClimbingVelocity(struct FVector* newClimbingVel);
		void ServerTick_Climbing();
		void ServerTick_Attached();
		void ServerTick_Skidding();
		void ServerTick_Attaching();
		void ServerTick_Seeking();
		void ClientTick_NoInput();
		void ClientTickInputBackward();
		void ClientTick_Input_Forward();
		void ShouldClimberDrawCrosshairWhileClimbing(bool* Result);
		void IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void ReduceClimberStamina(double Amount);
		void DisplayMessage(const class FString& Message);
		void ClimberHasEnoughStaminatoClimb(bool HUD_NotifyOnFailure, bool* Result);
		void IsClimberClimbing(bool isFinishedAttaching, bool includeSeekingwhenabovefalse, bool includeDetaching, bool checkPrevious, bool* Result);
		void ReduceStaminaWhileClimbing();
		void ClimberPlayLandAnim(bool forceSuccess);
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void HardSetClimberRotationButInterpMeshLocation(const struct FRotator& NewRotation);
		void CleanUpClimbingAnims(bool* animsClean);
		void SetShouldRestoretoAttached(bool Newval);
		void SoftSetClimberRotation(const struct FRotator& NewRotation);
		void WallJump();
		void InterpolateClimberMesh(class USkeletalMeshComponent* meshToInterpolate);
		void UpdateClimberCilmbingAnims(bool ensureAnimsPlaying);
		void SetUseAimOffsets(bool newUse);
		void GetStayOnSurfaceVelocity(bool bOverrideVars, const struct FVector& OverrideSurfaceLoc, double OverrideDistFromSurface, const struct FVector& OverrideClimberLoc, bool bPreventUpdatingServerTimer, struct FVector* Velocity);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void InitClimber();
		void BPUnstasis();
		void Climber_AI_CheckForAttachToSurfaceOnSpawn();
		void ClientSetClimberState(unsigned char NewState);
		void CanClimberContinueClimbing(bool* Result);
		void Climber_AI_SetAttachedToSurface(bool Newval, bool forceSuccess);
		void GetClimberAiController(class ADino_AIController_BP_Climber_C** ref);
		void Climber_AI_DetachFromSurface();
		void IsClimberAttached(bool checkPrevious, bool* Result);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void BPTimerNonDedicated();
		void UpdateClimberTransforms();
		void GetDefaultClimber(class ADino_Character_BP_Climber_C** ref);
		void IsClimberGrounded(bool* Result);
		void CalcCurrentClimbableSurface(double TraceDistance, bool preventTraceRetries, bool requireAllTraceHitsAreValid, bool OverrideClimberTransform, const struct FTransform& NewTransform, bool OverrideTraceUseMap, TArray<bool>* newUseMap, bool* validSurfaceFound, struct FVector* SurfaceNormal, struct FVector* SurfaceNormal_Move, struct FVector* surfaceLocation, struct FVector* surfaceLocation_Move, TArray<bool>* hitMap, TArray<int32_t>* traceIndexArray);
		void NetSetClimberState(unsigned char newStateIndex);
		void BPTimerServer();
		void InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_RunToggle_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
		void Server_StartSeeking();
		void Server_StopSeeking();
		void Server_NetSetClimberState(unsigned char NewState);
		void SetReadyToClimbAfterDelay(double Delay);
		void CheckUntil_SetAiAttachedToSurface();
		void PlayAttachParticleWhenCloseToSurface();
		void PreventLandingAnimBriefly();
		void CheckOnJumpStateAfterJumpDelay();
		void BP_OnJumpPressed();
		void BP_OnJumpReleased();
		void SyncToServer_RiderViewRotation(const struct FRotator& ViewRotation);
		void SyncToOwningClient_ClimbingVelocity(const struct FVector& climbingVelocity);
		void Server_OnRunPressed();
		void Server_OnRunReleased();
		void Multi_Climber_OnRunPressed();
		void Multi_Climber_OnRunReleased();
		void ClearClimberControlRotationRoll();
		void ClearClimberControlRotationRoll_NextTick();
		void ReceiveBeginPlay();
		void LockClimbingMeshRotationInterpSpeedForDuration(double Duration);
		void Multi_SyncClimberDesiredRotationOnDetach(const struct FRotator& desiredRotation);
		void InitClimber_NextTick();
		void InitClimber_Now();
		void Multi_OnWallJump(const struct FVector& wallJumpVelocity);
		void Multi_DrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, double Duration, double Thickness);
		void Server_OnJumpPresssed();
		void Climber_JumpAfterDelay(double Delay);
		void Multi_HardSetClimberActorRotation(const struct FRotator& NewRotation);
		void Climber_WallJumpAfterDelay(double Delay, const struct FVector& Velocity);
		void Multi_ClimberPlayLandAnim(bool forceSuccess);
		void Client_Jump(bool forceSuccess);
		void Multi_DrawDebug_Sphere(const struct FVector& Center, double Radius, int32_t Segments, const struct FLinearColor& Color, double Duration);
		void Multi_DrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, double Duration);
		void ClimberAIRestartSeekingAfterDelay();
		void Multi_SoftSetClimberActorRotation(const struct FRotator& NewRotation);
		void Server_SetIsClimberJumping(bool Newval);
		void Client_SetActorLocAndRot(const struct FVector& NewLoc, const struct FRotator& NewRot, bool bSoftSet);
		void ExecuteUbergraph_Dino_Character_BP_Climber(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
