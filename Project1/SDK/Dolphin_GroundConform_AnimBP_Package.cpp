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
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDolphin_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.AnimGraph");
		
		UDolphin_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC7B39954DC868C3FA41E58235ED4B39
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDolphin_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC7B39954DC868C3FA41E58235ED4B39()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC7B39954DC868C3FA41E58235ED4B39");
		
		UDolphin_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CC7B39954DC868C3FA41E58235ED4B39_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9FCC9DDC48ABA928D4640EBCFE0680DD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDolphin_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9FCC9DDC48ABA928D4640EBCFE0680DD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9FCC9DDC48ABA928D4640EBCFE0680DD");
		
		UDolphin_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_9FCC9DDC48ABA928D4640EBCFE0680DD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ControlRig_6F9A42B44EBF890D7871DCA1AE08FD63
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDolphin_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ControlRig_6F9A42B44EBF890D7871DCA1AE08FD63()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ControlRig_6F9A42B44EBF890D7871DCA1AE08FD63");
		
		UDolphin_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_AnimGraphNode_ControlRig_6F9A42B44EBF890D7871DCA1AE08FD63_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDolphin_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UDolphin_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDolphin_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UDolphin_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.ExecuteUbergraph_Dolphin_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDolphin_GroundConform_AnimBP_C::ExecuteUbergraph_Dolphin_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C.ExecuteUbergraph_Dolphin_GroundConform_AnimBP");
		
		UDolphin_GroundConform_AnimBP_C_ExecuteUbergraph_Dolphin_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDolphin_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDolphin_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dolphin_GroundConform_AnimBP.Dolphin_GroundConform_AnimBP_C");
		return ptr;
	}

}


