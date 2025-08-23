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
	 * 		Name   -> PredefinedFunction UCORE_PrimalGameData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCORE_PrimalGameData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C");
		return ptr;
	}

}


