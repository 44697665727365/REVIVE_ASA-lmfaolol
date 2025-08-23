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
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UTrilobite_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.AnimGraph");
		
		UTrilobite_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ModifyBone_38CDE71643020B7CE61AC1858035D9D4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrilobite_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ModifyBone_38CDE71643020B7CE61AC1858035D9D4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ModifyBone_38CDE71643020B7CE61AC1858035D9D4");
		
		UTrilobite_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ModifyBone_38CDE71643020B7CE61AC1858035D9D4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_332F8507411EA8E68287E4AB485AD4B6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrilobite_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_332F8507411EA8E68287E4AB485AD4B6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_332F8507411EA8E68287E4AB485AD4B6");
		
		UTrilobite_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_332F8507411EA8E68287E4AB485AD4B6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ControlRig_C8716F1A422106E67D83EBA457CAA3C6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTrilobite_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ControlRig_C8716F1A422106E67D83EBA457CAA3C6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ControlRig_C8716F1A422106E67D83EBA457CAA3C6");
		
		UTrilobite_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_AnimGraphNode_ControlRig_C8716F1A422106E67D83EBA457CAA3C6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrilobite_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UTrilobite_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTrilobite_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UTrilobite_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.ExecuteUbergraph_Trilobite_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTrilobite_GroundConform_AnimBP_C::ExecuteUbergraph_Trilobite_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C.ExecuteUbergraph_Trilobite_GroundConform_AnimBP");
		
		UTrilobite_GroundConform_AnimBP_C_ExecuteUbergraph_Trilobite_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrilobite_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrilobite_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Trilobite_GroundConform_AnimBP.Trilobite_GroundConform_AnimBP_C");
		return ptr;
	}

}


