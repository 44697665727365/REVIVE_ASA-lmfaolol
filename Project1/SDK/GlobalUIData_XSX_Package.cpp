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
	 * 		Name   -> PredefinedFunction UGlobalUIData_XSX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalUIData_XSX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalUIData_XSX.GlobalUIData_XSX_C");
		return ptr;
	}

}


