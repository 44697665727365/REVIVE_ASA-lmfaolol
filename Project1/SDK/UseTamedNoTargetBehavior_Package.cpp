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
	 * 		Name   -> Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UUseTamedNoTargetBehavior_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ReceiveConditionCheck");
		
		UUseTamedNoTargetBehavior_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ExecuteUbergraph_UseTamedNoTargetBehavior
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUseTamedNoTargetBehavior_C::ExecuteUbergraph_UseTamedNoTargetBehavior(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ExecuteUbergraph_UseTamedNoTargetBehavior");
		
		UUseTamedNoTargetBehavior_C_ExecuteUbergraph_UseTamedNoTargetBehavior_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUseTamedNoTargetBehavior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUseTamedNoTargetBehavior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C");
		return ptr;
	}

}


