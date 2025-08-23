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
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.AnimGraph");
		
		ULystrosaurus_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DA36E5D44C864103F2885E90F28C50D6
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DA36E5D44C864103F2885E90F28C50D6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DA36E5D44C864103F2885E90F28C50D6");
		
		ULystrosaurus_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DA36E5D44C864103F2885E90F28C50D6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ModifyBone_5ED921214B65A800C2DDE8B350F3C9BE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ModifyBone_5ED921214B65A800C2DDE8B350F3C9BE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ModifyBone_5ED921214B65A800C2DDE8B350F3C9BE");
		
		ULystrosaurus_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ModifyBone_5ED921214B65A800C2DDE8B350F3C9BE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ControlRig_4F5E83C240BDD94F8C9050AC0571B968
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ControlRig_4F5E83C240BDD94F8C9050AC0571B968()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ControlRig_4F5E83C240BDD94F8C9050AC0571B968");
		
		ULystrosaurus_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_ControlRig_4F5E83C240BDD94F8C9050AC0571B968_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_F62446B0479AFACF635EBAA15B96A3E3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_F62446B0479AFACF635EBAA15B96A3E3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_F62446B0479AFACF635EBAA15B96A3E3");
		
		ULystrosaurus_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_F62446B0479AFACF635EBAA15B96A3E3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		ULystrosaurus_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		ULystrosaurus_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULystrosaurus_GroundConform_AnimBP_C::ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C.ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP");
		
		ULystrosaurus_GroundConform_AnimBP_C_ExecuteUbergraph_Lystrosaurus_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULystrosaurus_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULystrosaurus_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Lystrosaurus_GroundConform_AnimBP.Lystrosaurus_GroundConform_AnimBP_C");
		return ptr;
	}

}


