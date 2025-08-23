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
	 * BlueprintGeneratedClass Ichthyornis_Character_BP.Ichthyornis_Character_BP_C
	 * Size -> 0x01E0 (FullSize[0x34C8] - InheritedSize[0x32E8])
	 */
	class AIchthyornis_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProximitySound_C*                                   ProximitySound;                                          // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BagMesh;                                                 // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Ichthyornis_C*      DinoCharacterStatus_BP_Ichthyornis_C1;                   // 0x3310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RotationToTarget_rotation_A9F8DC9740176B779B8E4FA061F7EF4F; // 0x3318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RotationToTarget__Direction_A9F8DC9740176B779B8E4FA061F7EF4F; // 0x331C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P28O[0x3];                                   // 0x331D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RotationToTarget;                                        // 0x3320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     diveDownSpeedMultiplierLand;                             // 0x3328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     maxWeightToCarry;                                        // 0x3330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     diveUpBaseImpulse;                                       // 0x3338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    currentHuntingMode;                                      // 0x3340(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO05[0x4];                                   // 0x3344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               lastPlayerOrder;                                         // 0x3348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     diveUpBaseImpulseUnderwater;                             // 0x3350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimalItem*                                         stolenItem;                                              // 0x3358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       pendingDrop;                                             // 0x3360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQSG[0x7];                                   // 0x3361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     diveDownMaxDurationWater;                                // 0x3368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       allowDivingOnBigDinos;                                   // 0x3370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O0BF[0x7];                                   // 0x3371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     targetZOffset;                                           // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              waterSplashSmitter;                                      // 0x3380(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    divingState;                                             // 0x3388(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       isProcessingDivingDown;                                  // 0x338C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isProcessingDivingUp;                                    // 0x338D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       debugDive;                                               // 0x338E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RNKY[0x1];                                   // 0x338F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     dropWeaponChance;                                        // 0x3390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     stealFoodChance;                                         // 0x3398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       targetWasPlayer;                                         // 0x33A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFinishingDiveUp;                                       // 0x33A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMovingUp;                                              // 0x33A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isRotating;                                              // 0x33A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isWaterDive;                                             // 0x33A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CCXC[0x3];                                   // 0x33A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     diveDownMaxDurationLand;                                 // 0x33A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             diveDownImpulse;                                         // 0x33B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastTimeDroppedCharacter;                                // 0x33C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       forcedDiveUp;                                            // 0x33D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isDoingForcedDiveUp;                                     // 0x33D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DCI0[0x6];                                   // 0x33D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeDived;                                           // 0x33D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     diveDownSpeedMultiplierWater;                            // 0x33E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APrimalCharacter*                                    launchedTarget;                                          // 0x33E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		int32_t                                                    lastDamageByTeam;                                        // 0x33F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GK6C[0x4];                                   // 0x33F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     timeToAggroAfterDamage;                                  // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       pendingEatAnim;                                          // 0x3400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       itemStolenOnCurrentDive;                                 // 0x3401(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isLaunchedAttack;                                        // 0x3402(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ISQ2[0x5];                                   // 0x3403(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     delayBeforeHarvestingWild;                               // 0x3408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     delayBeforeHarvestingTamed;                              // 0x3410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    aggressionStateBeforeLaunchedAttack;                     // 0x3418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LVJO[0x4];                                   // 0x341C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     vitaminEmitter;                                          // 0x3420(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     primeMeatChanceMultiplier;                               // 0x3428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasCarriedDuringCurrentAttack;                           // 0x3430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isWaitingForHarvest;                                     // 0x3431(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCarryingDeadPrey;                                      // 0x3432(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UJSS[0x5];                                   // 0x3433(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     chanceToApplyPrimeBuff;                                  // 0x3438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     sphereTraceRadius;                                       // 0x3440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     backToOwnerRadius;                                       // 0x3448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       attackIsCancelled;                                       // 0x3450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMountAction;                                           // 0x3451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       orderTriggeredFromCode;                                  // 0x3452(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAttacking_1;                                           // 0x3453(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    aggressionStateOnCancelled;                              // 0x3454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFailedLaunchAttack;                                    // 0x3458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X4ZS[0x3];                                   // 0x3459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    currentAttackStage;                                      // 0x345C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     inventoryWeightPercentToConsiderFull;                    // 0x3460(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       pendingCombatOffsetUpdate;                               // 0x3468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D553[0x7];                                   // 0x3469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              itemStolenString;                                        // 0x3470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              droppedWeaponString;                                     // 0x3480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FLinearColor                                        NotificationColor;                                       // 0x3490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastTimeUsedAttackDive;                                  // 0x34A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wildAttackDiveCooldown;                                  // 0x34A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HuntOnIcon;                                              // 0x34B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HuntOffIcon;                                             // 0x34B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HuntAndRetrieveIcon;                                     // 0x34C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool BPClientHandleNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC);
		void IsOverweightThreshold_F(bool* NewParam);
		float BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected);
		void CheckWeightCondition(class APrimalCharacter* Target, bool* shouldntAttack);
		void BPDidClearCarriedCharacter(class APrimalCharacter* WithPreviousCarriedCharacter);
		void RemoveDragWeightIfNeeded();
		void CancelAttack(bool goBackToOwner);
		void GetTamedOrderFromAggressionState(int32_t aggressionState, EDinoTamedOrder* tamedOrder);
		void BPOnClearMountedDino();
		void OnCancelledAttack();
		void SetLastPlayerOrder(class APawn* Character);
		void StartGoBackToOwner(bool isFailedLaunch);
		void DisableLanding();
		void SetAttackStage(int32_t attackStage, double backToOwnerRadius, bool isFailedLaunch);
		void AllowLanding();
		void SetAggressionState(int32_t aggressionState);
		void FinishAttack(bool forceFinish);
		void OnDeadPreyActions();
		void GoingBacktoOwnerActions();
		void DivingActions();
		void BPSetupTamed(bool bWasJustTamed);
		void ImproveHarvestingComponentforDraggedCharacter(class APrimalCharacter* killedCharacter);
		void BPKilledSomethingEvent(class APrimalCharacter* killedTarget);
		void SetTargetForLaunchedAttack(class APrimalCharacter* NewTarget);
		void DoLaunchAttack(class APrimalCharacter* launchedTarget);
		void BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted);
		void GetOwnerCharacter(class APawn** Owner);
		void ClearFocusAndAggression(EDinoTamedOrder overrideTamedMode, bool useTameModeOverride);
		void StartLaunchAttack();
		void ClearLaunchedThrow(bool disableLaunchVariable);
		bool BPCanAutodrag(class APrimalCharacter* characterToDrag);
		void SpawnWaterEffectsIfNeeded();
		void UpdateDamageFlag();
		void IsWaterDinoorSwimmingAmphibious(class APrimalCharacter* Pawn, bool* isWaterOrAmph);
		void CanStealFromCharacter(class APrimalCharacter* Character, bool* CanUse);
		void OnOwnerReached();
		void PreDiveDownRotationActions();
		void UseEmergencyDiveUp();
		void CanUseBiteAttack(class APrimalCharacter* Target, bool* CanUse);
		void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
		void BPCharacterSleeped();
		void GetDiveDownDelay(double* Delay);
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void OnClearCarriedCharacter(bool stopTimerServer, class APrimalCharacter* PreviousCarriedCharacter);
		void CanUseWildDive(class APrimalCharacter* Target, bool* canDoAttack);
		void CanUseDiveAttack(class APrimalCharacter* Target, bool* canUseAttack);
		void ApplyChewDamage(double Amount);
		void SetDivingState(int32_t NewState, bool forceSetState);
		void OnRep_divingStatus();
		void BPOnSetMountedDino();
		void UnequipOrSteal(class APrimalCharacter* Character, bool* couldSteal);
		void ChangeHuntingMode(int32_t NewMode, bool changeToNextMode, bool onlyUpdateOffsets);
		void CanUseGrabAttack(class APrimalCharacter* PrimalCharacter, bool* CanUse);
		void RemoveWeapon(class APrimalCharacter* Owner, bool* Success);
		void RemoveHelmet(class APrimalCharacter* Owner, bool* Success);
		void CanStealItem(class UPrimalItem* Item, bool isFoodItem, bool* canSteal);
		void DoStealItem(class APrimalCharacter* CharacterToStealFrom, class UPrimalItem* itemToSteal, bool* Success);
		void TryToStealFoodItem(class APrimalCharacter* Character, int32_t NumItems, bool* stoleFood);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void CarryingLivePreyActions();
		void RotateZToPoint(const struct FVector& offsetFromCurrentLocation, double Time);
		void OnCarriedCharacter();
		void StartFollowPlayer();
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		bool BPCanDragCharacter(class APrimalCharacter* Character);
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		void BPTimerServer();
		void BPDidSetCarriedCharacter(class APrimalCharacter* WithPreviousCarriedCharacter);
		void CalculateDiveUpImpulse(double immersionDepth, struct FVector* Impulse);
		void CanGrabPawn(class APawn* Pawn, bool* canGrab);
		void RotateZtoTarget(double Time);
		void CalculateDiveDownImpulse(struct FVector* Impulse);
		void CanUseRegularDive(class APrimalCharacter* Target, bool* canDoAttack);
		void BPDoAttack(int32_t AttackIndex);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void RotationToTarget__FinishedFunc();
		void RotationToTarget__UpdateFunc();
		void DiveAttack();
		void PreDiveDownActions();
		void StartDiveUp();
		void FinishDiveDown();
		void PreDiveUpActions();
		void PostDiveUpActions();
		void SlowlyRotateZTo(const struct FRotator& TargetRotation, double Time, const struct FRotator& InitialRotation);
		void DropCarriedAfterTime(double Time, bool dropDragged, bool dropCarried, bool restoreFollowingVariables);
		void dropCarried(bool dropDragged, bool dropCarried, bool restoreFollowingVariables);
		void SpawnWaterParticles();
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void DebugTrajectory_Multicast(const struct FVector& beginning, const struct FVector& End);
		void DebugTrajectory(const struct FVector& beginning, const struct FVector& End);
		void FinishDiveUp();
		void CheckForWaterEffects();
		void ShowBag_Multicast();
		void HideBag_Multicast();
		void ShowBag(bool isDiving);
		void EnablePendingEatAnim();
		void HarvestPreyAfterDelay(double Delay);
		void SpawnVitaminEffects_Multicast(class APrimalCharacter* Character);
		void DebugTrajectorySphere_Multicast(const struct FVector& beginning, const struct FVector& End, double Radius);
		void DebugTrajectorySphere(const struct FVector& beginning, const struct FVector& End, double Radius);
		void BPUnstasis();
		void ReceiveBeginPlay();
		void InitializeLandingVariables();
		void Debug_TorporAfterTime(double Delay);
		void GoBackToOwnerAfterDelay(double Delay, bool isFailedLaunch);
		void ExecuteUbergraph_Ichthyornis_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
