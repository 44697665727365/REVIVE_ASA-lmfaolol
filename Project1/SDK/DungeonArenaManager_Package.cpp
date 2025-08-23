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
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.GetNumEntitiesInCave
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumPlayers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumDinos                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADungeonArenaManager_C::GetNumEntitiesInCave(int32_t* NumPlayers, int32_t* NumDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.GetNumEntitiesInCave");
		
		ADungeonArenaManager_C_GetNumEntitiesInCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumPlayers != nullptr)
			*NumPlayers = params.NumPlayers;
		if (NumDinos != nullptr)
			*NumDinos = params.NumDinos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADungeonArenaManager_C::BPClientHandleNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.BPClientHandleNetExecCommand");
		
		ADungeonArenaManager_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.ActivateArena
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DifficultyIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADungeonArenaManager_C::ActivateArena(int32_t DifficultyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.ActivateArena");
		
		ADungeonArenaManager_C_ActivateArena_Params params {};
		params.DifficultyIndex = DifficultyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.IssueTimeWarning
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADungeonArenaManager_C::IssueTimeWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.IssueTimeWarning");
		
		ADungeonArenaManager_C_IssueTimeWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.KillAllOccupants
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADungeonArenaManager_C::KillAllOccupants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.KillAllOccupants");
		
		ADungeonArenaManager_C_KillAllOccupants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.Is Valid for Activation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InvalidReason                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ADungeonArenaManager_C::IsValidforActivation(class FString* InvalidReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.Is Valid for Activation");
		
		ADungeonArenaManager_C_IsValidforActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InvalidReason != nullptr)
			*InvalidReason = params.InvalidReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADungeonArenaManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.ReceiveTick");
		
		ADungeonArenaManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DungeonArenaManager.DungeonArenaManager_C.ExecuteUbergraph_DungeonArenaManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADungeonArenaManager_C::ExecuteUbergraph_DungeonArenaManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DungeonArenaManager.DungeonArenaManager_C.ExecuteUbergraph_DungeonArenaManager");
		
		ADungeonArenaManager_C_ExecuteUbergraph_DungeonArenaManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADungeonArenaManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADungeonArenaManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DungeonArenaManager.DungeonArenaManager_C");
		return ptr;
	}

}


