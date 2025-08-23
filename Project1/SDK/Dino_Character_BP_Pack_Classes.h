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
	 * BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C
	 * Size -> 0x00BC (FullSize[0x33A4] - InheritedSize[0x32E8])
	 */
	class ADino_Character_BP_Pack_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class AActor*>                                      DinoPack;                                                // 0x32F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class AActor*                                              ClosestPackDino;                                         // 0x3300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MaxPackWanderDistance;                                   // 0x3308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PackRadius;                                              // 0x3310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastUpdatedPackTime;                                     // 0x3318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PackSize;                                                // 0x3320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPackLeader;                                           // 0x3324(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCopycatRoar;                                            // 0x3325(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUsePackRoar;                                            // 0x3326(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BXN7[0x1];                                   // 0x3327(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RoarAttackIndex;                                         // 0x3328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PackOctreeTypeBitMask;                                   // 0x332C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeAfterRoarToCausePackRoar;                            // 0x3330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdatePackDelay_PostUnstasis;                            // 0x3338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdatePackDelay_PostUnstasis_RandRange;                  // 0x3340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdatePackDelay_PostBeginPlay;                           // 0x3348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UpdatePackDelay_PostBeginPlay_RandRange;                 // 0x3350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DinoPackLeaderBuffClass;                                 // 0x3358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ADino_Character_BP_Pack_C*                           MyPackLeader;                                            // 0x3360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugPackDino;                                          // 0x3368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HN05[0x7];                                   // 0x3369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimePackJoiningWasPutOnCoolDown;                         // 0x3370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WanderCloseToLeader;                                     // 0x3378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3SJ2[0x7];                                   // 0x3379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeToPreventJoiningAPack;                               // 0x3380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomID;                                                // 0x3388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       dontJoinNewPackIfHasAffinity;                            // 0x338C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       dontAllowLeaderWithAffinity;                             // 0x338D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_970J[0x2];                                   // 0x338E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeGatheredPack;                                    // 0x3390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    minPackSize;                                             // 0x3398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReplicatedPackSize;                                      // 0x339C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Counter;                                                 // 0x33A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino);
		void BP_OnSetDeath();
		void GetRadiusToJoinPack(bool belongsToOldPack, double* firstTimeRadius);
		void CanDinoBeAddedToPack(class APrimalDinoCharacter* NewParam, TArray<class AActor*>* oldPack, bool* canBeAdded);
		void AddDinotoPack(class AActor* ActorToAdd);
		void IsValidClassForPack(class AActor* joiningActor, bool* IsValid);
		void BPTimerServer();
		void PutJoinPackOnCooldown(double DurationOfPackPrevention);
		void CanJoinPack(bool* CanJoin);
		bool BPShouldForceFlee();
		void ClearPack();
		void InitPackDino(bool isBeginPlay);
		void PackRoar();
		void UpdatePack();
		void BPDoAttack(int32_t AttackIndex);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void IsPackLeader(bool* bIsLeader);
		void BPUnstasis();
		void GatherPack();
		void OverrideRandomWanderLocation(const struct FVector& originalDestination, struct FVector* inVec);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Dino_Character_BP_Pack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
