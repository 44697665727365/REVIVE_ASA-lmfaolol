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
	 * 		Name   -> Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_ShoulderCannon_C::HasAmmoOrElement(bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement");
		
		UPrimalItemArmor_ShoulderCannon_C_HasAmmoOrElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UpdatedAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_ShoulderCannon_C::ConsumeAmmo(int32_t Amount, int32_t* UpdatedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo");
		
		UPrimalItemArmor_ShoulderCannon_C_ConsumeAmmo_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedAmount != nullptr)
			*UpdatedAmount = params.UpdatedAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ShoulderCannon_C::GetBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff");
		
		UPrimalItemArmor_ShoulderCannon_C_GetBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ShoulderCannon_C::InitBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff");
		
		UPrimalItemArmor_ShoulderCannon_C_InitBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ShoulderCannon_C::BPAddedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments");
		
		UPrimalItemArmor_ShoulderCannon_C_BPAddedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_ShoulderCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_ShoulderCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C");
		return ptr;
	}

}


