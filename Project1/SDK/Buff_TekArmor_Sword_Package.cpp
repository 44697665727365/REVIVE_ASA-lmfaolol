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
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsTekSword
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AShooterWeapon*                              Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTekSword                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::IsTekSword(class AShooterWeapon* Weapon, bool* IsTekSword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsTekSword");
		
		ABuff_TekArmor_Sword_C_IsTekSword_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTekSword != nullptr)
			*IsTekSword = params.IsTekSword;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AllowTekPunch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::AllowTekPunch(bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AllowTekPunch");
		
		ABuff_TekArmor_Sword_C_AllowTekPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventBlockingWithShield
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_Sword_C::PreventBlockingWithShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventBlockingWithShield");
		
		ABuff_TekArmor_Sword_C_PreventBlockingWithShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ShieldActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_TekArmor_Sword_C::ShieldActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ShieldActive");
		
		ABuff_TekArmor_Sword_C_ShieldActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.HasShield
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABuff_TekArmor_Sword_C::HasShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.HasShield");
		
		ABuff_TekArmor_Sword_C_HasShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelatedTekArmorRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemArmor_Base_Tek_C*                 tekArmorRef                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelatedTekArmorRef");
		
		ABuff_TekArmor_Sword_C_GetRelatedTekArmorRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tekArmorRef != nullptr)
			*tekArmorRef = params.tekArmorRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Can Decrease Element Ammo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmountToDecrease                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isForChargedState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanDecrease                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::CanDecreaseElementAmmo(int32_t AmountToDecrease, bool isForChargedState, bool* CanDecrease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Can Decrease Element Ammo");
		
		ABuff_TekArmor_Sword_C_CanDecreaseElementAmmo_Params params {};
		params.AmountToDecrease = AmountToDecrease;
		params.isForChargedState = isForChargedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanDecrease != nullptr)
			*CanDecrease = params.CanDecrease;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.TryDecreaseElementAmmo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmountToDecrease                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isForChargedState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::TryDecreaseElementAmmo(int32_t AmountToDecrease, bool isForChargedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.TryDecreaseElementAmmo");
		
		ABuff_TekArmor_Sword_C_TryDecreaseElementAmmo_Params params {};
		params.AmountToDecrease = AmountToDecrease;
		params.isForChargedState = isForChargedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABuff_TekArmor_Sword_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPCheckPreventInput");
		
		ABuff_TekArmor_Sword_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanPhysicallyTekPunch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::CanPhysicallyTekPunch(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanPhysicallyTekPunch");
		
		ABuff_TekArmor_Sword_C_CanPhysicallyTekPunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Should Damage Actor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::ShouldDamageActor(class AActor* Victim, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Should Damage Actor");
		
		ABuff_TekArmor_Sword_C_ShouldDamageActor_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Has Line Of SightToActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::HasLineOfSightToActor(class AActor* Actor, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Has Line Of SightToActor");
		
		ABuff_TekArmor_Sword_C_HasLineOfSightToActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ArePunchChargeAnimsPlaying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               cleanUpAnims                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::ArePunchChargeAnimsPlaying(bool cleanUpAnims, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ArePunchChargeAnimsPlaying");
		
		ABuff_TekArmor_Sword_C_ArePunchChargeAnimsPlaying_Params params {};
		params.cleanUpAnims = cleanUpAnims;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PlayPunchAnimsByState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::PlayPunchAnimsByState(E_TekGlovePunchState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PlayPunchAnimsByState");
		
		ABuff_TekArmor_Sword_C_PlayPunchAnimsByState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsPlayerAboveGround
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::IsPlayerAboveGround(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.IsPlayerAboveGround");
		
		ABuff_TekArmor_Sword_C_IsPlayerAboveGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AreTekPantsEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABuff_TekArmor_Pants_C*                      tekPantsRef                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::AreTekPantsEquipped(bool* Result, class ABuff_TekArmor_Pants_C** tekPantsRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AreTekPantsEquipped");
		
		ABuff_TekArmor_Sword_C_AreTekPantsEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (tekPantsRef != nullptr)
			*tekPantsRef = params.tekPantsRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetBuffPostprocessIntensity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABuff_TekArmor_Sword_C::GetBuffPostprocessIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetBuffPostprocessIntensity");
		
		ABuff_TekArmor_Sword_C_GetBuffPostprocessIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPDeactivated");
		
		ABuff_TekArmor_Sword_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Update Local Vars by State
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::UpdateLocalVarsbyState(E_TekGlovePunchState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Update Local Vars by State");
		
		ABuff_TekArmor_Sword_C_UpdateLocalVarsbyState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetPlayerCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::GetPlayerCameraLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetPlayerCameraLocation");
		
		ABuff_TekArmor_Sword_C_GetPlayerCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BPSetupForInstigator");
		
		ABuff_TekArmor_Sword_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::RocketPunchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchEnd");
		
		ABuff_TekArmor_Sword_C_RocketPunchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetOwningPlayerVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::ResetOwningPlayerVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetOwningPlayerVariables");
		
		ABuff_TekArmor_Sword_C_ResetOwningPlayerVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_Sword_C::PreventJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.PreventJump");
		
		ABuff_TekArmor_Sword_C_PreventJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.NetSetTekPunchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               newPunchState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::NetSetTekPunchState(E_TekGlovePunchState newPunchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.NetSetTekPunchState");
		
		ABuff_TekArmor_Sword_C_NetSetTekPunchState_Params params {};
		params.newPunchState = newPunchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickServer");
		
		ABuff_TekArmor_Sword_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Client_SetTekPunchState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Client_SetTekPunchState(E_TekGlovePunchState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Client_SetTekPunchState");
		
		ABuff_TekArmor_Sword_C_Client_SetTekPunchState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetTimeToRocketPunchTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double ABuff_TekArmor_Sword_C::GetTimeToRocketPunchTarget(const struct FVector& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetTimeToRocketPunchTarget");
		
		ABuff_TekArmor_Sword_C_GetTimeToRocketPunchTarget_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CheckForTargetsWhileRocketPunching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               punchNow                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::CheckForTargetsWhileRocketPunching(bool* punchNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CheckForTargetsWhileRocketPunching");
		
		ABuff_TekArmor_Sword_C_CheckForTargetsWhileRocketPunching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (punchNow != nullptr)
			*punchNow = params.punchNow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Set AudioParams and Play
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAudioComponent*                             Audio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::SetAudioParamsandPlay(class UAudioComponent** Audio, double Volume, double Pitch, bool PlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Set AudioParams and Play");
		
		ABuff_TekArmor_Sword_C_SetAudioParamsandPlay_Params params {};
		params.Volume = Volume;
		params.Pitch = Pitch;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio != nullptr)
			*Audio = params.Audio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnRep_CurrentPunchState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::OnRep_CurrentPunchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnRep_CurrentPunchState");
		
		ABuff_TekArmor_Sword_C_OnRep_CurrentPunchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelativeCenterOfMass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABuff_TekArmor_Sword_C::GetRelativeCenterOfMass(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.GetRelativeCenterOfMass");
		
		ABuff_TekArmor_Sword_C_GetRelativeCenterOfMass_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterHUD*                                 HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrawScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.DrawBuffFloatingHUD");
		
		ABuff_TekArmor_Sword_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ScanForRocketFistTargets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               anyHit                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::ScanForRocketFistTargets(double Range, bool* anyHit, struct FVector* HitLocation, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ScanForRocketFistTargets");
		
		ABuff_TekArmor_Sword_C_ScanForRocketFistTargets_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (anyHit != nullptr)
			*anyHit = params.anyHit;
		if (HitLocation != nullptr)
			*HitLocation = params.HitLocation;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AccurateSphereCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EndLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SphereRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreFriendlies                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HitPawnOrStructure                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::AccurateSphereCheck(const struct FVector& EndLocation, double SphereRadius, bool IgnoreFriendlies, bool* HitPawnOrStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.AccurateSphereCheck");
		
		ABuff_TekArmor_Sword_C_AccurateSphereCheck_Params params {};
		params.EndLocation = EndLocation;
		params.SphereRadius = SphereRadius;
		params.IgnoreFriendlies = IgnoreFriendlies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitPawnOrStructure != nullptr)
			*HitPawnOrStructure = params.HitPawnOrStructure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Spawn Sound at Fist Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  SoundToSpawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             PitchMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::SpawnSoundatFistLocation(class USoundBase* SoundToSpawn, double VolumeMultiplier, double PitchMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Spawn Sound at Fist Location");
		
		ABuff_TekArmor_Sword_C_SpawnSoundatFistLocation_Params params {};
		params.SoundToSpawn = SoundToSpawn;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.BuffTickClient");
		
		ABuff_TekArmor_Sword_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Get Punch Location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::GetPunchLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Get Punch Location");
		
		ABuff_TekArmor_Sword_C_GetPunchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::RocketPunchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.RocketPunchStart");
		
		ABuff_TekArmor_Sword_C_RocketPunchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Punch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Punch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Punch");
		
		ABuff_TekArmor_Sword_C_Punch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanUseTekAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNotifyIfOutOfElement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.CanUseTekAbility");
		
		ABuff_TekArmor_Sword_C_CanUseTekAbility_Params params {};
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
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.SetCastedArmorPieceRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::SetCastedArmorPieceRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.SetCastedArmorPieceRef");
		
		ABuff_TekArmor_Sword_C_SetCastedArmorPieceRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_AltFire_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_6");
		
		ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_AltFire_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_AltFire_K2Node_InputActionEvent_5");
		
		ABuff_TekArmor_Sword_C_InpActEvt_AltFire_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Fire_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_4");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Fire_K2Node_InputActionEvent_3");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Fire_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Targeting_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_2");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Targeting_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Targeting_K2Node_InputActionEvent_1");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Targeting_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1");
		
		ABuff_TekArmor_Sword_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Left_Trigger_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_Gamepad_Left_Trigger_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Left_Trigger_Hold");
		
		ABuff_TekArmor_Sword_C_Proxy_Gamepad_Left_Trigger_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Targeting_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_InputAction_Targeting_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Targeting_Hold");
		
		ABuff_TekArmor_Sword_C_Proxy_InputAction_Targeting_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Fire_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_InputAction_Fire_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Fire_Hold");
		
		ABuff_TekArmor_Sword_C_Proxy_InputAction_Fire_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Right_Trigger_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_Gamepad_Right_Trigger_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Right_Trigger_Hold");
		
		ABuff_TekArmor_Sword_C_Proxy_Gamepad_Right_Trigger_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_AltFire_Hold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_InputAction_AltFire_Hold(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_AltFire_Hold");
		
		ABuff_TekArmor_Sword_C_Proxy_InputAction_AltFire_Hold_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Fire_HoldTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_Fire_HoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Fire_HoldTimer");
		
		ABuff_TekArmor_Sword_C_Proxy_Fire_HoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Targeting_HoldTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_Targeting_HoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Targeting_HoldTimer");
		
		ABuff_TekArmor_Sword_C_Proxy_Targeting_HoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_AltFire_HoldTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_AltFire_HoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_AltFire_HoldTimer");
		
		ABuff_TekArmor_Sword_C_Proxy_AltFire_HoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_LeftTrigger_HoldTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_LeftTrigger_HoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_LeftTrigger_HoldTimer");
		
		ABuff_TekArmor_Sword_C_Proxy_LeftTrigger_HoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_RightTrigger_HoldTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_RightTrigger_HoldTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_RightTrigger_HoldTimer");
		
		ABuff_TekArmor_Sword_C_Proxy_RightTrigger_HoldTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::OnSuperPunch_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Pressed");
		
		ABuff_TekArmor_Sword_C_OnSuperPunch_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::OnSuperPunch_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.OnSuperPunch_Released");
		
		ABuff_TekArmor_Sword_C_OnSuperPunch_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Server_SetPunchChargeState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekGlovePunchState                               newPunchState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Server_SetPunchChargeState(E_TekGlovePunchState newPunchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Server_SetPunchChargeState");
		
		ABuff_TekArmor_Sword_C_Server_SetPunchChargeState_Params params {};
		params.newPunchState = newPunchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetCanLandAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::ResetCanLandAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetCanLandAfterDelay");
		
		ABuff_TekArmor_Sword_C_ResetCanLandAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UpdateClientHasValidRocketPunchTarget
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newHasTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            newTargetPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.UpdateClientHasValidRocketPunchTarget");
		
		ABuff_TekArmor_Sword_C_UpdateClientHasValidRocketPunchTarget_Params params {};
		params.newHasTarget = newHasTarget;
		params.newTargetPawn = newTargetPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetPunchStateAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::ResetPunchStateAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ResetPunchStateAfterDelay");
		
		ABuff_TekArmor_Sword_C_ResetPunchStateAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFirePressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Sword_AltFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFirePressed");
		
		ABuff_TekArmor_Sword_C_Sword_AltFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFireReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Sword_AltFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Sword_AltFireReleased");
		
		ABuff_TekArmor_Sword_C_Sword_AltFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Fire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_InputAction_Fire(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Fire");
		
		ABuff_TekArmor_Sword_C_Proxy_InputAction_Fire_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Right_Trigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_Gamepad_Right_Trigger(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Right_Trigger");
		
		ABuff_TekArmor_Sword_C_Proxy_Gamepad_Right_Trigger_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_AltFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_InputAction_AltFire(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_AltFire");
		
		ABuff_TekArmor_Sword_C_Proxy_InputAction_AltFire_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Targeting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_InputAction_Targeting(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_InputAction_Targeting");
		
		ABuff_TekArmor_Sword_C_Proxy_InputAction_Targeting_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Left_Trigger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPressed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::Proxy_Gamepad_Left_Trigger(bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Proxy_Gamepad_Left_Trigger");
		
		ABuff_TekArmor_Sword_C_Proxy_Gamepad_Left_Trigger_Params params {};
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Skill_SuperPunch_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Pressed");
		
		ABuff_TekArmor_Sword_C_Skill_SuperPunch_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Skill_SuperPunch_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Released");
		
		ABuff_TekArmor_Sword_C_Skill_SuperPunch_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Mod_Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Skill_SuperPunch_Mod_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Mod_Released");
		
		ABuff_TekArmor_Sword_C_Skill_SuperPunch_Mod_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Mod_Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_Sword_C::Skill_SuperPunch_Mod_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.Skill_SuperPunch_Mod_Pressed");
		
		ABuff_TekArmor_Sword_C_Skill_SuperPunch_Mod_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ExecuteUbergraph_Buff_TekArmor_Sword
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Sword_C::ExecuteUbergraph_Buff_TekArmor_Sword(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor_Sword.Buff_TekArmor_Sword_C.ExecuteUbergraph_Buff_TekArmor_Sword");
		
		ABuff_TekArmor_Sword_C_ExecuteUbergraph_Buff_TekArmor_Sword_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_Sword_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_Sword_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Sword.Buff_TekArmor_Sword_C");
		return ptr;
	}

}


