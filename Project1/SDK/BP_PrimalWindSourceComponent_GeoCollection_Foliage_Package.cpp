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
	 * 		Name   -> PredefinedFunction UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrimalWindSourceComponent_GeoCollection_Foliage.BP_PrimalWindSourceComponent_GeoCollection_Foliage_C");
		return ptr;
	}

}


