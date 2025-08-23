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
	 * 		Name   -> Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USequence_DoorOpen_DirectorBP_C::SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP_1");
		
		USequence_DoorOpen_DirectorBP_C_SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USequence_DoorOpen_DirectorBP_C::SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP");
		
		USequence_DoorOpen_DirectorBP_C_SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.MatineeEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USequence_DoorOpen_DirectorBP_C::MatineeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.MatineeEvent");
		
		USequence_DoorOpen_DirectorBP_C_MatineeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.MatineeEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USequence_DoorOpen_DirectorBP_C::MatineeEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.MatineeEvent_1");
		
		USequence_DoorOpen_DirectorBP_C_MatineeEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.ExecuteUbergraph_Sequence_DoorOpen_DirectorBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USequence_DoorOpen_DirectorBP_C::ExecuteUbergraph_Sequence_DoorOpen_DirectorBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C.ExecuteUbergraph_Sequence_DoorOpen_DirectorBP");
		
		USequence_DoorOpen_DirectorBP_C_ExecuteUbergraph_Sequence_DoorOpen_DirectorBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequence_DoorOpen_DirectorBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequence_DoorOpen_DirectorBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C");
		return ptr;
	}

}


