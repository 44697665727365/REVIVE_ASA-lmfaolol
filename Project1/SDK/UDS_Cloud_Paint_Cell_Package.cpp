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
	 * 		Name   -> PredefinedFunction UUDS_Cloud_Paint_Cell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUDS_Cloud_Paint_Cell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Cloud_Paint_Cell.UDS_Cloud_Paint_Cell_C");
		return ptr;
	}

}


