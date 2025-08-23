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
	 * 		Name   -> PredefinedFunction UContextMenuItem_Spinner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenuItem_Spinner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_Spinner.ContextMenuItem_Spinner_C");
		return ptr;
	}

}


