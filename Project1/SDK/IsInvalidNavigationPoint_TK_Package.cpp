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
	 * 		Name   -> Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UIsInvalidNavigationPoint_TK_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ReceiveExecute");
		
		UIsInvalidNavigationPoint_TK_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ExecuteUbergraph_IsInvalidNavigationPoint_TK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIsInvalidNavigationPoint_TK_C::ExecuteUbergraph_IsInvalidNavigationPoint_TK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ExecuteUbergraph_IsInvalidNavigationPoint_TK");
		
		UIsInvalidNavigationPoint_TK_C_ExecuteUbergraph_IsInvalidNavigationPoint_TK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInvalidNavigationPoint_TK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInvalidNavigationPoint_TK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C");
		return ptr;
	}

}


