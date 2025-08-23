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
	 * 		Name   -> PredefinedFunction ABuff_SCUBA_Flippers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SCUBA_Flippers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C");
		return ptr;
	}

}


