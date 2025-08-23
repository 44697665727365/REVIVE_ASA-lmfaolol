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
	 * 		Name   -> PredefinedFunction AArtifactCrate_6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArtifactCrate_6_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_7.ArtifactCrate_6_C");
		return ptr;
	}

}


