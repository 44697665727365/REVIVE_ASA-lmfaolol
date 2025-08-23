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
	 * 		Name   -> PredefinedFunction UGenericButtonEntryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericButtonEntryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericButtonEntryWidget.GenericButtonEntryWidget_C");
		return ptr;
	}

}


