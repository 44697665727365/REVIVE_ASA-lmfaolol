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
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Small_Pelt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Small_Pelt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Small_Pelt.DinoDeathHarvestingComponent_Small_Pelt_C");
		return ptr;
	}

}


