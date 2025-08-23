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
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_Piranha_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_Piranha_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Piranha.DinoCharacterStatusComponent_BP_Piranha_C");
		return ptr;
	}

}


