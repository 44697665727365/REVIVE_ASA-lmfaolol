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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.AnimGraph");
		
		UDinoBlueprintBase_RootTransform_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.IsUsingRootTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UDinoBlueprintBase_RootTransform_C::IsUsingRootTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.IsUsingRootTransform");
		
		UDinoBlueprintBase_RootTransform_C_IsUsingRootTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootTransform_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransform_C_BlueprintPlayAnimationEvent_Params params {};
		params.AnimationMontage = AnimationMontage;
		params.PlayRate = PlayRate;
		params.bPauseOnFinish = bPauseOnFinish;
		params.StartPosition = StartPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (playedAnimLength != nullptr)
			*playedAnimLength = params.playedAnimLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_LinkedAnimGraph_4C214096403EAF14B6264E9CF171D25B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_LinkedAnimGraph_4C214096403EAF14B6264E9CF171D25B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_LinkedAnimGraph_4C214096403EAF14B6264E9CF171D25B");
		
		UDinoBlueprintBase_RootTransform_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_LinkedAnimGraph_4C214096403EAF14B6264E9CF171D25B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C");
		
		UDinoBlueprintBase_RootTransform_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootTransform_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransform_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_RootTransform_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootTransform_C::ExecuteUbergraph_DinoBlueprintBase_RootTransform(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform");
		
		UDinoBlueprintBase_RootTransform_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransform_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransform_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C");
		return ptr;
	}

}


