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
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USauropod_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.AnimGraph");
		
		USauropod_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ControlRig_5543F0BA4A21CC49B13A59A9A14553FF
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USauropod_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ControlRig_5543F0BA4A21CC49B13A59A9A14553FF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ControlRig_5543F0BA4A21CC49B13A59A9A14553FF");
		
		USauropod_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ControlRig_5543F0BA4A21CC49B13A59A9A14553FF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1BA72F924F846C8669CA1DBC558290EC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USauropod_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1BA72F924F846C8669CA1DBC558290EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1BA72F924F846C8669CA1DBC558290EC");
		
		USauropod_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1BA72F924F846C8669CA1DBC558290EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_5CA6C7A9450E615599A00FB6A9397CB5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USauropod_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_5CA6C7A9450E615599A00FB6A9397CB5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_5CA6C7A9450E615599A00FB6A9397CB5");
		
		USauropod_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_5CA6C7A9450E615599A00FB6A9397CB5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USauropod_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		USauropod_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USauropod_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		USauropod_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ModifyBone_37AA943E4584C0D73E7A5DA80C87814F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USauropod_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ModifyBone_37AA943E4584C0D73E7A5DA80C87814F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ModifyBone_37AA943E4584C0D73E7A5DA80C87814F");
		
		USauropod_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_AnimGraphNode_ModifyBone_37AA943E4584C0D73E7A5DA80C87814F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.ExecuteUbergraph_Sauropod_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USauropod_GroundConform_AnimBP_C::ExecuteUbergraph_Sauropod_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C.ExecuteUbergraph_Sauropod_GroundConform_AnimBP");
		
		USauropod_GroundConform_AnimBP_C_ExecuteUbergraph_Sauropod_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USauropod_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USauropod_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sauropod_GroundConform_AnimBP.Sauropod_GroundConform_AnimBP_C");
		return ptr;
	}

}


