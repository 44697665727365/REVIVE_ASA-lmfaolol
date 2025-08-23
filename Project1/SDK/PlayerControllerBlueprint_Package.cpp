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
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.HandleAddPhotoModeMarker
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      MarkerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::HandleAddPhotoModeMarker(TArray<struct FVector>* Points, class UClass* MarkerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.HandleAddPhotoModeMarker");
		
		APlayerControllerBlueprint_C_HandleAddPhotoModeMarker_Params params {};
		params.MarkerClass = MarkerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.IsPhotoModeAllowed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::IsPhotoModeAllowed(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.IsPhotoModeAllowed");
		
		APlayerControllerBlueprint_C_IsPhotoModeAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.TogglePhotoMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::TogglePhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.TogglePhotoMode");
		
		APlayerControllerBlueprint_C_TogglePhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.PlayerCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TheCommand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString APlayerControllerBlueprint_C::PlayerCommand(const class FString& TheCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.PlayerCommand");
		
		APlayerControllerBlueprint_C_PlayerCommand_Params params {};
		params.TheCommand = TheCommand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           HandledPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isfavorited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsATeammateOnMap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsTrackedWaypoint                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValidForCurrentFilter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FCustomTrackedActorInfo APlayerControllerBlueprint_C::BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(class AShooterCharacter* HandledPlayer, bool isfavorited, bool IsATeammateOnMap, bool bIsTrackedWaypoint, bool bIsValidForCurrentFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef");
		
		APlayerControllerBlueprint_C_BPSetFCustomTrackedPlayerInfoMembersByPlayerRef_Params params {};
		params.HandledPlayer = HandledPlayer;
		params.isfavorited = isfavorited;
		params.IsATeammateOnMap = IsATeammateOnMap;
		params.bIsTrackedWaypoint = bIsTrackedWaypoint;
		params.bIsValidForCurrentFilter = bIsValidForCurrentFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Restrict Create Foliage Hit Effect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::RestrictCreateFoliageHitEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Restrict Create Foliage Hit Effect");
		
		APlayerControllerBlueprint_C_RestrictCreateFoliageHitEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnRecievedUpdatedCachedTeamTameList
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsInfoFresh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::BPOnRecievedUpdatedCachedTeamTameList(int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, bool IsInfoFresh, int32_t DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned, bool* Handled, int32_t ScrollbarIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnRecievedUpdatedCachedTeamTameList");
		
		APlayerControllerBlueprint_C_BPOnRecievedUpdatedCachedTeamTameList_Params params {};
		params.CustomTameSelectionType = CustomTameSelectionType;
		params.DinoGroup = DinoGroup;
		params.CustomTameSearchText = CustomTameSearchText;
		params.IsInfoFresh = IsInfoFresh;
		params.DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned = DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned;
		params.ScrollbarIndex = ScrollbarIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is creature being tracked atm
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::iscreaturebeingtrackedatm(int32_t InputPin, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is creature being tracked atm");
		
		APlayerControllerBlueprint_C_iscreaturebeingtrackedatm_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is player being tracked atm
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::isplayerbeingtrackedatm(int32_t InputPin, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is player being tracked atm");
		
		APlayerControllerBlueprint_C_isplayerbeingtrackedatm_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.If Room Remains Query More Entries From Source List
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
	 * 		TArray<int32_t>                                    missingfavcreatures                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavallies                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingfavteammates                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointcreatures                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointallies                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    missingwaypointteammates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APlayerControllerBlueprint_C::IfRoomRemainsQueryMoreEntriesFromSourceList(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, int32_t* ScrollbarIndex, TArray<class AActor*> OverwrittenCustomActorArray, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedCreaturesThatRemainTracked, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedPlayersThatRemainTracked, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.If Room Remains Query More Entries From Source List");
		
		APlayerControllerBlueprint_C_IfRoomRemainsQueryMoreEntriesFromSourceList_Params params {};
		params.OverwrittenCustomActorArray = OverwrittenCustomActorArray;
		params.AllTrackedPlayersThisTick = AllTrackedPlayersThisTick;
		params.AllTrackedCreaturesThisTick = AllTrackedCreaturesThisTick;
		params.RemovedTeammates = RemovedTeammates;
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
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.get or create filter object
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCharacterTrackFilter_Base_C*                AlreadySetupFilterObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TameSelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCharacterTrackFilter_Base_C*                AsCreatureTrackFilterBase                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::getorcreatefilterobject(class UCharacterTrackFilter_Base_C** AlreadySetupFilterObject, int32_t* TameSelectionType, class UCharacterTrackFilter_Base_C** AsCreatureTrackFilterBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.get or create filter object");
		
		APlayerControllerBlueprint_C_getorcreatefilterobject_Params params {};
		
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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.update tracked characters on server and client
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInfoFresh                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Creatures1                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         ReplacedTrackedActorInfo_Players1                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_creatures1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         AddedTrackedActorInfo_players1                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_creatures1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTrackedActorPlusInfoStruct>         UpdatedTrackedActorInfo_players1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedFromPageTrackedActorsIDs_Creatures1                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedFromPageTrackedActorsIDs_Players1                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    RemovedFromPageTrackedActorsIDs_Players_Teammates          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APlayerControllerBlueprint_C::updatetrackedcharactersonserverandclient(bool* IsInfoFresh, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<int32_t>* RemovedFromPageTrackedActorsIDs_Creatures1, TArray<int32_t>* RemovedFromPageTrackedActorsIDs_Players1, TArray<int32_t> RemovedFromPageTrackedActorsIDs_Players_Teammates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.update tracked characters on server and client");
		
		APlayerControllerBlueprint_C_updatetrackedcharactersonserverandclient_Params params {};
		params.RemovedFromPageTrackedActorsIDs_Players_Teammates = RemovedFromPageTrackedActorsIDs_Players_Teammates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInfoFresh != nullptr)
			*IsInfoFresh = params.IsInfoFresh;
		if (ReplacedTrackedActorInfo_Creatures1 != nullptr)
			*ReplacedTrackedActorInfo_Creatures1 = params.ReplacedTrackedActorInfo_Creatures1;
		if (ReplacedTrackedActorInfo_Players1 != nullptr)
			*ReplacedTrackedActorInfo_Players1 = params.ReplacedTrackedActorInfo_Players1;
		if (AddedTrackedActorInfo_creatures1 != nullptr)
			*AddedTrackedActorInfo_creatures1 = params.AddedTrackedActorInfo_creatures1;
		if (AddedTrackedActorInfo_players1 != nullptr)
			*AddedTrackedActorInfo_players1 = params.AddedTrackedActorInfo_players1;
		if (UpdatedTrackedActorInfo_creatures1 != nullptr)
			*UpdatedTrackedActorInfo_creatures1 = params.UpdatedTrackedActorInfo_creatures1;
		if (UpdatedTrackedActorInfo_players1 != nullptr)
			*UpdatedTrackedActorInfo_players1 = params.UpdatedTrackedActorInfo_players1;
		if (RemovedFromPageTrackedActorsIDs_Creatures1 != nullptr)
			*RemovedFromPageTrackedActorsIDs_Creatures1 = params.RemovedFromPageTrackedActorsIDs_Creatures1;
		if (RemovedFromPageTrackedActorsIDs_Players1 != nullptr)
			*RemovedFromPageTrackedActorsIDs_Players1 = params.RemovedFromPageTrackedActorsIDs_Players1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList_logic
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipUIList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::BPServerRequestCustomTrackedActorList_logic(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, int32_t ScrollbarIndex, bool SkipUIList, bool SkipMap, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList_logic");
		
		APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_logic_Params params {};
		params.ScrollbarIndex = ScrollbarIndex;
		params.SkipUIList = SkipUIList;
		params.SkipMap = SkipMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Handle sorting tracked actors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsInfoFresh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              OverwrittenCustomActorArray                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterTrackFilter_Base_C*                AlreadySetupFilterObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScrollbarIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipDinoListUI                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SkipMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::Handlesortingtrackedactors(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, bool IsInfoFresh, TArray<class AActor*>* OverwrittenCustomActorArray, class UCharacterTrackFilter_Base_C** AlreadySetupFilterObject, int32_t* ScrollbarIndex, bool SkipDinoListUI, bool SkipMap, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Handle sorting tracked actors");
		
		APlayerControllerBlueprint_C_Handlesortingtrackedactors_Params params {};
		params.IsInfoFresh = IsInfoFresh;
		params.SkipDinoListUI = SkipDinoListUI;
		params.SkipMap = SkipMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CustomTameSelectionType != nullptr)
			*CustomTameSelectionType = params.CustomTameSelectionType;
		if (DinoGroup != nullptr)
			*DinoGroup = params.DinoGroup;
		if (CustomTameSearchText != nullptr)
			*CustomTameSearchText = params.CustomTameSearchText;
		if (OverwrittenCustomActorArray != nullptr)
			*OverwrittenCustomActorArray = params.OverwrittenCustomActorArray;
		if (AlreadySetupFilterObject != nullptr)
			*AlreadySetupFilterObject = params.AlreadySetupFilterObject;
		if (ScrollbarIndex != nullptr)
			*ScrollbarIndex = params.ScrollbarIndex;
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Should Fully Refresh List
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool APlayerControllerBlueprint_C::ShouldFullyRefreshList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Should Fully Refresh List");
		
		APlayerControllerBlueprint_C_ShouldFullyRefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewScrollbarIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::BPServerRequestCustomTrackedActorList(int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, bool* Handled, int32_t NewScrollbarIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList");
		
		APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_Params params {};
		params.CustomTameSelectionType = CustomTameSelectionType;
		params.DinoGroup = DinoGroup;
		params.CustomTameSearchText = CustomTameSearchText;
		params.NewScrollbarIndex = NewScrollbarIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             VerticalOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HorizontalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HalfHeight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpawningActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      IgnoreActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::CanFit(const struct FVector& Location, double VerticalOffset, double Angle, double HorizontalOffset, double Radius, double HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit");
		
		APlayerControllerBlueprint_C_CanFit_Params params {};
		params.Location = Location;
		params.VerticalOffset = VerticalOffset;
		params.Angle = Angle;
		params.HorizontalOffset = HorizontalOffset;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.SpawningActor = SpawningActor;
		params.IgnoreActor = IgnoreActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can != nullptr)
			*Can = params.Can;
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      IgnoreActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* Actor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy");
		
		APlayerControllerBlueprint_C_CanDeploy_Params params {};
		params.Class = Class;
		params.Location = Location;
		params.Actor = Actor;
		params.IgnoreActor = IgnoreActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can != nullptr)
			*Can = params.Can;
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      DinoClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FVector                                     CheckLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector APlayerControllerBlueprint_C::BPCheckCanDinoSpawnFromLocation(class UClass* DinoClass, const struct FVector& CheckLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation");
		
		APlayerControllerBlueprint_C_BPCheckCanDinoSpawnFromLocation_Params params {};
		params.DinoClass = DinoClass;
		params.CheckLocation = CheckLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_D7293B2D48183D83205E9295F5716E6E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::OnLoaded_D7293B2D48183D83205E9295F5716E6E(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_D7293B2D48183D83205E9295F5716E6E");
		
		APlayerControllerBlueprint_C_OnLoaded_D7293B2D48183D83205E9295F5716E6E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_BA98DE0848BC459B691689932D89326C
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::OnLoaded_BA98DE0848BC459B691689932D89326C(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_BA98DE0848BC459B691689932D89326C");
		
		APlayerControllerBlueprint_C_OnLoaded_BA98DE0848BC459B691689932D89326C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_CAE125AC424938179B7AD98DC7D71BB0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::OnLoaded_CAE125AC424938179B7AD98DC7D71BB0(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_CAE125AC424938179B7AD98DC7D71BB0");
		
		APlayerControllerBlueprint_C_OnLoaded_CAE125AC424938179B7AD98DC7D71BB0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsAndMapPlayers
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::BPServerRequestUpdateTrackedWaypointsAndMapPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsAndMapPlayers");
		
		APlayerControllerBlueprint_C_BPServerRequestUpdateTrackedWaypointsAndMapPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsOnly
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::BPServerRequestUpdateTrackedWaypointsOnly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsOnly");
		
		APlayerControllerBlueprint_C_BPServerRequestUpdateTrackedWaypointsOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnActorCustomEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventCustomName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EventCustomString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatorActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnActorCustomEvent_Event");
		
		APlayerControllerBlueprint_C_OnActorCustomEvent_Event_Params params {};
		params.EventCustomName = EventCustomName;
		params.EventCustomString = EventCustomString;
		params.InstigatorActor = InstigatorActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ReceiveBeginPlay");
		
		APlayerControllerBlueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ServerTryTrackWIthoutWeapon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::ServerTryTrackWIthoutWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ServerTryTrackWIthoutWeapon");
		
		APlayerControllerBlueprint_C_ServerTryTrackWIthoutWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SetupNewTrackBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::SetupNewTrackBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SetupNewTrackBP");
		
		APlayerControllerBlueprint_C_SetupNewTrackBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ROS_ToggleGroundConformDebug
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::ROS_ToggleGroundConformDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ROS_ToggleGroundConformDebug");
		
		APlayerControllerBlueprint_C_ROS_ToggleGroundConformDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPApplyFoliageHarvestEffectOnHitAndCollect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FoliageOrigin_ImpactPoint                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEndpoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     interactDir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::BPApplyFoliageHarvestEffectOnHitAndCollect(const struct FVector& FoliageOrigin_ImpactPoint, const struct FVector& TraceEndpoint, const struct FVector& interactDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPApplyFoliageHarvestEffectOnHitAndCollect");
		
		APlayerControllerBlueprint_C_BPApplyFoliageHarvestEffectOnHitAndCollect_Params params {};
		params.FoliageOrigin_ImpactPoint = FoliageOrigin_ImpactPoint;
		params.TraceEndpoint = TraceEndpoint;
		params.interactDir = interactDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnSpawnPlayerCameraManager
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::BPOnSpawnPlayerCameraManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnSpawnPlayerCameraManager");
		
		APlayerControllerBlueprint_C_BPOnSpawnPlayerCameraManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.DestroyPhotoModeMarker
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerControllerBlueprint_C::DestroyPhotoModeMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.DestroyPhotoModeMarker");
		
		APlayerControllerBlueprint_C_DestroyPhotoModeMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.AddPhotoModeMarker
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Points                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      MarkerClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::AddPhotoModeMarker(TArray<struct FVector> Points, class UClass* MarkerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.AddPhotoModeMarker");
		
		APlayerControllerBlueprint_C_AddPhotoModeMarker_Params params {};
		params.Points = Points;
		params.MarkerClass = MarkerClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SavePhotoModeMarker
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      MarkerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::SavePhotoModeMarker(const class FString& MarkerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SavePhotoModeMarker");
		
		APlayerControllerBlueprint_C_SavePhotoModeMarker_Params params {};
		params.MarkerName = MarkerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerControllerBlueprint_C::ExecuteUbergraph_PlayerControllerBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint");
		
		APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerControllerBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerControllerBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C");
		return ptr;
	}

}


