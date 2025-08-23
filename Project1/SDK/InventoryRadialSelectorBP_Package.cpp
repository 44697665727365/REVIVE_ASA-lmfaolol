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
	 * 		Name   -> PredefinedFunction UInventoryRadialSelectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryRadialSelectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C");
		return ptr;
	}

}


