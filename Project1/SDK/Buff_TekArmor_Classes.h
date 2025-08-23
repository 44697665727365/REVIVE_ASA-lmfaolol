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
	 * BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C
	 * Size -> 0x0110 (FullSize[0x0C80] - InheritedSize[0x0B70])
	 */
	class ABuff_TekArmor_C : public ABuff_OverrideVelocity_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AShooterCharacter*                                   Ref_OwningPlayer;                                        // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EPrimalEquipmentType                                       currentEquipmentSlot;                                    // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQ1T[0x7];                                   // 0x0B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   Ref_OwningPlayerController;                              // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABuff_TekArmor_C*                                    SelfAsObj;                                               // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AWeapFists_C*                                        FistWeapon;                                              // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UPrimalItemArmor_Base_Tek_C*                         Ref_ArmorPiece;                                          // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EPrimalEquipmentType                                       TekBuffEquipmentType;                                    // 0x0BA8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTekAbilityActive;                                     // 0x0BA9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FS1E[0x2];                                   // 0x0BAA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TekArmorMessage_Color;                                   // 0x0BAC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HZHQ[0x4];                                   // 0x0BBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TekArmorMessage_DisplayScale;                            // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TekArmorMessage_DisplayTime;                             // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInfiniteAmmo;                                           // 0x0BD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6EBL[0x7];                                   // 0x0BD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATekArmor_EffectActor_C*>                     SpawnedFXActors;                                         // 0x0BD8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FName                                                TekArmorName;                                            // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          TekArmorIcon;                                            // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldWarpFOV;                                          // 0x0BF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ESPO[0x7];                                   // 0x0BF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     warpFOV_target;                                          // 0x0C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     warpFOV_MAX;                                             // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     warpFOV_lag_in;                                          // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     warpFOV_lag_out;                                         // 0x0C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     warpFOV_start;                                           // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ConsumeElementInterval;                                  // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeSinceLastConsumeElement;                             // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPrimalEquipmentType                                       preventAbilityActiveSlot;                                // 0x0C38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTekIgnoredMoveInput;                                    // 0x0C39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTekIgnoredLookInput;                                    // 0x0C3A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLeftBumperHeld;                                         // 0x0C3B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWeapon;                                               // 0x0C3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1R7I[0x3];                                   // 0x0C3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Restrictedbecauseofgenesismapstring;                     // 0x0C40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		double                                                     GenesisAbilityErrorRateLimitSeconds;                     // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hassetwhethertekabilitiesareallowedingenesis;            // 0x0C58(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       tekabilitiesareallowedingenesis;                         // 0x0C59(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4V5S[0x6];                                   // 0x0C5A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GenesisMapName;                                          // 0x0C60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UClass*>                                      AbilityRequiresEngrams;                                  // 0x0C70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetWeaponMesh(class USkeletalMeshComponent** OutMesh);
		void HideBoostIcon(bool* ShouldSet, bool* WithValue);
		void SetJetpackOffset(const struct FTransform& AddTransform);
		void HasRequiredEngrams(bool* HasEngrams);
		void IsTekBuffDisabled(bool* bIsDisabled);
		void checkgenesisrestrictionsforplayer(class APrimalCharacter* Player, bool* isrestricted);
		void BPActivated(class AActor* ForInstigator);
		void IsRestrictedBecauseOfGenesisMap(bool* restricted);
		void GetIsPlayerinSealedSpace(bool* Result);
		void IsAbilityValid(bool* OutValid);
		void IsPlayerInWaterVolume(bool* Result, double* waterVolumeTopZ);
		void SpawnFX(class UParticleSystem* EmitterTemplate, struct FTransform* InTransform, class USoundBase* Sound, double VolumeMultiplier, double PitchMultiplier);
		void ShouldDamageActor(class AActor* Victim, bool* Result);
		void ResetPlayerFOV();
		void SetTekIgnoreLookInput(bool newIgnore);
		void SetTekIgnoreMoveInput(bool newIgnore);
		bool AllowPostProcessEffect();
		void BPDeactivated(class AActor* ForInstigator);
		void ResetTargetFOV();
		void IsWarpingFOV(bool* Result);
		void GetDefaultTekBuff(class ABuff_TekArmor_C** ref);
		void GetDefaultPlayer(class APrimalCharacter** ref);
		void Client_ConsumeElementAfterTime(double DeltaTime, int32_t elementCost);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void IsPlayerGrounded(bool* Result);
		void GetRefOwningPlayerCameraManager(class AShooterPlayerCameraManager** ref);
		void UpdatePlayerFOV(double intensityRatio, bool warpIn);
		void GetRefOwningPlayerMovement(class UCharacterMovementComponent** Movement);
		void GetRefOwningPlayerController(class AShooterPlayerController** Controller);
		void GetRef_OwningPlayer(class AShooterCharacter** Player);
		void AreAnyTekAbilitiesActive(bool* Result);
		void IsTekArmorUsingAbility(unsigned char ArmorType, bool* Result);
		void DisplayTekArmorMessage(const class FString& Message, class USoundBase* Sound);
		void SetCastedArmorPieceRef();
		void GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef);
		void CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void Equipped_SetToMaxElement(EPrimalEquipmentType ItemSlot);
		void Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase* Sound, const struct FTransform& Transform, double SoundVolume, double soundPitch);
		void Equipped_TryToDecreaseElement(int32_t AmountToDecreaseBy, EPrimalEquipmentType ItemSlot);
		void CheckForArmorRef();
		void Server_SetTekAbilityActive(bool newActive);
		void RateLimitedGenesisAbilityWarning();
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void ExecuteUbergraph_Buff_TekArmor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
