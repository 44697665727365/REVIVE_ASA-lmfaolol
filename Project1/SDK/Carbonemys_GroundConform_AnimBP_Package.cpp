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
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.AnimGraph");
		
		UCarbonemys_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_86C6660A4719E81BE260A4A6D7845F0C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_86C6660A4719E81BE260A4A6D7845F0C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_86C6660A4719E81BE260A4A6D7845F0C");
		
		UCarbonemys_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_86C6660A4719E81BE260A4A6D7845F0C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ModifyBone_E4E723E0496D6D8846B1648AC3CD70C8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ModifyBone_E4E723E0496D6D8846B1648AC3CD70C8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ModifyBone_E4E723E0496D6D8846B1648AC3CD70C8");
		
		UCarbonemys_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ModifyBone_E4E723E0496D6D8846B1648AC3CD70C8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9D54355340C6AC37851E1E89222DBBBB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9D54355340C6AC37851E1E89222DBBBB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9D54355340C6AC37851E1E89222DBBBB");
		
		UCarbonemys_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9D54355340C6AC37851E1E89222DBBBB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ControlRig_E922CA2A46842E660F33228B3A5A8F9B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ControlRig_E922CA2A46842E660F33228B3A5A8F9B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ControlRig_E922CA2A46842E660F33228B3A5A8F9B");
		
		UCarbonemys_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_AnimGraphNode_ControlRig_E922CA2A46842E660F33228B3A5A8F9B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UCarbonemys_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UCarbonemys_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.ExecuteUbergraph_Carbonemys_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCarbonemys_GroundConform_AnimBP_C::ExecuteUbergraph_Carbonemys_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C.ExecuteUbergraph_Carbonemys_GroundConform_AnimBP");
		
		UCarbonemys_GroundConform_AnimBP_C_ExecuteUbergraph_Carbonemys_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCarbonemys_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCarbonemys_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Carbonemys_GroundConform_AnimBP.Carbonemys_GroundConform_AnimBP_C");
		return ptr;
	}

}


