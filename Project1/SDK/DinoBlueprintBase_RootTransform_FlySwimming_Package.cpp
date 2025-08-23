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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.AnimGraph");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.IsUsingRootTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UDinoBlueprintBase_RootTransform_FlySwimming_C::IsUsingRootTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.IsUsingRootTransform");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_IsUsingRootTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_LinkedAnimGraph_F844710D46D9465E5DDADAB277BDC430
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_LinkedAnimGraph_F844710D46D9465E5DDADAB277BDC430()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_LinkedAnimGraph_F844710D46D9465E5DDADAB277BDC430");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_LinkedAnimGraph_F844710D46D9465E5DDADAB277BDC430_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootTransform_FlySwimming_C::ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming");
		
		UDinoBlueprintBase_RootTransform_FlySwimming_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransform_FlySwimming_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransform_FlySwimming_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C");
		return ptr;
	}

}


