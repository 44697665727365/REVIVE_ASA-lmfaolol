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
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBaseHumanAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.AnimGraph");
		
		UBaseHumanAnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::UpdateCharacterCreatorValues(class AShooterCharacter* ShooterCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values");
		
		UBaseHumanAnimBP_C_UpdateCharacterCreatorValues_Params params {};
		params.ShooterCharacter = ShooterCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.Debug Leaning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::DebugLeaning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.Debug Leaning");
		
		UBaseHumanAnimBP_C_DebugLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.InterpLayeringValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::InterpLayeringValues(double DeltaTime, double InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.InterpLayeringValues");
		
		UBaseHumanAnimBP_C_InterpLayeringValues_Params params {};
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GetIKWorldInterpSpeed(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed");
		
		UBaseHumanAnimBP_C_GetIKWorldInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GroundIK(double DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK");
		
		UBaseHumanAnimBP_C_GroundIK_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::UpdatePoseLayering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering");
		
		UBaseHumanAnimBP_C_UpdatePoseLayering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GetLeanAmount(float DeltaTime, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount");
		
		UBaseHumanAnimBP_C_GetLeanAmount_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.IsPoseLayeringSlotActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::IsPoseLayeringSlotActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.IsPoseLayeringSlotActive");
		
		UBaseHumanAnimBP_C_IsPoseLayeringSlotActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim_Layering
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBaseHumanAnimBP_C::UpdateMoveAnim_Layering(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim_Layering");
		
		UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params params {};
		params.Context = Context;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::UpdateLayeringValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues");
		
		UBaseHumanAnimBP_C_UpdateLayeringValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::UpdateWeaponIKNonThreadSafe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe");
		
		UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::UpdateWeaponIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK");
		
		UBaseHumanAnimBP_C_UpdateWeaponIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	double UBaseHumanAnimBP_C::GetPredictedStopDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance");
		
		UBaseHumanAnimBP_C_GetPredictedStopDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBaseHumanAnimBP_C::ShouldDistanceMatchStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop");
		
		UBaseHumanAnimBP_C_ShouldDistanceMatchStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBaseHumanAnimBP_C::UpdateStopAnim(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim");
		
		UBaseHumanAnimBP_C_UpdateStopAnim_Params params {};
		params.Context = Context;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBaseHumanAnimBP_C::SetUpStopAnim(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim");
		
		UBaseHumanAnimBP_C_SetUpStopAnim_Params params {};
		params.Context = Context;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::UpdateAccelerationData(double DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData");
		
		UBaseHumanAnimBP_C_UpdateAccelerationData_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FAnimNodeReference                          Node                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBaseHumanAnimBP_C::UpdateMoveAnim(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim");
		
		UBaseHumanAnimBP_C_UpdateMoveAnim_Params params {};
		params.Context = Context;
		params.Node = Node;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::UpdateVelocityData(double DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData");
		
		UBaseHumanAnimBP_C_UpdateVelocityData_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation");
		
		UBaseHumanAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.SelectCardinalDirectionFromAngle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DeadZone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CardinalDirection4                               CurrentDirection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseCurrentDirection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CardinalDirection4                               Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::SelectCardinalDirectionFromAngle(double Angle, double DeadZone, E_CardinalDirection4 CurrentDirection, bool UseCurrentDirection, E_CardinalDirection4* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.SelectCardinalDirectionFromAngle");
		
		UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params params {};
		params.Angle = Angle;
		params.DeadZone = DeadZone;
		params.CurrentDirection = CurrentDirection;
		params.UseCurrentDirection = UseCurrentDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GliderSuit_CalcBlendspaceAxes(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes");
		
		UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::UpdateGliderSuitVars(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars");
		
		UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GliderSuit_CalcAimOffsets(class AShooterCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets");
		
		UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMovementComponent*                          MovementComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double UBaseHumanAnimBP_C::MapVelocityToBlendSpace(class UMovementComponent* MovementComponent, const struct FVector& Vector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace");
		
		UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params params {};
		params.MovementComponent = MovementComponent;
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimSequence*                               AnimSeqIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               AnimSeqOut                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GetCharSequenceNew(class UAnimSequence* AnimSeqIn, class UAnimSequence** AnimSeqOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew");
		
		UBaseHumanAnimBP_C_GetCharSequenceNew_Params params {};
		params.AnimSeqIn = AnimSeqIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimSeqOut != nullptr)
			*AnimSeqOut = params.AnimSeqOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                MontageIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                MontageOut                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::GetCharMontageNew(class UAnimMontage* MontageIn, class UAnimMontage** MontageOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew");
		
		UBaseHumanAnimBP_C_GetCharMontageNew_Params params {};
		params.MontageIn = MontageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MontageOut != nullptr)
			*MontageOut = params.MontageOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StartPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, bool bPauseOnFinish, float StartPosition, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent");
		
		UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PawnOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RootLocationOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::UpdateBotAnimation(class APawn* PawnOwner, double DeltaTime, const struct FVector& RootLocationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation");
		
		UBaseHumanAnimBP_C_UpdateBotAnimation_Params params {};
		params.PawnOwner = PawnOwner;
		params.DeltaTime = DeltaTime;
		params.RootLocationOffset = RootLocationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation");
		
		UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintInitializeAnimation");
		
		UBaseHumanAnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.OnCharacterStepped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PrevLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::OnCharacterStepped(const struct FVector& PrevLocation, const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.OnCharacterStepped");
		
		UBaseHumanAnimBP_C_OnCharacterStepped_Params params {};
		params.PrevLocation = PrevLocation;
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C");
		
		UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseHumanAnimBP_C::ExecuteUbergraph_BaseHumanAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP");
		
		UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BaseHumanAnimBP.BaseHumanAnimBP_C.NewEventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBaseHumanAnimBP_C::NewEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHumanAnimBP.BaseHumanAnimBP_C.NewEventDispatcher__DelegateSignature");
		
		UBaseHumanAnimBP_C_NewEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseHumanAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseHumanAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseHumanAnimBP.BaseHumanAnimBP_C");
		return ptr;
	}

}


