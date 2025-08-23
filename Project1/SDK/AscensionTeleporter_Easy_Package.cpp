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
	 * 		Name   -> PredefinedFunction AAscensionTeleporter_Easy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAscensionTeleporter_Easy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AscensionTeleporter_Easy.AscensionTeleporter_Easy_C");
		return ptr;
	}

}


