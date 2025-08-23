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
	 * 		Name   -> Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_ElementShard_C::RefillElementShard(class UPrimalItem* DestinationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard");
		
		UPrimalItemResource_ElementShard_C_RefillElementShard_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SupportsDragOnto                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_ElementShard_C::CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData");
		
		UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SupportsDragOnto != nullptr)
			*SupportsDragOnto = params.SupportsDragOnto;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItemResource_ElementShard_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem");
		
		UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AdditionalData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_ElementShard_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem");
		
		UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		params.AdditionalData = AdditionalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResource_ElementShard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResource_ElementShard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C");
		return ptr;
	}

}


