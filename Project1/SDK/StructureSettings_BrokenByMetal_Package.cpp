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
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByMetal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByMetal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByMetal.StructureSettings_BrokenByMetal_C");
		return ptr;
	}

}


