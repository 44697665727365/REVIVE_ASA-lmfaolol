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
	 * 		Name   -> PredefinedFunction ULootItemSet_SupplyDrop_Level15_ASA_QualityOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULootItemSet_SupplyDrop_Level15_ASA_QualityOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LootItemSet_SupplyDrop_Level15_ASA_QualityOnly.LootItemSet_SupplyDrop_Level15_ASA_QualityOnly_C");
		return ptr;
	}

}


