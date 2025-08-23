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
	 * 		Name   -> PredefinedFunction ULootItemSet_Survivor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_Survivor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_Survivor.LootItemSet_Survivor_C");
		return ptr;
	}

}


