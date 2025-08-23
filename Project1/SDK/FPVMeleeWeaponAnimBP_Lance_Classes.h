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
	 * AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
	 * Size -> 0x0A5A (FullSize[0x0DA2] - InheritedSize[0x0348])
	 */
	class UFPVMeleeWeaponAnimBP_Lance_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ZEZK[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UFPVMeleeWeaponAnimBP_Lance_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0358(0x0005) HasGetValueTypeHash
		unsigned char                                              UnknownData_B76P[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0360(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0368(0x0008)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0398(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x03C0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0408(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0428(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0470(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x04B8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0500(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0548(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0590(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x05B0(0x00C8)
		unsigned char                                              UnknownData_GVU4[0x8];                                   // 0x0678(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0680(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0820(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0840(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0860(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x08A8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x08F0(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0938(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0980(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x09C8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A10(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0A58(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0A78(0x00C8)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0B40(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0B60(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0C40(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x0C88(0x00C8)
		bool                                                       IsRunning;                                               // 0x0D50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMoving;                                                // 0x0D51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsUsingShield;                                          // 0x0D52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B98T[0x5];                                   // 0x0D53(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UsingShieldWeight;                                       // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBlockingWithShield;                                   // 0x0D60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z2EB[0x7];                                   // 0x0D61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BlockingShieldTranslation;                               // 0x0D68(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BlockingShieldWeight;                                    // 0x0D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            BlockingShieldRotation;                                  // 0x0D88(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAttacking;                                            // 0x0DA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsAttacking;                                         // 0x0DA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
