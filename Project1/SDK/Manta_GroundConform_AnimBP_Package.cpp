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
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UManta_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.AnimGraph");
		
		UManta_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CA19022746B4B874A7A07C9C774D70F8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UManta_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CA19022746B4B874A7A07C9C774D70F8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CA19022746B4B874A7A07C9C774D70F8");
		
		UManta_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CA19022746B4B874A7A07C9C774D70F8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ControlRig_84AF3B9548D688981E1436B1BDCD38CB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UManta_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ControlRig_84AF3B9548D688981E1436B1BDCD38CB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ControlRig_84AF3B9548D688981E1436B1BDCD38CB");
		
		UManta_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_ControlRig_84AF3B9548D688981E1436B1BDCD38CB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_2FD768B0444E44908C1160AAB8227B70
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UManta_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_2FD768B0444E44908C1160AAB8227B70()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_2FD768B0444E44908C1160AAB8227B70");
		
		UManta_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Manta_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_2FD768B0444E44908C1160AAB8227B70_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UManta_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UManta_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UManta_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UManta_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.ExecuteUbergraph_Manta_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UManta_GroundConform_AnimBP_C::ExecuteUbergraph_Manta_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C.ExecuteUbergraph_Manta_GroundConform_AnimBP");
		
		UManta_GroundConform_AnimBP_C_ExecuteUbergraph_Manta_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManta_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManta_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Manta_GroundConform_AnimBP.Manta_GroundConform_AnimBP_C");
		return ptr;
	}

}


