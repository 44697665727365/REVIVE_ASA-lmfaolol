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
	 * 		Name   -> PredefinedFunction UWoodHardHarvestComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHardHarvestComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHardHarvestComponent.WoodHardHarvestComponent_C");
		return ptr;
	}

}


