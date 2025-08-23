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
	 * 		Name   -> Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.BPOnHitActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UDinoAttackStateMelee_StegoImpaling_C::BPOnHitActor(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.BPOnHitActor");
		
		UDinoAttackStateMelee_StegoImpaling_C_BPOnHitActor_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_StegoImpaling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_StegoImpaling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C");
		return ptr;
	}

}


