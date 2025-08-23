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
	 * AnimBlueprintGeneratedClass SK_Male_Hair_Afro_Long_AnimBP.SK_Male_Hair_Afro_Long_AnimBP_C
	 * Size -> 0x0699 (FullSize[0x09E1] - InheritedSize[0x0348])
	 */
	class USK_Male_Hair_Afro_Long_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_W40M[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0388(0x01D8) ContainsInstancedReference
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0560(0x0470)
		EMovementMode                                              K2Node_PropertyAccess_2;                                 // 0x09D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       K2Node_PropertyAccess;                                   // 0x09D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_Swimming_0C38EFD94C0A68B23FD0FD80E596A6F0; // 0x09D2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AY4H[0x5];                                   // 0x09D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    AsPrimalCharacter;                                       // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Swimming;                                                // 0x09E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_SK_Male_Hair_Afro_Long_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
