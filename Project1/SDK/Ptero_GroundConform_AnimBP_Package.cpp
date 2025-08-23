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
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UPtero_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.AnimGraph");
		
		UPtero_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_12F28C8E4E2AA5B0E4523FAC9B0B1E2F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPtero_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_12F28C8E4E2AA5B0E4523FAC9B0B1E2F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_12F28C8E4E2AA5B0E4523FAC9B0B1E2F");
		
		UPtero_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_12F28C8E4E2AA5B0E4523FAC9B0B1E2F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPtero_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UPtero_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CB9A8CF64F9C7ADD40617E95478B5E2D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPtero_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CB9A8CF64F9C7ADD40617E95478B5E2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CB9A8CF64F9C7ADD40617E95478B5E2D");
		
		UPtero_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ModifyBone_CB9A8CF64F9C7ADD40617E95478B5E2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ControlRig_B8AB78F644C5FBB1D6E8DBB3C4A1B7B0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPtero_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ControlRig_B8AB78F644C5FBB1D6E8DBB3C4A1B7B0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ControlRig_B8AB78F644C5FBB1D6E8DBB3C4A1B7B0");
		
		UPtero_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ControlRig_B8AB78F644C5FBB1D6E8DBB3C4A1B7B0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPtero_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UPtero_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_CCC222F8492B225D50878CB9D95680EE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPtero_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_CCC222F8492B225D50878CB9D95680EE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_CCC222F8492B225D50878CB9D95680EE");
		
		UPtero_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Ptero_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_CCC222F8492B225D50878CB9D95680EE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.ExecuteUbergraph_Ptero_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPtero_GroundConform_AnimBP_C::ExecuteUbergraph_Ptero_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C.ExecuteUbergraph_Ptero_GroundConform_AnimBP");
		
		UPtero_GroundConform_AnimBP_C_ExecuteUbergraph_Ptero_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPtero_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPtero_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ptero_GroundConform_AnimBP.Ptero_GroundConform_AnimBP_C");
		return ptr;
	}

}


