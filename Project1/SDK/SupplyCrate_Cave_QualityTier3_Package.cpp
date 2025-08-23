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
	 * 		Name   -> PredefinedFunction ASupplyCrate_Cave_QualityTier3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASupplyCrate_Cave_QualityTier3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Cave_QualityTier3.SupplyCrate_Cave_QualityTier3_C");
		return ptr;
	}

}


