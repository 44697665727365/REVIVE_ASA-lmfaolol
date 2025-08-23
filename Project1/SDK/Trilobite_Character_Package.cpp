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
	 * 		Name   -> Function Trilobite_Character.Trilobite_Character_C.BP_ForceAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BuffClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool ATrilobite_Character_C::BP_ForceAllowAddBuff(class UClass* BuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_Character.Trilobite_Character_C.BP_ForceAllowAddBuff");
		
		ATrilobite_Character_C_BP_ForceAllowAddBuff_Params params {};
		params.BuffClass = BuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrilobite_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrilobite_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trilobite_Character.Trilobite_Character_C");
		return ptr;
	}

}


