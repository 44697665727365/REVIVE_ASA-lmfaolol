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
	 * BlueprintGeneratedClass BossArenaManager.BossArenaManager_C
	 * Size -> 0x0260 (FullSize[0x0718] - InheritedSize[0x04B8])
	 */
	class ABossArenaManager_C : public ASaveGameActorTickable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     LastArenaActivatedTime;                                  // 0x04C8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BossTeleporterType[0x30];                                // 0x04D0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class AActor*                                              PlayerTeleportPos;                                       // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class AActor*                                              BossSpawnPos;                                            // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerReturnPos;                                         // 0x0510(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BossClass[0x30];                                         // 0x0528(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bArenaActive;                                            // 0x0558(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBossSpawned;                                            // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RJ64[0x6];                                   // 0x055A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalDinoCharacter*                                TheBoss;                                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ArenaKillAllPlayersAfterTime;                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TeleportActorsGatherRadius;                              // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastTimeWarning;                                         // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              BossArenaCenterLoc;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     ZeroDifficultyBossLevel;                                 // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FourDifficultyBossLevel;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ReturnTeleportPosOffset;                                 // 0x0598(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     bossSpawnDelay;                                          // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastBossArenaActiveTime;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SummonCooldown;                                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TeleportToHomeTime;                                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bResetOnBeginPlay;                                       // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UQRS[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABiomeZoneVolume*                                    BiomeZoneToPlayMusic;                                    // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          MusicToPlayInBiomeZone;                                  // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     TeleportToHomeStartedAtTime;                             // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNotifyPlayersOfReturn;                                  // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9WQS[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeActivePlayers;                                   // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeToResetWhenNoActivePlayers;                          // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FiveDifficultyHealthAndDamageAddition;                   // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSpawnWithoutCapsuleOffset;                              // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8CY3[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      PreventDeletionStructureClasses;                         // 0x0618(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       BlindTheUserNow;                                         // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RENZ[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      LootContainerSpawnPositions;                             // 0x0630(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		double                                                     LootContainerSpawnDelay;                                 // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LootContainerGammaSoftClass[0x30];                       // 0x0648(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		double                                                     LootContainerObstructionCheckRadius;                     // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APrimalStructureItemContainer*                       SpawnedLootContainer;                                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LootContainerBetaSoftClass[0x30];                        // 0x0688(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              LootContainerAlphaSoftClass[0x30];                       // 0x06B8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              IndividualRewardItemLootSets[0x30];                      // 0x06E8(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void SpawnIndividualRewardsForPlayer(class AShooterCharacter* Player, int32_t DifficultyIndex);
		void SpawnLootContainer();
		void BossDied();
		void DoEarlyWhiteFlash();
		void ManageArenaEnableBuffsForCharacter(class APrimalCharacter* forChar);
		void SpawnedBoss();
		void SFXBacktoHome();
		void IssueReturnWarning();
		bool BPClientHandleNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC);
		void KillMinions();
		void CheckForActivePlayers();
		void GetAllActorsInBossArena(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors);
		void IssueTimeWarning();
		void KillAllOccupants();
		void TeleportBackToHome();
		void DidTeleport(const struct FVector& ReturnPosition, class UClass* OverrideBossClass);
		void IsValidForTeleport(class FString* InvalidReason);
		void StartBoss();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void EventTeleportToHome();
		void SFXTeleportToHome();
		void RunWhiteFlashNow(bool Set);
		void ExecuteUbergraph_BossArenaManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
