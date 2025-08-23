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
	 * AnimBlueprintGeneratedClass Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C
	 * Size -> 0x0E7E (FullSize[0x11C6] - InheritedSize[0x0348])
	 */
	class UStego_GroundConform_AnimBlueprint_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GDO0[0x8];                                   // 0x0348(0x0008) Fix Super Size
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
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1088(0x00E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1168(0x0028)
		bool                                                       __CustomProperty_bHasDynamicBase_036958D142C8EE4C5C2C138BE6F5BFFD; // 0x1190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsFalling_036958D142C8EE4C5C2C138BE6F5BFFD; // 0x1191(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_Interpolate_036958D142C8EE4C5C2C138BE6F5BFFD; // 0x1192(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Swimming_036958D142C8EE4C5C2C138BE6F5BFFD; // 0x1193(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_IsBeingDragged_036958D142C8EE4C5C2C138BE6F5BFFD; // 0x1194(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0Q06[0x3];                                   // 0x1195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_MeshScale_036958D142C8EE4C5C2C138BE6F5BFFD; // 0x1198(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSwimmingMovement;                                       // 0x11B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDragged;                                          // 0x11B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KKY5[0x6];                                   // 0x11B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       AnimInstance;                                            // 0x11B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConform_Interpolate;                               // 0x11C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFallingMovement;                                        // 0x11C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHitTheGroundOnce;                                     // 0x11C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBeingDragged;                                         // 0x11C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSleeping;                                              // 0x11C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasDynamicBase;                                          // 0x11C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_2F411CBD426D1EAAD67856BCDC620287();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F20A1D4044C8A91A1F40FB96E7F607C3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_A14AACE94C5C21A180A02C8F22E69DDA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_036958D142C8EE4C5C2C138BE6F5BFFD();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Stego_GroundConform_AnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
