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
	 * 		Name   -> PredefinedFunction AAscensionTeleporter_Hard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAscensionTeleporter_Hard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AscensionTeleporter_Hard.AscensionTeleporter_Hard_C");
		return ptr;
	}

}


