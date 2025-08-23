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
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USalmon_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.AnimGraph");
		
		USalmon_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ModifyBone_35090FF749598CB1BFFFA98F355A9F3E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USalmon_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ModifyBone_35090FF749598CB1BFFFA98F355A9F3E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ModifyBone_35090FF749598CB1BFFFA98F355A9F3E");
		
		USalmon_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ModifyBone_35090FF749598CB1BFFFA98F355A9F3E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_782E70F144F9FE8493DA5D8A7386FFF1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USalmon_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_782E70F144F9FE8493DA5D8A7386FFF1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_782E70F144F9FE8493DA5D8A7386FFF1");
		
		USalmon_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_782E70F144F9FE8493DA5D8A7386FFF1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ControlRig_69058E5C4D7E3E678D541BBCCB186F3E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USalmon_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ControlRig_69058E5C4D7E3E678D541BBCCB186F3E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ControlRig_69058E5C4D7E3E678D541BBCCB186F3E");
		
		USalmon_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Salmon_GroundConform_AnimBP_AnimGraphNode_ControlRig_69058E5C4D7E3E678D541BBCCB186F3E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USalmon_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		USalmon_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USalmon_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		USalmon_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.ExecuteUbergraph_Salmon_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USalmon_GroundConform_AnimBP_C::ExecuteUbergraph_Salmon_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C.ExecuteUbergraph_Salmon_GroundConform_AnimBP");
		
		USalmon_GroundConform_AnimBP_C_ExecuteUbergraph_Salmon_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USalmon_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USalmon_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Salmon_GroundConform_AnimBP.Salmon_GroundConform_AnimBP_C");
		return ptr;
	}

}


