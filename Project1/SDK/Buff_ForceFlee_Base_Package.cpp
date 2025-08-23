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
	 * 		Name   -> Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ReEnterFleeState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_Base_C::ReEnterFleeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ReEnterFleeState");
		
		ABuff_ForceFlee_Base_C_ReEnterFleeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_Base_C::RestoreFleeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State");
		
		ABuff_ForceFlee_Base_C_RestoreFleeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_ForceFlee_Base_C::SetFleeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State");
		
		ABuff_ForceFlee_Base_C_SetFleeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_ForceFlee_Base_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated");
		
		ABuff_ForceFlee_Base_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_ForceFlee_Base_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated");
		
		ABuff_ForceFlee_Base_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_ForceFlee_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ForceFlee_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ForceFlee_Base.Buff_ForceFlee_Base_C");
		return ptr;
	}

}


