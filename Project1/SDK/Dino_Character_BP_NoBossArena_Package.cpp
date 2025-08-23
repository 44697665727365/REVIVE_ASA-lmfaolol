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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_NoBossArena_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_NoBossArena_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_NoBossArena.Dino_Character_BP_NoBossArena_C");
		return ptr;
	}

}


