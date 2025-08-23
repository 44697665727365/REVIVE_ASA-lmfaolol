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
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDodo_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.AnimGraph");
		
		UDodo_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7B238BFF4A9024C8AFBF2C8246A2C04A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDodo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7B238BFF4A9024C8AFBF2C8246A2C04A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7B238BFF4A9024C8AFBF2C8246A2C04A");
		
		UDodo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_7B238BFF4A9024C8AFBF2C8246A2C04A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_A35FF870426122B9BB694BA9BD79C13C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDodo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_A35FF870426122B9BB694BA9BD79C13C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_A35FF870426122B9BB694BA9BD79C13C");
		
		UDodo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ModifyBone_A35FF870426122B9BB694BA9BD79C13C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_6910BBE54F212B57A098E895C79281D0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDodo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_6910BBE54F212B57A098E895C79281D0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_6910BBE54F212B57A098E895C79281D0");
		
		UDodo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_6910BBE54F212B57A098E895C79281D0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C1DAFBE04970858E40F8E7AF3D0D7B37
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDodo_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C1DAFBE04970858E40F8E7AF3D0D7B37()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C1DAFBE04970858E40F8E7AF3D0D7B37");
		
		UDodo_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Dodo_GroundConform_AnimBP_AnimGraphNode_ControlRig_C1DAFBE04970858E40F8E7AF3D0D7B37_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDodo_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UDodo_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDodo_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UDodo_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.ExecuteUbergraph_Dodo_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDodo_GroundConform_AnimBP_C::ExecuteUbergraph_Dodo_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C.ExecuteUbergraph_Dodo_GroundConform_AnimBP");
		
		UDodo_GroundConform_AnimBP_C_ExecuteUbergraph_Dodo_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDodo_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDodo_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dodo_GroundConform_AnimBP.Dodo_GroundConform_AnimBP_C");
		return ptr;
	}

}


