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
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USarco_GroundConform_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.AnimGraph");
		
		USarco_GroundConform_AnimBlueprint_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_AD123202481BEA2EFE8462AC396CF90D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USarco_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_AD123202481BEA2EFE8462AC396CF90D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_AD123202481BEA2EFE8462AC396CF90D");
		
		USarco_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_AD123202481BEA2EFE8462AC396CF90D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_BDBCD27C457B39FC1D68BD87001E4381
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USarco_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_BDBCD27C457B39FC1D68BD87001E4381()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_BDBCD27C457B39FC1D68BD87001E4381");
		
		USarco_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_BDBCD27C457B39FC1D68BD87001E4381_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_C7925AE4481D59003FBCCFB455B65680
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USarco_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_C7925AE4481D59003FBCCFB455B65680()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_C7925AE4481D59003FBCCFB455B65680");
		
		USarco_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_C7925AE4481D59003FBCCFB455B65680_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USarco_GroundConform_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USarco_GroundConform_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USarco_GroundConform_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		USarco_GroundConform_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F6F3BF1749CD79D2786848A432E83F7C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USarco_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F6F3BF1749CD79D2786848A432E83F7C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F6F3BF1749CD79D2786848A432E83F7C");
		
		USarco_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F6F3BF1749CD79D2786848A432E83F7C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USarco_GroundConform_AnimBlueprint_C::ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint");
		
		USarco_GroundConform_AnimBlueprint_C_ExecuteUbergraph_Sarco_GroundConform_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USarco_GroundConform_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USarco_GroundConform_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sarco_GroundConform_AnimBlueprint.Sarco_GroundConform_AnimBlueprint_C");
		return ptr;
	}

}


