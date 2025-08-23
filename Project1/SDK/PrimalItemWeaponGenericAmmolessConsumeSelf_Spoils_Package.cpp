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
	 * 		Name   -> PredefinedFunction UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils.PrimalItemWeaponGenericAmmolessConsumeSelf_Spoils_C");
		return ptr;
	}

}


