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
	 * 		Name   -> PredefinedFunction UAllPlayersListUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAllPlayersListUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AllPlayersListUI.AllPlayersListUI_C");
		return ptr;
	}

}


