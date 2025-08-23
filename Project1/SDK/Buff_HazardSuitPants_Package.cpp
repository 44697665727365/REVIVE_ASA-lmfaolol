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
	 * 		Name   -> PredefinedFunction ABuff_HazardSuitPants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_HazardSuitPants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HazardSuitPants.Buff_HazardSuitPants_C");
		return ptr;
	}

}


