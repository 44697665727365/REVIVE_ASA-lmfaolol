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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.AnimGraph");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_99780210435C16B7850B808A2A5A689A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_99780210435C16B7850B808A2A5A689A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_99780210435C16B7850B808A2A5A689A");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_99780210435C16B7850B808A2A5A689A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_9EEFB4EC454AE5BB03BBFF9D6869A041
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_9EEFB4EC454AE5BB03BBFF9D6869A041()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_9EEFB4EC454AE5BB03BBFF9D6869A041");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_9EEFB4EC454AE5BB03BBFF9D6869A041_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_5764321146FD37003C8A9A8B743D3075
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_5764321146FD37003C8A9A8B743D3075()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_5764321146FD37003C8A9A8B743D3075");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_5764321146FD37003C8A9A8B743D3075_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_A5D80B174F0BF5A8BDC8CDA5BC3FEB72
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_A5D80B174F0BF5A8BDC8CDA5BC3FEB72()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_A5D80B174F0BF5A8BDC8CDA5BC3FEB72");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_A5D80B174F0BF5A8BDC8CDA5BC3FEB72_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_423E644343462E174F56428A06301B2B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_423E644343462E174F56428A06301B2B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_423E644343462E174F56428A06301B2B");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_BlendListByBool_423E644343462E174F56428A06301B2B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_LinkedAnimGraph_4D685DC24339E1D75BF06F97979299ED
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_LinkedAnimGraph_4D685DC24339E1D75BF06F97979299ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_LinkedAnimGraph_4D685DC24339E1D75BF06F97979299ED");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_LinkedAnimGraph_4D685DC24339E1D75BF06F97979299ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_DEC545D3442E063FCA7E3392600385A3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_DEC545D3442E063FCA7E3392600385A3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_DEC545D3442E063FCA7E3392600385A3");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_AnimGraphNode_SequencePlayer_DEC545D3442E063FCA7E3392600385A3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge");
		
		UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge.DinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C");
		return ptr;
	}

}


