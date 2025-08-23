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
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Dodo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Dodo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Dodo.DinoTamedInventoryComponent_Dodo_C");
		return ptr;
	}

}


