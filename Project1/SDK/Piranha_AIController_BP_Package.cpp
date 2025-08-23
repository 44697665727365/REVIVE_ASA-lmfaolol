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
	 * 		Name   -> Function Piranha_AIController_BP.Piranha_AIController_BP_C.MaybeFleeTamedSarco
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APiranha_AIController_BP_C::MaybeFleeTamedSarco()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_AIController_BP.Piranha_AIController_BP_C.MaybeFleeTamedSarco");
		
		APiranha_AIController_BP_C_MaybeFleeTamedSarco_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Piranha_AIController_BP.Piranha_AIController_BP_C.ChangedAITarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APiranha_AIController_BP_C::ChangedAITarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_AIController_BP.Piranha_AIController_BP_C.ChangedAITarget");
		
		APiranha_AIController_BP_C_ChangedAITarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APiranha_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APiranha_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_AIController_BP.Piranha_AIController_BP_C");
		return ptr;
	}

}


