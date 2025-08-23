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
	 * BlueprintGeneratedClass Sarco_Character_BP.Sarco_Character_BP_C
	 * Size -> 0x00B8 (FullSize[0x33A0] - InheritedSize[0x32E8])
	 */
	class ASarco_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_BL;                     // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_BR;                     // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_FL;                     // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg_FR;                     // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail3;                      // 0x3310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail1;                      // 0x3318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Head;                       // 0x3320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x3328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x3330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Sarco_C*            DinoCharacterStatus_BP_Sarco_C1;                         // 0x3338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TargetRotation;                                          // 0x3340(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     RotationRateModifier;                                    // 0x3358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FrightenRadius;                                          // 0x3360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NextFrighten;                                            // 0x3368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       JumpDown;                                                // 0x3370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5UGZ[0x7];                                   // 0x3371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TargetRotationRate;                                      // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LungeTarget;                                             // 0x3380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MaxLungeXVelocity;                                       // 0x3388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxLungeZVelocity;                                       // 0x3390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CrosshairCharTraceLength;                                // 0x3398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPCanBeBaseForCharacter(class APawn* Pawn);
		float BPGetGravityZScale();
		void TriggerLungeImpulse();
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode newMovementMode, unsigned char PrevCustomMode, unsigned char newCustomMode);
		void BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn);
		struct FVector BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime);
		float BPGetCrosshairAlpha();
		bool BPAllowCarryCharacter(class APrimalCharacter* checkCharacter);
		void ComputeAllowCarry(class APrimalCharacter* Target, bool* Allow);
		float BP_GetCustomModifier_RotationRate();
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		void ComputeAttackIndex(int32_t AttackIndexIn, int32_t* AttackIndexOut);
		void InpActEvt_Crouch_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key);
		void AnimNotify_TurnForAttack();
		void RotateAttack();
		void AnimNotify_AttackTurnFinished();
		void AnimNotify_Lunge();
		void RequestLunge(class AActor* LungeTarget, double Direction);
		void UpdateCrosshair();
		void AnimNotify_Roll();
		void ExecuteUbergraph_Sarco_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
