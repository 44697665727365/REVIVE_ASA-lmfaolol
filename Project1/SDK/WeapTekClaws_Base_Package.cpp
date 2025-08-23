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
	 * 		Name   -> Function WeapTekClaws_Base.WeapTekClaws_Base_C.OnPrimalItemEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_Base_C::OnPrimalItemEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws_Base.WeapTekClaws_Base_C.OnPrimalItemEquipped");
		
		AWeapTekClaws_Base_C_OnPrimalItemEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapTekClaws_Base.WeapTekClaws_Base_C.OnAttachmentsAdded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapTekClaws_Base_C::OnAttachmentsAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekClaws_Base.WeapTekClaws_Base_C.OnAttachmentsAdded");
		
		AWeapTekClaws_Base_C_OnAttachmentsAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTekClaws_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTekClaws_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekClaws_Base.WeapTekClaws_Base_C");
		return ptr;
	}

}


