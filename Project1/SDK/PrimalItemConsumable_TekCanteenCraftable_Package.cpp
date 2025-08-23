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
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.IsCustomContextMenuItemEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        ContextItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItemConsumable_TekCanteenCraftable_C::IsCustomContextMenuItemEnabled(const class FName& ContextItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.IsCustomContextMenuItemEnabled");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_IsCustomContextMenuItemEnabled_Params params {};
		params.ContextItem = ContextItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetTextColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FColor UPrimalItemConsumable_TekCanteenCraftable_C::BPGetCustomInventoryWidgetTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetTextColor");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.HasEnoughPowerForUse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bHasEnoughPower                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::HasEnoughPowerForUse(bool* bHasEnoughPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.HasEnoughPowerForUse");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_HasEnoughPowerForUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasEnoughPower != nullptr)
			*bHasEnoughPower = params.bHasEnoughPower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ApplyUnpoweredBuffs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::ApplyUnpoweredBuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ApplyUnpoweredBuffs");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_ApplyUnpoweredBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryClearBuffs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::TryClearBuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryClearBuffs");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_TryClearBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetCurrentWaterMode
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        WaterMode                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::GetCurrentWaterMode(class FName* WaterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetCurrentWaterMode");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_GetCurrentWaterMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WaterMode != nullptr)
			*WaterMode = params.WaterMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetText
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString UPrimalItemConsumable_TekCanteenCraftable_C::BPGetCustomInventoryWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPGetCustomInventoryWidgetText");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_BPGetCustomInventoryWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetWaterMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewWaterMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::SetWaterMode(const class FName& NewWaterMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetWaterMode");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_SetWaterMode_Params params {};
		params.NewWaterMode = NewWaterMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SelectedCustomContextMenuItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ContextItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::SelectedCustomContextMenuItem(const class FName& ContextItem, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SelectedCustomContextMenuItem");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_SelectedCustomContextMenuItem_Params params {};
		params.ContextItem = ContextItem;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryConsumeWithPower
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::TryConsumeWithPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.TryConsumeWithPower");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_TryConsumeWithPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BlueprintUsed");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetShardDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::SetShardDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.SetShardDescription");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_SetShardDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetElementShardValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               HasData                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::GetElementShardValue(bool* HasData, double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.GetElementShardValue");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_GetElementShardValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasData != nullptr)
			*HasData = params.HasData;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPPostInitializeItem
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      OptionalInitWorld                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::BPPostInitializeItem(class UWorld* OptionalInitWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.BPPostInitializeItem");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_BPPostInitializeItem_Params params {};
		params.OptionalInitWorld = OptionalInitWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumable_TekCanteenCraftable_C::ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C.ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable");
		
		UPrimalItemConsumable_TekCanteenCraftable_C_ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_TekCanteenCraftable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_TekCanteenCraftable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C");
		return ptr;
	}

}


