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
	 * BlueprintGeneratedClass Trike_Character_BP.Trike_Character_BP_C
	 * Size -> 0x01A8 (FullSize[0x36E8] - InheritedSize[0x3540])
	 */
	class ATrike_Character_BP_C : public ADino_Character_BP_Ramming_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x3540(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_BL_Foot;                    // 0x3548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_BR_Foot;                    // 0x3550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_FL_Foot;                    // 0x3558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_FR_Foot;                    // 0x3560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail2;                      // 0x3568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x3570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail1;                      // 0x3578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Head;                       // 0x3580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x3588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Trike_C*            DinoCharacterStatus_BP_Trike_C1;                         // 0x3590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FBoneDamageAdjuster>                         DamageReflectionBones;                                   // 0x3598(0x0010) Edit, BlueprintVisible
		TArray<class UClass*>                                      DamageReflectionTypes;                                   // 0x35A8(0x0010) Edit, BlueprintVisible
		class UClass*                                              ReflectedDamageType;                                     // 0x35B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     MaxReflectedDamage;                                      // 0x35C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DamageReflectionEffect;                                  // 0x35C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     RamDamageMin;                                            // 0x35D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamDamageMax;                                            // 0x35D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RamDamageCurve;                                          // 0x35E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RT4Q[0x7];                                   // 0x35E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RammingSpeedMin;                                         // 0x35E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RammingSpeedMax;                                         // 0x35F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RammingSpeedCurve;                                       // 0x35F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0NN1[0x7];                                   // 0x35F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RamStaminaPerSecondDrainMin;                             // 0x3600(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamStaminaPerSecondDrainMax;                             // 0x3608(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RamStaminaPerSecondDrainCurve;                           // 0x3610(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T4SY[0x7];                                   // 0x3611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RamImpulseMin;                                           // 0x3618(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamImpulseMax;                                           // 0x3620(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RamImpulseCurve;                                         // 0x3628(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6Q0B[0x7];                                   // 0x3629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RamAccelerationTime;                                     // 0x3630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RamAccelerationCurve;                                    // 0x3638(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y25O[0x7];                                   // 0x3639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxStepHeightDuringRam;                                  // 0x3640(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RotationRateDuringRamMin;                                // 0x3648(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            RotationRateDuringRamMax;                                // 0x3660(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              RivalryBuffClass;                                        // 0x3678(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CalculatedRamMaxSpeed;                                   // 0x3680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamEndTime;                                              // 0x3688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RamHUDStartPercentage;                                   // 0x3690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        RamBuildupInAnim;                                        // 0x3698(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        RamOutAnim;                                              // 0x36A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     RivalryBuffTickInterval;                                 // 0x36A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        RamBuildupOutAnim;                                       // 0x36B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     RivalryBuffMassThresholdTrigger;                         // 0x36B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableDamageReflection;                                  // 0x36C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayedRamBuildUpOutAnim;                                 // 0x36C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6M08[0x6];                                   // 0x36C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         BuildupHuffPitch;                                        // 0x36C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         BuildupHuffVolume;                                       // 0x36D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BuildupHuffCount;                                        // 0x36D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DWAR[0x4];                                   // 0x36DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RiderLastInitiatedRamTimeSeconds;                        // 0x36E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopRamAttackBuildup();
		void GetRammingSpeedMax(double* MaxSpeed);
		void CanTickStartedRam(bool* Tick);
		void StartRamAttackBuildup();
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		void CanStartRamAttack(bool* AllowedToRam);
		float BP_GetCustomModifier_MaxSpeed();
		void HandleRamStarted(double RamBuildupTime, double RamDuration);
		void HandleRamEnded(bool HitSomething);
		void CalculateRamDuration(double HoldTime, double* Duration);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		bool BPHandleOnStopTargeting();
		float BPGetHUDOverrideBuffProgressBarPercent();
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void GetPawnRootComponent(class AActor* Target, class UPrimitiveComponent** AsPrimitiveComponent);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void DoReflectDamage(class APawn* DamageTarget, double Damage, const class FName& BoneName);
		void MulticastReflectDamageEffect(const class FName& FromBone);
		void ReceiveBeginPlay();
		void CheckRivalryTick();
		void RamBuildupEndEvent();
		void BP_OnJumpPressed();
		void ExecuteUbergraph_Trike_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
