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
	 * BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
	 * Size -> 0x00D0 (FullSize[0x32E8] - InheritedSize[0x3218])
	 */
	class ADino_Character_BP_C : public APrimalDinoCharacter
	{
	public:
		unsigned char                                              UnknownData_0MRL[0x8];                                   // 0x3218(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x3220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    StasisComponent;                                         // 0x3228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UAnimSequence*>                               AlternateDeathAnims;                                     // 0x3230(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDinoContentData                                    ContentData;                                             // 0x3240(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BabySpeedMult_WildBaby;                                  // 0x3260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BabySpeedMult_NotWildBaby;                               // 0x3268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FollowingRunDistance_BabyLong;                           // 0x3270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FollowingRunDistance_BabyShort;                          // 0x3278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FollowingRunDistance_Adult;                              // 0x3280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AIFollowStoppingDistance_Baby;                           // 0x3288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AIFollowStoppingDistance_Adult;                          // 0x3290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AiAccessFails;                                           // 0x3298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F1PH[0x4];                                   // 0x329C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WildBaby_NextRunTime;                                    // 0x32A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WildBaby_MinTimeBetweenRuns;                             // 0x32A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         WalkingIdleDeathBlendSpace;                              // 0x32B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         WalkingMovingDeathBlendSpace;                            // 0x32B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         SwimmingDeathBlendSpace;                                 // 0x32C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         FallingDeathBlendSpace;                                  // 0x32C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBlendSpace*                                         TorpidDeathBlendSpace;                                   // 0x32D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       GeneratedBlendSpaces;                                    // 0x32D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_45BS[0x7];                                   // 0x32D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PostDestructionFootstepLifespan;                         // 0x32E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation);
		bool BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation);
		bool BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, struct FVector* DesiredCameraOffset);
		bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ);
		bool BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* OutInterpParams);
		bool BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float* DesiredCameraArmLength);
		struct FLinearColor GetFXBloodColor();
		bool BlueprintOverrideWantsToRun(bool bInputWantsToRun);
		void UpdateBabyAndRunValues();
		void BPControlRigNotify(const class FName& NotifyName, const class FName& NotifyCustomTag, const struct FHitResult& WorldSpaceHitResult, const struct FVector& Velocity);
		void GetDinoContentData(struct FDinoContentData* DinoContentData);
		bool BPHandleRightShoulderButton();
		void UpdateWildBabyNextRunTime();
		void BlendSpaceGenerated(class UBlendSpace* BlendSpace);
		void ReceiveBeginPlay();
		void EditorBeginPlay();
		void BP_OnSetDeath();
		void BPBecomeBaby();
		void ReceiveDestroyed();
		void BPTriggerStasisEvent();
		void BPSpawnAttackerDamageImpactFX(const class FName& SocketName, class APrimalCharacter* VictimChar);
		void BPBecomeAdult();
		void BPNotifyClaimed();
		void ExecuteUbergraph_Dino_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
