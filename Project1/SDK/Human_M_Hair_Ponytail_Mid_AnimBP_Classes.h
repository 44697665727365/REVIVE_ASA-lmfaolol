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
	 * AnimBlueprintGeneratedClass Human_M_Hair_Ponytail_Mid_AnimBP.Human_M_Hair_Ponytail_Mid_AnimBP_C
	 * Size -> 0x0DAC (FullSize[0x10F4] - InheritedSize[0x0348])
	 */
	class UHuman_M_Hair_Ponytail_Mid_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NVVB[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0388(0x01D8) ContainsInstancedReference
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0560(0x09B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0F10(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0F30(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x0F50(0x00F0)
		bool                                                       K2Node_PropertyAccess_4;                                 // 0x1040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       K2Node_PropertyAccess_3;                                 // 0x1041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              K2Node_PropertyAccess_2;                                 // 0x1042(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7H2B[0x5];                                   // 0x1043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_PropertyAccess;                                   // 0x1048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APrimalCharacter*                                    AsPrimalCharacter;                                       // 0x1060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     Val;                                                     // 0x1068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Noise;                                                   // 0x1070(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OverrideWorldGravityZ;                                   // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DefaultGravity;                                          // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UnderwaterGravity;                                       // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Swimming;                                                // 0x10A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G0U6[0x7];                                   // 0x10A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     GameTimeSeconds;                                         // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ExternalForce;                                           // 0x10B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShooterCharacter*                                   AsShooterCharacter;                                      // 0x10C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        MaterialCollectionParameter;                             // 0x10D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GlobalWindDirection;                                     // 0x10D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalWindIntensity;                                     // 0x10F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
		void NoiseGen(double DeltaTime);
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Human_M_Hair_Ponytail_Mid_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
