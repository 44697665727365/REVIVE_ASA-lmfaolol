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
	 * 		Name   -> PredefinedFunction AExplorerChest_DinoDossiers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplorerChest_DinoDossiers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C");
		return ptr;
	}

}


