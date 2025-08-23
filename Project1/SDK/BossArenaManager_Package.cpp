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
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.SpawnIndividualRewardsForPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DifficultyIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::SpawnIndividualRewardsForPlayer(class AShooterCharacter* Player, int32_t DifficultyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SpawnIndividualRewardsForPlayer");
		
		ABossArenaManager_C_SpawnIndividualRewardsForPlayer_Params params {};
		params.Player = Player;
		params.DifficultyIndex = DifficultyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.SpawnLootContainer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::SpawnLootContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SpawnLootContainer");
		
		ABossArenaManager_C_SpawnLootContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.Boss Died
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::BossDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.Boss Died");
		
		ABossArenaManager_C_BossDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.DoEarlyWhiteFlash
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::DoEarlyWhiteFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.DoEarlyWhiteFlash");
		
		ABossArenaManager_C_DoEarlyWhiteFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.ManageArenaEnableBuffsForCharacter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forChar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::ManageArenaEnableBuffsForCharacter(class APrimalCharacter* forChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ManageArenaEnableBuffsForCharacter");
		
		ABossArenaManager_C_ManageArenaEnableBuffsForCharacter_Params params {};
		params.forChar = forChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.SpawnedBoss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::SpawnedBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SpawnedBoss");
		
		ABossArenaManager_C_SpawnedBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.SFXBack to Home
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::SFXBacktoHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SFXBack to Home");
		
		ABossArenaManager_C_SFXBacktoHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.IssueReturnWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::IssueReturnWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.IssueReturnWarning");
		
		ABossArenaManager_C_IssueReturnWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABossArenaManager_C::BPClientHandleNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand");
		
		ABossArenaManager_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.KillMinions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::KillMinions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.KillMinions");
		
		ABossArenaManager_C_KillMinions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::CheckForActivePlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers");
		
		ABossArenaManager_C_CheckForActivePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIncludeUnconscious                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncludeUntamedCreatures                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIncludeDead                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIgnorePlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIgnoreDinos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIgnoreAttached                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              TheActors                                                  (Parm, OutParm)
	 */
	void ABossArenaManager_C::GetAllActorsInBossArena(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena");
		
		ABossArenaManager_C_GetAllActorsInBossArena_Params params {};
		params.bIncludeUnconscious = bIncludeUnconscious;
		params.bIncludeUntamedCreatures = bIncludeUntamedCreatures;
		params.bIncludeDead = bIncludeDead;
		params.bIgnorePlayers = bIgnorePlayers;
		params.bIgnoreDinos = bIgnoreDinos;
		params.bIgnoreAttached = bIgnoreAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TheActors != nullptr)
			*TheActors = params.TheActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.IssueTimeWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::IssueTimeWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.IssueTimeWarning");
		
		ABossArenaManager_C_IssueTimeWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.KillAllOccupants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::KillAllOccupants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.KillAllOccupants");
		
		ABossArenaManager_C_KillAllOccupants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.TeleportBackToHome
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::TeleportBackToHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.TeleportBackToHome");
		
		ABossArenaManager_C_TeleportBackToHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.DidTeleport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ReturnPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OverrideBossClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::DidTeleport(const struct FVector& ReturnPosition, class UClass* OverrideBossClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.DidTeleport");
		
		ABossArenaManager_C_DidTeleport_Params params {};
		params.ReturnPosition = ReturnPosition;
		params.OverrideBossClass = OverrideBossClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.IsValidForTeleport
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InvalidReason                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::IsValidForTeleport(class FString* InvalidReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.IsValidForTeleport");
		
		ABossArenaManager_C_IsValidForTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InvalidReason != nullptr)
			*InvalidReason = params.InvalidReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.StartBoss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::StartBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.StartBoss");
		
		ABossArenaManager_C_StartBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABossArenaManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay");
		
		ABossArenaManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ReceiveTick");
		
		ABossArenaManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.EventTeleportToHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::EventTeleportToHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.EventTeleportToHome");
		
		ABossArenaManager_C_EventTeleportToHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABossArenaManager_C::SFXTeleportToHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome");
		
		ABossArenaManager_C_SFXTeleportToHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.RunWhiteFlashNow
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Set                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::RunWhiteFlashNow(bool Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.RunWhiteFlashNow");
		
		ABossArenaManager_C_RunWhiteFlashNow_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABossArenaManager_C::ExecuteUbergraph_BossArenaManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager");
		
		ABossArenaManager_C_ExecuteUbergraph_BossArenaManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABossArenaManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABossArenaManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager.BossArenaManager_C");
		return ptr;
	}

}


