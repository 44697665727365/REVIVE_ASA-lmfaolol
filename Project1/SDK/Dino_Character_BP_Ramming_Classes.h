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
	 * BlueprintGeneratedClass Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C
	 * Size -> 0x0258 (FullSize[0x3540] - InheritedSize[0x32E8])
	 */
	class ADino_Character_BP_Ramming_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    RamOverlapComponent;                                     // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRamBuildup;                                            // 0x32F8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9MY1[0x7];                                   // 0x32F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RamBuildupStartTime;                                     // 0x3300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamMinAIBuildupTime;                                     // 0x3308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamMinBuildupTime;                                       // 0x3310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamMaxBuildupTime;                                       // 0x3318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamHitRadius;                                            // 0x3320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BuffToApplyOnRamHit;                                     // 0x3328(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RamOverlapComponentLocation;                             // 0x3330(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamOverlapComponentRadius;                               // 0x3348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SmallDinoShoveDamage;                                    // 0x3350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamStaminaPerSecondDrain;                                // 0x3358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RamStarted;                                              // 0x3360(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VQNP[0x7];                                   // 0x3361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RamDuration;                                             // 0x3368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamStartTime;                                            // 0x3370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastRamTraceTime;                                        // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RamHitSomething;                                         // 0x3380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YCC5[0x7];                                   // 0x3381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastHitTraceCheckTime;                                   // 0x3388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamDamageDone;                                           // 0x3390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamDamageImpulse;                                        // 0x3398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoWaterChecksInTick;                                     // 0x33A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W548[0x7];                                   // 0x33A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APrimalCharacter*>                            ShovedSmallDinos;                                        // 0x33A8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector                                             RamBuildupStartWorldLocation;                            // 0x33B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamHitImpulseScaler;                                     // 0x33D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamHitImpulseHorizontalToVerticalRatio;                  // 0x33D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SmallDinoShoveMassThreshold;                             // 0x33E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastRammingCollisionCheckTime;                           // 0x33E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamingCollisionCheckTimeInterval;                        // 0x33F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentRammingStructureDamage;                           // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RammingMinStructureBaseDamage;                           // 0x3400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RammingMaxStructureBaseDamage;                           // 0x3408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      ClassesUsedForDurabilityMultipliersForStructureSettings; // 0x3410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             DurabilityMultiplierForStructureSettings;                // 0x3420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              RammingDamageType;                                       // 0x3430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RammingFoliageDamageType;                                // 0x3438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     RammingStructureDamageMultiplierAI;                      // 0x3440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RammingStructuresDamageType;                             // 0x3448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          LastHitSomethingResult;                                  // 0x3450(0x00F0) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference

	public:
		void ToString(const class FString& CallerName, class FString* DebugText);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void GetStructureDamageScaled(double CurrentValue, double MinValue, double MaxValue, double VelocityAlpha, double* ScaledDamage);
		void GetRammingSpeedMax(double* MaxSpeed);
		void CanTickStartedRam(bool* Tick);
		void DrainStatusValue(EPrimalCharacterStatusValue Type, double Amount, bool* HasRemainingValue);
		void DoRamImpact(bool* HitSomething);
		void CanStartRamAttack(bool* AllowedToRam);
		void CalculateRamDuration(double HoldTime, double* Duration);
		void ReceiveTick(float DeltaSeconds);
		void HandleRamEnded(bool HitSomething);
		void HandleRamStarted(double RamBuildupTime, double RamDuration);
		void GetRamState(bool* InRamBuildup, double* RamBuildupTime, bool* InRamming);
		void StopRamAttackBuildup();
		void StartRamAttackBuildup();
		void UserConstructionScript();
		void ServerStopRamBuildup();
		void ServerStartRamBuildup();
		void OnRamStarted(double Duration);
		void OnRamEnded();
		void ClientOnRamEnded(bool HitSomething);
		void OnRamEndedEarly(bool HitSomething);
		void Private__RamEnded(bool HitSomething);
		void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature(class APhysicsVolume* NewVolume);
		void OnComponentBeginOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ServerRequestRamEndEarly(bool HitSomething);
		void ServerCancelRamBuildup();
		void CancelRamBuildup();
		void MultiStartRam(double BuildUpDuration);
		void BPUnstasis();
		void ExecuteUbergraph_Dino_Character_BP_Ramming(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
