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
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::IsPlayerUsingJetpack(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack");
		
		ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetPlayerIgnoreSpeedModifiers(bool newIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers");
		
		ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params params {};
		params.newIgnore = newIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::PlayerHasFistsEquipped(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped");
		
		ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::IsPlayerGrappled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled");
		
		ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABuff_TekArmor_Pants_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput");
		
		ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerMoveSpeedModifier(double* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier");
		
		ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::OnRep_bCanRunOnWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater");
		
		ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetRunningOnWater(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater");
		
		ABuff_TekArmor_Pants_C_SetRunningOnWater_Params params {};
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::OnRep_CurrentTekRunState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState");
		
		ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABuff_TekArmor_Gloves_C*                     glovesRef                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::AreGlovesEquippedAndActive(bool* Result, class ABuff_TekArmor_Gloves_C** glovesRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive");
		
		ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (glovesRef != nullptr)
			*glovesRef = params.glovesRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerMaxTekRunVelocity(double* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity");
		
		ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_TekArmor_Pants_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity");
		
		ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::CanStartTekRun(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun");
		
		ABuff_TekArmor_Pants_C_CanStartTekRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             newModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::NetSetRunningSpeedModifier(double newModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier");
		
		ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params params {};
		params.newModifier = newModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DidRebound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::RunDamageActor(class AActor* HitActor, bool* DidRebound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor");
		
		ABuff_TekArmor_Pants_C_RunDamageActor_Params params {};
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidRebound != nullptr)
			*DidRebound = params.DidRebound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekRunningState                                  NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::NetSetTekRunningState(E_TekRunningState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState");
		
		ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetDustParticlesActive(bool newActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive");
		
		ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params params {};
		params.newActive = newActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekRunningState                                  NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::UpdateLocalVarsByState(E_TekRunningState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState");
		
		ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekRunningState                                  NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::LocalSetTekRunningState(E_TekRunningState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState");
		
		ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer");
		
		ABuff_TekArmor_Pants_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::InitGloves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves");
		
		ABuff_TekArmor_Pants_C_InitGloves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::ForceWalkForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward");
		
		ABuff_TekArmor_Pants_C_ForceWalkForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::UpdatePlayerControlRotation(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation");
		
		ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated");
		
		ABuff_TekArmor_Pants_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerTekRunVelocityRatio(double* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio");
		
		ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerMaxRunVelocity(double* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity");
		
		ABuff_TekArmor_Pants_C_GetPlayerMaxRunVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsePlayerForward                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OverrideDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               wasMaintained                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::MaintainFullSpeed(bool bUsePlayerForward, const struct FVector& OverrideDirection, bool* wasMaintained)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed");
		
		ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params params {};
		params.bUsePlayerForward = bUsePlayerForward;
		params.OverrideDirection = OverrideDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (wasMaintained != nullptr)
			*wasMaintained = params.wasMaintained;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerMaxTekRunVelocity_Pure(double* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure");
		
		ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::StoreCurrentVelocityLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength");
		
		ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::SetChargeStartVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables");
		
		ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             SpeedMult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetDefaultPlayerRunSpeedMult(double* SpeedMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult");
		
		ABuff_TekArmor_Pants_C_GetDefaultPlayerRunSpeedMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpeedMult != nullptr)
			*SpeedMult = params.SpeedMult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::TickUpdateTekRun(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run");
		
		ABuff_TekArmor_Pants_C_TickUpdateTekRun_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newForward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::RedirectPlayerVelocity(const struct FVector& newForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity");
		
		ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params params {};
		params.newForward = newForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient");
		
		ABuff_TekArmor_Pants_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               prevent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetPreventEquipWeapons(bool prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons");
		
		ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params params {};
		params.prevent = prevent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABuff_TekArmor_Pants_C::CalculateDeflectingImpulse(class AActor* TargetCharacter, double Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse");
		
		ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params params {};
		params.TargetCharacter = TargetCharacter;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetPlayerRunSpeed(double NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed");
		
		ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::ClearHitActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors");
		
		ABuff_TekArmor_Pants_C_ClearHitActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::TraceandDamageForwardPawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns");
		
		ABuff_TekArmor_Pants_C_TraceandDamageForwardPawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             forwardScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AdditionalOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newForward                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetModifiedForward(double forwardScale, const struct FVector& AdditionalOffset, struct FVector* newForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward");
		
		ABuff_TekArmor_Pants_C_GetModifiedForward_Params params {};
		params.forwardScale = forwardScale;
		params.AdditionalOffset = AdditionalOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newForward != nullptr)
			*newForward = params.newForward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::TraceAndDamageForwardStationaryActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors");
		
		ABuff_TekArmor_Pants_C_TraceAndDamageForwardStationaryActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::CalculateForwardRelativeToSpeed(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed");
		
		ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNotifyIfOutOfElement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility");
		
		ABuff_TekArmor_Pants_C_CanUseTekAbility_Params params {};
		params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::SetCastedArmorPieceRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef");
		
		ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::InpActEvt_AltFire_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_2");
		
		ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::InpActEvt_AltFire_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_1");
		
		ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekRunningState                                  newRunState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::Server_SetTekRunningState(E_TekRunningState newRunState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState");
		
		ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params params {};
		params.newRunState = newRunState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             newModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::Client_SyncRunModifier(double newModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier");
		
		ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params params {};
		params.newModifier = newModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::Pants_AltFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed");
		
		ABuff_TekArmor_Pants_C_Pants_AltFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Pants_C::Pants_AltFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased");
		
		ABuff_TekArmor_Pants_C_Pants_AltFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::ExecuteUbergraph_Buff_TekArmor_Pants(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants");
		
		ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_Pants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_Pants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C");
		return ptr;
	}

}


