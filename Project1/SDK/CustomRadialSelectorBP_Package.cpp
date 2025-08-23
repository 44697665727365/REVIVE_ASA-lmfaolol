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
	 * 		Name   -> PredefinedFunction UCustomRadialSelectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomRadialSelectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomRadialSelectorBP.CustomRadialSelectorBP_C");
		return ptr;
	}

}


