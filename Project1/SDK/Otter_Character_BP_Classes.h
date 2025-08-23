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
	 * BlueprintGeneratedClass Otter_Character_BP.Otter_Character_BP_C
	 * Size -> 0x00C0 (FullSize[0x33A8] - InheritedSize[0x32E8])
	 */
	class AOtter_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProximitySound_C*                                   ProximitySound;                                          // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            BlackParticle;                                           // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            WhiteParticle;                                           // 0x3310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                pearlMesh;                                               // 0x3318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Otter_C*            DinoCharacterStatus_BP_Otter_C1;                         // 0x3320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     TimeOfLastFeeding;                                       // 0x3328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ValidTamingClasses[0x10];                                // 0x3330(0x0010) UNKNOWN PROPERTY: ArrayProperty
		double                                                     FoodToGivePerFeeding;                                    // 0x3340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             AffinityPercentToGive;                                   // 0x3348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             WeightToGetItemAtIndex;                                  // 0x3358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      ItemToGive;                                              // 0x3368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class APawn*                                               LastPlayerToOrder;                                       // 0x3378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     backToOwnerRadius;                                       // 0x3380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentMode;                                             // 0x3388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PearlToShow;                                             // 0x338C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ChanceToGiveExtraBlackPearl;                             // 0x3390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RecievedAPearl;                                          // 0x3398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F5QM[0x7];                                   // 0x3399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SphereTraceRad;                                          // 0x33A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPSetupTamed(bool bWasJustTamed);
		void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
		void BPTimerServer();
		void OnOwnerReached();
		void ReturningToOwnerActions();
		void SetLastPlayerOrder(class APawn* Player);
		void GetOwnerCharacter(class APawn** Owner);
		void ReturnToPlayer();
		void SelectPearl(bool* GotAPearl, int32_t* IndexOfSelectedItem);
		void AttemptToGetAPearl(bool* ObtainedAPearl);
		void IsCharacterAFish(class APrimalCharacter* Character, bool* IsValid, int32_t* Index);
		void BPKilledSomethingEvent(class APrimalCharacter* killedTarget);
		void EatPlayersCarriedFood(class APrimalCharacter* Player);
		void Init();
		void IsCarriedFishValid(class APrimalCharacter* Player, bool* IsValid, int32_t* Index);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
		void BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex);
		void ReceiveBeginPlay();
		void AnimNotify_ShowPearl();
		void MulticastPlayShowPearl(int32_t switchIndex);
		void ExecuteUbergraph_Otter_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
