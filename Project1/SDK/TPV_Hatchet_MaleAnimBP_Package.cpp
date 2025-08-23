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
	 * 		Name   -> Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.UpdateLayeringValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTPV_Hatchet_MaleAnimBP_C::UpdateLayeringValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.UpdateLayeringValues");
		
		UTPV_Hatchet_MaleAnimBP_C_UpdateLayeringValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTPV_Hatchet_MaleAnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.BlueprintInitializeAnimation");
		
		UTPV_Hatchet_MaleAnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTPV_Hatchet_MaleAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.BlueprintUpdateAnimation");
		
		UTPV_Hatchet_MaleAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.ExecuteUbergraph_TPV_Hatchet_MaleAnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTPV_Hatchet_MaleAnimBP_C::ExecuteUbergraph_TPV_Hatchet_MaleAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C.ExecuteUbergraph_TPV_Hatchet_MaleAnimBP");
		
		UTPV_Hatchet_MaleAnimBP_C_ExecuteUbergraph_TPV_Hatchet_MaleAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_Hatchet_MaleAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_Hatchet_MaleAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C");
		return ptr;
	}

}


