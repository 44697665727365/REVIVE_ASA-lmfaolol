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
	 * 		Name   -> PredefinedFunction UObeliskStatsPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObeliskStatsPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C");
		return ptr;
	}

}


