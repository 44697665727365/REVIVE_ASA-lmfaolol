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
	 * BlueprintGeneratedClass Hesperornis_Character_BP.Hesperornis_Character_BP_C
	 * Size -> 0x0220 (FullSize[0x3508] - InheritedSize[0x32E8])
	 */
	class AHesperornis_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base;                       // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProximitySound_C*                                   ProximitySound;                                          // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Hesperornis_C*      DinoCharacterStatus_BP_Hesperornis_C1;                   // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DiveTimeLine_DiveRotation_803BB67844B8F9CF7C1F21A924C6F379; // 0x3310(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DiveTimeLine__Direction_803BB67844B8F9CF7C1F21A924C6F379; // 0x3314(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EJ5Z[0x3];                                   // 0x3315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DiveTimeLine;                                            // 0x3318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     TimeCanStayUnderwater;                                   // 0x3320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DiveImpulseMultiplier;                                   // 0x3328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isRotating;                                              // 0x3330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDivingUp;                                              // 0x3331(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5X7M[0x6];                                   // 0x3332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DepthOfTargetCheck;                                      // 0x3338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            BaseRotationRate;                                        // 0x3340(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            DiveRotationRate;                                        // 0x3358(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     RotationTime;                                            // 0x3370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StartRotationTime;                                       // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartRotating;                                           // 0x3380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IAFT[0x7];                                   // 0x3381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartingPitch;                                           // 0x3388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAtWaterSurfaceClient;                                  // 0x3390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WWFN[0x7];                                   // 0x3391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeTookDamage;                                      // 0x3398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInDiveProcess;                                         // 0x33A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OV65[0x7];                                   // 0x33A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RegularEggDrop;                                          // 0x33A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RareEggDrop;                                             // 0x33B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     NumOfFishToHarvestBeforeDroppingEgg;                     // 0x33B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TamedNumOfFishToHarvestBeforeDroppingEgg;                // 0x33C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NumFishToSpawnRare;                                      // 0x33C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NumTamedFishToSpawnRare;                                 // 0x33D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NumOfFishHarvestedSoFarReg;                              // 0x33D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PreventDiveAttack;                                       // 0x33E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AL7T[0x7];                                   // 0x33E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeBetweenDivesWild;                                    // 0x33E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeBetweenDivesTamed;                                   // 0x33F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeOfLastDive;                                          // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NumOfFishHarvestedSoFarRare;                             // 0x3400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastTimeAFishWasAdded;                                   // 0x3408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeBetweenTameFeeding;                                  // 0x3410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeOfLastFeeding;                                       // 0x3418(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ValidTamingClasses;                                      // 0x3420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             AffinityPercentToGive;                                   // 0x3430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     MultiplierForVitaminInfusedFood;                         // 0x3440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     WanderLocationPoints;                                    // 0x3448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ForcedToWanderUntilEggIsLayed;                           // 0x3458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJMY[0x7];                                   // 0x3459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeBetweenDivesWild_Min;                                // 0x3460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeBetweenDivesWild_Max;                                // 0x3468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastLaunchDirection;                                     // 0x3470(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMulticastZHeight;                                       // 0x3488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5SL9[0x7];                                   // 0x3489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DiveTargetActor;                                         // 0x3490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasStartedLayingEgg;                                    // 0x3498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BOLO[0x7];                                   // 0x3499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EggDropDealyTimeMin;                                     // 0x34A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     EggDropDealyTimeMax;                                     // 0x34A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AmountOfFoodToGIvePerFeeding;                            // 0x34B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GoalZHeight;                                             // 0x34B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartingLerpingToZ;                                      // 0x34C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LYH8[0x7];                                   // 0x34C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartingLerpTime;                                        // 0x34C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastSavedPitch;                                          // 0x34D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsToOverrideRotation;                                // 0x34D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DWHH[0x7];                                   // 0x34D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DiveTargetRotation;                                      // 0x34E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          FeedFishIcon;                                            // 0x34F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          DragFishToFeedIcon;                                      // 0x3500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation);
		void UpdateSwimOffsetLocal();
		void TryToLerpToZ();
		void SetupZLerping(double TargetZ);
		void Init();
		void BPOnClearMountedDino();
		void BPOnSetMountedDino();
		void MoveFwd();
		void DinoShoulderMountedLaunch(const struct FVector& LaunchDir, class AShooterCharacter* throwingCharacter);
		void BPUnstasis();
		bool OverrideFinalWanderLocation(struct FVector* outVec);
		void OverrideRandomWanderLocation(const struct FVector& originalDestination, struct FVector* inVec);
		void IsTargetAFish(class AActor* targetedActor, bool* IsValid);
		bool BPCanAutodrag(class APrimalCharacter* characterToDrag);
		bool BPCanDragCharacter(class APrimalCharacter* Character);
		void FishHasVit(class APrimalCharacter* Player, bool* IsValid);
		void IsCarriedFishValid(class APrimalCharacter* Player, bool* IsValid, int32_t* Index);
		void EatPlayersCarriedFood(class APrimalCharacter* Player);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void TryToLayEgg();
		void WantsToLayEggs(bool* WantsTo, bool* Regular, bool* Rare);
		void IsDivingAvailable(bool* isAvailable);
		void HarvestedValidFish();
		void CheckifFishIsValidforEgging(class AActor** Actor, bool* isValidTarget);
		void UseAimOffsets(bool SetActive);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void BPTimerNonDedicated();
		void DivingUp();
		void OnRep_IsDivingUp();
		void BPTimerServer();
		float BPGetGravityZScale();
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void EndDive();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void DiveTimeLine__FinishedFunc();
		void DiveTimeLine__UpdateFunc();
		void MultiEndDive();
		void BPDoAttack(int32_t AttackIndex);
		void ReceiveBeginPlay();
		void SlowlyRotateZTo(const struct FRotator& TargetRotation, double Time, const struct FRotator& InitialRotation);
		void DiveEvent();
		void MultiUnsetPitch();
		void ReceiveTick(float DeltaSeconds);
		void DiveAttack();
		void UpdateZHeight(double ZHeight);
		void MultiCastBoolToSetZ();
		void AnimNotify_DiveAttackSound();
		void MultiStartRotatingUp();
		void ExecuteUbergraph_Hesperornis_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
