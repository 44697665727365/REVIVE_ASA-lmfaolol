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
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByStone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByStone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByStone.StructureSettings_BrokenByStone_C");
		return ptr;
	}

}


