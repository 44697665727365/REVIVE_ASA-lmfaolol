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
	 * AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C
	 * Size -> 0x1DB0 (FullSize[0x21B0] - InheritedSize[0x0400])
	 */
	class UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C : public UPrimalAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0408(0x0180) HasGetValueTypeHash
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Tag;                              // 0x0588(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0590(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0598(0x0008)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x05A0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0x05E8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x0630(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0678(0x0020)
		unsigned char                                              UnknownData_WVUC[0x8];                                   // 0x0698(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x06A0(0x01A0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0840(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x0860(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x08A8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x08F0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0x0938(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x0980(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x0A88(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0AB0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0x0AD8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x0B20(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x0B68(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x0BB0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x0BF8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x0C40(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x0C88(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x0CD0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0D18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0D60(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x0DA8(0x0118)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0EC0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x0F08(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x0F50(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0F98(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0FE0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x1028(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x1070(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x10B8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x1100(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1208(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1230(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x1258(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x12A0(0x0048)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x12E8(0x00B8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x13A0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x13E8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1430(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1478(0x0048)
		struct FAnimNode_MultiFabrik_Dinos                         AnimGraphNode_MultiFabrik_Dinos;                         // 0x14C0(0x00F8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x15B8(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x1600(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x1648(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1690(0x0048)
		struct FAnimNode_GroundBones                               AnimGraphNode_GroundBones;                               // 0x16D8(0x0150)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1828(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1870(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1938(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x1980(0x0048)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x19C8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x19E8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1AF0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1B18(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1B40(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x1B60(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1BA8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1CB0(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1CD8(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1CF8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x1D40(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1D88(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1DD0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1E18(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1E60(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1EA8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1EF0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1F38(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1F80(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1FC8(0x0048)
		class UAnimInstance*                                       __CustomProperty_AnimInstance_4D685DC24339E1D75BF06F97979299ED; // 0x2010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMoving;                                               // 0x2018(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_36QX[0x7];                                   // 0x2019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x2020(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     AimPitch;                                                // 0x2038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AimYaw;                                                  // 0x2040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RootLocationOffset;                                      // 0x2048(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAimOffset;                                           // 0x2060(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6E4Z[0x7];                                   // 0x2061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MovementAnimRate;                                        // 0x2068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFalling;                                              // 0x2070(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XXNJ[0x7];                                   // 0x2071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxMovementAnimRate;                                     // 0x2078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseFalling;                                             // 0x2080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9S16[0x7];                                   // 0x2081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MovingAnimSpeedTreshold;                                 // 0x2088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinMovementAnimRate;                                     // 0x2090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTurning;                                              // 0x2098(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseTurning;                                             // 0x2099(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTurningRight;                                           // 0x209A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9S2E[0x5];                                   // 0x209B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TurningEnabledBlendTime;                                 // 0x20A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TurningDisabledBlendTime;                                // 0x20A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TurningDirectionBlendTime;                               // 0x20B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinTurnRateForTurnAnimation;                             // 0x20B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseSwimming;                                            // 0x20C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSwimming;                                             // 0x20C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0DSX[0x6];                                   // 0x20C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SwimmingMovingAnimSpeedThreshold;                        // 0x20C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallingAnimPlayRate;                                     // 0x20D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallingBlendInTime;                                      // 0x20D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FallingBlendOutTime;                                     // 0x20E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovingBlendInTime;                                       // 0x20E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovingBlendOutTime;                                      // 0x20F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRunning;                                              // 0x20F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseRunning;                                             // 0x20F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseSleepingAnim;                                        // 0x20FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSleeping;                                             // 0x20FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_79L0[0x4];                                   // 0x20FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SleepingAnimTranslationOffset;                           // 0x2100(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovementAnimRatePower;                                   // 0x2118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseTurnInPlaceAnimation;                                // 0x2120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSkipAnimGraph;                                          // 0x2121(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I1EQ[0x6];                                   // 0x2122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AlignGroundAlpha;                                        // 0x2128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAlignGround;                                         // 0x2130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseBlinking;                                            // 0x2131(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BTSO[0x6];                                   // 0x2132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BlinkBlend;                                              // 0x2138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     IKAlpha;                                                 // 0x2140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RunningBlendInTime;                                      // 0x2148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RunningBlendOutTime;                                     // 0x2150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RunningMovementAnimRate;                                 // 0x2158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseRunningMovementAnimRate;                             // 0x2160(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableIKWhenFalling;                                   // 0x2161(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableIK;                                              // 0x2162(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E6ZD[0x5];                                   // 0x2163(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AimOffsetPitchScale;                                     // 0x2168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AimOffsetYawScale;                                       // 0x2170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSleepingEnableIK;                                       // 0x2178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7WLB[0x7];                                   // 0x2179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MovementAnimRatePowerSwimming;                           // 0x2180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SwimmingRunAnimRateMultiplier;                           // 0x2188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMounted;                                              // 0x2190(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConformLinked;                                     // 0x2191(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q8FO[0x6];                                   // 0x2192(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              GroundConfromAnimationInstance;                          // 0x2198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     AimOffsetInterpSpeed;                                    // 0x21A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MovementAnimRateInterpSpeed;                             // 0x21A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_99780210435C16B7850B808A2A5A689A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_9EEFB4EC454AE5BB03BBFF9D6869A041();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_5764321146FD37003C8A9A8B743D3075();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_A5D80B174F0BF5A8BDC8CDA5BC3FEB72();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_423E644343462E174F56428A06301B2B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_LinkedAnimGraph_4D685DC24339E1D75BF06F97979299ED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_DEC545D3442E063FCA7E3392600385A3();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
