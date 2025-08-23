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
	 * 		Name   -> PredefinedFunction ULootItemSet_CaveDrop_T4_Weapons_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_CaveDrop_T4_Weapons_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_CaveDrop_T4_Weapons_ASA.LootItemSet_CaveDrop_T4_Weapons_ASA_C");
		return ptr;
	}

}


