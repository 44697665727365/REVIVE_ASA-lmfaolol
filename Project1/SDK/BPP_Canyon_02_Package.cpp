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
	 * 		Name   -> PredefinedFunction ABPP_Canyon_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPP_Canyon_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPP_Canyon_02.BPP_Canyon_02_C");
		return ptr;
	}

}


