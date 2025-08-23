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
	 * 		Name   -> PredefinedFunction AMeshFadeOut_Blueprint_WithDrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMeshFadeOut_Blueprint_WithDrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MeshFadeOut_Blueprint_WithDrop.MeshFadeOut_Blueprint_WithDrop_C");
		return ptr;
	}

}


