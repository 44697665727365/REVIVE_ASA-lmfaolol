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
	 * 		Name   -> PredefinedFunction USeedHarvestComponentMountain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeedHarvestComponentMountain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SeedHarvestComponentMountain.SeedHarvestComponentMountain_C");
		return ptr;
	}

}


