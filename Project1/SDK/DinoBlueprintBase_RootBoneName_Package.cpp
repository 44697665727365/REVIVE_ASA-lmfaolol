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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.AnimGraph");
		
		UDinoBlueprintBase_RootBoneName_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_2A69076B409A6A5A4503CBB734CDA6E8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_2A69076B409A6A5A4503CBB734CDA6E8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_2A69076B409A6A5A4503CBB734CDA6E8");
		
		UDinoBlueprintBase_RootBoneName_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_2A69076B409A6A5A4503CBB734CDA6E8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_4C8A824841EB977EF5EEF79FC0F2DC67
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_4C8A824841EB977EF5EEF79FC0F2DC67()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_4C8A824841EB977EF5EEF79FC0F2DC67");
		
		UDinoBlueprintBase_RootBoneName_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_4C8A824841EB977EF5EEF79FC0F2DC67_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_LinkedAnimGraph_C59290F648F911C9FA3384855DCF9365
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_LinkedAnimGraph_C59290F648F911C9FA3384855DCF9365()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_LinkedAnimGraph_C59290F648F911C9FA3384855DCF9365");
		
		UDinoBlueprintBase_RootBoneName_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_LinkedAnimGraph_C59290F648F911C9FA3384855DCF9365_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_RootBoneName_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName");
		
		UDinoBlueprintBase_RootBoneName_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C");
		return ptr;
	}

}


