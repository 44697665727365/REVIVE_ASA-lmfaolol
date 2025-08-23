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
	 * 		Name   -> PredefinedFunction APreviewScene_Painting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewScene_Painting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PreviewScene_Painting.PreviewScene_Painting_C");
		return ptr;
	}

}


