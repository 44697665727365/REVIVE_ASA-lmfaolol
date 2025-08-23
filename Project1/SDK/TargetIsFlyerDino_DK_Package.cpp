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
	 * 		Name   -> Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UTargetIsFlyerDino_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ReceiveConditionCheck");
		
		UTargetIsFlyerDino_DK_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ExecuteUbergraph_TargetIsFlyerDino_DK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTargetIsFlyerDino_DK_C::ExecuteUbergraph_TargetIsFlyerDino_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C.ExecuteUbergraph_TargetIsFlyerDino_DK");
		
		UTargetIsFlyerDino_DK_C_ExecuteUbergraph_TargetIsFlyerDino_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetIsFlyerDino_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetIsFlyerDino_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TargetIsFlyerDino_DK.TargetIsFlyerDino_DK_C");
		return ptr;
	}

}


