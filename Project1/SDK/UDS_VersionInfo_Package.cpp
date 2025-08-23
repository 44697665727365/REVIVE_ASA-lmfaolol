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
	 * 		Name   -> PredefinedFunction UUDS_VersionInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUDS_VersionInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_VersionInfo.UDS_VersionInfo_C");
		return ptr;
	}

}


