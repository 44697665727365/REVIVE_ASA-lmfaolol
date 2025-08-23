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
	 * AnimBlueprintGeneratedClass Female_Hair_Default_Mid_AnimBP.Female_Hair_Default_Mid_AnimBP_C
	 * Size -> 0x170C (FullSize[0x1A54] - InheritedSize[0x0348])
	 */
	class UFemale_Hair_Default_Mid_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6UXH[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0388(0x01D8) ContainsInstancedReference
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x0560(0x09B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0F10(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0F30(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x0F50(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x1040(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x1130(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x1220(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x1310(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x1400(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x14F0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x15E0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x16D0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x17C0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x18B0(0x00F0)
		bool                                                       K2Node_PropertyAccess_4;                                 // 0x19A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       K2Node_PropertyAccess_3;                                 // 0x19A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              K2Node_PropertyAccess_2;                                 // 0x19A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SBNK[0x5];                                   // 0x19A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_PropertyAccess;                                   // 0x19A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APrimalCharacter*                                    AsPrimalCharacter;                                       // 0x19C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     DefaultGravity;                                          // 0x19C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OverrideWorldGravityZ;                                   // 0x19D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Swimming;                                                // 0x19D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IRT1[0x7];                                   // 0x19D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UnderwaterGravity;                                       // 0x19E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Val;                                                     // 0x19E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Noise;                                                   // 0x19F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GameTimeSeconds;                                         // 0x1A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ExternalForce;                                           // 0x1A10(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShooterCharacter*                                   AsShooterCharacter;                                      // 0x1A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        WeatherRef;                                              // 0x1A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GlobalWindDirection;                                     // 0x1A38(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalWindIntensity;                                     // 0x1A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void NoiseGen(double DeltaTime);
		void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_Female_Hair_Default_Mid_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
