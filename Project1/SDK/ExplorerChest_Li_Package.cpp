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
	 * 		Name   -> PredefinedFunction AExplorerChest_Li_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplorerChest_Li_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_Li.ExplorerChest_Li_C");
		return ptr;
	}

}


