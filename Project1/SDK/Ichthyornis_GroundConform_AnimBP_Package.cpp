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
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.AnimGraph");
		
		UIchthyornis_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_F21EDA9B448683D6D9CA22ABB6477FCC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_F21EDA9B448683D6D9CA22ABB6477FCC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_F21EDA9B448683D6D9CA22ABB6477FCC");
		
		UIchthyornis_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_F21EDA9B448683D6D9CA22ABB6477FCC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC65CD5748A43600120F3BA417145DE5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC65CD5748A43600120F3BA417145DE5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC65CD5748A43600120F3BA417145DE5");
		
		UIchthyornis_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC65CD5748A43600120F3BA417145DE5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_29BA47C44C9CA3057687D58D31631C72
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_29BA47C44C9CA3057687D58D31631C72()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_29BA47C44C9CA3057687D58D31631C72");
		
		UIchthyornis_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_29BA47C44C9CA3057687D58D31631C72_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ControlRig_59B662B4412449AD5041648277D281BC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ControlRig_59B662B4412449AD5041648277D281BC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ControlRig_59B662B4412449AD5041648277D281BC");
		
		UIchthyornis_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_AnimGraphNode_ControlRig_59B662B4412449AD5041648277D281BC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UIchthyornis_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UIchthyornis_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIchthyornis_GroundConform_AnimBP_C::ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C.ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP");
		
		UIchthyornis_GroundConform_AnimBP_C_ExecuteUbergraph_Ichthyornis_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIchthyornis_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIchthyornis_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ichthyornis_GroundConform_AnimBP.Ichthyornis_GroundConform_AnimBP_C");
		return ptr;
	}

}


