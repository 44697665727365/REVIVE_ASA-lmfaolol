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
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UDinoBlueprintBase_Climber_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.AnimGraph");
		
		UDinoBlueprintBase_Climber_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.IsDinoRunning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_Climber_C*                Dino                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Running                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::IsDinoRunning(class ADino_Character_BP_Climber_C* Dino, bool* Running)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.IsDinoRunning");
		
		UDinoBlueprintBase_Climber_C_IsDinoRunning_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Running != nullptr)
			*Running = params.Running;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.GetStrafeBlendspacePlayRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ForwardVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RightVelocity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BlendspaceInputs                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             BlendspacePlayRate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::GetStrafeBlendspacePlayRate(double ForwardVelocity, double RightVelocity, const struct FVector2D& BlendspaceInputs, double* BlendspacePlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.GetStrafeBlendspacePlayRate");
		
		UDinoBlueprintBase_Climber_C_GetStrafeBlendspacePlayRate_Params params {};
		params.ForwardVelocity = ForwardVelocity;
		params.RightVelocity = RightVelocity;
		params.BlendspaceInputs = BlendspaceInputs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendspacePlayRate != nullptr)
			*BlendspacePlayRate = params.BlendspacePlayRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.ShouldPlayClimbRunAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               PlayClimbRun                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::ShouldPlayClimbRunAnim(bool* PlayClimbRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.ShouldPlayClimbRunAnim");
		
		UDinoBlueprintBase_Climber_C_ShouldPlayClimbRunAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayClimbRun != nullptr)
			*PlayClimbRun = params.PlayClimbRun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.Update Climber Anim Vars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_Climber_C*                ClimberRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::UpdateClimberAnimVars(class ADino_Character_BP_Climber_C* ClimberRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.Update Climber Anim Vars");
		
		UDinoBlueprintBase_Climber_C_UpdateClimberAnimVars_Params params {};
		params.ClimberRef = ClimberRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_Climber_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_LinkedAnimGraph_4B46153B4A19C46DEFA720BE3B51FD3B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_LinkedAnimGraph_4B46153B4A19C46DEFA720BE3B51FD3B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_LinkedAnimGraph_4B46153B4A19C46DEFA720BE3B51FD3B");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_LinkedAnimGraph_4B46153B4A19C46DEFA720BE3B51FD3B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_Climber_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintInitializeAnimation");
		
		UDinoBlueprintBase_Climber_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_Climber_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1");
		
		UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.ExecuteUbergraph_DinoBlueprintBase_Climber
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoBlueprintBase_Climber_C::ExecuteUbergraph_DinoBlueprintBase_Climber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.ExecuteUbergraph_DinoBlueprintBase_Climber");
		
		UDinoBlueprintBase_Climber_C_ExecuteUbergraph_DinoBlueprintBase_Climber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_Climber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_Climber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C");
		return ptr;
	}

}


