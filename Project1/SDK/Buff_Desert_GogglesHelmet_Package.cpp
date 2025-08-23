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
	 * 		Name   -> Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Desert_GogglesHelmet_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.AllowPostProcessEffect");
		
		ABuff_Desert_GogglesHelmet_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Desert_GogglesHelmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Desert_GogglesHelmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C");
		return ptr;
	}

}


