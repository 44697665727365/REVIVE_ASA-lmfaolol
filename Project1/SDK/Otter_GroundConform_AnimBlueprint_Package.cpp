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
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.AnimGraph");
		
		UOtter_GroundConform_AnimBlueprint_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_268263AF406EC1BCA552EA9C27EF27AE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_268263AF406EC1BCA552EA9C27EF27AE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_268263AF406EC1BCA552EA9C27EF27AE");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_268263AF406EC1BCA552EA9C27EF27AE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_C5B39048488D9279938BD0922831AFC7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_C5B39048488D9279938BD0922831AFC7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_C5B39048488D9279938BD0922831AFC7");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_C5B39048488D9279938BD0922831AFC7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_777077464D6C48954DBBC2B03BC40F8C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_777077464D6C48954DBBC2B03BC40F8C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_777077464D6C48954DBBC2B03BC40F8C");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_777077464D6C48954DBBC2B03BC40F8C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_ABCB598A40878A4911D8039C1B85223B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_ABCB598A40878A4911D8039C1B85223B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_ABCB598A40878A4911D8039C1B85223B");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_ABCB598A40878A4911D8039C1B85223B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_9FECAF76497BB1D4A1D9C48039E2402A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_9FECAF76497BB1D4A1D9C48039E2402A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_9FECAF76497BB1D4A1D9C48039E2402A");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_9FECAF76497BB1D4A1D9C48039E2402A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D39C3D6F4E8E046A030AD9936BEC66A6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D39C3D6F4E8E046A030AD9936BEC66A6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D39C3D6F4E8E046A030AD9936BEC66A6");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D39C3D6F4E8E046A030AD9936BEC66A6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_5DB0FC5A43BAF0A292D5018DF9D9FD7E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_5DB0FC5A43BAF0A292D5018DF9D9FD7E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_5DB0FC5A43BAF0A292D5018DF9D9FD7E");
		
		UOtter_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_5DB0FC5A43BAF0A292D5018DF9D9FD7E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UOtter_GroundConform_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		UOtter_GroundConform_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Otter_GroundConform_AnimBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtter_GroundConform_AnimBlueprint_C::ExecuteUbergraph_Otter_GroundConform_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Otter_GroundConform_AnimBlueprint");
		
		UOtter_GroundConform_AnimBlueprint_C_ExecuteUbergraph_Otter_GroundConform_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOtter_GroundConform_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOtter_GroundConform_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Otter_GroundConform_AnimBlueprint.Otter_GroundConform_AnimBlueprint_C");
		return ptr;
	}

}


