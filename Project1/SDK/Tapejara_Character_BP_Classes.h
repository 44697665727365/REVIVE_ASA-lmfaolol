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
	 * BlueprintGeneratedClass Tapejara_Character_BP.Tapejara_Character_BP_C
	 * Size -> 0x012B (FullSize[0x3413] - InheritedSize[0x32E8])
	 */
	class ATapejara_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Wing_L;                     // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Wing_R;                     // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_BL;                     // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_BR;                     // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_FL;                     // 0x3310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_FR;                     // 0x3318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_HeadCrest;                  // 0x3320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Head;                       // 0x3328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x3330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x3338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Tape_C*             DinoCharacterStatus_BP_Tape_C1;                          // 0x3340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TargetLatchingLoc;                                       // 0x3348(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LatchAnimStarted;                                        // 0x3360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M9E9[0x7];                                   // 0x3361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LatchStartTime;                                          // 0x3368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldFaceLatchingObject;                                // 0x3370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUnLatchingComplete;                                    // 0x3371(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CP17[0x6];                                   // 0x3372(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LatchingDirection;                                       // 0x3378(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LatchingSurfaceNormal;                                   // 0x3390(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructure*                                    LatchingStructure;                                       // 0x33A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       CanLatchOnGround;                                        // 0x33B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartControllerRotation;                                 // 0x33B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9KUB[0x6];                                   // 0x33B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxLatchingAngle;                                        // 0x33B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UnlatchingStartTime;                                     // 0x33C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LatchingOffset;                                          // 0x33C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWasFirstPerson;                                         // 0x33D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L271[0x7];                                   // 0x33D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LatchInCameraTransitionDuration;                         // 0x33D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LatchOutCameraTransitionDuration;                        // 0x33E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBrakeDinoPressed;                                       // 0x33E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NAA9[0x7];                                   // 0x33E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        PerchInAnim;                                             // 0x33F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        PerchOutAnim;                                            // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        PerchInAnim_Down;                                        // 0x3400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        PerchOutAnim_Down;                                       // 0x3408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSurfaceCamera;                                        // 0x3410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RotateToFaceRiderSocketOnLatch;                          // 0x3411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UnlatchIfStillLatchingAfterTime;                         // 0x3412(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopMovementFn();
		void ShouldTryLatch(bool* Ret, bool* LandOnFailureToLatch);
		int32_t BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*> AnimationArray);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		bool BPHandleOnStopTargeting();
		float BPModifyFOV(float FOVIn);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		bool BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation);
		void BPSetupTamed(bool bWasJustTamed);
		bool BPOnStartJump();
		bool BPHandleUseButtonPress(class AShooterPlayerController* RiderController);
		void DisableCameraInterpolation();
		void OnRep_LatchingSurfaceNormal();
		void UpdateLatchedDinoCamera();
		void ControllerFollowActorRotation(double DeltaSeconds);
		void ReferenceLatchingObjects();
		void LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomthing, struct FVector* Location, struct FVector* Normal, class AActor** HitActor);
		void InterruptLatching();
		void ProcessLatching(double DeltaSeconds);
		void TryLatch(const struct FVector& Offset, bool BackwardsLatching);
		void InpActEvt_AltFire_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_BrakeDino_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_BrakeDino_K2Node_InputActionEvent_1(const struct FKey& Key);
		void Latch(bool BackwardsLatching, bool TryLatch, bool LandOnFailureToLatch);
		void ReceiveTick(float DeltaSeconds);
		void LatchStartAnimation();
		void UnLatch(bool LatchingInterrupted);
		void UnLatchStartAnimation();
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void MoveToUsingDirection(double DeltaTime);
		void UnLatchMoveAndRotate();
		void LatchingStartEvent();
		void LatchingEndEvent();
		void StopMovement(double DeltaSeconds);
		void DisableFaceLatchingObjectRotation();
		void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue);
		void SetPassengersSurfaceCamera(double Yaw, double Pitch, double Roll);
		void LocalFaceLatchingObject(double DeltaSeconds);
		void StartedJump();
		void MoveDuringUnlatching();
		void ExecuteUbergraph_Tapejara_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
