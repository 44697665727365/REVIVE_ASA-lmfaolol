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
	 * 		Name   -> Function TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C.destroy itself
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekHoverSail_Character_Base_BP_C::destroyitself()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C.destroy itself");
		
		ATekHoverSail_Character_Base_BP_C_destroyitself_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekHoverSail_Character_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekHoverSail_Character_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C");
		return ptr;
	}

}


