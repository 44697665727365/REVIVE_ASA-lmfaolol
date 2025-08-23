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
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UStego_GroundConform_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.AnimGraph");
		
		UStego_GroundConform_AnimBlueprint_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_2F411CBD426D1EAAD67856BCDC620287
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_2F411CBD426D1EAAD67856BCDC620287()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_2F411CBD426D1EAAD67856BCDC620287");
		
		UStego_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ApplyAdditive_2F411CBD426D1EAAD67856BCDC620287_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F20A1D4044C8A91A1F40FB96E7F607C3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F20A1D4044C8A91A1F40FB96E7F607C3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F20A1D4044C8A91A1F40FB96E7F607C3");
		
		UStego_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ModifyBone_F20A1D4044C8A91A1F40FB96E7F607C3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_A14AACE94C5C21A180A02C8F22E69DDA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_A14AACE94C5C21A180A02C8F22E69DDA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_A14AACE94C5C21A180A02C8F22E69DDA");
		
		UStego_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_TwoWayBlend_A14AACE94C5C21A180A02C8F22E69DDA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_036958D142C8EE4C5C2C138BE6F5BFFD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStego_GroundConform_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_036958D142C8EE4C5C2C138BE6F5BFFD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_036958D142C8EE4C5C2C138BE6F5BFFD");
		
		UStego_GroundConform_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_AnimGraphNode_ControlRig_036958D142C8EE4C5C2C138BE6F5BFFD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStego_GroundConform_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UStego_GroundConform_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UStego_GroundConform_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		UStego_GroundConform_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Stego_GroundConform_AnimBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStego_GroundConform_AnimBlueprint_C::ExecuteUbergraph_Stego_GroundConform_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C.ExecuteUbergraph_Stego_GroundConform_AnimBlueprint");
		
		UStego_GroundConform_AnimBlueprint_C_ExecuteUbergraph_Stego_GroundConform_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStego_GroundConform_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStego_GroundConform_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stego_GroundConform_AnimBlueprint.Stego_GroundConform_AnimBlueprint_C");
		return ptr;
	}

}


