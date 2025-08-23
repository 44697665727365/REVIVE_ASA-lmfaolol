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
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByPlasma_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByPlasma_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByPlasma.StructureSettings_BrokenByPlasma_C");
		return ptr;
	}

}


