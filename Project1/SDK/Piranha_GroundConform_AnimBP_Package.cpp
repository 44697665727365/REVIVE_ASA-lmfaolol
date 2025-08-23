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
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UPiranha_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.AnimGraph");
		
		UPiranha_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ModifyBone_756F2FDC404E0893EA4530A23631FC26
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPiranha_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ModifyBone_756F2FDC404E0893EA4530A23631FC26()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ModifyBone_756F2FDC404E0893EA4530A23631FC26");
		
		UPiranha_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ModifyBone_756F2FDC404E0893EA4530A23631FC26_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPiranha_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UPiranha_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ControlRig_61F421924F144CEC4666A1BC0D144337
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPiranha_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ControlRig_61F421924F144CEC4666A1BC0D144337()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ControlRig_61F421924F144CEC4666A1BC0D144337");
		
		UPiranha_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_ControlRig_61F421924F144CEC4666A1BC0D144337_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPiranha_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UPiranha_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_DA9659394957C4097139E5BA923129F3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPiranha_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_DA9659394957C4097139E5BA923129F3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_DA9659394957C4097139E5BA923129F3");
		
		UPiranha_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Piranha_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_DA9659394957C4097139E5BA923129F3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.ExecuteUbergraph_Piranha_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPiranha_GroundConform_AnimBP_C::ExecuteUbergraph_Piranha_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C.ExecuteUbergraph_Piranha_GroundConform_AnimBP");
		
		UPiranha_GroundConform_AnimBP_C_ExecuteUbergraph_Piranha_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPiranha_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPiranha_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Piranha_GroundConform_AnimBP.Piranha_GroundConform_AnimBP_C");
		return ptr;
	}

}


