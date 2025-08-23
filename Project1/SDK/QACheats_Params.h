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
	 * Function QACheats.QACheats_C.DelayedServerRestart
	 */
	struct UQACheats_C_DelayedServerRestart_Params
	{
	public:
		int32_t                                                    WaitTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6YJB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QACheats.QACheats_C.GetCoordinatesFromCheatString
	 */
	struct UQACheats_C_GetCoordinatesFromCheatString_Params
	{
	public:
		struct FExplorerNoteLocationsPair                          ExplorerNoteLocationsPair;                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ExplorerNoteIndex;                                       // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IPWV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     XOut;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     YOut;                                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ZOut;                                                    // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QACheats.QACheats_C.GiveSharedItemSet
	 */
	struct UQACheats_C_GiveSharedItemSet_Params
	{
	public:
		class FName                                                ItemSetName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QACheats.QACheats_C.SpawnSpread
	 */
	struct UQACheats_C_SpawnSpread_Params
	{
	public:
		class FString                                              DinoName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsTamed;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NW0B[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberToSpawn;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QACheats.QACheats_C.HidePlayer
	 */
	struct UQACheats_C_HidePlayer_Params
	{
	public:
		bool                                                       _1;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OJ4A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QACheats.QACheats_C.MakePoop
	 */
	struct UQACheats_C_MakePoop_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.GiveDinoSaddle
	 */
	struct UQACheats_C_GiveDinoSaddle_Params
	{
	public:
		class FString                                              DinoName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function QACheats.QACheats_C.GiveAllMeat
	 */
	struct UQACheats_C_GiveAllMeat_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.GiveAllGreens
	 */
	struct UQACheats_C_GiveAllGreens_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.PrintPlayerCharacter
	 */
	struct UQACheats_C_PrintPlayerCharacter_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.PrintRidingDino
	 */
	struct UQACheats_C_PrintRidingDino_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.PrintTargetActor
	 */
	struct UQACheats_C_PrintTargetActor_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.PrintAllNearbyWildDinos
	 */
	struct UQACheats_C_PrintAllNearbyWildDinos_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.JumpToNextExplorerNote
	 */
	struct UQACheats_C_JumpToNextExplorerNote_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.JumpToExplorerNoteByIndex
	 */
	struct UQACheats_C_JumpToExplorerNoteByIndex_Params
	{
	public:
		int32_t                                                    ExplorerNoteIndex;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOnlyIfUnopened;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QACheats.QACheats_C.RestartServer
	 */
	struct UQACheats_C_RestartServer_Params
	{	};

	/**
	 * Function QACheats.QACheats_C.ExecuteUbergraph_QACheats
	 */
	struct UQACheats_C_ExecuteUbergraph_QACheats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NKA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
