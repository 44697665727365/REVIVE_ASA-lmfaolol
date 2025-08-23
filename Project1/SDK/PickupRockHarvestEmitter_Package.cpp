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
	 * 		Name   -> PredefinedFunction APickupRockHarvestEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickupRockHarvestEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PickupRockHarvestEmitter.PickupRockHarvestEmitter_C");
		return ptr;
	}

}


