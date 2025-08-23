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
	 * BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C
	 * Size -> 0x02A8 (FullSize[0x0F28] - InheritedSize[0x0C80])
	 */
	class ABuff_TekArmor_Pants_C : public ABuff_TekArmor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalItemArmor_TekPants_C*                         Ref_TekPants;                                            // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTEKRunCharging;                                       // 0x0C90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZVBI[0x7];                                   // 0x0C91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentPlayerRunSpeed;                                   // 0x0C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxAllowedTexRunVelocity;                                // 0x0CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RunSpeedMult_AdditionRate;                               // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TEKRunDamageType;                                        // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TEKRunFoliageDamageType;                                 // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunBaseDamage;                                        // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunDamageRadius;                                      // 0x0CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunImpulseStrength;                                   // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunImpulseWeightLimit;                                // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunningDamageUpdateRate;                              // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunningSecondsPerElementConsumed;                     // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunningHitPawnRefreshRate;                            // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AdditionalRunSpeedMult;                                  // 0x0CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ForwardLocRelativeToSpeed;                               // 0x0D00(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TekRunDamage_current;                                    // 0x0D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APrimalCharacter*>                            ChargeHitPawns;                                          // 0x0D20(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class APrimalStructure*>                            ChargeHitStructures;                                     // 0x0D30(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       bDebug;                                                  // 0x0D40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EOTE[0x7];                                   // 0x0D41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StructureBoxTraceZModifier;                              // 0x0D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PawnBoxTraceModifier;                                    // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    damageStructureElementCost;                              // 0x0D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D88I[0x4];                                   // 0x0D5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     WallUnbrokenImpactParticle;                              // 0x0D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          WallUnbrokenImpactSound;                                 // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     TEKRunningPostProcessIntensityScale;                     // 0x0D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WallUnbrokenImpactDamage;                                // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WallUnbrokenBounceImpulse;                               // 0x0D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RunSpeedMult_Base;                                       // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsToCharge;                                          // 0x0D90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_05P6[0x7];                                   // 0x0D91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     currentPlayerVelocityLength;                             // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PreviousTekRunDir;                                       // 0x0DA0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPreventVelocityConservationThisFrame;                   // 0x0DB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5C1B[0x7];                                   // 0x0DB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            interpControlRotation_target;                            // 0x0DC0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     interpControlRotation_speed;                             // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     accumulatedRunningTimeForElementCost;                    // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     runningTimeForElementCost;                               // 0x0DE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    damageEnemyElementCost;                                  // 0x0DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    runningElementCost;                                      // 0x0DF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     HitPawn_Particle;                                        // 0x0DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          HitPawn_Sound;                                           // 0x0E00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             lastStructureImpactNormal;                               // 0x0E08(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustParticleIntensity;                                   // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsDustTrailActive;                                      // 0x0E28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAltFirePressed;                                         // 0x0E29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A2W8[0x6];                                   // 0x0E2A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TekRunServerTickInterval;                                // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_TekRunningState                                          CurrentTekRunState;                                      // 0x0E38(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		E_TekRunningState                                          PreviousTekRunState;                                     // 0x0E39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y2KJ[0x6];                                   // 0x0E3A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     requiredTekRunMaxVelocityRatio;                          // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_WaterRun_TPV;                                       // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     runOnWaterImpulse;                                       // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APhysicsVolume*                                      Ref_AboveWaterVolume;                                    // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     aboveWaterClientTickInterval;                            // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastCheckForWaterTime;                                   // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     waterCheckInterval;                                      // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRightFoot;                                              // 0x0E78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_79P4[0x7];                                   // 0x0E79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     footSplashOffset;                                        // 0x0E80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     lastFootSplashTime;                                      // 0x0E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     footSplashInterval;                                      // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWasRunningOnWater;                                      // 0x0E98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SQST[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Ref_WaterRun_FPV;                                        // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     waterRunDownCheckDistance;                               // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanRunOnWater;                                          // 0x0EB0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowRunningOnWater;                                    // 0x0EB1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8HNQ[0x6];                                   // 0x0EB2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NewVar_1;                                                // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MoveSpeedModifierScale;                                  // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TekRunningWaterSubmergedThreshold;                       // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RestoreFullTekSpeedVelocityRatio;                        // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldSonicBoom;                                        // 0x0ED8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTooSlowForTekRun;                                     // 0x0ED9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D58O[0x6];                                   // 0x0EDA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastTooSlowForTekRunStartTime;                           // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     timeAfterTooSlowToCancelTekRun;                          // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowJetpackStartTekRun;                                // 0x0EF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IROL[0x7];                                   // 0x0EF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     JetpackThrustImpulse;                                    // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     sonicBoomTekVelocityRatio;                               // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SonicBoomRequiredVelocityForwardDot;                     // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    startRunningElementCost;                                 // 0x0F10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z6PO[0x4];                                   // 0x0F14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     waterRunRequiredForwardVelocityDot;                      // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WaterImpactTemplate;                                     // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void IsPlayerUsingJetpack(bool* Result);
		void SetPlayerIgnoreSpeedModifiers(bool newIgnore);
		void PlayerHasFistsEquipped(bool* Result);
		void IsPlayerGrappled(bool* Result);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void GetPlayerMoveSpeedModifier(double* Result);
		void OnRep_bCanRunOnWater();
		void SetRunningOnWater(bool IsRunning);
		void OnRep_CurrentTekRunState();
		void AreGlovesEquippedAndActive(bool* Result, class ABuff_TekArmor_Gloves_C** glovesRef);
		void GetPlayerMaxTekRunVelocity(double* MaxSpeed);
		float GetBuffPostprocessIntensity();
		void CanStartTekRun(bool* Result);
		void NetSetRunningSpeedModifier(double newModifier);
		void RunDamageActor(class AActor* HitActor, bool* DidRebound);
		void NetSetTekRunningState(E_TekRunningState NewState);
		void SetDustParticlesActive(bool newActive);
		void UpdateLocalVarsByState(E_TekRunningState NewState);
		void LocalSetTekRunningState(E_TekRunningState NewState);
		void BuffTickServer(float DeltaTime);
		void InitGloves();
		void ForceWalkForward();
		void UpdatePlayerControlRotation(double DeltaSeconds);
		void BPDeactivated(class AActor* ForInstigator);
		void GetPlayerTekRunVelocityRatio(double* Ratio);
		void GetPlayerMaxRunVelocity(double* MaxSpeed);
		void MaintainFullSpeed(bool bUsePlayerForward, const struct FVector& OverrideDirection, bool* wasMaintained);
		void GetPlayerMaxTekRunVelocity_Pure(double* MaxSpeed);
		void StoreCurrentVelocityLength();
		void SetChargeStartVariables();
		void GetDefaultPlayerRunSpeedMult(double* SpeedMult);
		void TickUpdateTekRun(double DeltaSeconds);
		void RedirectPlayerVelocity(const struct FVector& newForward);
		void BuffTickClient(float DeltaTime);
		void SetPreventEquipWeapons(bool prevent);
		struct FVector CalculateDeflectingImpulse(class AActor* TargetCharacter, double Impulse);
		void SetPlayerRunSpeed(double NewSpeed);
		void ClearHitActors();
		void TraceandDamageForwardPawns();
		void GetModifiedForward(double forwardScale, const struct FVector& AdditionalOffset, struct FVector* newForward);
		void TraceAndDamageForwardStationaryActors();
		void CalculateForwardRelativeToSpeed(double DeltaSeconds);
		void CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult);
		void SetCastedArmorPieceRef();
		void InpActEvt_AltFire_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_AltFire_K2Node_InputActionEvent_1(const struct FKey& Key);
		void Server_SetTekRunningState(E_TekRunningState newRunState);
		void Client_SyncRunModifier(double newModifier);
		void Pants_AltFirePressed();
		void Pants_AltFireReleased();
		void ExecuteUbergraph_Buff_TekArmor_Pants(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
