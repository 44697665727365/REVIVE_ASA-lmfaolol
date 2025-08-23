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
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDilo_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.AnimGraph");
		
		UDilo_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DC1126494695DE29974DA98DD3C279BA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDilo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DC1126494695DE29974DA98DD3C279BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DC1126494695DE29974DA98DD3C279BA");
		
		UDilo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DC1126494695DE29974DA98DD3C279BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8A6337DD4052B21D352A149017270FB1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDilo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8A6337DD4052B21D352A149017270FB1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8A6337DD4052B21D352A149017270FB1");
		
		UDilo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8A6337DD4052B21D352A149017270FB1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_66F6434A462CBD243A0106914D593585
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDilo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_66F6434A462CBD243A0106914D593585()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_66F6434A462CBD243A0106914D593585");
		
		UDilo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_66F6434A462CBD243A0106914D593585_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C02E896543A5819F3B6590BF3CFBF1D4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDilo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C02E896543A5819F3B6590BF3CFBF1D4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C02E896543A5819F3B6590BF3CFBF1D4");
		
		UDilo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dilo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C02E896543A5819F3B6590BF3CFBF1D4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDilo_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UDilo_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDilo_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UDilo_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.ExecuteUbergraph_Dilo_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDilo_GroundConform_AnimBP_C::ExecuteUbergraph_Dilo_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C.ExecuteUbergraph_Dilo_GroundConform_AnimBP");
		
		UDilo_GroundConform_AnimBP_C_ExecuteUbergraph_Dilo_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDilo_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDilo_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dilo_GroundConform_AnimBP.Dilo_GroundConform_AnimBP_C");
		return ptr;
	}

}


