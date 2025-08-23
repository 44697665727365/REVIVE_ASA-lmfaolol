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
	 * 		Name   -> PredefinedFunction ADrill_HarvestImpactEmitter_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADrill_HarvestImpactEmitter_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C");
		return ptr;
	}

}


