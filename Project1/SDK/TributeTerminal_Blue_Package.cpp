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
	 * 		Name   -> PredefinedFunction ATributeTerminal_Blue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATributeTerminal_Blue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_Blue.TributeTerminal_Blue_C");
		return ptr;
	}

}


