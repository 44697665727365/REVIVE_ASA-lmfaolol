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
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.AnimGraph");
		
		UTapejara_GroundConform_AnimBlueprint_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_E66A6419483B678658EEA1B472586FE2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_E66A6419483B678658EEA1B472586FE2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_E66A6419483B678658EEA1B472586FE2");
		
		UTapejara_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_E66A6419483B678658EEA1B472586FE2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_765F3947475FB011C3469595BF162144
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_765F3947475FB011C3469595BF162144()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_765F3947475FB011C3469595BF162144");
		
		UTapejara_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_765F3947475FB011C3469595BF162144_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D7BC519D45341D49A121398F027A9C18
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D7BC519D45341D49A121398F027A9C18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D7BC519D45341D49A121398F027A9C18");
		
		UTapejara_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_D7BC519D45341D49A121398F027A9C18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_F2BFA43D4FA58CEFAD0E2899043885D5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_F2BFA43D4FA58CEFAD0E2899043885D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_F2BFA43D4FA58CEFAD0E2899043885D5");
		
		UTapejara_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_F2BFA43D4FA58CEFAD0E2899043885D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UTapejara_GroundConform_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		UTapejara_GroundConform_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTapejara_GroundConform_AnimBlueprint_C::ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint");
		
		UTapejara_GroundConform_AnimBlueprint_C_ExecuteUbergraph_Tapejara_GroundConform_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTapejara_GroundConform_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTapejara_GroundConform_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tapejara_GroundConform_AnimBlueprint.Tapejara_GroundConform_AnimBlueprint_C");
		return ptr;
	}

}


