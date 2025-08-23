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
	 * 		Name   -> PredefinedFunction UWoodHarvestComponent_LessWood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponent_LessWood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C");
		return ptr;
	}

}


