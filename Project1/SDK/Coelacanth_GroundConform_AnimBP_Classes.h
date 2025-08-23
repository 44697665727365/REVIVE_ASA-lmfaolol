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
	 * AnimBlueprintGeneratedClass Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C
	 * Size -> 0x09AD (FullSize[0x0CF5] - InheritedSize[0x0348])
	 */
	class UCoelacanth_GroundConform_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_EFB0[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0388(0x0470)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x07F8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x08C0(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x09C8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x09F0(0x0028)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0A18(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0AE0(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0C80(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0CA0(0x0020)
		bool                                                       __CustomProperty_bHasDynamicBase_CB6FB3EE46817636D77C95B27FC98FD0; // 0x0CC0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_IsFalling_CB6FB3EE46817636D77C95B27FC98FD0; // 0x0CC1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Interpolate_CB6FB3EE46817636D77C95B27FC98FD0; // 0x0CC2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Swimming_CB6FB3EE46817636D77C95B27FC98FD0; // 0x0CC3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_GroundConform_IsBeingDragged_CB6FB3EE46817636D77C95B27FC98FD0; // 0x0CC4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CV6X[0x3];                                   // 0x0CC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_MeshScale_CB6FB3EE46817636D77C95B27FC98FD0; // 0x0CC8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingDragged;                                          // 0x0CE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSwimmingMovement;                                       // 0x0CE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_748D[0x6];                                   // 0x0CE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       AnimInstance;                                            // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHitTheGroundOnce;                                     // 0x0CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFallingMovement;                                        // 0x0CF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GroundConform_Interpolate;                               // 0x0CF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBeingDragged;                                         // 0x0CF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasDynamicBase;                                          // 0x0CF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ModifyBone_F0709FC14BAAF402DF12789A5C627997();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_A6997BA94225581B89F421AF09DDE8D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ControlRig_CB6FB3EE46817636D77C95B27FC98FD0();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_Coelacanth_GroundConform_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
