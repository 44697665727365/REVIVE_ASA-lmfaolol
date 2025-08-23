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
	 * BlueprintGeneratedClass DungeonArenaManager.DungeonArenaManager_C
	 * Size -> 0x0130 (FullSize[0x05E8] - InheritedSize[0x04B8])
	 */
	class ADungeonArenaManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     LastArenaActivatedTime;                                  // 0x04C8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bArenaActive;                                            // 0x04D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X91B[0x7];                                   // 0x04D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ArenaKillAllPlayersAfterTime;                            // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastTimeWarning;                                         // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastBossArenaActiveTime;                                 // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATogglePainVolume*                                   KillVolume;                                              // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class ATogglePainVolume*                                   PlayerVolume;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		TArray<class ANPCZoneManager*>                             ZoneManagersManualSpawn_Easy;                            // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ANPCZoneManager*>                             ZoneManagersManualSpawn_Medium;                          // 0x0510(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ANPCZoneManager*>                             ZoneManagersManualSpawn_Hard;                            // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class FName                                                LevelEventEndedName;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LevelEventActivatedName;                                 // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentActiveDifficulty;                                 // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G276[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TimeRemaingMessage;                                      // 0x0548(0x0018) Edit, BlueprintVisible
		double                                                     PreTime;                                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PreTimeRemaingMessage;                                   // 0x0568(0x0018) Edit, BlueprintVisible
		int32_t                                                    MaxPlayersAllowed;                                       // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTamesAllowed;                                         // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              GatherDinosPositionActor;                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class AVolume*                                             GatherDinosOverlapVolume;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class ATogglePainVolume*                                   AltPlayerVolume;                                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class ATogglePainVolume*                                   AltKillVolume;                                           // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class AVolume*                                             AltGatherDinosOverlapVolume;                             // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class AActor*                                              AltGatherDinosPositionActor;                             // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TeleportDestination;                                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     LastTimeActivePlayers;                                   // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ResetIntervalAfterNoActivePlayers;                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                SP_PreTimeRemaingMessage;                                // 0x05D0(0x0018) Edit, BlueprintVisible

	public:
		void GetNumEntitiesInCave(int32_t* NumPlayers, int32_t* NumDinos);
		bool BPClientHandleNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC);
		void ActivateArena(int32_t DifficultyIndex);
		void IssueTimeWarning();
		void KillAllOccupants();
		void IsValidforActivation(class FString* InvalidReason);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_DungeonArenaManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
