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
	 * BlueprintGeneratedClass Buff_TekArmor_Sword.Buff_TekArmor_Sword_C
	 * Size -> 0x0368 (FullSize[0x0FE8] - InheritedSize[0x0C80])
	 */
	class ABuff_TekArmor_Sword_C : public ABuff_TekArmor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            TPV_ChargeFX;                                            // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FPV_ChargeFX;                                            // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Sound_ChargedLoop;                                       // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Sound_Discharged;                                        // 0x0CA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Sound_Charged;                                           // 0x0CA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		E_TekGlovePunchState                                       CurrentTekPunchState;                                    // 0x0CB0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3LBU[0x7];                                   // 0x0CB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TakePercentDamageFromHittingStructs;                     // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMultiplyDamageByMeleeMultiplier;                        // 0x0CC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseChargeLevel2;                                        // 0x0CC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsToCharge;                                          // 0x0CC2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V3F9[0x5];                                   // 0x0CC3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ChargeStartTime;                                         // 0x0CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     cooldownStartTime;                                       // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PunchCooldown;                                           // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchRadius;                                             // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchDamage;                                             // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchImpulse;                                            // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PunchImpulseDragWeightLimit;                             // 0x0CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchImpulse_current;                                    // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchImpulseDragWeightLimit_current;                     // 0x0D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              currentPunchDamageType;                                  // 0x0D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      PunchIgnoreActors;                                       // 0x0D18(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     rocketPunchDistance_Max;                                 // 0x0D28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             currentRocketFistVelocity;                               // 0x0D30(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RocketPunchDuration_Max;                                 // 0x0D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     rocketPunchDuration_current;                             // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     rocketPunchStartTime;                                    // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ChargingSound;                                           // 0x0D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChargedParticle;                                         // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ChargedSound_One;                                        // 0x0D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ChargedSound_Two;                                        // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PunchImpactParticle;                                     // 0x0D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PunchImpactSound;                                        // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ElementCost_Punch;                                       // 0x0D90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ElementCost_ChargeLoop;                                  // 0x0D94(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ChargingElementCostInterval;                             // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           SwordTargetingCrosshairType;                             // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            currentSwordTargetingCrosshair;                          // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PunchImpactGroundParticle;                               // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebug;                                                  // 0x0DB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_90NR[0x7];                                   // 0x0DB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CrosshairSize;                                           // 0x0DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          FullyChargedPeriodicSound;                               // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     PunchExplosionDamage;                                    // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PunchExplosionRadius;                                    // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PunchExplosionDamageType;                                // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     PunchExplosionImpulse;                                   // 0x0DE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PunchChargeCancelSound;                                  // 0x0DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      alreadyHitActorsArray;                                   // 0x0DF8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     punchAnimLength;                                         // 0x0E08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchTraceHalfSize;                                      // 0x0E10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TekPunch_FoliageDamageType;                              // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              TekPunchCameraShake;                                     // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasValidTarget;                                         // 0x0E28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SP75[0x3];                                   // 0x0E29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        HUD_NoPawnTargetColor;                                   // 0x0E2C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HUD_ValidPawnTargetColor;                                // 0x0E3C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_COX2[0x4];                                   // 0x0E4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          MidAirSound;                                             // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     lastChargeConsumeElementTime;                            // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTargetingPressed;                                       // 0x0E60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_TekGlovePunchState                                       previousTekPunchState;                                   // 0x0E61(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_23EA[0x6];                                   // 0x0E62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     playerWalkSpeed_Charging;                                // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     timeToCharge;                                            // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ElementCost_RocketPunch;                                 // 0x0E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1ZD9[0x4];                                   // 0x0E7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        Anim_ChargeCancel_TPV;                                   // 0x0E80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_ChargeCancel_FPV;                                   // 0x0E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_ChargeStart_TPV_Ground;                             // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_ChargeStart_TPV_Air;                                // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_ChargeStart_FPV;                                    // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_RocketPunch_TPV;                                    // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_Punch_TPV_Ground;                                   // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_Punch_TPV_Air;                                      // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Anim_Punch_FPV;                                          // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ElementCost_Charged;                                     // 0x0EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TJ69[0x4];                                   // 0x0ECC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     punchDuration;                                           // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GloveFXSocketName_FPV;                                   // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GloveFXSocketName_TPV;                                   // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowAutoStart;                                         // 0x0EE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6J7D[0x7];                                   // 0x0EE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RocketPunchLastUpdateTime;                               // 0x0EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldPunchNow;                                         // 0x0EF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P5JB[0x7];                                   // 0x0EF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     InstaPunchDistance;                                      // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RocketPunchTickCheckDistance;                            // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GroundCheckDistance;                                     // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ChargedCameraShake;                                      // 0x0F18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     meleeDamageMultiplierScale;                              // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAltFirePressed;                                         // 0x0F28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VHIJ[0x7];                                   // 0x0F29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     lastPunchTime;                                           // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     punchDurationMax;                                        // 0x0F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AShooterWeapon*                                      Ref_TekSword;                                            // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AActor*                                              RefRocketPunchTargActor;                                 // 0x0F48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ExtraStructureDamageMultiplier;                          // 0x0F50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxFallZSpeed;                                           // 0x0F58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastPunchedTime;                                         // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastRocketPunchedTime;                                   // 0x0F68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseInputActionFireHoldSecondary;                        // 0x0F70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseInputActionAltFireHoldSecondary;                     // 0x0F71(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseGamepadRightTriggerHoldSecondary;                    // 0x0F72(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseInputActionTargetingHoldSecondary;                   // 0x0F73(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseGamepadLeftTriggerHoldSecondary;                     // 0x0F74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_18Q5[0x3];                                   // 0x0F75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     HoldActionThreshold;                                     // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          OverrideFPVChargeVFXTransform;                           // 0x0F80(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeValue;                                               // 0x0FE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsTekSword(class AShooterWeapon* Weapon, bool* IsTekSword);
		void AllowTekPunch(bool* Allow);
		bool PreventBlockingWithShield();
		bool ShieldActive();
		bool HasShield();
		void GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef);
		void CanDecreaseElementAmmo(int32_t AmountToDecrease, bool isForChargedState, bool* CanDecrease);
		void TryDecreaseElementAmmo(int32_t AmountToDecrease, bool isForChargedState);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void CanPhysicallyTekPunch(bool* Result);
		void ShouldDamageActor(class AActor* Victim, bool* Result);
		void HasLineOfSightToActor(class AActor* Actor, bool* Result);
		void ArePunchChargeAnimsPlaying(bool cleanUpAnims, bool* Result);
		void PlayPunchAnimsByState(E_TekGlovePunchState State);
		void IsPlayerAboveGround(bool* Result);
		void AreTekPantsEquipped(bool* Result, class ABuff_TekArmor_Pants_C** tekPantsRef);
		float GetBuffPostprocessIntensity();
		void BPDeactivated(class AActor* ForInstigator);
		void UpdateLocalVarsbyState(E_TekGlovePunchState NewState);
		void GetPlayerCameraLocation(struct FVector* Location);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void RocketPunchEnd();
		void ResetOwningPlayerVariables();
		bool PreventJump();
		void NetSetTekPunchState(E_TekGlovePunchState newPunchState);
		void BuffTickServer(float DeltaTime);
		void Client_SetTekPunchState(E_TekGlovePunchState NewState);
		double GetTimeToRocketPunchTarget(const struct FVector& TargetLocation);
		void CheckForTargetsWhileRocketPunching(bool* punchNow);
		void SetAudioParamsandPlay(class UAudioComponent** Audio, double Volume, double Pitch, bool PlaySound);
		void OnRep_CurrentPunchState();
		struct FVector GetRelativeCenterOfMass(class APrimalCharacter* Character);
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void ScanForRocketFistTargets(double Range, bool* anyHit, struct FVector* HitLocation, class AActor** HitActor);
		void AccurateSphereCheck(const struct FVector& EndLocation, double SphereRadius, bool IgnoreFriendlies, bool* HitPawnOrStructure);
		void SpawnSoundatFistLocation(class USoundBase* SoundToSpawn, double VolumeMultiplier, double PitchMultiplier);
		void BuffTickClient(float DeltaTime);
		void GetPunchLocation(struct FVector* Location);
		void RocketPunchStart();
		void Punch();
		void CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult);
		void SetCastedArmorPieceRef();
		void InpActEvt_AltFire_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_AltFire_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Targeting_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Targeting_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void Proxy_Gamepad_Left_Trigger_Hold(bool bPressed);
		void Proxy_InputAction_Targeting_Hold(bool bPressed);
		void Proxy_InputAction_Fire_Hold(bool bPressed);
		void Proxy_Gamepad_Right_Trigger_Hold(bool bPressed);
		void Proxy_InputAction_AltFire_Hold(bool bPressed);
		void Proxy_Fire_HoldTimer();
		void Proxy_Targeting_HoldTimer();
		void Proxy_AltFire_HoldTimer();
		void Proxy_LeftTrigger_HoldTimer();
		void Proxy_RightTrigger_HoldTimer();
		void OnSuperPunch_Pressed();
		void OnSuperPunch_Released();
		void Server_SetPunchChargeState(E_TekGlovePunchState newPunchState);
		void ResetCanLandAfterDelay();
		void UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn);
		void ResetPunchStateAfterDelay();
		void Sword_AltFirePressed();
		void Sword_AltFireReleased();
		void Proxy_InputAction_Fire(bool bPressed);
		void Proxy_Gamepad_Right_Trigger(bool bPressed);
		void Proxy_InputAction_AltFire(bool bPressed);
		void Proxy_InputAction_Targeting(bool bPressed);
		void Proxy_Gamepad_Left_Trigger(bool bPressed);
		void Skill_SuperPunch_Pressed();
		void Skill_SuperPunch_Released();
		void Skill_SuperPunch_Mod_Released();
		void Skill_SuperPunch_Mod_Pressed();
		void ExecuteUbergraph_Buff_TekArmor_Sword(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
