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
	 * 		Name   -> PredefinedFunction AExplorerChest_SheWhoWaits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplorerChest_SheWhoWaits_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C");
		return ptr;
	}

}


