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
	 * Function AscensionTeleporter.AscensionTeleporter_C.ProgressActivities
	 */
	struct AAscensionTeleporter_C_ProgressActivities_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.DoTeleportSound
	 */
	struct AAscensionTeleporter_C_DoTeleportSound_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.DoAscend
	 */
	struct AAscensionTeleporter_C_DoAscend_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.BuffTickClient
	 */
	struct AAscensionTeleporter_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O7QE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.DoTeleport
	 */
	struct AAscensionTeleporter_C_DoTeleport_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.NetDoTeleport
	 */
	struct AAscensionTeleporter_C_NetDoTeleport_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.ReceiveBeginPlay
	 */
	struct AAscensionTeleporter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.SetBossDifficulty
	 */
	struct AAscensionTeleporter_C_SetBossDifficulty_Params
	{	};

	/**
	 * Function AscensionTeleporter.AscensionTeleporter_C.ExecuteUbergraph_AscensionTeleporter
	 */
	struct AAscensionTeleporter_C_ExecuteUbergraph_AscensionTeleporter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
