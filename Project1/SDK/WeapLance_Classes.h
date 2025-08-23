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
	 * BlueprintGeneratedClass WeapLance.WeapLance_C
	 * Size -> 0x00B8 (FullSize[0x10F8] - InheritedSize[0x1040])
	 */
	class AWeapLance_C : public AShooterWeapon_Melee
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh2;                                             // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ThirdPersonMesh;                                         // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAttacking;                                            // 0x1058(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsAttacking;                                         // 0x1059(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AH8V[0x6];                                   // 0x105A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     PreviousTracePoints;                                     // 0x1060(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class AActor*>                                      HurtList;                                                // 0x1070(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     ClearHurtListTime;                                       // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StaminaCostPerSecondWantsAttacking;                      // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StaminaCostPerSecondIsAttacking;                         // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          StartAttackingSound;                                     // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          StopAttackingSound;                                      // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     DurabilityCostForDismount;                               // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastCostDurabilityTime;                                  // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CostDurabilityInterval;                                  // 0x10B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CostDurabilityAmountPerInterval;                         // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            DefaultLanceRot;                                         // 0x10C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            WantsToAttackLanceRot;                                   // 0x10E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DoTrace(const struct FVector& Start, const struct FVector& End);
		void DamageActor(class AActor* Victim, struct FHitResult* HitInfo);
		void DoTraceAttacks();
		bool BPForceTPVTargetingAnimation();
		void ReceiveTick(float DeltaSeconds);
		void BPHandleMeleeAttack();
		void BPStopMeleeAttack();
		void DoPlayStartAttackingSound();
		void DoPlayStopAttackingSound();
		void DidDismountHit();
		void ExecuteUbergraph_WeapLance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
