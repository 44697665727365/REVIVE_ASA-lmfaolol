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
	 * 		Name   -> Function PlayerHudInterface.PlayerHudInterface_C.SetElementBarBoostIconHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHudInterface_C::SetElementBarBoostIconHidden(bool isHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHudInterface.PlayerHudInterface_C.SetElementBarBoostIconHidden");
		
		UPlayerHudInterface_C_SetElementBarBoostIconHidden_Params params {};
		params.isHidden = isHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHudInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHudInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerHudInterface.PlayerHudInterface_C");
		return ptr;
	}

}


