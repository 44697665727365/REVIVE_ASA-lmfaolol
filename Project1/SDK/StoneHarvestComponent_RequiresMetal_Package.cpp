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
	 * 		Name   -> PredefinedFunction UStoneHarvestComponent_RequiresMetal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoneHarvestComponent_RequiresMetal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StoneHarvestComponent_RequiresMetal.StoneHarvestComponent_RequiresMetal_C");
		return ptr;
	}

}


