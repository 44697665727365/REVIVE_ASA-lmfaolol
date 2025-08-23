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
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Huge_MeatOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Huge_MeatOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge_MeatOnly.DinoDeathHarvestingComponent_Huge_MeatOnly_C");
		return ptr;
	}

}


