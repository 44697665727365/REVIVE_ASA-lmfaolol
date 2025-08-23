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
	 * AnimBlueprintGeneratedClass SK_Male_Hair_Default_short_AnimBP.SK_Male_Hair_Default_short_AnimBP_C
	 * Size -> 0x1900 (FullSize[0x1C48] - InheritedSize[0x0348])
	 */
	class USK_Male_Hair_Default_short_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_IPOE[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0388(0x0020)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x03A8(0x01D8) ContainsInstancedReference
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0580(0x0020)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x05A0(0x09B0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_13;                               // 0x0F50(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_12;                               // 0x1040(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_11;                               // 0x1130(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_10;                               // 0x1220(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_9;                                // 0x1310(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_8;                                // 0x1400(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_7;                                // 0x14F0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_6;                                // 0x15E0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_5;                                // 0x16D0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_4;                                // 0x17C0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_3;                                // 0x18B0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x19A0(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x1A90(0x00F0)
		bool                                                       K2Node_PropertyAccess_4;                                 // 0x1B80(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              K2Node_PropertyAccess_3;                                 // 0x1B81(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M192[0x6];                                   // 0x1B82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_PropertyAccess_2;                                 // 0x1B88(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       K2Node_PropertyAccess;                                   // 0x1BA0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8VHV[0x7];                                   // 0x1BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    AsPrimalCharacter;                                       // 0x1BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     Val;                                                     // 0x1BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Noise;                                                   // 0x1BB8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Swimming;                                                // 0x1BD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z7GF[0x7];                                   // 0x1BD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     OverrideWorldGravityZ;                                   // 0x1BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DefaultGravity;                                          // 0x1BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UnderwaterGravity;                                       // 0x1BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GameTimeSeconds;                                         // 0x1BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ExternalForce;                                           // 0x1BF8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        WeatherRef;                                              // 0x1C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             GlobalWindDirection;                                     // 0x1C18(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalWindIntensity;                                     // 0x1C30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XGYU[0x4];                                   // 0x1C34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   AsShooterCharacter;                                      // 0x1C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     WindFrequency;                                           // 0x1C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
		void NoiseGen(double DeltaTime);
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_SK_Male_Hair_Default_short_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
