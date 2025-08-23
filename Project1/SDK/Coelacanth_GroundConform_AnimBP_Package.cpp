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
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.AnimGraph");
		
		UCoelacanth_GroundConform_AnimBP_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ModifyBone_F0709FC14BAAF402DF12789A5C627997
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ModifyBone_F0709FC14BAAF402DF12789A5C627997()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ModifyBone_F0709FC14BAAF402DF12789A5C627997");
		
		UCoelacanth_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ModifyBone_F0709FC14BAAF402DF12789A5C627997_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_A6997BA94225581B89F421AF09DDE8D5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_A6997BA94225581B89F421AF09DDE8D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_A6997BA94225581B89F421AF09DDE8D5");
		
		UCoelacanth_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_A6997BA94225581B89F421AF09DDE8D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ControlRig_CB6FB3EE46817636D77C95B27FC98FD0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ControlRig_CB6FB3EE46817636D77C95B27FC98FD0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ControlRig_CB6FB3EE46817636D77C95B27FC98FD0");
		
		UCoelacanth_GroundConform_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_AnimGraphNode_ControlRig_CB6FB3EE46817636D77C95B27FC98FD0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.BlueprintUpdateAnimation");
		
		UCoelacanth_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.BlueprintInitializeAnimation");
		
		UCoelacanth_GroundConform_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.ExecuteUbergraph_Coelacanth_GroundConform_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoelacanth_GroundConform_AnimBP_C::ExecuteUbergraph_Coelacanth_GroundConform_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C.ExecuteUbergraph_Coelacanth_GroundConform_AnimBP");
		
		UCoelacanth_GroundConform_AnimBP_C_ExecuteUbergraph_Coelacanth_GroundConform_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoelacanth_GroundConform_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoelacanth_GroundConform_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Coelacanth_GroundConform_AnimBP.Coelacanth_GroundConform_AnimBP_C");
		return ptr;
	}

}


