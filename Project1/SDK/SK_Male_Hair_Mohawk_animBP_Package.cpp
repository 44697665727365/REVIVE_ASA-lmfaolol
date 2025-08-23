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
	 * 		Name   -> Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USK_Male_Hair_Mohawk_animBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.AnimGraph");
		
		USK_Male_Hair_Mohawk_animBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.BlueprintThreadSafeUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USK_Male_Hair_Mohawk_animBP_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.BlueprintThreadSafeUpdateAnimation");
		
		USK_Male_Hair_Mohawk_animBP_C_BlueprintThreadSafeUpdateAnimation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USK_Male_Hair_Mohawk_animBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.BlueprintInitializeAnimation");
		
		USK_Male_Hair_Mohawk_animBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.ExecuteUbergraph_SK_Male_Hair_Mohawk_animBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USK_Male_Hair_Mohawk_animBP_C::ExecuteUbergraph_SK_Male_Hair_Mohawk_animBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C.ExecuteUbergraph_SK_Male_Hair_Mohawk_animBP");
		
		USK_Male_Hair_Mohawk_animBP_C_ExecuteUbergraph_SK_Male_Hair_Mohawk_animBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_Male_Hair_Mohawk_animBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_Male_Hair_Mohawk_animBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Male_Hair_Mohawk_animBP.SK_Male_Hair_Mohawk_animBP_C");
		return ptr;
	}

}


