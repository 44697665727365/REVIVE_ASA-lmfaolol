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
	 * Function DungeonArenaManager.DungeonArenaManager_C.GetNumEntitiesInCave
	 */
	struct ADungeonArenaManager_C_GetNumEntitiesInCave_Params
	{
	public:
		int32_t                                                    NumPlayers;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumDinos;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.BPClientHandleNetExecCommand
	 */
	struct ADungeonArenaManager_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.ActivateArena
	 */
	struct ADungeonArenaManager_C_ActivateArena_Params
	{
	public:
		int32_t                                                    DifficultyIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5K5Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.IssueTimeWarning
	 */
	struct ADungeonArenaManager_C_IssueTimeWarning_Params
	{	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.KillAllOccupants
	 */
	struct ADungeonArenaManager_C_KillAllOccupants_Params
	{	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.Is Valid for Activation
	 */
	struct ADungeonArenaManager_C_IsValidforActivation_Params
	{
	public:
		class FString                                              InvalidReason;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.ReceiveTick
	 */
	struct ADungeonArenaManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DungeonArenaManager.DungeonArenaManager_C.ExecuteUbergraph_DungeonArenaManager
	 */
	struct ADungeonArenaManager_C_ExecuteUbergraph_DungeonArenaManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
