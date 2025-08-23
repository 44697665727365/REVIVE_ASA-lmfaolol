/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.print remove string only if already tracked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            detectedid                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TargetMap                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TargetMap1                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TargetMap2                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::printremovestringonlyifalreadytracked(int32_t detectedid, const class FString& InString, bool Condition, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TargetMap, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TargetMap1, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TargetMap2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.print remove string only if already tracked");
		
		UPlayerControllerTrameTrackerFunctions_C_printremovestringonlyifalreadytracked_Params params {};
		params.detectedid = detectedid;
		params.InString = InString;
		params.Condition = Condition;
		params.TargetMap = TargetMap;
		params.TargetMap1 = TargetMap1;
		params.TargetMap2 = TargetMap2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing waypoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingcreaturefavorites                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingalliesfavorites                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingteammatesfavorites                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         creaturesownedbythisteammateortheirtribe                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::handlemissingwaypoints(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState* PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingcreaturefavorites, TArray<int32_t> missingalliesfavorites, TArray<int32_t> missingteammatesfavorites, TArray<struct FTrackedActorPlusInfoStruct>* creaturesownedbythisteammateortheirtribe, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing waypoints");
		
		UPlayerControllerTrameTrackerFunctions_C_handlemissingwaypoints_Params params {};
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.PC_PlayerState = PC_PlayerState;
		params.missingcreaturefavorites = missingcreaturefavorites;
		params.missingalliesfavorites = missingalliesfavorites;
		params.missingteammatesfavorites = missingteammatesfavorites;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = params.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
		if (creaturesownedbythisteammateortheirtribe != nullptr)
			*creaturesownedbythisteammateortheirtribe = params.creaturesownedbythisteammateortheirtribe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle waypoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               istrackedwaypoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingcreaturewaypoints                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingallieswaypoints                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingteammateswaypoints                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::handlewaypoints(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, bool istrackedwaypoint, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingcreaturewaypoints, TArray<int32_t> missingallieswaypoints, TArray<int32_t> missingteammateswaypoints, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle waypoints");
		
		UPlayerControllerTrameTrackerFunctions_C_handlewaypoints_Params params {};
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.istrackedwaypoint = istrackedwaypoint;
		params.missingcreaturewaypoints = missingcreaturewaypoints;
		params.missingallieswaypoints = missingallieswaypoints;
		params.missingteammateswaypoints = missingteammateswaypoints;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = params.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing favorites
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingcreaturefavorites                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingalliesfavorites                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingteammatesfavorites                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         creaturesownedbythisteammateortheirtribe                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::handlemissingfavorites(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState* PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingcreaturefavorites, TArray<int32_t> missingalliesfavorites, TArray<int32_t> missingteammatesfavorites, TArray<struct FTrackedActorPlusInfoStruct>* creaturesownedbythisteammateortheirtribe, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing favorites");
		
		UPlayerControllerTrameTrackerFunctions_C_handlemissingfavorites_Params params {};
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.PC_PlayerState = PC_PlayerState;
		params.missingcreaturefavorites = missingcreaturefavorites;
		params.missingalliesfavorites = missingalliesfavorites;
		params.missingteammatesfavorites = missingteammatesfavorites;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = params.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
		if (creaturesownedbythisteammateortheirtribe != nullptr)
			*creaturesownedbythisteammateortheirtribe = params.creaturesownedbythisteammateortheirtribe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle favorites
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               istrackedwaypoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingcreaturefavorites                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingalliesfavorites                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingteammatesfavorites                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::handlefavorites(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, bool istrackedwaypoint, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingcreaturefavorites, TArray<int32_t> missingalliesfavorites, TArray<int32_t> missingteammatesfavorites, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle favorites");
		
		UPlayerControllerTrameTrackerFunctions_C_handlefavorites_Params params {};
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.istrackedwaypoint = istrackedwaypoint;
		params.missingcreaturefavorites = missingcreaturefavorites;
		params.missingalliesfavorites = missingalliesfavorites;
		params.missingteammatesfavorites = missingteammatesfavorites;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = params.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_3
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              OverwrittenCustomActorArray                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PreviouslyTrackedCreaturesThatRemainTracked                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PreviouslyTrackedPlayersThatRemainTracked                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         allcachedteamtames                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::IfRoomRemainsQueryMoreEntriesFromSourceList_3(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, int32_t* ScrollbarIndex, TArray<class AActor*> OverwrittenCustomActorArray, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedCreaturesThatRemainTracked, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedPlayersThatRemainTracked, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, int32_t* PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState* PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, TArray<struct FTrackedActorPlusInfoStruct>* allcachedteamtames, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_3");
		
		UPlayerControllerTrameTrackerFunctions_C_IfRoomRemainsQueryMoreEntriesFromSourceList_3_Params params {};
		params.OverwrittenCustomActorArray = OverwrittenCustomActorArray;
		params.AllTrackedPlayersThisTick = AllTrackedPlayersThisTick;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.PC_PlayerState = PC_PlayerState;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (ScrollbarIndex != nullptr)
			*ScrollbarIndex = params.ScrollbarIndex;
		if (PreviouslyTrackedCreaturesThatRemainTracked != nullptr)
			*PreviouslyTrackedCreaturesThatRemainTracked = params.PreviouslyTrackedCreaturesThatRemainTracked;
		if (PreviouslyTrackedPlayersThatRemainTracked != nullptr)
			*PreviouslyTrackedPlayersThatRemainTracked = params.PreviouslyTrackedPlayersThatRemainTracked;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (allcachedteamtames != nullptr)
			*allcachedteamtames = params.allcachedteamtames;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_2
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              OverwrittenCustomActorArray                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PreviouslyTrackedCreaturesThatRemainTracked                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PreviouslyTrackedPlayersThatRemainTracked                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::IfRoomRemainsQueryMoreEntriesFromSourceList_2(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, int32_t* ScrollbarIndex, TArray<class AActor*> OverwrittenCustomActorArray, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedCreaturesThatRemainTracked, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedPlayersThatRemainTracked, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, int32_t* PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState* PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_2");
		
		UPlayerControllerTrameTrackerFunctions_C_IfRoomRemainsQueryMoreEntriesFromSourceList_2_Params params {};
		params.OverwrittenCustomActorArray = OverwrittenCustomActorArray;
		params.AllTrackedPlayersThisTick = AllTrackedPlayersThisTick;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.PC_PlayerState = PC_PlayerState;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (ScrollbarIndex != nullptr)
			*ScrollbarIndex = params.ScrollbarIndex;
		if (PreviouslyTrackedCreaturesThatRemainTracked != nullptr)
			*PreviouslyTrackedCreaturesThatRemainTracked = params.PreviouslyTrackedCreaturesThatRemainTracked;
		if (PreviouslyTrackedPlayersThatRemainTracked != nullptr)
			*PreviouslyTrackedPlayersThatRemainTracked = params.PreviouslyTrackedPlayersThatRemainTracked;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.PC_InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Handle sorting tracked actors_first_stuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsInfoFresh                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              OverwrittenCustomActorArray                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                AlreadySetupFilterObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipDinoListUI                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PC_CustomActorTracking_HasJustChangedSelectionType         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PC_CustomActorTracking_HasJustChangedSearchText            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PC_CustomActorTracking_HasJustChangedDinoGroup             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FCustomTrackedActorInfo>             PC_TrackedActorIDs_TotalForFilter_Ordered                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam1                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick1                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates1                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayerCharsThisTick1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedFromPageTrackedActorsIDsCreatures1                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedFromPageTrackedActorsIDsPlayers1                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingcreaturefavorites                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingalliesfavorites                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingteammatesfavorites                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingcreaturewaypoints                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingallieswaypoints                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingteammateswaypoints                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::Handlesortingtrackedactors_first_stuff(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, bool* IsInfoFresh, TArray<class AActor*>* OverwrittenCustomActorArray, class UCharacterTrackFilter_Base_C** AlreadySetupFilterObject, int32_t* ScrollbarIndex, bool* SkipDinoListUI, bool* SkipMap, bool* PC_CustomActorTracking_HasJustChangedSelectionType, bool* PC_CustomActorTracking_HasJustChangedSearchText, bool* PC_CustomActorTracking_HasJustChangedDinoGroup, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TArray<struct FCustomTrackedActorInfo> PC_TrackedActorIDs_TotalForFilter_Ordered, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, class APlayerState* PC_PlayerState, int32_t* PC_TargetingTeam1, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TMap<int32_t, bool>* AllTrackedCreaturesThisTick1, TArray<int32_t>* RemovedTeammates1, TMap<int32_t, bool>* AllTrackedPlayerCharsThisTick1, TArray<int32_t>* RemovedFromPageTrackedActorsIDsCreatures1, TArray<int32_t>* RemovedFromPageTrackedActorsIDsPlayers1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<int32_t> missingcreaturefavorites, TArray<int32_t> missingalliesfavorites, TArray<int32_t> missingteammatesfavorites, TArray<int32_t> missingcreaturewaypoints, TArray<int32_t> missingallieswaypoints, TArray<int32_t> missingteammateswaypoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Handle sorting tracked actors_first_stuff");
		
		UPlayerControllerTrameTrackerFunctions_C_Handlesortingtrackedactors_first_stuff_Params params {};
		params.PC_TrackedActorIDs_TotalForFilter_Ordered = PC_TrackedActorIDs_TotalForFilter_Ordered;
		params.PC_PlayerState = PC_PlayerState;
		params.missingcreaturefavorites = missingcreaturefavorites;
		params.missingalliesfavorites = missingalliesfavorites;
		params.missingteammatesfavorites = missingteammatesfavorites;
		params.missingcreaturewaypoints = missingcreaturewaypoints;
		params.missingallieswaypoints = missingallieswaypoints;
		params.missingteammateswaypoints = missingteammateswaypoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (IsInfoFresh != nullptr)
			*IsInfoFresh = params.IsInfoFresh;
		if (OverwrittenCustomActorArray != nullptr)
			*OverwrittenCustomActorArray = params.OverwrittenCustomActorArray;
		if (AlreadySetupFilterObject != nullptr)
			*AlreadySetupFilterObject = params.AlreadySetupFilterObject;
		if (ScrollbarIndex != nullptr)
			*ScrollbarIndex = params.ScrollbarIndex;
		if (SkipDinoListUI != nullptr)
			*SkipDinoListUI = params.SkipDinoListUI;
		if (SkipMap != nullptr)
			*SkipMap = params.SkipMap;
		if (PC_CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*PC_CustomActorTracking_HasJustChangedSelectionType = params.PC_CustomActorTracking_HasJustChangedSelectionType;
		if (PC_CustomActorTracking_HasJustChangedSearchText != nullptr)
			*PC_CustomActorTracking_HasJustChangedSearchText = params.PC_CustomActorTracking_HasJustChangedSearchText;
		if (PC_CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*PC_CustomActorTracking_HasJustChangedDinoGroup = params.PC_CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (PC_TargetingTeam1 != nullptr)
			*PC_TargetingTeam1 = params.PC_TargetingTeam1;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
		if (AllTrackedCreaturesThisTick1 != nullptr)
			*AllTrackedCreaturesThisTick1 = params.AllTrackedCreaturesThisTick1;
		if (RemovedTeammates1 != nullptr)
			*RemovedTeammates1 = params.RemovedTeammates1;
		if (AllTrackedPlayerCharsThisTick1 != nullptr)
			*AllTrackedPlayerCharsThisTick1 = params.AllTrackedPlayerCharsThisTick1;
		if (RemovedFromPageTrackedActorsIDsCreatures1 != nullptr)
			*RemovedFromPageTrackedActorsIDsCreatures1 = params.RemovedFromPageTrackedActorsIDsCreatures1;
		if (RemovedFromPageTrackedActorsIDsPlayers1 != nullptr)
			*RemovedFromPageTrackedActorsIDsPlayers1 = params.RemovedFromPageTrackedActorsIDsPlayers1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Player
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsTrackedWaypoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isfavorited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValidForCurrentFilter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           HandledPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsATeammateOnMap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPOIvisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FCustomTrackedActorInfo UPlayerControllerTrameTrackerFunctions_C::CreateTrackedActorInfoStructPlayer(bool bIsTrackedWaypoint, bool isfavorited, bool bIsValidForCurrentFilter, class AShooterCharacter** HandledPlayer, bool IsATeammateOnMap, bool IsPOIvisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Player");
		
		UPlayerControllerTrameTrackerFunctions_C_CreateTrackedActorInfoStructPlayer_Params params {};
		params.bIsTrackedWaypoint = bIsTrackedWaypoint;
		params.isfavorited = isfavorited;
		params.bIsValidForCurrentFilter = bIsValidForCurrentFilter;
		params.IsATeammateOnMap = IsATeammateOnMap;
		params.IsPOIvisible = IsPOIvisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandledPlayer != nullptr)
			*HandledPlayer = params.HandledPlayer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Dino
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsTrackedWaypoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isfavorited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalDinoCharacter*                        HandledDino                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValidForCurrentFilter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPOIvisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ByPlayerTargetingTeam                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FCustomTrackedActorInfo UPlayerControllerTrameTrackerFunctions_C::CreateTrackedActorInfoStructDino(bool bIsTrackedWaypoint, bool isfavorited, class APrimalDinoCharacter** HandledDino, bool bIsValidForCurrentFilter, bool IsPOIvisible, int32_t ByPlayerTargetingTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Dino");
		
		UPlayerControllerTrameTrackerFunctions_C_CreateTrackedActorInfoStructDino_Params params {};
		params.bIsTrackedWaypoint = bIsTrackedWaypoint;
		params.isfavorited = isfavorited;
		params.bIsValidForCurrentFilter = bIsValidForCurrentFilter;
		params.IsPOIvisible = IsPOIvisible;
		params.ByPlayerTargetingTeam = ByPlayerTargetingTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandledDino != nullptr)
			*HandledDino = params.HandledDino;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Remove
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               localisshooterchar                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            detectedid                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 actorinfotouse                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    removetribemates                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    removealliedplayers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    removecreatures                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APrimalCharacter*                            playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TargetMap                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TargetMap1                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TargetMap2                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      InString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::Remove(bool* localisshooterchar, int32_t detectedid, struct FTrackedActorPlusInfoStruct* actorinfotouse, TArray<int32_t>* removetribemates, TArray<int32_t>* removealliedplayers, TArray<int32_t> removecreatures, class APrimalCharacter** playercontrollershootercharacter, bool* debugactortracking, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TargetMap, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TargetMap1, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TargetMap2, const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Remove");
		
		UPlayerControllerTrameTrackerFunctions_C_Remove_Params params {};
		params.detectedid = detectedid;
		params.removecreatures = removecreatures;
		params.TargetMap = TargetMap;
		params.TargetMap1 = TargetMap1;
		params.TargetMap2 = TargetMap2;
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (localisshooterchar != nullptr)
			*localisshooterchar = params.localisshooterchar;
		if (actorinfotouse != nullptr)
			*actorinfotouse = params.actorinfotouse;
		if (removetribemates != nullptr)
			*removetribemates = params.removetribemates;
		if (removealliedplayers != nullptr)
			*removealliedplayers = params.removealliedplayers;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Actor be Tracked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InvestigatedActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            dinogroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class UDinoTrackFilterOption*                      actorfilterobject                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isfavorited                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           RequestingplayerShooterCharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DebugEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlayerControllerTrameTrackerFunctions_C::ShouldActorbeTracked(class AActor** InvestigatedActor, int32_t* CustomTameSelectionType, int32_t* dinogroup, class FString* CustomTameSearchText, class UDinoTrackFilterOption** actorfilterobject, bool* isfavorited, class AShooterGameMode** GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, int32_t PC_CustomActorTracking_DisplayedResultsCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Actor be Tracked");
		
		UPlayerControllerTrameTrackerFunctions_C_ShouldActorbeTracked_Params params {};
		params.PlayerState = PlayerState;
		params.RequestingplayerShooterCharacter = RequestingplayerShooterCharacter;
		params.DebugEnabled = DebugEnabled;
		params.PC_CustomActorTracking_DisplayedResultsCount = PC_CustomActorTracking_DisplayedResultsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InvestigatedActor != nullptr)
			*InvestigatedActor = params.InvestigatedActor;
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (dinogroup != nullptr)
			*dinogroup = params.dinogroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (actorfilterobject != nullptr)
			*actorfilterobject = params.actorfilterobject;
		if (isfavorited != nullptr)
			*isfavorited = params.isfavorited;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.add to actors in page count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldbefavorited                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 actorinfotouse                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               localshouldshowbeingtracked                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               localisteammate                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::addtoactorsinpagecount(bool* shouldbefavorited, struct FTrackedActorPlusInfoStruct* actorinfotouse, TArray<class AActor*>* nonfavoritetrackedactors, bool* localshouldshowbeingtracked, bool* localisteammate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.add to actors in page count");
		
		UPlayerControllerTrameTrackerFunctions_C_addtoactorsinpagecount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldbefavorited != nullptr)
			*shouldbefavorited = params.shouldbefavorited;
		if (actorinfotouse != nullptr)
			*actorinfotouse = params.actorinfotouse;
		if (nonfavoritetrackedactors != nullptr)
			*nonfavoritetrackedactors = params.nonfavoritetrackedactors;
		if (localshouldshowbeingtracked != nullptr)
			*localshouldshowbeingtracked = params.localshouldshowbeingtracked;
		if (localisteammate != nullptr)
			*localisteammate = params.localisteammate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is actor valid for this filter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldbefavorited                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 actorinfotouse                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            dinogroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               showbeingtracked                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isteammate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           RequestingplayerShooterCharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DebugEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::isactorvalidforthisfilter(bool* shouldbefavorited, struct FTrackedActorPlusInfoStruct* actorinfotouse, int32_t* CustomTameSelectionType, int32_t* dinogroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, class UCharacterTrackFilter_Base_C** localtrackactorfilter, bool showbeingtracked, bool isteammate, class APlayerState** PC_PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, int32_t PC_CustomActorTracking_DisplayedResultsCount, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is actor valid for this filter");
		
		UPlayerControllerTrameTrackerFunctions_C_isactorvalidforthisfilter_Params params {};
		params.showbeingtracked = showbeingtracked;
		params.isteammate = isteammate;
		params.RequestingplayerShooterCharacter = RequestingplayerShooterCharacter;
		params.DebugEnabled = DebugEnabled;
		params.PC_CustomActorTracking_DisplayedResultsCount = PC_CustomActorTracking_DisplayedResultsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldbefavorited != nullptr)
			*shouldbefavorited = params.shouldbefavorited;
		if (actorinfotouse != nullptr)
			*actorinfotouse = params.actorinfotouse;
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (dinogroup != nullptr)
			*dinogroup = params.dinogroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.ShouldTrackedActorReplicateToClientAgain
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TrackedInfoMap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            TrackedInfoActorKey                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               shouldbefavorited                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 actorinfotouse                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               notusingmapbutinsteaddirectstruct                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               istrackedwaypoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isteammate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               shouldPOIbevisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldReplicate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::ShouldTrackedActorReplicateToClientAgain(TMap<int32_t, struct FTrackedActorPlusInfoStruct> TrackedInfoMap, int32_t TrackedInfoActorKey, bool* shouldbefavorited, struct FTrackedActorPlusInfoStruct* actorinfotouse, bool* notusingmapbutinsteaddirectstruct, bool istrackedwaypoint, bool isteammate, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, bool shouldPOIbevisible, bool* ShouldReplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.ShouldTrackedActorReplicateToClientAgain");
		
		UPlayerControllerTrameTrackerFunctions_C_ShouldTrackedActorReplicateToClientAgain_Params params {};
		params.TrackedInfoMap = TrackedInfoMap;
		params.TrackedInfoActorKey = TrackedInfoActorKey;
		params.istrackedwaypoint = istrackedwaypoint;
		params.isteammate = isteammate;
		params.shouldPOIbevisible = shouldPOIbevisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldbefavorited != nullptr)
			*shouldbefavorited = params.shouldbefavorited;
		if (actorinfotouse != nullptr)
			*actorinfotouse = params.actorinfotouse;
		if (notusingmapbutinsteaddirectstruct != nullptr)
			*notusingmapbutinsteaddirectstruct = params.notusingmapbutinsteaddirectstruct;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
		if (ShouldReplicate != nullptr)
			*ShouldReplicate = params.ShouldReplicate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Do the logic to handle tracking single actor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TrackedInfoMap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            TrackedInfoActorKey                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 actorinfotouse                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            dinogroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               notusingmapbutinsteaddirectstruct                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsMapPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    removeactorscreatures                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    removealliedplayers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    removetribemates                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WillBeAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WillBeUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 Info                                                       (Parm, OutParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::Dothelogictohandletrackingsingleactor(TMap<int32_t, struct FTrackedActorPlusInfoStruct> TrackedInfoMap, int32_t TrackedInfoActorKey, struct FTrackedActorPlusInfoStruct* actorinfotouse, int32_t* CustomTameSelectionType, int32_t* dinogroup, class FString* CustomTameSearchText, TArray<class AActor*>* nonfavoritetrackedactors, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players, class AShooterGameMode** GameMode, class UCharacterTrackFilter_Base_C** localtrackactorfilter, bool* notusingmapbutinsteaddirectstruct, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, bool IsMapPlayer, TArray<int32_t>* removeactorscreatures, TArray<int32_t>* removealliedplayers, TArray<int32_t>* removetribemates, int32_t ScrollbarIndex, int32_t* PC_TargetingTeam, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates, int32_t PC_CustomActorTracking_DisplayedResultsCount, bool* WillBeAdded, bool* WillBeUpdated, struct FTrackedActorPlusInfoStruct* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Do the logic to handle tracking single actor");
		
		UPlayerControllerTrameTrackerFunctions_C_Dothelogictohandletrackingsingleactor_Params params {};
		params.TrackedInfoMap = TrackedInfoMap;
		params.TrackedInfoActorKey = TrackedInfoActorKey;
		params.IsMapPlayer = IsMapPlayer;
		params.ScrollbarIndex = ScrollbarIndex;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		params.PC_CustomActorTracking_DisplayedResultsCount = PC_CustomActorTracking_DisplayedResultsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (actorinfotouse != nullptr)
			*actorinfotouse = params.actorinfotouse;
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (dinogroup != nullptr)
			*dinogroup = params.dinogroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (nonfavoritetrackedactors != nullptr)
			*nonfavoritetrackedactors = params.nonfavoritetrackedactors;
		if (UpdatedTrackedActorInfo_players != nullptr)
			*UpdatedTrackedActorInfo_players = params.UpdatedTrackedActorInfo_players;
		if (UpdatedTrackedActorInfo_creatures != nullptr)
			*UpdatedTrackedActorInfo_creatures = params.UpdatedTrackedActorInfo_creatures;
		if (ReplacedTrackedActorInfo_Creatures != nullptr)
			*ReplacedTrackedActorInfo_Creatures = params.ReplacedTrackedActorInfo_Creatures;
		if (ReplacedTrackedActorInfo_Players != nullptr)
			*ReplacedTrackedActorInfo_Players = params.ReplacedTrackedActorInfo_Players;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (notusingmapbutinsteaddirectstruct != nullptr)
			*notusingmapbutinsteaddirectstruct = params.notusingmapbutinsteaddirectstruct;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (removeactorscreatures != nullptr)
			*removeactorscreatures = params.removeactorscreatures;
		if (removealliedplayers != nullptr)
			*removealliedplayers = params.removealliedplayers;
		if (removetribemates != nullptr)
			*removetribemates = params.removetribemates;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
		if (WillBeAdded != nullptr)
			*WillBeAdded = params.WillBeAdded;
		if (WillBeUpdated != nullptr)
			*WillBeUpdated = params.WillBeUpdated;
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in map
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  trackedinfomaptouse                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               isteammates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  DeadPlayersSkipped                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDsnonteammates1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDsCreatures1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::updateallactorsinmap(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, bool IsPlayer, class AShooterGameMode** GameMode, TMap<int32_t, struct FTrackedActorPlusInfoStruct> trackedinfomaptouse, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, bool isteammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* DeadPlayersSkipped, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> RemovedTrackedActorsIDsnonteammates1, TArray<int32_t> RemovedTrackedActorsIDsCreatures1, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in map");
		
		UPlayerControllerTrameTrackerFunctions_C_updateallactorsinmap_Params params {};
		params.IsPlayer = IsPlayer;
		params.trackedinfomaptouse = trackedinfomaptouse;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.isteammates = isteammates;
		params.RemovedTrackedActorsIDsnonteammates1 = RemovedTrackedActorsIDsnonteammates1;
		params.RemovedTrackedActorsIDsCreatures1 = RemovedTrackedActorsIDsCreatures1;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (DeadPlayersSkipped != nullptr)
			*DeadPlayersSkipped = params.DeadPlayersSkipped;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Update All Actors In Actor Map Actor Array
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, class AActor*>                       trackedinfomaptouse                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              ActorArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               istrackedwaypoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::UpdateAllActorsInActorMapActorArray(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, TMap<int32_t, class AActor*> trackedinfomaptouse, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TArray<class AActor*>* ActorArray, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, bool istrackedwaypoint, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Update All Actors In Actor Map Actor Array");
		
		UPlayerControllerTrameTrackerFunctions_C_UpdateAllActorsInActorMapActorArray_Params params {};
		params.trackedinfomaptouse = trackedinfomaptouse;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.istrackedwaypoint = istrackedwaypoint;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (ActorArray != nullptr)
			*ActorArray = params.ActorArray;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Get ID from Actor Ref
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetingTeam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShooterChar                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           CastAsShooterChar                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPrimalDinoChar                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalDinoCharacter*                        CastAsPrimalDinoChar                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ETrackedActorCategory                              actorcategory                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UPlayerControllerTrameTrackerFunctions_C::GetIDfromActorRef(class AActor** Object, int32_t TargetingTeam, bool* WasValid, bool* IsShooterChar, class AShooterCharacter** CastAsShooterChar, bool* IsPrimalDinoChar, class APrimalDinoCharacter** CastAsPrimalDinoChar, ETrackedActorCategory* actorcategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Get ID from Actor Ref");
		
		UPlayerControllerTrameTrackerFunctions_C_GetIDfromActorRef_Params params {};
		params.TargetingTeam = TargetingTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Object != nullptr)
			*Object = params.Object;
		if (WasValid != nullptr)
			*WasValid = params.WasValid;
		if (IsShooterChar != nullptr)
			*IsShooterChar = params.IsShooterChar;
		if (CastAsShooterChar != nullptr)
			*CastAsShooterChar = params.CastAsShooterChar;
		if (IsPrimalDinoChar != nullptr)
			*IsPrimalDinoChar = params.IsPrimalDinoChar;
		if (CastAsPrimalDinoChar != nullptr)
			*CastAsPrimalDinoChar = params.CastAsPrimalDinoChar;
		if (actorcategory != nullptr)
			*actorcategory = params.actorcategory;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.debug print results of a tracked actor handled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasadded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               wasupdated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               wasremoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DebugEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::debugprintresultsofatrackedactorhandled(bool wasadded, bool wasupdated, bool wasremoved, const struct FTrackedActorPlusInfoStruct& Info, const class FString& Category, int32_t ScrollbarIndex, bool DebugEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.debug print results of a tracked actor handled");
		
		UPlayerControllerTrameTrackerFunctions_C_debugprintresultsofatrackedactorhandled_Params params {};
		params.wasadded = wasadded;
		params.wasupdated = wasupdated;
		params.wasremoved = wasremoved;
		params.Info = Info;
		params.Category = Category;
		params.ScrollbarIndex = ScrollbarIndex;
		params.DebugEnabled = DebugEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update single tracked actor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 actorinfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  TrackedInfoMap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            actorid                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               notusingmapbutinsteaddirectstruct                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsAMapPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               istrackedwaypoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  DeadPlayersSkipped                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDsnonteammates1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDsCreatures1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WillBeAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WillBeUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WillBeRemoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTrackedActorPlusInfoStruct                 Info                                                       (Parm, OutParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::updatesingletrackedactor(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, bool IsPlayer, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, const struct FTrackedActorPlusInfoStruct& actorinfo, TMap<int32_t, struct FTrackedActorPlusInfoStruct> TrackedInfoMap, int32_t actorid, bool notusingmapbutinsteaddirectstruct, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, bool IsAMapPlayer, TMap<int32_t, bool> AllTrackedCreaturesThisTick, bool istrackedwaypoint, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* DeadPlayersSkipped, int32_t ScrollbarIndex, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> RemovedTrackedActorsIDsnonteammates1, TArray<int32_t> RemovedTeammates, TArray<int32_t> RemovedTrackedActorsIDsCreatures1, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates, int32_t PC_CustomActorTracking_DisplayedResultsCount, bool* WillBeAdded, bool* WillBeUpdated, bool* WillBeRemoved, struct FTrackedActorPlusInfoStruct* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update single tracked actor");
		
		UPlayerControllerTrameTrackerFunctions_C_updatesingletrackedactor_Params params {};
		params.IsPlayer = IsPlayer;
		params.actorinfo = actorinfo;
		params.TrackedInfoMap = TrackedInfoMap;
		params.actorid = actorid;
		params.notusingmapbutinsteaddirectstruct = notusingmapbutinsteaddirectstruct;
		params.AllTrackedPlayersThisTick = AllTrackedPlayersThisTick;
		params.IsAMapPlayer = IsAMapPlayer;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.istrackedwaypoint = istrackedwaypoint;
		params.ScrollbarIndex = ScrollbarIndex;
		params.RemovedTrackedActorsIDsnonteammates1 = RemovedTrackedActorsIDsnonteammates1;
		params.RemovedTeammates = RemovedTeammates;
		params.RemovedTrackedActorsIDsCreatures1 = RemovedTrackedActorsIDsCreatures1;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		params.PC_CustomActorTracking_DisplayedResultsCount = PC_CustomActorTracking_DisplayedResultsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (DeadPlayersSkipped != nullptr)
			*DeadPlayersSkipped = params.DeadPlayersSkipped;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
		if (WillBeAdded != nullptr)
			*WillBeAdded = params.WillBeAdded;
		if (WillBeUpdated != nullptr)
			*WillBeUpdated = params.WillBeUpdated;
		if (WillBeRemoved != nullptr)
			*WillBeRemoved = params.WillBeRemoved;
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is creature being tracked atm
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::iscreaturebeingtrackedatm(int32_t InputPin, TMap<int32_t, struct FTrackedActorPlusInfoStruct> PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is creature being tracked atm");
		
		UPlayerControllerTrameTrackerFunctions_C_iscreaturebeingtrackedatm_Params params {};
		params.InputPin = InputPin;
		params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is player being tracked atm
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::isplayerbeingtrackedatm(int32_t InputPin, TMap<int32_t, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is player being tracked atm");
		
		UPlayerControllerTrameTrackerFunctions_C_isplayerbeingtrackedatm_Params params {};
		params.InputPin = InputPin;
		params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add All Teammates
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              OverwrittenCustomActorArray                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDsnonteammates1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDsCreatures1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::AddAllTeammates(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<class AActor*> OverwrittenCustomActorArray, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, int32_t* PC_TargetingTeam, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> RemovedTrackedActorsIDsnonteammates1, TArray<int32_t> RemovedTrackedActorsIDsCreatures1, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add All Teammates");
		
		UPlayerControllerTrameTrackerFunctions_C_AddAllTeammates_Params params {};
		params.ishandlingfavoritedactors1 = ishandlingfavoritedactors1;
		params.OverwrittenCustomActorArray = OverwrittenCustomActorArray;
		params.AllTrackedPlayersThisTick = AllTrackedPlayersThisTick;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.RemovedTrackedActorsIDsnonteammates1 = RemovedTrackedActorsIDsnonteammates1;
		params.RemovedTrackedActorsIDsCreatures1 = RemovedTrackedActorsIDsCreatures1;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1 != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1 = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in actor map
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, class AActor*>                       trackedinfomaptouse                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               istrackedwaypoint                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InitialMaxCountOfListedTrackedActorsForDIsplaySorting      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::updateallactorsinactormap(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, bool IsPlayer, class AShooterGameMode** GameMode, TMap<int32_t, class AActor*> trackedinfomaptouse, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool>* AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, bool istrackedwaypoint, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, int32_t* InitialMaxCountOfListedTrackedActorsForDIsplaySorting, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in actor map");
		
		UPlayerControllerTrameTrackerFunctions_C_updateallactorsinactormap_Params params {};
		params.IsPlayer = IsPlayer;
		params.trackedinfomaptouse = trackedinfomaptouse;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.istrackedwaypoint = istrackedwaypoint;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AllTrackedPlayersThisTick != nullptr)
			*AllTrackedPlayersThisTick = params.AllTrackedPlayersThisTick;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (InitialMaxCountOfListedTrackedActorsForDIsplaySorting != nullptr)
			*InitialMaxCountOfListedTrackedActorsForDIsplaySorting = params.InitialMaxCountOfListedTrackedActorsForDIsplaySorting;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add New Known Characters in Page Range
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ishandlingfavoritedactors1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              nonfavoritetrackedactors1                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTrackedActorsIDs_Creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                localtrackactorfilter                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedPlayersThisTick                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, bool>                                AllTrackedCreaturesThisTick                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedTeammates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FCustomTrackedActorInfo>             PC_TrackedActorIDs_TotalForFilter_Ordered                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, struct FTrackedActorPlusInfoStruct>  PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapPlayers                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<int32_t, int32_t>                             PC_TrackedActorIDsOrderMapCreatures                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PC_PlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_TargetingTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           playercontrollershootercharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               debugactortracking                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TorporChangeTolerance             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_HPChangeTolerance                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ShouldUpdateTrackedActor_LocationChangeTolerance           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::AddNewKnownCharactersinPageRange(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, int32_t* ScrollbarIndex, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, TArray<struct FCustomTrackedActorInfo> PC_TrackedActorIDs_TotalForFilter_Ordered, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, int32_t* PC_CustomActorTracking_DisplayedResultsCount, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapPlayers, TMap<int32_t, int32_t>* PC_TrackedActorIDsOrderMapCreatures, bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup, class APlayerState** PC_PlayerState, int32_t* PC_TargetingTeam, class AShooterCharacter** playercontrollershootercharacter, bool* debugactortracking, double* ShouldUpdateTrackedActor_TorporChangeTolerance, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double* ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add New Known Characters in Page Range");
		
		UPlayerControllerTrameTrackerFunctions_C_AddNewKnownCharactersinPageRange_Params params {};
		params.AllTrackedPlayersThisTick = AllTrackedPlayersThisTick;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
		params.PC_TrackedActorIDs_TotalForFilter_Ordered = PC_TrackedActorIDs_TotalForFilter_Ordered;
		params.missingfavcreatures = missingfavcreatures;
		params.missingfavallies = missingfavallies;
		params.missingfavteammates = missingfavteammates;
		params.missingwaypointcreatures = missingwaypointcreatures;
		params.missingwaypointallies = missingwaypointallies;
		params.missingwaypointteammates = missingwaypointteammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
		if (ishandlingfavoritedactors1 != nullptr)
			*ishandlingfavoritedactors1 = params.ishandlingfavoritedactors1;
		if (nonfavoritetrackedactors1 != nullptr)
			*nonfavoritetrackedactors1 = params.nonfavoritetrackedactors1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (RemovedTrackedActorsIDs_Players1 != nullptr)
			*RemovedTrackedActorsIDs_Players1 = params.RemovedTrackedActorsIDs_Players1;
		if (RemovedTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedTrackedActorsIDs_Creatures1 = params.RemovedTrackedActorsIDs_Creatures1;
		if (localtrackactorfilter != nullptr)
			*localtrackactorfilter = params.localtrackactorfilter;
		if (ScrollbarIndex != nullptr)
			*ScrollbarIndex = params.ScrollbarIndex;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates;
		if (PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates != nullptr)
			*PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates = params.PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates;
		if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
			*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = params.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;
		if (PC_CustomActorTracking_DisplayedResultsCount != nullptr)
			*PC_CustomActorTracking_DisplayedResultsCount = params.PC_CustomActorTracking_DisplayedResultsCount;
		if (PC_TrackedActorIDsOrderMapPlayers != nullptr)
			*PC_TrackedActorIDsOrderMapPlayers = params.PC_TrackedActorIDsOrderMapPlayers;
		if (PC_TrackedActorIDsOrderMapCreatures != nullptr)
			*PC_TrackedActorIDsOrderMapCreatures = params.PC_TrackedActorIDsOrderMapCreatures;
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		if (PC_PlayerState != nullptr)
			*PC_PlayerState = params.PC_PlayerState;
		if (PC_TargetingTeam != nullptr)
			*PC_TargetingTeam = params.PC_TargetingTeam;
		if (playercontrollershootercharacter != nullptr)
			*playercontrollershootercharacter = params.playercontrollershootercharacter;
		if (debugactortracking != nullptr)
			*debugactortracking = params.debugactortracking;
		if (ShouldUpdateTrackedActor_TorporChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TorporChangeTolerance = params.ShouldUpdateTrackedActor_TorporChangeTolerance;
		if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = params.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;
		if (ShouldUpdateTrackedActor_HPChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_HPChangeTolerance = params.ShouldUpdateTrackedActor_HPChangeTolerance;
		if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
			*ShouldUpdateTrackedActor_LocationChangeTolerance = params.ShouldUpdateTrackedActor_LocationChangeTolerance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Fully Refresh List
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CustomActorTracking_HasJustChangedSelectionType            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedSearchText               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CustomActorTracking_HasJustChangedDinoGroup                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlayerControllerTrameTrackerFunctions_C::ShouldFullyRefreshList(bool* CustomActorTracking_HasJustChangedSelectionType, bool* CustomActorTracking_HasJustChangedSearchText, bool* CustomActorTracking_HasJustChangedDinoGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Fully Refresh List");
		
		UPlayerControllerTrameTrackerFunctions_C_ShouldFullyRefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomActorTracking_HasJustChangedSelectionType != nullptr)
			*CustomActorTracking_HasJustChangedSelectionType = params.CustomActorTracking_HasJustChangedSelectionType;
		if (CustomActorTracking_HasJustChangedSearchText != nullptr)
			*CustomActorTracking_HasJustChangedSearchText = params.CustomActorTracking_HasJustChangedSearchText;
		if (CustomActorTracking_HasJustChangedDinoGroup != nullptr)
			*CustomActorTracking_HasJustChangedDinoGroup = params.CustomActorTracking_HasJustChangedDinoGroup;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.get or create filter object
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCharacterTrackFilter_Base_C*                AlreadySetupFilterObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TameSelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PC_CustomActorTracking_DisplayedResultsCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCharacterTrackFilter_Base_C*                AsCreatureTrackFilterBase                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerControllerTrameTrackerFunctions_C::getorcreatefilterobject(class UCharacterTrackFilter_Base_C** AlreadySetupFilterObject, int32_t* TameSelectionType, int32_t PC_CustomActorTracking_DisplayedResultsCount, class UCharacterTrackFilter_Base_C** AsCreatureTrackFilterBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.get or create filter object");
		
		UPlayerControllerTrameTrackerFunctions_C_getorcreatefilterobject_Params params {};
		params.PC_CustomActorTracking_DisplayedResultsCount = PC_CustomActorTracking_DisplayedResultsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlreadySetupFilterObject != nullptr)
			*AlreadySetupFilterObject = params.AlreadySetupFilterObject;
		if (TameSelectionType != nullptr)
			*TameSelectionType = params.TameSelectionType;
		if (AsCreatureTrackFilterBase != nullptr)
			*AsCreatureTrackFilterBase = params.AsCreatureTrackFilterBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerControllerTrameTrackerFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerControllerTrameTrackerFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C");
		return ptr;
	}

}


