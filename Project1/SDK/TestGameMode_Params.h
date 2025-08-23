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
	 * Function TestGameMode.TestGameMode_C.StartEventManagedActors
	 */
	struct ATestGameMode_C_StartEventManagedActors_Params
	{	};

	/**
	 * Function TestGameMode.TestGameMode_C.BPPreSpawnedDino
	 */
	struct ATestGameMode_C_BPPreSpawnedDino_Params
	{
	public:
		class APrimalDinoCharacter*                                TheDino;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2
	 */
	struct ATestGameMode_C_OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event
	 */
	struct ATestGameMode_C_OnShooterCharacterSpawned_Event_Params
	{
	public:
		class AShooterCharacter*                                   TheShooterCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.ReceiveTick
	 */
	struct ATestGameMode_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
	 */
	struct ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MDOO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
