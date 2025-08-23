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
	 * 		Name   -> PredefinedFunction ATributeTerminal_TekCave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATributeTerminal_TekCave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_TekCave.TributeTerminal_TekCave_C");
		return ptr;
	}

}


