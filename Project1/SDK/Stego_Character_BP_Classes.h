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
	 * BlueprintGeneratedClass Stego_Character_BP.Stego_Character_BP_C
	 * Size -> 0x03D8 (FullSize[0x36C0] - InheritedSize[0x32E8])
	 */
	class AStego_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail3;                      // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail2;                      // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_BL;                     // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_BR;                     // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_FL;                     // 0x3310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x3318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail1;                      // 0x3320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Head;                       // 0x3328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_FR;                     // 0x3330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x3338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ChangePlateVFX;                                          // 0x3340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            TailTrail;                                               // 0x3348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ImpalingVFX;                                             // 0x3350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Stego_C*            DinoCharacterStatus_BP_Stego_C1;                         // 0x3358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DefaultBackplateBuff;                                    // 0x3360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		E_StegoBackplateMode                                       BackplateMode;                                           // 0x3368(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXN6[0x7];                                   // 0x3369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         BackplateModeHudElement;                                 // 0x3370(0x01B0) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     HardenedModeDamageModifier;                              // 0x3520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RiderBuff;                                               // 0x3528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Impaling;                                                // 0x3530(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugImpaleAnyActor;                                     // 0x3531(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bReleasing;                                              // 0x3532(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NRAF[0x5];                                   // 0x3533(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    ImpalingChracater;                                       // 0x3538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ImpalingStartLocation;                                   // 0x3540(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugImpaleIgnoreTargetHealth;                           // 0x3558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugMelee;                                             // 0x3559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9QBG[0x2];                                   // 0x355A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CurrentPlateColor;                                       // 0x355C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TargetPlateColor;                                        // 0x356C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasImpaleTarget;                                         // 0x357C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EC3N[0x3];                                   // 0x357D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DefaultColor;                                            // 0x3580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DefaultColorSet;                                         // 0x3590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UTVA[0x7];                                   // 0x3591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PlateParemterCurrent;                                    // 0x3598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ImpalingStaminaCostPerSec;                               // 0x35A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PlateColorRegionName;                                    // 0x35A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HardenedPlateColor;                                      // 0x35B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HeavyPlateColor;                                         // 0x35C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SharpenedPlateColor;                                     // 0x35D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ImpaleCheckDistance;                                     // 0x35E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PreventDismountingParticle;                              // 0x35E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     LastTimePlayedPreventDismount;                           // 0x35F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PreventDismountVfxCooldown;                              // 0x35F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SwipeColorHardened;                                      // 0x3600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SwipeColorSharpened;                                     // 0x3610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SwipeColorHeavy;                                         // 0x3620(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ImpalingPosition;                                        // 0x3630(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsImpalingLeft;                                         // 0x3638(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2RW1[0x7];                                   // 0x3639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WildDinoStartImpaleTime;                                 // 0x3640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WildDinoImpaleDuration;                                  // 0x3648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bChangingPlateMaterialWhenSetRider;                      // 0x3650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BIGQ[0x3];                                   // 0x3651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DanderColorHeavy;                                        // 0x3654(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DanderColorHardened;                                     // 0x3664(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DanderColorSharpened;                                    // 0x3674(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBeforeBeginPlay;                                        // 0x3684(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VNYE[0x3];                                   // 0x3685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeavyPlateHUDString;                                     // 0x3688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SharpenedPlateHUDString;                                 // 0x3698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              HardenedPlateHUDString;                                  // 0x36A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      ChangePlateVFXColorMultiplier;                           // 0x36B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PlatesMatElemID;                                         // 0x36BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsBionicStego(bool* bRet);
		void BPCharacterSleeped();
		bool BPOverrideMoveToOrder(const struct FVector& MoveToLocation, class AShooterCharacter* OrderingPlayer);
		struct FLinearColor BPGetCrosshairColor();
		struct FVector BPAdjustImpulseFromDamage(const struct FVector& DesiredImpulse, float DamageTaken, const struct FDamageEvent& TheDamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		void OnRep_Impaling();
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		void CheckCanImpaleActor(class APrimalCharacter* Actor, bool* CanImpale);
		class FName BPGetDragSocketName(class APrimalCharacter* DraggingChar);
		class FName BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino);
		void ReceiveTick(float DeltaSeconds);
		int32_t BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*> AnimationArray);
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		bool BPHandleUseButtonPress(class AShooterPlayerController* RiderController);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void BPModifyHarvestingWeightsArray(TArray<float> resourceWeightsIn, TArray<class UPrimalItem*> resourceItems, TArray<float>* resourceWeightsOut);
		float BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void OnRep_BackplateMode();
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void SetBackplateMode(E_StegoBackplateMode BackplateMode);
		void SwitchBackplateMode();
		void BPDoAttack(int32_t AttackIndex);
		void Dismount();
		void TryImpaleTarget(class APrimalCharacter* ImpaledTarget);
		void ReleaseImpalingTarget();
		void HandleStopImpaling();
		void SetBleedingVFXLocation(const struct FVector& NewLocation);
		void ReceiveBeginPlay();
		void DoImpaleTarget(class APrimalCharacter* ImpaledTarget);
		void PlayPreventDismountVFX();
		void ExecuteUbergraph_Stego_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
