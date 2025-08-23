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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BossArenaManager.BossArenaManager_C.SpawnIndividualRewardsForPlayer
	 */
	struct ABossArenaManager_C_SpawnIndividualRewardsForPlayer_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DifficultyIndex;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SpawnLootContainer
	 */
	struct ABossArenaManager_C_SpawnLootContainer_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.Boss Died
	 */
	struct ABossArenaManager_C_BossDied_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.DoEarlyWhiteFlash
	 */
	struct ABossArenaManager_C_DoEarlyWhiteFlash_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ManageArenaEnableBuffsForCharacter
	 */
	struct ABossArenaManager_C_ManageArenaEnableBuffsForCharacter_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SpawnedBoss
	 */
	struct ABossArenaManager_C_SpawnedBoss_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SFXBack to Home
	 */
	struct ABossArenaManager_C_SFXBacktoHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.IssueReturnWarning
	 */
	struct ABossArenaManager_C_IssueReturnWarning_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand
	 */
	struct ABossArenaManager_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9EVQ[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.KillMinions
	 */
	struct ABossArenaManager_C_KillMinions_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers
	 */
	struct ABossArenaManager_C_CheckForActivePlayers_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena
	 */
	struct ABossArenaManager_C_GetAllActorsInBossArena_Params
	{
	public:
		bool                                                       bIncludeUnconscious;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncludeUntamedCreatures;                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncludeDead;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIgnorePlayers;                                          // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIgnoreDinos;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIgnoreAttached;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V234[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TheActors;                                               // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.IssueTimeWarning
	 */
	struct ABossArenaManager_C_IssueTimeWarning_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.KillAllOccupants
	 */
	struct ABossArenaManager_C_KillAllOccupants_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.TeleportBackToHome
	 */
	struct ABossArenaManager_C_TeleportBackToHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.DidTeleport
	 */
	struct ABossArenaManager_C_DidTeleport_Params
	{
	public:
		struct FVector                                             ReturnPosition;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OverrideBossClass;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.IsValidForTeleport
	 */
	struct ABossArenaManager_C_IsValidForTeleport_Params
	{
	public:
		class FString                                              InvalidReason;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.StartBoss
	 */
	struct ABossArenaManager_C_StartBoss_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay
	 */
	struct ABossArenaManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ReceiveTick
	 */
	struct ABossArenaManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.EventTeleportToHome
	 */
	struct ABossArenaManager_C_EventTeleportToHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome
	 */
	struct ABossArenaManager_C_SFXTeleportToHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.RunWhiteFlashNow
	 */
	struct ABossArenaManager_C_RunWhiteFlashNow_Params
	{
	public:
		bool                                                       Set;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager
	 */
	struct ABossArenaManager_C_ExecuteUbergraph_BossArenaManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8QFX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
