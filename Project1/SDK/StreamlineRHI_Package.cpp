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
	 * 		Name   -> PredefinedFunction UStreamlineOverrideSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineOverrideSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineRHI.StreamlineOverrideSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamlineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineRHI.StreamlineSettings");
		return ptr;
	}

}


