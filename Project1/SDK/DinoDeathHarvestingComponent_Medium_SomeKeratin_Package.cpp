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
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Medium_SomeKeratin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Medium_SomeKeratin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Medium_SomeKeratin.DinoDeathHarvestingComponent_Medium_SomeKeratin_C");
		return ptr;
	}

}


