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
	 * 		Name   -> PredefinedFunction UWorldModifiersContainer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldModifiersContainer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldModifiersContainer_BP.WorldModifiersContainer_BP_C");
		return ptr;
	}

}


