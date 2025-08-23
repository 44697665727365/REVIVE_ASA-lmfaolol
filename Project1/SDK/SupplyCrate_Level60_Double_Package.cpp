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
	 * 		Name   -> PredefinedFunction ASupplyCrate_Level60_Double_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASupplyCrate_Level60_Double_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Level60_Double.SupplyCrate_Level60_Double_C");
		return ptr;
	}

}


