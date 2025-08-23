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
	 * 		Name   -> Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UIsNotPlayerMoveCommand_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ReceiveConditionCheck");
		
		UIsNotPlayerMoveCommand_DK_C_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ExecuteUbergraph_IsNotPlayerMoveCommand_DK
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIsNotPlayerMoveCommand_DK_C::ExecuteUbergraph_IsNotPlayerMoveCommand_DK(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ExecuteUbergraph_IsNotPlayerMoveCommand_DK");
		
		UIsNotPlayerMoveCommand_DK_C_ExecuteUbergraph_IsNotPlayerMoveCommand_DK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsNotPlayerMoveCommand_DK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsNotPlayerMoveCommand_DK_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C");
		return ptr;
	}

}


