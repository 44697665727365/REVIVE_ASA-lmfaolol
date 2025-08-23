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
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_VariableMovement_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.AnimGraph");
		
		UDinoBlueprintBase_VariableMovement_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_VariableMovement_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_VariableMovement_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_60D76A66495577B71F8A0AB7BF20E8CD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_VariableMovement_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_60D76A66495577B71F8A0AB7BF20E8CD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_60D76A66495577B71F8A0AB7BF20E8CD");
		
		UDinoBlueprintBase_VariableMovement_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_60D76A66495577B71F8A0AB7BF20E8CD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_B07BB90945BDA4584A3760B5C986EA90
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_VariableMovement_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_B07BB90945BDA4584A3760B5C986EA90()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_B07BB90945BDA4584A3760B5C986EA90");
		
		UDinoBlueprintBase_VariableMovement_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_B07BB90945BDA4584A3760B5C986EA90_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_AA3AE6F241063C800C12B1873E5E7236
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_VariableMovement_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_AA3AE6F241063C800C12B1873E5E7236()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_AA3AE6F241063C800C12B1873E5E7236");
		
		UDinoBlueprintBase_VariableMovement_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_BlendListByBool_AA3AE6F241063C800C12B1873E5E7236_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_LinkedAnimGraph_CCAD54BA4ACA1F2D7DE0F3A8AC2D978E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_VariableMovement_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_LinkedAnimGraph_CCAD54BA4ACA1F2D7DE0F3A8AC2D978E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_LinkedAnimGraph_CCAD54BA4ACA1F2D7DE0F3A8AC2D978E");
		
		UDinoBlueprintBase_VariableMovement_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_AnimGraphNode_LinkedAnimGraph_CCAD54BA4ACA1F2D7DE0F3A8AC2D978E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_VariableMovement_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_VariableMovement_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_VariableMovement_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_VariableMovement_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.ExecuteUbergraph_DinoBlueprintBase_VariableMovement
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_VariableMovement_C::ExecuteUbergraph_DinoBlueprintBase_VariableMovement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C.ExecuteUbergraph_DinoBlueprintBase_VariableMovement");
		
		UDinoBlueprintBase_VariableMovement_C_ExecuteUbergraph_DinoBlueprintBase_VariableMovement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_VariableMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_VariableMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_VariableMovement.DinoBlueprintBase_VariableMovement_C");
		return ptr;
	}

}


