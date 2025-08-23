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
	 * 		Name   -> PredefinedFunction ABuff_HazardSuitGloves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_HazardSuitGloves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuitGloves.Buff_HazardSuitGloves_C");
		return ptr;
	}

}


