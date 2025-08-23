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
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.AnimGraph");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHuman_Male_TPV_GroundConform_AnimBP_C::ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP");
		
		UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHuman_Male_TPV_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHuman_Male_TPV_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C");
		return ptr;
	}

}


