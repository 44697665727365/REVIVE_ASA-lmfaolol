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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapGlowStick_Base.WeapGlowStick_Base_C.DoMultiUnequipGlowStick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_Base_C::DoMultiUnequipGlowStick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick_Base.WeapGlowStick_Base_C.DoMultiUnequipGlowStick");
		
		AWeapGlowStick_Base_C_DoMultiUnequipGlowStick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapGlowStick_Base.WeapGlowStick_Base_C.DoMultiFakeReload
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapGlowStick_Base_C::DoMultiFakeReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGlowStick_Base.WeapGlowStick_Base_C.DoMultiFakeReload");
		
		AWeapGlowStick_Base_C_DoMultiFakeReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapGlowStick_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapGlowStick_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapGlowStick_Base.WeapGlowStick_Base_C");
		return ptr;
	}

}


