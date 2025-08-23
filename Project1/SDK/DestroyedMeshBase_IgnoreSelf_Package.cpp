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
	 * 		Name   -> PredefinedFunction ADestroyedMeshBase_IgnoreSelf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestroyedMeshBase_IgnoreSelf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C");
		return ptr;
	}

}


