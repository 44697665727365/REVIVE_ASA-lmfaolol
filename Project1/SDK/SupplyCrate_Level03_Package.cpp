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
	 * 		Name   -> PredefinedFunction ASupplyCrate_Level03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASupplyCrate_Level03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Level03.SupplyCrate_Level03_C");
		return ptr;
	}

}


