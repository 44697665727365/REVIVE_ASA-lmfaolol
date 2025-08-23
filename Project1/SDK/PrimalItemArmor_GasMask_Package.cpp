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
	 * 		Name   -> Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintEquipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFromSaveGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_GasMask_C::BlueprintEquipped(bool bIsFromSaveGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintEquipped");
		
		UPrimalItemArmor_GasMask_C_BlueprintEquipped_Params params {};
		params.bIsFromSaveGame = bIsFromSaveGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintUnequipped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_GasMask_C::BlueprintUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.BlueprintUnequipped");
		
		UPrimalItemArmor_GasMask_C_BlueprintUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.ExecuteUbergraph_PrimalItemArmor_GasMask
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_GasMask_C::ExecuteUbergraph_PrimalItemArmor_GasMask(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C.ExecuteUbergraph_PrimalItemArmor_GasMask");
		
		UPrimalItemArmor_GasMask_C_ExecuteUbergraph_PrimalItemArmor_GasMask_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_GasMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_GasMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_GasMask.PrimalItemArmor_GasMask_C");
		return ptr;
	}

}


