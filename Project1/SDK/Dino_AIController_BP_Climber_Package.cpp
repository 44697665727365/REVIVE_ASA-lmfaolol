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
	 * 		Name   -> Function Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C.BPOnFleeEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_AIController_BP_Climber_C::BPOnFleeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C.BPOnFleeEvent");
		
		ADino_AIController_BP_Climber_C_BPOnFleeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C.BPNotifyTargetSet
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_AIController_BP_Climber_C::BPNotifyTargetSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C.BPNotifyTargetSet");
		
		ADino_AIController_BP_Climber_C_BPNotifyTargetSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_AIController_BP_Climber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_AIController_BP_Climber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_AIController_BP_Climber.Dino_AIController_BP_Climber_C");
		return ptr;
	}

}


