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
	 * 		Name   -> Function Buff_SCUBA_Goggles.Buff_SCUBA_Goggles_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_SCUBA_Goggles_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SCUBA_Goggles.Buff_SCUBA_Goggles_C.AllowPostProcessEffect");
		
		ABuff_SCUBA_Goggles_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SCUBA_Goggles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SCUBA_Goggles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SCUBA_Goggles.Buff_SCUBA_Goggles_C");
		return ptr;
	}

}


