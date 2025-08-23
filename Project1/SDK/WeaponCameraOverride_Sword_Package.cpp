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
	 * 		Name   -> PredefinedFunction UWeaponCameraOverride_Sword_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponCameraOverride_Sword_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponCameraOverride_Sword.WeaponCameraOverride_Sword_C");
		return ptr;
	}

}


