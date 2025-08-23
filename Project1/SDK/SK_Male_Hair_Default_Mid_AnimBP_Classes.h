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
	 * AnimBlueprintGeneratedClass SK_Male_Hair_Default_Mid_AnimBP.SK_Male_Hair_Default_Mid_AnimBP_C
	 * Size -> 0x182C (FullSize[0x1B74] - InheritedSize[0x0348])
	 */
	class USK_Male_Hair_Default_Mid_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_L0Q1[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		unsigned char                                              UnknownData_P3U0[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0390(0x09B0)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0D40(0x01D8) ContainsInstancedReference
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0F18(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0F38(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x0F58(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x1048(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x1138(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x1228(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x1318(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x1408(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x14F8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x15E8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x16D8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x17C8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x18B8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x19A8(0x00F0)
		bool                                                       K2Node_PropertyAccess_4;                                 // 0x1A98(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RZHX[0x7];                                   // 0x1A99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_PropertyAccess_3;                                 // 0x1AA0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              K2Node_PropertyAccess_2;                                 // 0x1AB8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       K2Node_PropertyAccess;                                   // 0x1AB9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LCHW[0x6];                                   // 0x1ABA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DefaultGravity;                                          // 0x1AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OverrideWorldGravityZ;                                   // 0x1AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Swimming;                                                // 0x1AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SGHQ[0x7];                                   // 0x1AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UnderwaterGravity;                                       // 0x1AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Val;                                                     // 0x1AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Noise;                                                   // 0x1AE8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x1B00(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Speed;                                                   // 0x1B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WindAlpha;                                               // 0x1B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ExternalForce;                                           // 0x1B28(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GameTimeSeconds;                                         // 0x1B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShooterCharacter*                                   AsShooterCharacter;                                      // 0x1B48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        DynamicWeatherRef;                                       // 0x1B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GlobalWindDirection;                                     // 0x1B58(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalWindIntensity;                                     // 0x1B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void NoiseGen(double DeltaTime);
		void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SK_Male_Hair_Default_Mid_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
