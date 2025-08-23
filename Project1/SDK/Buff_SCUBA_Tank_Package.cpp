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
	 * 		Name   -> PredefinedFunction ABuff_SCUBA_Tank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SCUBA_Tank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SCUBA_Tank.Buff_SCUBA_Tank_C");
		return ptr;
	}

}


