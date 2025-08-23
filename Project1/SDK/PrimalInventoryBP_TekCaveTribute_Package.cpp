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
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_TekCaveTribute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_TekCaveTribute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekCaveTribute.PrimalInventoryBP_TekCaveTribute_C");
		return ptr;
	}

}


