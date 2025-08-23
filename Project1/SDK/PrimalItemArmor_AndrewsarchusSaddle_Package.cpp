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
	 * 		Name   -> Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_AndrewsarchusSaddle_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.BlueprintUnequipped");
		
		UPrimalItemArmor_AndrewsarchusSaddle_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_AndrewsarchusSaddle_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.BlueprintEquipped");
		
		UPrimalItemArmor_AndrewsarchusSaddle_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.GetInventoryIconDisplayText
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString UPrimalItemArmor_AndrewsarchusSaddle_C::GetInventoryIconDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C.GetInventoryIconDisplayText");
		
		UPrimalItemArmor_AndrewsarchusSaddle_C_GetInventoryIconDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_AndrewsarchusSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_AndrewsarchusSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C");
		return ptr;
	}

}


