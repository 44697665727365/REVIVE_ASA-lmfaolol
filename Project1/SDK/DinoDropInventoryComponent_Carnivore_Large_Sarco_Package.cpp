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
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Large_Sarco_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Large_Sarco_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Large_Sarco.DinoDropInventoryComponent_Carnivore_Large_Sarco_C");
		return ptr;
	}

}


