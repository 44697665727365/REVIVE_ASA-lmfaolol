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
	 * 		Name   -> PredefinedFunction UPDA_FoleyCollection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPDA_FoleyCollection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PDA_FoleyCollection.PDA_FoleyCollection_C");
		return ptr;
	}

}


