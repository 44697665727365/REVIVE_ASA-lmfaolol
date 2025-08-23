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
	 * AnimBlueprintGeneratedClass Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C
	 * Size -> 0x10B7 (FullSize[0x13FF] - InheritedSize[0x0348])
	 */
	class UOviraptor__GroundConform_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_OQUZ[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0388(0x0470)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x07F8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x08C0(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x09C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x09F0(0x0028)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0A18(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0AE0(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0C80(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0CA0(0x0020)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x0CC0(0x0038)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0CF8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0DC0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0E08(0x0040)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0E48(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x0F50(0x00E0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1030(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1078(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1140(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1168(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1248(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1270(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1378(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x13A0(0x0028)
		bool                                                       __CustomProperty_bHasDynamicBase_648FCB5D45B37F73C642D7972D16651A; // 0x13C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsFalling_648FCB5D45B37F73C642D7972D16651A; // 0x13C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Interpolate_648FCB5D45B37F73C642D7972D16651A; // 0x13CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Swimming_648FCB5D45B37F73C642D7972D16651A; // 0x13CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_IsBeingDragged_648FCB5D45B37F73C642D7972D16651A; // 0x13CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQJZ[0x3];                                   // 0x13CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_MeshScale_648FCB5D45B37F73C642D7972D16651A; // 0x13D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SwimmingMovement;                                        // 0x13E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDragged;                                          // 0x13E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7VUP[0x6];                                   // 0x13EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       AnimInstance;                                            // 0x13F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHitTheGroundOnce;                                     // 0x13F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFallingMovement;                                        // 0x13F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConform_Interpolate;                               // 0x13FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBeingDragged;                                         // 0x13FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSleeping;                                              // 0x13FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasDynamicBase;                                          // 0x13FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDead;                                                  // 0x13FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B51234B3423D1EF59152A882394C06FD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ControlRig_648FCB5D45B37F73C642D7972D16651A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_LayeredBoneBlend_A7E701E9417BCC410AB742B829BF163A();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DB7703DF406CAA5414C578A9A0BE40C2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ModifyBone_627D4E794EDE26485CCA4E8B6E78AAD0();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Oviraptor__GroundConform_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
