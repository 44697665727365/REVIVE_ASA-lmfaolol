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
	 * AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C
	 * Size -> 0x14A0 (FullSize[0x18A0] - InheritedSize[0x0400])
	 */
	class UDinoBlueprintBase_RootTransform_Swimming_C : public UPrimalAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UDinoBlueprintBase_RootTransform_Swimming_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0408(0x00F0) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Tag;                              // 0x04F8(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0500(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0508(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0510(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0530(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x0578(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x05C0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0608(0x0020)
		unsigned char                                              UnknownData_0WZI[0x8];                                   // 0x0628(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0630(0x01A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x07D0(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x07F0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x0838(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x0880(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x08C8(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x0910(0x0118)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0A28(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0B30(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x0B58(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x0B80(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0BC8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x0C10(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0C58(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x0CA0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x0CE8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0D30(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0D78(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x0DC0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x0E08(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0E50(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x0E98(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x0EE0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0F28(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x0F70(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0FB8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1000(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1048(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1090(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1158(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x11A0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x11C8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x1210(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1258(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x12A0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x12E8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1330(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1378(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x13C0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1408(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1450(0x0048)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x1498(0x00B8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1550(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1598(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x16A0(0x0028)
		class UAnimInstance*                                       __CustomProperty_AnimInstance_11D18D694E79535692C549A42359CABB; // 0x16C8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMoving;                                               // 0x16D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PFRL[0x7];                                   // 0x16D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x16D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     AimPitch;                                                // 0x16F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AimYaw;                                                  // 0x16F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RootLocationOffset;                                      // 0x1700(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAimOffset;                                           // 0x1718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WKB3[0x7];                                   // 0x1719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MovementAnimRate;                                        // 0x1720(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFlying;                                               // 0x1728(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A7JJ[0x7];                                   // 0x1729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RootOffsetTransform;                                     // 0x1730(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinimumMovementSpeed;                                    // 0x1790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallingAnimPlayRate;                                     // 0x1798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallingBlendInTime;                                      // 0x17A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallingBlendOutTime;                                     // 0x17A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovingBlendInTime;                                       // 0x17B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovingBlendOutTime;                                      // 0x17B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseFalling;                                             // 0x17C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFalling;                                              // 0x17C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U2ST[0x6];                                   // 0x17C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MinimumMovementSpeedFlying;                              // 0x17C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseTurning;                                             // 0x17D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTurning;                                              // 0x17D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTurningRight;                                           // 0x17D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MZGL[0x5];                                   // 0x17D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MinTurnRateForTurnAnimation;                             // 0x17D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TurningEnabledBlendTime;                                 // 0x17E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TurningDisabledBlendTime;                                // 0x17E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TurningDirectionBlendTime;                               // 0x17F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FlyingMoveBlendIn;                                       // 0x17F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FlyingMoveBlendOut;                                      // 0x1800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovementAnimRatePower;                                   // 0x1808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseSleepingAnim;                                        // 0x1810(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSleeping;                                             // 0x1811(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSkipAnimGraph;                                          // 0x1812(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseFlyingOffset;                                        // 0x1813(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NK2W[0x4];                                   // 0x1814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FlyingOffset;                                            // 0x1818(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentFlyingOffset;                                     // 0x1830(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LandedOffset;                                            // 0x1848(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BlinkBlend;                                              // 0x1860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseBlinking;                                            // 0x1868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMounted;                                              // 0x1869(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseMounted;                                             // 0x186A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2FI0[0x5];                                   // 0x186B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AimOffsetYawScale;                                       // 0x1870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AimOffsetPitchScale;                                     // 0x1878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRunning;                                              // 0x1880(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseRunning;                                             // 0x1881(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConformLinked;                                     // 0x1882(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MP2B[0x5];                                   // 0x1883(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GroundConfromAnimationInstance;                          // 0x1888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     AimOffsetInterpSpeed;                                    // 0x1890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovementAnimRateInterpSpeed;                             // 0x1898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		bool IsUsingRootTransform();
		void BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_AnimGraphNode_LinkedAnimGraph_11D18D694E79535692C549A42359CABB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_AnimGraphNode_BlendListByBool_1AA0027749A11519D59CE58C5A5BE251();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
