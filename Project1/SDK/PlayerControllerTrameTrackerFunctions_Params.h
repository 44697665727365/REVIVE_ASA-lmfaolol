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
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.print remove string only if already tracked
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_printremovestringonlyifalreadytracked_Params
	{
	public:
		int32_t                                                    detectedid;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61UU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InString;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Condition;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JL5H[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TargetMap;                                               // 0x0020(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TargetMap1;                                              // 0x0070(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TargetMap2;                                              // 0x00C0(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing waypoints
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_handlemissingwaypoints_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0070(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0098(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0108(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0158(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0168(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies; // 0x01B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0208(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0258(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6DM9[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0260(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x02B0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0300(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0301(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0302(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XXW5[0x5];                                   // 0x0303(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0308(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0310(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2QM9[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0318(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0320(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0324(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MKTD[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0328(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0330(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0340(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingcreaturefavorites;                                // 0x0348(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingalliesfavorites;                                  // 0x0358(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingteammatesfavorites;                               // 0x0368(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 creaturesownedbythisteammateortheirtribe;                // 0x0378(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0388(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0398(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x03A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle waypoints
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_handlewaypoints_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHX2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00B0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00C0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0110(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0160(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       istrackedwaypoint;                                       // 0x0170(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KHV[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0178(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies; // 0x01C8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0218(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0268(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RSZP[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0270(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x02C0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0310(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0311(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0312(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9MFP[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0318(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0320(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5UGR[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0328(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0330(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0334(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H5IG[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0340(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0348(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0350(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingcreaturewaypoints;                                // 0x0358(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingallieswaypoints;                                  // 0x0368(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingteammateswaypoints;                               // 0x0378(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0388(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0398(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x03A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing favorites
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_handlemissingfavorites_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0070(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0098(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0108(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0158(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0168(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies; // 0x01B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0208(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0258(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YUK7[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0260(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x02B0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0300(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0301(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0302(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRKB[0x5];                                   // 0x0303(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0308(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0310(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5JSR[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0318(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0320(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0324(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_07HZ[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0328(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0330(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0340(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingcreaturefavorites;                                // 0x0348(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingalliesfavorites;                                  // 0x0358(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingteammatesfavorites;                               // 0x0368(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 creaturesownedbythisteammateortheirtribe;                // 0x0378(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0388(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0398(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x03A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle favorites
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_handlefavorites_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HKYZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00B0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00C0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0110(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0160(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       istrackedwaypoint;                                       // 0x0170(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VE3O[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0178(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies; // 0x01C8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0218(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0268(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KWU4[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0270(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x02C0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0310(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0311(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0312(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79QV[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0318(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0320(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VZG[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0328(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0330(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0334(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGVI[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0340(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0348(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0350(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingcreaturefavorites;                                // 0x0358(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingalliesfavorites;                                  // 0x0368(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingteammatesfavorites;                               // 0x0378(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0388(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0398(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x03A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_3
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_IfRoomRemainsQueryMoreEntriesFromSourceList_3_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EMG9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HO6M[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      OverwrittenCustomActorArray;                             // 0x00A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PreviouslyTrackedCreaturesThatRemainTracked;             // 0x00B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PreviouslyTrackedPlayersThatRemainTracked;               // 0x0108(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0158(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0168(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x0178(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x01C8(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0218(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting; // 0x0228(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x022C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0230(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0280(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x02D0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0320(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x0370(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x03C0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x03C1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x03C2(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y15T[0x5];                                   // 0x03C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x03C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x03D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WKOX[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x03D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x03E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SW5I[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTrackedActorPlusInfoStruct>                 allcachedteamtames;                                      // 0x03E8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x03F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0400(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0408(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0410(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0418(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0428(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0438(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0448(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0458(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0468(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_2
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_IfRoomRemainsQueryMoreEntriesFromSourceList_2_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GKA6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKWX[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      OverwrittenCustomActorArray;                             // 0x00A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PreviouslyTrackedCreaturesThatRemainTracked;             // 0x00B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PreviouslyTrackedPlayersThatRemainTracked;               // 0x0108(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0158(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0168(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x0178(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x01C8(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0218(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting; // 0x0228(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x022C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0230(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0280(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x02D0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0320(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x0370(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x03C0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x03C1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x03C2(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8BK2[0x5];                                   // 0x03C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x03C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x03D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JMHS[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x03D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x03E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C5YH[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x03E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x03F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x03F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0400(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0408(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0418(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0428(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0438(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0448(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0458(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Handle sorting tracked actors_first_stuff
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_Handlesortingtrackedactors_first_stuff_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsInfoFresh;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8ZUW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      OverwrittenCustomActorArray;                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        AlreadySetupFilterObject;                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipDinoListUI;                                          // 0x003C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipMap;                                                 // 0x003D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PC_CustomActorTracking_HasJustChangedSelectionType;      // 0x003E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PC_CustomActorTracking_HasJustChangedSearchText;         // 0x003F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PC_CustomActorTracking_HasJustChangedDinoGroup;          // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9K7Y[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0048(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0098(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x00E8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0138(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EA22[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCustomTrackedActorInfo>                     PC_TrackedActorIDs_TotalForFilter_Ordered;               // 0x0140(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0150(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x01A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APlayerState*                                        PC_PlayerState;                                          // 0x01F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam1;                                       // 0x01F8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1OBV[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0200(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0208(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x020C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T794[0x3];                                   // 0x020D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0210(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0218(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0220(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0228(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick1;                            // 0x0230(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates1;                                       // 0x0280(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayerCharsThisTick1;                          // 0x0290(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedFromPageTrackedActorsIDsCreatures1;               // 0x02E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedFromPageTrackedActorsIDsPlayers1;                 // 0x02F0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0300(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0310(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0320(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0330(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0340(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0350(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0360(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingcreaturefavorites;                                // 0x0370(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingalliesfavorites;                                  // 0x0380(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingteammatesfavorites;                               // 0x0390(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingcreaturewaypoints;                                // 0x03A0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingallieswaypoints;                                  // 0x03B0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingteammateswaypoints;                               // 0x03C0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Player
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_CreateTrackedActorInfoStructPlayer_Params
	{
	public:
		bool                                                       bIsTrackedWaypoint;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isfavorited;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsValidForCurrentFilter;                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KWQG[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   HandledPlayer;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsATeammateOnMap;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPOIvisible;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XNON[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCustomTrackedActorInfo                             ReturnValue;                                             // 0x0018(0x00E0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Dino
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_CreateTrackedActorInfoStructDino_Params
	{
	public:
		bool                                                       bIsTrackedWaypoint;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isfavorited;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3P4F[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                HandledDino;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsValidForCurrentFilter;                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPOIvisible;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYI1[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ByPlayerTargetingTeam;                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCustomTrackedActorInfo                             ReturnValue;                                             // 0x0018(0x00E0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Remove
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_Remove_Params
	{
	public:
		bool                                                       localisshooterchar;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MSTB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    detectedid;                                              // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTrackedActorPlusInfoStruct                         actorinfotouse;                                          // 0x0008(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            removetribemates;                                        // 0x0130(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            removealliedplayers;                                     // 0x0140(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            removecreatures;                                         // 0x0150(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APrimalCharacter*                                    playercontrollershootercharacter;                        // 0x0160(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0168(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FONF[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TargetMap;                                               // 0x0170(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TargetMap1;                                              // 0x01C0(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TargetMap2;                                              // 0x0210(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              InString;                                                // 0x0260(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Actor be Tracked
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_ShouldActorbeTracked_Params
	{
	public:
		class AActor*                                              InvestigatedActor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomTameSelectionType;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    dinogroup;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class UDinoTrackFilterOption*                              actorfilterobject;                                       // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       isfavorited;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NO5[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterGameMode*                                    GameMode;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class APlayerState*                                        PlayerState;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   RequestingplayerShooterCharacter;                        // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       DebugEnabled;                                            // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2MBC[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x004C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ITJ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.add to actors in page count
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_addtoactorsinpagecount_Params
	{
	public:
		bool                                                       shouldbefavorited;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UCII[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         actorinfotouse;                                          // 0x0008(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AActor*>                                      nonfavoritetrackedactors;                                // 0x0130(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       localshouldshowbeingtracked;                             // 0x0140(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       localisteammate;                                         // 0x0141(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is actor valid for this filter
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_isactorvalidforthisfilter_Params
	{
	public:
		bool                                                       shouldbefavorited;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0L29[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         actorinfotouse;                                          // 0x0008(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CustomTameSelectionType;                                 // 0x0130(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    dinogroup;                                               // 0x0134(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0138(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0148(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0150(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       showbeingtracked;                                        // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isteammate;                                              // 0x0159(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GH0H[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0160(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   RequestingplayerShooterCharacter;                        // 0x0168(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       DebugEnabled;                                            // 0x0170(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SQ0N[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0174(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0178(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.ShouldTrackedActorReplicateToClientAgain
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_ShouldTrackedActorReplicateToClientAgain_Params
	{
	public:
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TrackedInfoMap;                                          // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    TrackedInfoActorKey;                                     // 0x0050(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       shouldbefavorited;                                       // 0x0054(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ESKT[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         actorinfotouse;                                          // 0x0058(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       notusingmapbutinsteaddirectstruct;                       // 0x0180(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       istrackedwaypoint;                                       // 0x0181(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isteammate;                                              // 0x0182(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PCL4[0x5];                                   // 0x0183(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0188(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0190(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0198(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x01A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       shouldPOIbevisible;                                      // 0x01A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldReplicate;                                         // 0x01A9(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MHEO[0x2];                                   // 0x01AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Do the logic to handle tracking single actor
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_Dothelogictohandletrackingsingleactor_Params
	{
	public:
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TrackedInfoMap;                                          // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    TrackedInfoActorKey;                                     // 0x0050(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_40RC[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         actorinfotouse;                                          // 0x0058(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CustomTameSelectionType;                                 // 0x0180(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    dinogroup;                                               // 0x0184(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0188(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		TArray<class AActor*>                                      nonfavoritetrackedactors;                                // 0x0198(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players;                         // 0x01A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures;                       // 0x01B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures;                      // 0x01C8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players;                        // 0x01D8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AShooterGameMode*                                    GameMode;                                                // 0x01E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x01F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       notusingmapbutinsteaddirectstruct;                       // 0x01F8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJJV[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0200(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0210(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsMapPlayer;                                             // 0x0220(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4DLW[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            removeactorscreatures;                                   // 0x0228(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            removealliedplayers;                                     // 0x0238(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            removetribemates;                                        // 0x0248(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ScrollbarIndex;                                          // 0x0258(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x025C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0260(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x02B0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures; // 0x0300(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0350(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x03A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x03F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x03F1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x03F2(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOOT[0x5];                                   // 0x03F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x03F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0400(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0408(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JUSH[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0410(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0418(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0420(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0428(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0430(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0440(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0450(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0460(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0470(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0480(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0490(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WillBeAdded;                                             // 0x0494(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WillBeUpdated;                                           // 0x0495(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQVW[0x2];                                   // 0x0496(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         Info;                                                    // 0x0498(0x0128)  (Parm, OutParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in map
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_updateallactorsinmap_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsPlayer;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EDQO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterGameMode*                                    GameMode;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          trackedinfomaptouse;                                     // 0x0028(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_070X[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x00B0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x00C0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x00D8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00E8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00F8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0148(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0198(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       isteammates;                                             // 0x01A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DM9U[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          DeadPlayersSkipped;                                      // 0x01B0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0200(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0250(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures; // 0x02A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x02F0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x0340(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0390(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0391(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0392(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IFR6[0x5];                                   // 0x0393(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0398(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x03A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8JV[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x03A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x03B0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RCKU[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x03B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x03C0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x03C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x03D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            RemovedTrackedActorsIDsnonteammates1;                    // 0x03D8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDsCreatures1;                       // 0x03E8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x03F8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0408(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0418(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0428(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0438(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0448(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Update All Actors In Actor Map Actor Array
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_UpdateAllActorsInActorMapActorArray_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, class AActor*>                               trackedinfomaptouse;                                     // 0x0020(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GTRC[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0098(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x00C8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x00D8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x00E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x00F0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0100(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x0110(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AActor*>                                      ActorArray;                                              // 0x0160(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0170(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x01C0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       istrackedwaypoint;                                       // 0x01D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7HYO[0x7];                                   // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x01D8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0228(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0278(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x02C8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T3O1[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x02D0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x0320(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0370(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0371(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0372(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UKJI[0x5];                                   // 0x0373(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0378(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0380(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YN60[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0388(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0390(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0394(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FSJ5[0x3];                                   // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0398(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x03A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x03A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x03B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x03B8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x03C8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x03D8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x03E8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x03F8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0408(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Get ID from Actor Ref
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_GetIDfromActorRef_Params
	{
	public:
		class AActor*                                              Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetingTeam;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasValid;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NKEK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShooterChar;                                           // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BYTJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   CastAsShooterChar;                                       // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPrimalDinoChar;                                        // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJWP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                CastAsPrimalDinoChar;                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ETrackedActorCategory                                      actorcategory;                                           // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B4J0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.debug print results of a tracked actor handled
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_debugprintresultsofatrackedactorhandled_Params
	{
	public:
		bool                                                       wasadded;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       wasupdated;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       wasremoved;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YH4L[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         Info;                                                    // 0x0008(0x0128)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Category;                                                // 0x0130(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x0140(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DebugEnabled;                                            // 0x0144(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update single tracked actor
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_updatesingletrackedactor_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsPlayer;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UCWJ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterGameMode*                                    GameMode;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O0X1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0070(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		struct FTrackedActorPlusInfoStruct                         actorinfo;                                               // 0x0088(0x0128)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TrackedInfoMap;                                          // 0x01B0(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    actorid;                                                 // 0x0200(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       notusingmapbutinsteaddirectstruct;                       // 0x0204(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q3F8[0x3];                                   // 0x0205(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0208(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0218(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x0228(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsAMapPlayer;                                            // 0x0278(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5HZ[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0280(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       istrackedwaypoint;                                       // 0x02D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9LL1[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          DeadPlayersSkipped;                                      // 0x02D8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ScrollbarIndex;                                          // 0x0328(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C217[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0330(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0380(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures; // 0x03D0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0420(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x0470(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x04C0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x04C1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x04C2(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ILZ[0x5];                                   // 0x04C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x04C8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x04D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EXF9[0x4];                                   // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x04D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x04E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D78L[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x04E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x04F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x04F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0500(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            RemovedTrackedActorsIDsnonteammates1;                    // 0x0508(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0518(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDsCreatures1;                       // 0x0528(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0538(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0548(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0558(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0568(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0578(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0588(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0598(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WillBeAdded;                                             // 0x059C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WillBeUpdated;                                           // 0x059D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WillBeRemoved;                                           // 0x059E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBIW[0x1];                                   // 0x059F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTrackedActorPlusInfoStruct                         Info;                                                    // 0x05A0(0x0128)  (Parm, OutParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is creature being tracked atm
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_iscreaturebeingtrackedatm_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0103[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       NewParam;                                                // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_78LN[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is player being tracked atm
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_isplayerbeingtrackedatm_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_539Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0058(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       NewParam;                                                // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD8Q[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add All Teammates
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_AddAllTeammates_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NODM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      OverwrittenCustomActorArray;                             // 0x0080(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00B0(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0100(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0150(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0160(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RM1I[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x0168(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1; // 0x01B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0208(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures; // 0x0258(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x02A8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x02F8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0348(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0349(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x034A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08XB[0x5];                                   // 0x034B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0350(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0358(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0360(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CLYW[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0368(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0370(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0378(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0380(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            RemovedTrackedActorsIDsnonteammates1;                    // 0x0388(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDsCreatures1;                       // 0x0398(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x03A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x03B8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x03C8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x03D8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x03E8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x03F8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in actor map
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_updateallactorsinactormap_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsPlayer;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F9V7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterGameMode*                                    GameMode;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, class AActor*>                               trackedinfomaptouse;                                     // 0x0028(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UU1X[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x00B0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x00C0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x00D0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x00E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x00F8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x0118(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0168(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x01B8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       istrackedwaypoint;                                       // 0x01C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D46G[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x01D0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0220(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0270(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x02C0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2FZ2[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x02C8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x0318(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0368(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0369(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x036A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IFAY[0x5];                                   // 0x036B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0370(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0378(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_32F7[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0380(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x0388(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x038C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RN5K[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0390(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0398(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x03A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x03A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x03B0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x03C0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x03D0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x03E0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x03F0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0400(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add New Known Characters in Page Range
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_AddNewKnownCharactersinPageRange_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHD6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VGYM[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x00C8(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x0118(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0168(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FCustomTrackedActorInfo>                     PC_TrackedActorIDs_TotalForFilter_Ordered;               // 0x0178(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates; // 0x0188(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates; // 0x01D8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;    // 0x0228(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x0278(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BE2J[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapPlayers;                       // 0x0280(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, int32_t>                                     PC_TrackedActorIDsOrderMapCreatures;                     // 0x02D0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0320(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0321(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0322(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URWX[0x5];                                   // 0x0323(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerState*                                        PC_PlayerState;                                          // 0x0328(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_TargetingTeam;                                        // 0x0330(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KGT2[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   playercontrollershootercharacter;                        // 0x0338(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       debugactortracking;                                      // 0x0340(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1EEN[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x0348(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x0350(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x0358(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x0360(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0368(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0378(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0388(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0398(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x03A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x03B8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Fully Refresh List
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_ShouldFullyRefreshList_Params
	{
	public:
		bool                                                       CustomActorTracking_HasJustChangedSelectionType;         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedSearchText;            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CustomActorTracking_HasJustChangedDinoGroup;             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.get or create filter object
	 */
	struct UPlayerControllerTrameTrackerFunctions_C_getorcreatefilterobject_Params
	{
	public:
		class UCharacterTrackFilter_Base_C*                        AlreadySetupFilterObject;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TameSelectionType;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PC_CustomActorTracking_DisplayedResultsCount;            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCharacterTrackFilter_Base_C*                        AsCreatureTrackFilterBase;                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
