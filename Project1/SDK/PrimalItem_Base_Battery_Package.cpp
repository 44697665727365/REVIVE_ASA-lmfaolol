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
	 * 		Name   -> Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   ToInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItem_Base_Battery_C::BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent* ToInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory");
		
		UPrimalItem_Base_Battery_C_BPForceAllowRemoteAddToInventory_Params params {};
		params.ToInventory = ToInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_Base_Battery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_Base_Battery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C");
		return ptr;
	}

}


