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
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Dilo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Dilo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Dilo.DinoTamedInventoryComponent_Dilo_C");
		return ptr;
	}

}


