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
	 * 		Name   -> Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_ScubaShirt_SuitWithTank_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.BlueprintEquipped");
		
		UPrimalItemArmor_ScubaShirt_SuitWithTank_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ScubaShirt_SuitWithTank_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.BlueprintUnequipped");
		
		UPrimalItemArmor_ScubaShirt_SuitWithTank_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_ScubaShirt_SuitWithTank_C::ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C.ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank");
		
		UPrimalItemArmor_ScubaShirt_SuitWithTank_C_ExecuteUbergraph_PrimalItemArmor_ScubaShirt_SuitWithTank_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_ScubaShirt_SuitWithTank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_ScubaShirt_SuitWithTank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ScubaShirt_SuitWithTank.PrimalItemArmor_ScubaShirt_SuitWithTank_C");
		return ptr;
	}

}


