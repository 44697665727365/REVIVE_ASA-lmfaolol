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
	 * 		Name   -> PredefinedFunction ABPP_Canyon_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPP_Canyon_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPP_Canyon_03.BPP_Canyon_03_C");
		return ptr;
	}

}


