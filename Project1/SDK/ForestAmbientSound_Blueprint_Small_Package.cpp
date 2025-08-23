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
	 * 		Name   -> PredefinedFunction AForestAmbientSound_Blueprint_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AForestAmbientSound_Blueprint_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestAmbientSound_Blueprint_Small.ForestAmbientSound_Blueprint_Small_C");
		return ptr;
	}

}


