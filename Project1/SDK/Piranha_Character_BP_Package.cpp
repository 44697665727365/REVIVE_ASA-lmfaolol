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
	 * 		Name   -> Function Piranha_Character_BP.Piranha_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APiranha_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP.Piranha_Character_BP_C.BPTimerServer");
		
		APiranha_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APiranha_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APiranha_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Piranha_Character_BP.Piranha_Character_BP_C");
		return ptr;
	}

}


