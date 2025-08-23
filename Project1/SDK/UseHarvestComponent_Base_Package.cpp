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
	 * 		Name   -> PredefinedFunction UUseHarvestComponent_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUseHarvestComponent_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UseHarvestComponent_Base.UseHarvestComponent_Base_C");
		return ptr;
	}

}


