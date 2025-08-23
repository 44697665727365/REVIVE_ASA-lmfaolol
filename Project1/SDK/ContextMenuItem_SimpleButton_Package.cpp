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
	 * 		Name   -> PredefinedFunction UContextMenuItem_SimpleButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenuItem_SimpleButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_SimpleButton.ContextMenuItem_SimpleButton_C");
		return ptr;
	}

}


