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
	 * BlueprintGeneratedClass SupplyCrateBaseBP.SupplyCrateBaseBP_C
	 * Size -> 0x0100 (FullSize[0x1778] - InheritedSize[0x1678])
	 */
	class ASupplyCrateBaseBP_C : public APrimalStructureItemContainer_SupplyCrate
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1678(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CollisionComps;                                          // 0x1688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg4;                       // 0x1690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg3;                       // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg2;                       // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Leg1;                       // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule7;                                                // 0x16B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule6;                                                // 0x16B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule5;                                                // 0x16C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule4;                                                // 0x16C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule1;                                                // 0x16D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule0;                                                // 0x16D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioComponent;                                          // 0x16E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Center;                     // 0x16E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimalInventoryBP_SupplyCrate_C*                    PrimalInventoryBP_SupplyCrate_C1;                        // 0x16F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          OpenInventorySoundOverride;                              // 0x16F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          CloseInventorySoundOverride;                             // 0x1700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ItemCraftingSoundOverrideOverride;                       // 0x1708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     MatineeLocMovements;                                     // 0x1710(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FRotator>                                    MatineeRotMovements;                                     // 0x1720(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     MatineeBeginTime;                                        // 0x1730(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             MovementDelays;                                          // 0x1738(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bPlayedOpenAnim;                                         // 0x1748(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AJG4[0x3];                                   // 0x1749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NrOfTries;                                               // 0x174C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWasOpened;                                              // 0x1750(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bDrawIntoCloudEmissive;                                  // 0x1751(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6LJ7[0x6];                                   // 0x1752(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_SupplyCrate_Stamp;                                   // 0x1758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      IdlePositionOnMoveEnd;                                   // 0x1760(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EAFN[0x4];                                   // 0x1764(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     LastWindSourceLocs;                                      // 0x1768(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AttachWindSourceComps();
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
		void UpdateCollisionComps(bool Enable);
		void UpdateCloudEmissive();
		void OnRep_bWasOpened();
		void GetComponentsToMoveForMatinee(class USceneComponent** ComponentsToMove);
		struct FRotator GetMatineeRotationforAlphaandSegment(double Alpha, TArray<struct FRotator>* Array, int32_t Segmant);
		struct FVector GetMatineePositionforAlphaandSegment(double Alpha, TArray<struct FVector>* Array, int32_t Segmant);
		void UserConstructionScript();
		void OnRep_FinishedCrateMovement();
		void BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem);
		void Multi_PlayOpenAnim();
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void BPPlayDying(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void MoveToLandTick();
		void ExecuteUbergraph_SupplyCrateBaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
