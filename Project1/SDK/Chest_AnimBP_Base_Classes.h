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
	 * AnimBlueprintGeneratedClass Chest_AnimBP_Base.Chest_AnimBP_Base_C
	 * Size -> 0x0169 (FullSize[0x04B1] - InheritedSize[0x0348])
	 */
	class UChest_AnimBP_Base_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2VEF[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct UChest_AnimBP_Base_C_FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                                 // 0x0358(0x0002) HasGetValueTypeHash
		unsigned char                                              UnknownData_LV9M[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0360(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0368(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0370(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0390(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x03D8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0420(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0468(0x0048)
		bool                                                       bIsUnlocked;                                             // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Chest_AnimBP_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
