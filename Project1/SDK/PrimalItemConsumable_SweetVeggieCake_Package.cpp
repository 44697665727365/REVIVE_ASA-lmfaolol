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
	 * 		Name   -> Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItemConsumable_SweetVeggieCake_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPCanUse");
		
		UPrimalItemConsumable_SweetVeggieCake_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPPreUseItem
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_SweetVeggieCake_C::BPPreUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPPreUseItem");
		
		UPrimalItemConsumable_SweetVeggieCake_C_BPPreUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_SweetVeggieCake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_SweetVeggieCake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C");
		return ptr;
	}

}


