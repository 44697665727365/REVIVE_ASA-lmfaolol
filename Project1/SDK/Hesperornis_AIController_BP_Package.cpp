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
	 * 		Name   -> Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ForTargetingDesireValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AHesperornis_AIController_BP_C::BPGetTargetingDesire(class AActor* ForTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire");
		
		AHesperornis_AIController_BP_C_BPGetTargetingDesire_Params params {};
		params.ForTarget = ForTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHesperornis_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHesperornis_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hesperornis_AIController_BP.Hesperornis_AIController_BP_C");
		return ptr;
	}

}


