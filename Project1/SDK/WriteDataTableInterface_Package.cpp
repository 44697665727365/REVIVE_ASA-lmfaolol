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
	 * 		Name   -> Function WriteDataTableInterface.WriteDataTableInterface_C.WriteDataTableFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  InputTable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InputData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWriteDataTableInterface_C::WriteDataTableFunction(class UDataTable* InputTable, const class FString& InputData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WriteDataTableInterface.WriteDataTableInterface_C.WriteDataTableFunction");
		
		UWriteDataTableInterface_C_WriteDataTableFunction_Params params {};
		params.InputTable = InputTable;
		params.InputData = InputData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWriteDataTableInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWriteDataTableInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WriteDataTableInterface.WriteDataTableInterface_C");
		return ptr;
	}

}


