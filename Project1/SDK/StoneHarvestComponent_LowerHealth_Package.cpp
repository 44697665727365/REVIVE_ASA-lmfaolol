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
	 * 		Name   -> PredefinedFunction UStoneHarvestComponent_LowerHealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoneHarvestComponent_LowerHealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestComponent_LowerHealth.StoneHarvestComponent_LowerHealth_C");
		return ptr;
	}

}


