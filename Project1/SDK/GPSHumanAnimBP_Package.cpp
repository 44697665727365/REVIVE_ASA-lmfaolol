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
	 * 		Name   -> Function GPSHumanAnimBP.GPSHumanAnimBP_C.UpdateLayeringValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGPSHumanAnimBP_C::UpdateLayeringValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GPSHumanAnimBP.GPSHumanAnimBP_C.UpdateLayeringValues");
		
		UGPSHumanAnimBP_C_UpdateLayeringValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGPSHumanAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGPSHumanAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass GPSHumanAnimBP.GPSHumanAnimBP_C");
		return ptr;
	}

}


