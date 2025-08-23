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
	 * 		Name   -> PredefinedFunction ACoel_Character_BP_Aberrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoel_Character_BP_Aberrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Coel_Character_BP_Aberrant.Coel_Character_BP_Aberrant_C");
		return ptr;
	}

}


