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
	 * 		Name   -> PredefinedFunction AOysterHarvestImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOysterHarvestImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OysterHarvestImpactEmitter.OysterHarvestImpactEmitter_C");
		return ptr;
	}

}


