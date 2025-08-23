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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.AnimGraph");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_LinkedAnimGraph_54768E034D6CB0CF66891E952DE3DDD3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_LinkedAnimGraph_54768E034D6CB0CF66891E952DE3DDD3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_LinkedAnimGraph_54768E034D6CB0CF66891E952DE3DDD3");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_LinkedAnimGraph_54768E034D6CB0CF66891E952DE3DDD3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_5B27286F4E2E09A577E5D487CF57E242
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_5B27286F4E2E09A577E5D487CF57E242()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_5B27286F4E2E09A577E5D487CF57E242");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_5B27286F4E2E09A577E5D487CF57E242_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_96A12F0E43A6787A4A214DAC306121A9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_96A12F0E43A6787A4A214DAC306121A9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_96A12F0E43A6787A4A214DAC306121A9");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_AnimGraphNode_BlendListByBool_96A12F0E43A6787A4A214DAC306121A9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_Ramming_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming");
		
		UDinoBlueprintBase_RootBoneName_Ramming_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Ramming_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_Ramming_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_Ramming_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_Ramming.DinoBlueprintBase_RootBoneName_Ramming_C");
		return ptr;
	}

}


