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
	 * Function BossTeleporter.BossTeleporter_C.ManageArenaDisableBuffsForCharacter
	 */
	struct ABossTeleporter_C_ManageArenaDisableBuffsForCharacter_Params
	{
	public:
		class APrimalCharacter*                                    ForCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.BackupCallArenaDidTeleportOnLevelLoaded
	 */
	struct ABossTeleporter_C_BackupCallArenaDidTeleportOnLevelLoaded_Params
	{	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.Do TeleportSound
	 */
	struct ABossTeleporter_C_DoTeleportSound_Params
	{	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.BuffTickClient
	 */
	struct ABossTeleporter_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z8B4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.DoTeleport
	 */
	struct ABossTeleporter_C_DoTeleport_Params
	{	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.NetDoTeleport
	 */
	struct ABossTeleporter_C_NetDoTeleport_Params
	{	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.ReceiveBeginPlay
	 */
	struct ABossTeleporter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BossTeleporter.BossTeleporter_C.ExecuteUbergraph_BossTeleporter
	 */
	struct ABossTeleporter_C_ExecuteUbergraph_BossTeleporter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
