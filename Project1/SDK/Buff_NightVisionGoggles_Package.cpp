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
	 * 		Name   -> PredefinedFunction ABuff_NightVisionGoggles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_NightVisionGoggles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NightVisionGoggles.Buff_NightVisionGoggles_C");
		return ptr;
	}

}


