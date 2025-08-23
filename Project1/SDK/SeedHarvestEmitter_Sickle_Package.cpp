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
	 * 		Name   -> PredefinedFunction ASeedHarvestEmitter_Sickle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeedHarvestEmitter_Sickle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SeedHarvestEmitter_Sickle.SeedHarvestEmitter_Sickle_C");
		return ptr;
	}

}


