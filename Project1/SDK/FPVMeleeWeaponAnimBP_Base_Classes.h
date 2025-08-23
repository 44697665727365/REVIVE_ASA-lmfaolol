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
	 * AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C
	 * Size -> 0x09A0 (FullSize[0x0CE8] - InheritedSize[0x0348])
	 */
	class UFPVMeleeWeaponAnimBP_Base_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_SXP0[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0390(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x03B8(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0400(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0420(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0468(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0488(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0550(0x01A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x06F0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0710(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0730(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0778(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x07C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x07E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0810(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0838(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0860(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0888(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x08D0(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x08F0(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0938(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0958(0x0048)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x09A0(0x0020)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x09C0(0x00C8)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0A88(0x0020)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0AA8(0x00E0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0B88(0x0048)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x0BD0(0x00C8)
		bool                                                       IsRunning;                                               // 0x0C98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMoving;                                                // 0x0C99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsUsingShield;                                          // 0x0C9A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PR8M[0x5];                                   // 0x0C9B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UsingShieldWeight;                                       // 0x0CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBlockingWithShield;                                   // 0x0CA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9EY3[0x7];                                   // 0x0CA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BlockingShieldTranslation;                               // 0x0CB0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BlockingShieldWeight;                                    // 0x0CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            BlockingShieldRotation;                                  // 0x0CD0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
