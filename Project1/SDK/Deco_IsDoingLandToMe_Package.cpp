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
	 * 		Name   -> Function Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeco_IsDoingLandToMe_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C.ReceiveConditionCheck");
		
		UDeco_IsDoingLandToMe_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C.ExecuteUbergraph_Deco_IsDoingLandToMe
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDeco_IsDoingLandToMe_C::ExecuteUbergraph_Deco_IsDoingLandToMe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C.ExecuteUbergraph_Deco_IsDoingLandToMe");
		
		UDeco_IsDoingLandToMe_C_ExecuteUbergraph_Deco_IsDoingLandToMe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeco_IsDoingLandToMe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeco_IsDoingLandToMe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C");
		return ptr;
	}

}


