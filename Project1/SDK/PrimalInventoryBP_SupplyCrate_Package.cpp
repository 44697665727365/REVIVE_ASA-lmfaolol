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
	 * 		Name   -> Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPPreInitDefaultInventory
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_SupplyCrate_C::BPPreInitDefaultInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPPreInitDefaultInventory");
		
		UPrimalInventoryBP_SupplyCrate_C_BPPreInitDefaultInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPRequestedInventoryItems
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalInventoryBP_SupplyCrate_C::BPRequestedInventoryItems(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPRequestedInventoryItems");
		
		UPrimalInventoryBP_SupplyCrate_C_BPRequestedInventoryItems_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPInventoryRefresh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalInventoryBP_SupplyCrate_C::BPInventoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPInventoryRefresh");
		
		UPrimalInventoryBP_SupplyCrate_C_BPInventoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_SupplyCrate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_SupplyCrate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C");
		return ptr;
	}

}


