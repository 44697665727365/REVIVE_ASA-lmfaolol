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
	 * AnimBlueprintGeneratedClass Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C
	 * Size -> 0x1103 (FullSize[0x144B] - InheritedSize[0x0348])
	 */
	class UOtter_GroundConform_AnimBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_WQCR[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0368(0x0028)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0390(0x00C8)
		unsigned char                                              UnknownData_YLZE[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0460(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x0600(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0620(0x0020)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x0640(0x0038)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0678(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0740(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0788(0x0040)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x07C8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x08D0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x08F8(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x0A00(0x00C8)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0AC8(0x0470)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0F38(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0F58(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1038(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1060(0x0028)
		unsigned char                                              UnknownData_0XSN[0x8];                                   // 0x1088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x1090(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1230(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1250(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x1270(0x01A0)
		double                                                     __CustomProperty_TorpidNeckStiffness_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x1410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bHasDynamicBase_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x1418(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsFalling_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x1419(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Interpolate_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x141A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Swimming_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x141B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_IsBeingDragged_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x141C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J2AP[0x3];                                   // 0x141D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_MeshScale_5DB0FC5A43BAF0A292D5018DF9D9FD7E; // 0x1420(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimInstance*                                       AnimInstance;                                            // 0x1438(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDragged;                                          // 0x1440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Swimming;                                                // 0x1441(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDragged2;                                         // 0x1442(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSwimmingMovement;                                       // 0x1443(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFallingMovement;                                        // 0x1444(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHitTheGroundOnce;                                     // 0x1445(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConform_Interpolate;                               // 0x1446(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBeingDragged;                                         // 0x1447(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSleeping;                                              // 0x1448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasDynamicBase;                                          // 0x1449(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDead;                                                  // 0x144A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_268263AF406EC1BCA552EA9C27EF27AE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_C5B39048488D9279938BD0922831AFC7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_777077464D6C48954DBBC2B03BC40F8C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_ABCB598A40878A4911D8039C1B85223B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_9FECAF76497BB1D4A1D9C48039E2402A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D39C3D6F4E8E046A030AD9936BEC66A6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_5DB0FC5A43BAF0A292D5018DF9D9FD7E();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Otter_GroundConform_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
