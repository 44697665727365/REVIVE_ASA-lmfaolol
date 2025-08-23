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
	 * 		Name   -> PredefinedFunction AJungleAmbientSound_Blueprint_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJungleAmbientSound_Blueprint_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass JungleAmbientSound_Blueprint_Small.JungleAmbientSound_Blueprint_Small_C");
		return ptr;
	}

}


