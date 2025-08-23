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
	 * 		Name   -> Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 FromOwnerItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsFirstTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_TekShirt_Gen2_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem");
		
		UPrimalItemArmor_TekShirt_Gen2_C_RemovedSkinFromItem_Params params {};
		params.FromOwnerItem = FromOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ToOwnerItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsFirstTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_TekShirt_Gen2_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem");
		
		UPrimalItemArmor_TekShirt_Gen2_C_ApplyingSkinOntoItem_Params params {};
		params.ToOwnerItem = ToOwnerItem;
		params.bIsFirstTime = bIsFirstTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_TekShirt_Gen2_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped");
		
		UPrimalItemArmor_TekShirt_Gen2_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_TekShirt_Gen2_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped");
		
		UPrimalItemArmor_TekShirt_Gen2_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsUnequip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_TekShirt_Gen2_C::TryTekSuitVFXOffset(bool IsUnequip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset");
		
		UPrimalItemArmor_TekShirt_Gen2_C_TryTekSuitVFXOffset_Params params {};
		params.IsUnequip = IsUnequip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_TekShirt_Gen2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_TekShirt_Gen2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C");
		return ptr;
	}

}


