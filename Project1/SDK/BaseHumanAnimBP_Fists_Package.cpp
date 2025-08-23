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
	 * 		Name   -> Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.UpdateLayeringValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_Fists_C::UpdateLayeringValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.UpdateLayeringValues");
		
		UBaseHumanAnimBP_Fists_C_UpdateLayeringValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseHumanAnimBP_Fists_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseHumanAnimBP_Fists_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C");
		return ptr;
	}

}


