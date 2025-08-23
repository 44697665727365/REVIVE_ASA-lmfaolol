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
	 * 		Name   -> PredefinedFunction UWoodHarvestComponentSnow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodHarvestComponentSnow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WoodHarvestComponentSnow.WoodHarvestComponentSnow_C");
		return ptr;
	}

}


