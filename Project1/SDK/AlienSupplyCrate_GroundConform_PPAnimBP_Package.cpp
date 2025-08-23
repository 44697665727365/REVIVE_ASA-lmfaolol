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
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.AnimGraph");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.BlueprintThreadSafeUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.BlueprintThreadSafeUpdateAnimation");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP_AnimGraphNode_TwoWayBlend_2E0C0EC7478166F86BA5B7B165207E20
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP_AnimGraphNode_TwoWayBlend_2E0C0EC7478166F86BA5B7B165207E20()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP_AnimGraphNode_TwoWayBlend_2E0C0EC7478166F86BA5B7B165207E20");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP_AnimGraphNode_TwoWayBlend_2E0C0EC7478166F86BA5B7B165207E20_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.BlueprintInitializeAnimation");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.BlueprintUpdateAnimation");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.ResetSleep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::ResetSleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.ResetSleep");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_ResetSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAlienSupplyCrate_GroundConform_PPAnimBP_C::ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C.ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP");
		
		UAlienSupplyCrate_GroundConform_PPAnimBP_C_ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlienSupplyCrate_GroundConform_PPAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlienSupplyCrate_GroundConform_PPAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C");
		return ptr;
	}

}


