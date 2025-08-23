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
	 * 		Name   -> Function Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C.OnSaddleUnequipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_Base_BP_C::OnSaddleUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C.OnSaddleUnequipped");
		
		AHyaenodon_Character_Base_BP_C_OnSaddleUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C.OnSaddleEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_Base_BP_C::OnSaddleEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C.OnSaddleEquipped");
		
		AHyaenodon_Character_Base_BP_C_OnSaddleEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHyaenodon_Character_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHyaenodon_Character_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C");
		return ptr;
	}

}


