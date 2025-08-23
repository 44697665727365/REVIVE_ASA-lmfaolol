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
	 * 		Name   -> PredefinedFunction UMissionsUI_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionsUI_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionsUI_Entry.MissionsUI_Entry_C");
		return ptr;
	}

}


