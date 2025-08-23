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
	 * 		Name   -> PredefinedFunction ABPP_Cave_05_Landscape_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPP_Cave_05_Landscape_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPP_Cave_05_Landscape_01.BPP_Cave_05_Landscape_01_C");
		return ptr;
	}

}


