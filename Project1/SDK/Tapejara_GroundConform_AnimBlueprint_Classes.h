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
	 * AnimBlueprintGeneratedClass Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C
	 * Size -> 0x0E78 (FullSize[0x11C0] - InheritedSize[0x0348])
	 */
	class UTapejara_GroundConform_AnimBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_PUOV[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0388(0x0470)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x07F8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x08C0(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x09C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x09F0(0x0028)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0A18(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0AE0(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0C80(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0CA0(0x0020)
		struct FAnimNode_MakeDynamicAdditive                       AnimGraphNode_MakeDynamicAdditive;                       // 0x0CC0(0x0038)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x0CF8(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0DC0(0x0048)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0E08(0x0040)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0E48(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0F50(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0F78(0x0048)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0FC0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1088(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x10B0(0x00E0)
		bool                                                       __CustomProperty_bHasDynamicBase_F2BFA43D4FA58CEFAD0E2899043885D5; // 0x1190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_IsFalling_F2BFA43D4FA58CEFAD0E2899043885D5; // 0x1191(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_Interpolate_F2BFA43D4FA58CEFAD0E2899043885D5; // 0x1192(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Swimming_F2BFA43D4FA58CEFAD0E2899043885D5; // 0x1193(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_IsBeingDragged_F2BFA43D4FA58CEFAD0E2899043885D5; // 0x1194(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ALBG[0x3];                                   // 0x1195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_MeshScale_F2BFA43D4FA58CEFAD0E2899043885D5; // 0x1198(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimInstance*                                       AnimInstance;                                            // 0x11B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       bSwimmingMovement;                                       // 0x11B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDragged;                                          // 0x11B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConformIsFalling;                                  // 0x11BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConformInterpolate;                                // 0x11BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHitTheGroundOnce;                                     // 0x11BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBeingDragged;                                         // 0x11BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSleeping;                                              // 0x11BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasDynamicBase;                                          // 0x11BF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_E66A6419483B678658EEA1B472586FE2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_765F3947475FB011C3469595BF162144();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D7BC519D45341D49A121398F027A9C18();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_F2BFA43D4FA58CEFAD0E2899043885D5();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
