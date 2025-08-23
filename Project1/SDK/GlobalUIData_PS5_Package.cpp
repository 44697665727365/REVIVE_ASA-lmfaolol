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
	 * 		Name   -> PredefinedFunction UGlobalUIData_PS5_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalUIData_PS5_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalUIData_PS5.GlobalUIData_PS5_C");
		return ptr;
	}

}


