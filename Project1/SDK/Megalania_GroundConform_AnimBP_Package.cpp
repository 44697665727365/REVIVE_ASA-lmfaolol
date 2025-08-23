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
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UMegalania_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.AnimGraph");
		
		UMegalania_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B98640F6448F5CE24940A7851D4BE2C8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMegalania_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B98640F6448F5CE24940A7851D4BE2C8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B98640F6448F5CE24940A7851D4BE2C8");
		
		UMegalania_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B98640F6448F5CE24940A7851D4BE2C8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ControlRig_90A540D0459A8EFC98D872B13B499317
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMegalania_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ControlRig_90A540D0459A8EFC98D872B13B499317()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ControlRig_90A540D0459A8EFC98D872B13B499317");
		
		UMegalania_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ControlRig_90A540D0459A8EFC98D872B13B499317_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7E8DFE8B4749F0F496BDDB847B13CD5E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMegalania_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7E8DFE8B4749F0F496BDDB847B13CD5E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7E8DFE8B4749F0F496BDDB847B13CD5E");
		
		UMegalania_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7E8DFE8B4749F0F496BDDB847B13CD5E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ModifyBone_7429ACD247E3432BD4913BB00C138648
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMegalania_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ModifyBone_7429ACD247E3432BD4913BB00C138648()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ModifyBone_7429ACD247E3432BD4913BB00C138648");
		
		UMegalania_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Megalania_GroundConform_AnimBP_AnimGraphNode_ModifyBone_7429ACD247E3432BD4913BB00C138648_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMegalania_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UMegalania_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UMegalania_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UMegalania_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.ExecuteUbergraph_Megalania_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMegalania_GroundConform_AnimBP_C::ExecuteUbergraph_Megalania_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C.ExecuteUbergraph_Megalania_GroundConform_AnimBP");
		
		UMegalania_GroundConform_AnimBP_C_ExecuteUbergraph_Megalania_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMegalania_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMegalania_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Megalania_GroundConform_AnimBP.Megalania_GroundConform_AnimBP_C");
		return ptr;
	}

}


