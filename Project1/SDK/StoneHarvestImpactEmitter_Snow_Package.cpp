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
	 * 		Name   -> PredefinedFunction AStoneHarvestImpactEmitter_Snow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStoneHarvestImpactEmitter_Snow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C");
		return ptr;
	}

}


