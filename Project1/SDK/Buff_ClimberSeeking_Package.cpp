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
	 * 		Name   -> PredefinedFunction ABuff_ClimberSeeking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ClimberSeeking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ClimberSeeking.Buff_ClimberSeeking_C");
		return ptr;
	}

}


