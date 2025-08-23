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
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bCanUse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeap_Torch_Base_C::CanUseNiagaraFire(bool* bCanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire");
		
		AWeap_Torch_Base_C_CanUseNiagaraFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanUse != nullptr)
			*bCanUse = params.bCanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UNiagaraComponent*                           FPVNiagaraComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeap_Torch_Base_C::GetFPVNiagaraFire(class UNiagaraComponent** FPVNiagaraComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire");
		
		AWeap_Torch_Base_C_GetFPVNiagaraFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FPVNiagaraComponent != nullptr)
			*FPVNiagaraComponent = params.FPVNiagaraComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UNiagaraComponent*                           TPVNiagaraComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeap_Torch_Base_C::GetTPVNiagaraFire(class UNiagaraComponent** TPVNiagaraComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire");
		
		AWeap_Torch_Base_C_GetTPVNiagaraFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVNiagaraComponent != nullptr)
			*TPVNiagaraComponent = params.TPVNiagaraComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AWeap_Torch_Base_C::BPCanEquip(class AShooterCharacter* ByCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip");
		
		AWeap_Torch_Base_C_BPCanEquip_Params params {};
		params.ByCharacter = ByCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.StartSecondaryActionEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::StartSecondaryActionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.StartSecondaryActionEvent");
		
		AWeap_Torch_Base_C_StartSecondaryActionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.Server_AttemptPutOnBelt
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::Server_AttemptPutOnBelt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.Server_AttemptPutOnBelt");
		
		AWeap_Torch_Base_C_Server_AttemptPutOnBelt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.ReceiveBeginPlay");
		
		AWeap_Torch_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.StartUnequipEvent");
		
		AWeap_Torch_Base_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.FireTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::FireTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.FireTick");
		
		AWeap_Torch_Base_C_FireTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.BPAppliedPrimalItemToWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::BPAppliedPrimalItemToWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.BPAppliedPrimalItemToWeapon");
		
		AWeap_Torch_Base_C_BPAppliedPrimalItemToWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.OnInstigatorSleepingStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AWeap_Torch_Base_C::OnInstigatorSleepingStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.OnInstigatorSleepingStateChanged");
		
		AWeap_Torch_Base_C_OnInstigatorSleepingStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeap_Torch_Base_C::ExecuteUbergraph_Weap_Torch_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base");
		
		AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeap_Torch_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeap_Torch_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C");
		return ptr;
	}

}


