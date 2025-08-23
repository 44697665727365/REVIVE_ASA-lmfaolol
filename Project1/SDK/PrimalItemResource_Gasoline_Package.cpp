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
	 * 		Name   -> Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SupportsDragOn                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_Gasoline_C::CheckForGasolineData(class UPrimalItem* DestinationItem, bool* SupportsDragOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData");
		
		UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SupportsDragOn != nullptr)
			*SupportsDragOn = params.SupportsDragOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_Gasoline_C::RefillGasoline(class UPrimalItem* DestinationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline");
		
		UPrimalItemResource_Gasoline_C_RefillGasoline_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AdditionalData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_Gasoline_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem");
		
		UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		params.AdditionalData = AdditionalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItemResource_Gasoline_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem");
		
		UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResource_Gasoline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResource_Gasoline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C");
		return ptr;
	}

}


