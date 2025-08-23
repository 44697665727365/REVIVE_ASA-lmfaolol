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
	 * 		Name   -> Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalGameData*                             AnotherGameData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBASE_PrimalGameData_BP_C::BPMergeModGameData(class UPrimalGameData* AnotherGameData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData");
		
		UBASE_PrimalGameData_BP_C_BPMergeModGameData_Params params {};
		params.AnotherGameData = AnotherGameData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBASE_PrimalGameData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBASE_PrimalGameData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C");
		return ptr;
	}

}


