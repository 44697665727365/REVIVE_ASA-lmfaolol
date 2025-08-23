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
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UOviraptor__GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.AnimGraph");
		
		UOviraptor__GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B51234B3423D1EF59152A882394C06FD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOviraptor__GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B51234B3423D1EF59152A882394C06FD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B51234B3423D1EF59152A882394C06FD");
		
		UOviraptor__GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_B51234B3423D1EF59152A882394C06FD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ControlRig_648FCB5D45B37F73C642D7972D16651A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOviraptor__GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ControlRig_648FCB5D45B37F73C642D7972D16651A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ControlRig_648FCB5D45B37F73C642D7972D16651A");
		
		UOviraptor__GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ControlRig_648FCB5D45B37F73C642D7972D16651A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_LayeredBoneBlend_A7E701E9417BCC410AB742B829BF163A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOviraptor__GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_LayeredBoneBlend_A7E701E9417BCC410AB742B829BF163A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_LayeredBoneBlend_A7E701E9417BCC410AB742B829BF163A");
		
		UOviraptor__GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_LayeredBoneBlend_A7E701E9417BCC410AB742B829BF163A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOviraptor__GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UOviraptor__GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DB7703DF406CAA5414C578A9A0BE40C2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOviraptor__GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DB7703DF406CAA5414C578A9A0BE40C2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DB7703DF406CAA5414C578A9A0BE40C2");
		
		UOviraptor__GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ApplyAdditive_DB7703DF406CAA5414C578A9A0BE40C2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ModifyBone_627D4E794EDE26485CCA4E8B6E78AAD0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOviraptor__GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ModifyBone_627D4E794EDE26485CCA4E8B6E78AAD0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ModifyBone_627D4E794EDE26485CCA4E8B6E78AAD0");
		
		UOviraptor__GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_AnimGraphNode_ModifyBone_627D4E794EDE26485CCA4E8B6E78AAD0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UOviraptor__GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UOviraptor__GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.ExecuteUbergraph_Oviraptor__GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOviraptor__GroundConform_AnimBP_C::ExecuteUbergraph_Oviraptor__GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C.ExecuteUbergraph_Oviraptor__GroundConform_AnimBP");
		
		UOviraptor__GroundConform_AnimBP_C_ExecuteUbergraph_Oviraptor__GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOviraptor__GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOviraptor__GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Oviraptor__GroundConform_AnimBP.Oviraptor__GroundConform_AnimBP_C");
		return ptr;
	}

}


