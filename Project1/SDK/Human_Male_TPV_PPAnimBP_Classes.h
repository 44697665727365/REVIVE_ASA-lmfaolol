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
	 * AnimBlueprintGeneratedClass Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C
	 * Size -> 0x05CC (FullSize[0x0914] - InheritedSize[0x0348])
	 */
	class UHuman_Male_TPV_PPAnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CNHW[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0388(0x0470)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x07F8(0x00C8)
		double                                                     __CustomProperty_CharacterCreatorFatBelly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x08C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     __CustomProperty_CharacterCreatorFatChest_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x08C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bFemale_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x08D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2XPF[0x7];                                   // 0x08D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     __CustomProperty_PhysicsFactor_Breast_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x08D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     __CustomProperty_PhysicsFactor_Belly_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x08E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     __CustomProperty_OverallFat_B9D9DDFB40ECA6A6BC9A0E83EE884ACB; // 0x08E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterCreatorOverallFat;                              // 0x08F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_92AX[0x4];                                   // 0x08F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ItemBasedPhysicsFactorBelly;                             // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ItemBasedPhysicsFactorBreast;                            // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFemale;                                                // 0x0908(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UT9W[0x3];                                   // 0x0909(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CharacterCreatorFat01Chest;                              // 0x090C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacterCreatorFat01Belly;                              // 0x0910(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Human_Male_TPV_PPAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
