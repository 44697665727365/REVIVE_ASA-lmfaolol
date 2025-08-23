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
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_Trike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_Trike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Trike.DinoTamedInventoryComponent_Trike_C");
		return ptr;
	}

}


