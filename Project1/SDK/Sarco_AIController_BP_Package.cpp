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
	 * 		Name   -> PredefinedFunction ASarco_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASarco_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sarco_AIController_BP.Sarco_AIController_BP_C");
		return ptr;
	}

}


