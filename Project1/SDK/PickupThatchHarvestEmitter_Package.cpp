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
	 * 		Name   -> PredefinedFunction APickupThatchHarvestEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APickupThatchHarvestEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PickupThatchHarvestEmitter.PickupThatchHarvestEmitter_C");
		return ptr;
	}

}


