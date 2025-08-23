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
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Large_LessKeratin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Large_LessKeratin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Large_LessKeratin.DinoDeathHarvestingComponent_Large_LessKeratin_C");
		return ptr;
	}

}


