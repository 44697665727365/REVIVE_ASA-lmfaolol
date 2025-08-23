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
	 * 		Name   -> PredefinedFunction UAudioLinkSettingsAbstract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioLinkSettingsAbstract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioLinkCore.AudioLinkSettingsAbstract");
		return ptr;
	}

}


