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
	 * 		Name   -> Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float UPrimalItem_ChargeBattery_C::BPGetItemDurabilityPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemDurabilityPercentage");
		
		UPrimalItem_ChargeBattery_C_BPGetItemDurabilityPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class UTexture2D* UPrimalItem_ChargeBattery_C::BPGetItemIcon(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon");
		
		UPrimalItem_ChargeBattery_C_BPGetItemIcon_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString UPrimalItem_ChargeBattery_C::BPGetCustomInventoryWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText");
		
		UPrimalItem_ChargeBattery_C_BPGetCustomInventoryWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             amountToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             AmountAdded                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_ChargeBattery_C::AddDurabilitySafe(double amountToAdd, double* AmountAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe");
		
		UPrimalItem_ChargeBattery_C_AddDurabilitySafe_Params params {};
		params.amountToAdd = amountToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountAdded != nullptr)
			*AmountAdded = params.AmountAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AdditionalData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_ChargeBattery_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem");
		
		UPrimalItem_ChargeBattery_C_BPUsedOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		params.AdditionalData = AdditionalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_ChargeBattery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_ChargeBattery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C");
		return ptr;
	}

}


