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
	 * 		Name   -> PredefinedFunction ABPP_Canyon_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPP_Canyon_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPP_Canyon_04.BPP_Canyon_04_C");
		return ptr;
	}

}


