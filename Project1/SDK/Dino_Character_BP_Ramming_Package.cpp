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
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      CallerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DebugText                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::ToString(const class FString& CallerName, class FString* DebugText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString");
		
		ADino_Character_BP_Ramming_C_ToString_Params params {};
		params.CallerName = CallerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebugText != nullptr)
			*DebugText = params.DebugText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider");
		
		ADino_Character_BP_Ramming_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MinValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             VelocityAlpha                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ScaledDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::GetStructureDamageScaled(double CurrentValue, double MinValue, double MaxValue, double VelocityAlpha, double* ScaledDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled");
		
		ADino_Character_BP_Ramming_C_GetStructureDamageScaled_Params params {};
		params.CurrentValue = CurrentValue;
		params.MinValue = MinValue;
		params.MaxValue = MaxValue;
		params.VelocityAlpha = VelocityAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScaledDamage != nullptr)
			*ScaledDamage = params.ScaledDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::GetRammingSpeedMax(double* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax");
		
		ADino_Character_BP_Ramming_C_GetRammingSpeedMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::CanTickStartedRam(bool* Tick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam");
		
		ADino_Character_BP_Ramming_C_CanTickStartedRam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tick != nullptr)
			*Tick = params.Tick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasRemainingValue                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::DrainStatusValue(EPrimalCharacterStatusValue Type, double Amount, bool* HasRemainingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue");
		
		ADino_Character_BP_Ramming_C_DrainStatusValue_Params params {};
		params.Type = Type;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasRemainingValue != nullptr)
			*HasRemainingValue = params.HasRemainingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::DoRamImpact(bool* HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact");
		
		ADino_Character_BP_Ramming_C_DoRamImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitSomething != nullptr)
			*HitSomething = params.HitSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllowedToRam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::CanStartRamAttack(bool* AllowedToRam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack");
		
		ADino_Character_BP_Ramming_C_CanStartRamAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedToRam != nullptr)
			*AllowedToRam = params.AllowedToRam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             HoldTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::CalculateRamDuration(double HoldTime, double* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration");
		
		ADino_Character_BP_Ramming_C_CalculateRamDuration_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick");
		
		ADino_Character_BP_Ramming_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::HandleRamEnded(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended");
		
		ADino_Character_BP_Ramming_C_HandleRamEnded_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             RamBuildupTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RamDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::HandleRamStarted(double RamBuildupTime, double RamDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started");
		
		ADino_Character_BP_Ramming_C_HandleRamStarted_Params params {};
		params.RamBuildupTime = RamBuildupTime;
		params.RamDuration = RamDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               InRamBuildup                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RamBuildupTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InRamming                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::GetRamState(bool* InRamBuildup, double* RamBuildupTime, bool* InRamming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState");
		
		ADino_Character_BP_Ramming_C_GetRamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRamBuildup != nullptr)
			*InRamBuildup = params.InRamBuildup;
		if (RamBuildupTime != nullptr)
			*RamBuildupTime = params.RamBuildupTime;
		if (InRamming != nullptr)
			*InRamming = params.InRamming;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::StopRamAttackBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup");
		
		ADino_Character_BP_Ramming_C_StopRamAttackBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::StartRamAttackBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup");
		
		ADino_Character_BP_Ramming_C_StartRamAttackBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript");
		
		ADino_Character_BP_Ramming_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::ServerStopRamBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup");
		
		ADino_Character_BP_Ramming_C_ServerStopRamBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::ServerStartRamBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup");
		
		ADino_Character_BP_Ramming_C_ServerStartRamBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::OnRamStarted(double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted");
		
		ADino_Character_BP_Ramming_C_OnRamStarted_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::OnRamEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded");
		
		ADino_Character_BP_Ramming_C_OnRamEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::ClientOnRamEnded(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded");
		
		ADino_Character_BP_Ramming_C_ClientOnRamEnded_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::OnRamEndedEarly(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly");
		
		ADino_Character_BP_Ramming_C_OnRamEndedEarly_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::Private__RamEnded(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded");
		
		ADino_Character_BP_Ramming_C_Private__RamEnded_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APhysicsVolume*                              NewVolume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature(class APhysicsVolume* NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature");
		
		ADino_Character_BP_Ramming_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature_Params params {};
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADino_Character_BP_Ramming_C::OnComponentBeginOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event");
		
		ADino_Character_BP_Ramming_C_OnComponentBeginOverlap_Event_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::ServerRequestRamEndEarly(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly");
		
		ADino_Character_BP_Ramming_C_ServerRequestRamEndEarly_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::ServerCancelRamBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup");
		
		ADino_Character_BP_Ramming_C_ServerCancelRamBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::CancelRamBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup");
		
		ADino_Character_BP_Ramming_C_CancelRamBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BuildUpDuration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::MultiStartRam(double BuildUpDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam");
		
		ADino_Character_BP_Ramming_C_MultiStartRam_Params params {};
		params.BuildUpDuration = BuildUpDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_Ramming_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPUnstasis");
		
		ADino_Character_BP_Ramming_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Ramming_C::ExecuteUbergraph_Dino_Character_BP_Ramming(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming");
		
		ADino_Character_BP_Ramming_C_ExecuteUbergraph_Dino_Character_BP_Ramming_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_Ramming_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_Ramming_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C");
		return ptr;
	}

}


