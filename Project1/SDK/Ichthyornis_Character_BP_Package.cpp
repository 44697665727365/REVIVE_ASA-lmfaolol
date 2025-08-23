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
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AIchthyornis_Character_BP_C::BPClientHandleNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand");
		
		AIchthyornis_Character_BP_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::IsOverweightThreshold_F(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F");
		
		AIchthyornis_Character_BP_C_IsOverweightThreshold_F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              originalQuantity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      resourceSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	float AIchthyornis_Character_BP_C::BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity");
		
		AIchthyornis_Character_BP_C_BPModifyHarvestingQuantity_Params params {};
		params.originalQuantity = originalQuantity;
		params.resourceSelected = resourceSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               shouldntAttack                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CheckWeightCondition(class APrimalCharacter* Target, bool* shouldntAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition");
		
		AIchthyornis_Character_BP_C_CheckWeightCondition_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shouldntAttack != nullptr)
			*shouldntAttack = params.shouldntAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            WithPreviousCarriedCharacter                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* WithPreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter");
		
		AIchthyornis_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.WithPreviousCarriedCharacter = WithPreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::RemoveDragWeightIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded");
		
		AIchthyornis_Character_BP_C_RemoveDragWeightIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               goBackToOwner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CancelAttack(bool goBackToOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack");
		
		AIchthyornis_Character_BP_C_CancelAttack_Params params {};
		params.goBackToOwner = goBackToOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            aggressionState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDinoTamedOrder                                    tamedOrder                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::GetTamedOrderFromAggressionState(int32_t aggressionState, EDinoTamedOrder* tamedOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState");
		
		AIchthyornis_Character_BP_C_GetTamedOrderFromAggressionState_Params params {};
		params.aggressionState = aggressionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tamedOrder != nullptr)
			*tamedOrder = params.tamedOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino");
		
		AIchthyornis_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::OnCancelledAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack");
		
		AIchthyornis_Character_BP_C_OnCancelledAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::SetLastPlayerOrder(class APawn* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder");
		
		AIchthyornis_Character_BP_C_SetLastPlayerOrder_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFailedLaunch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::StartGoBackToOwner(bool isFailedLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner");
		
		AIchthyornis_Character_BP_C_StartGoBackToOwner_Params params {};
		params.isFailedLaunch = isFailedLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::DisableLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing");
		
		AIchthyornis_Character_BP_C_DisableLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            attackStage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             backToOwnerRadius                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isFailedLaunch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::SetAttackStage(int32_t attackStage, double backToOwnerRadius, bool isFailedLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage");
		
		AIchthyornis_Character_BP_C_SetAttackStage_Params params {};
		params.attackStage = attackStage;
		params.backToOwnerRadius = backToOwnerRadius;
		params.isFailedLaunch = isFailedLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::AllowLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding");
		
		AIchthyornis_Character_BP_C_AllowLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            aggressionState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::SetAggressionState(int32_t aggressionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State");
		
		AIchthyornis_Character_BP_C_SetAggressionState_Params params {};
		params.aggressionState = aggressionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceFinish                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::FinishAttack(bool forceFinish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack");
		
		AIchthyornis_Character_BP_C_FinishAttack_Params params {};
		params.forceFinish = forceFinish;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::OnDeadPreyActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions");
		
		AIchthyornis_Character_BP_C_OnDeadPreyActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::GoingBacktoOwnerActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions");
		
		AIchthyornis_Character_BP_C_GoingBacktoOwnerActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::DivingActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions");
		
		AIchthyornis_Character_BP_C_DivingActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed");
		
		AIchthyornis_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            killedCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ImproveHarvestingComponentforDraggedCharacter(class APrimalCharacter* killedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character");
		
		AIchthyornis_Character_BP_C_ImproveHarvestingComponentforDraggedCharacter_Params params {};
		params.killedCharacter = killedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            killedTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter* killedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent");
		
		AIchthyornis_Character_BP_C_BPKilledSomethingEvent_Params params {};
		params.killedTarget = killedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::SetTargetForLaunchedAttack(class APrimalCharacter* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack");
		
		AIchthyornis_Character_BP_C_SetTargetForLaunchedAttack_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            launchedTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DoLaunchAttack(class APrimalCharacter* launchedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack");
		
		AIchthyornis_Character_BP_C_DoLaunchAttack_Params params {};
		params.launchedTarget = launchedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		EDinoTamedOrder                                    OrderType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      enemyTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               orderNotExecuted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder");
		
		AIchthyornis_Character_BP_C_BPOnTamedProcessOrder_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Owner                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::GetOwnerCharacter(class APawn** Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter");
		
		AIchthyornis_Character_BP_C_GetOwnerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Owner != nullptr)
			*Owner = params.Owner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDinoTamedOrder                                    overrideTamedMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               useTameModeOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ClearFocusAndAggression(EDinoTamedOrder overrideTamedMode, bool useTameModeOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression");
		
		AIchthyornis_Character_BP_C_ClearFocusAndAggression_Params params {};
		params.overrideTamedMode = overrideTamedMode;
		params.useTameModeOverride = useTameModeOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::StartLaunchAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack");
		
		AIchthyornis_Character_BP_C_StartLaunchAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               disableLaunchVariable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ClearLaunchedThrow(bool disableLaunchVariable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw");
		
		AIchthyornis_Character_BP_C_ClearLaunchedThrow_Params params {};
		params.disableLaunchVariable = disableLaunchVariable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterToDrag                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AIchthyornis_Character_BP_C::BPCanAutodrag(class APrimalCharacter* characterToDrag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag");
		
		AIchthyornis_Character_BP_C_BPCanAutodrag_Params params {};
		params.characterToDrag = characterToDrag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::SpawnWaterEffectsIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded");
		
		AIchthyornis_Character_BP_C_SpawnWaterEffectsIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::UpdateDamageFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag");
		
		AIchthyornis_Character_BP_C_UpdateDamageFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isWaterOrAmph                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::IsWaterDinoorSwimmingAmphibious(class APrimalCharacter* Pawn, bool* isWaterOrAmph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious");
		
		AIchthyornis_Character_BP_C_IsWaterDinoorSwimmingAmphibious_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isWaterOrAmph != nullptr)
			*isWaterOrAmph = params.isWaterOrAmph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanStealFromCharacter(class APrimalCharacter* Character, bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter");
		
		AIchthyornis_Character_BP_C_CanStealFromCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::OnOwnerReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached");
		
		AIchthyornis_Character_BP_C_OnOwnerReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::PreDiveDownRotationActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions");
		
		AIchthyornis_Character_BP_C_PreDiveDownRotationActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::UseEmergencyDiveUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp");
		
		AIchthyornis_Character_BP_C_UseEmergencyDiveUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanUseBiteAttack(class APrimalCharacter* Target, bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack");
		
		AIchthyornis_Character_BP_C_CanUseBiteAttack_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LaunchVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bXYOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bZOverride                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched");
		
		AIchthyornis_Character_BP_C_OnLaunched_Params params {};
		params.LaunchVelocity = LaunchVelocity;
		params.bXYOverride = bXYOverride;
		params.bZOverride = bZOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped");
		
		AIchthyornis_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::GetDiveDownDelay(double* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay");
		
		AIchthyornis_Character_BP_C_GetDiveDownDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AIchthyornis_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stopTimerServer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::OnClearCarriedCharacter(bool stopTimerServer, class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter");
		
		AIchthyornis_Character_BP_C_OnClearCarriedCharacter_Params params {};
		params.stopTimerServer = stopTimerServer;
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canDoAttack                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanUseWildDive(class APrimalCharacter* Target, bool* canDoAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive");
		
		AIchthyornis_Character_BP_C_CanUseWildDive_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canDoAttack != nullptr)
			*canDoAttack = params.canDoAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canUseAttack                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanUseDiveAttack(class APrimalCharacter* Target, bool* canUseAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack");
		
		AIchthyornis_Character_BP_C_CanUseDiveAttack_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canUseAttack != nullptr)
			*canUseAttack = params.canUseAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ApplyChewDamage(double Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage");
		
		AIchthyornis_Character_BP_C_ApplyChewDamage_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceSetState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::SetDivingState(int32_t NewState, bool forceSetState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState");
		
		AIchthyornis_Character_BP_C_SetDivingState_Params params {};
		params.NewState = NewState;
		params.forceSetState = forceSetState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::OnRep_divingStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus");
		
		AIchthyornis_Character_BP_C_OnRep_divingStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino");
		
		AIchthyornis_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               couldSteal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::UnequipOrSteal(class APrimalCharacter* Character, bool* couldSteal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal");
		
		AIchthyornis_Character_BP_C_UnequipOrSteal_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (couldSteal != nullptr)
			*couldSteal = params.couldSteal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               changeToNextMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               onlyUpdateOffsets                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ChangeHuntingMode(int32_t NewMode, bool changeToNextMode, bool onlyUpdateOffsets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode");
		
		AIchthyornis_Character_BP_C_ChangeHuntingMode_Params params {};
		params.NewMode = NewMode;
		params.changeToNextMode = changeToNextMode;
		params.onlyUpdateOffsets = onlyUpdateOffsets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PrimalCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanUseGrabAttack(class APrimalCharacter* PrimalCharacter, bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack");
		
		AIchthyornis_Character_BP_C_CanUseGrabAttack_Params params {};
		params.PrimalCharacter = PrimalCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::RemoveWeapon(class APrimalCharacter* Owner, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon");
		
		AIchthyornis_Character_BP_C_RemoveWeapon_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::RemoveHelmet(class APrimalCharacter* Owner, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet");
		
		AIchthyornis_Character_BP_C_RemoveHelmet_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isFoodItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canSteal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanStealItem(class UPrimalItem* Item, bool isFoodItem, bool* canSteal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem");
		
		AIchthyornis_Character_BP_C_CanStealItem_Params params {};
		params.Item = Item;
		params.isFoodItem = isFoodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSteal != nullptr)
			*canSteal = params.canSteal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CharacterToStealFrom                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimalItem*                                 itemToSteal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DoStealItem(class APrimalCharacter* CharacterToStealFrom, class UPrimalItem* itemToSteal, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem");
		
		AIchthyornis_Character_BP_C_DoStealItem_Params params {};
		params.CharacterToStealFrom = CharacterToStealFrom;
		params.itemToSteal = itemToSteal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               stoleFood                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::TryToStealFoodItem(class APrimalCharacter* Character, int32_t NumItems, bool* stoleFood)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem");
		
		AIchthyornis_Character_BP_C_TryToStealFoodItem_Params params {};
		params.Character = Character;
		params.NumItems = NumItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stoleFood != nullptr)
			*stoleFood = params.stoleFood;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage");
		
		AIchthyornis_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::CarryingLivePreyActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions");
		
		AIchthyornis_Character_BP_C_CarryingLivePreyActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     offsetFromCurrentLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::RotateZToPoint(const struct FVector& offsetFromCurrentLocation, double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point");
		
		AIchthyornis_Character_BP_C_RotateZToPoint_Params params {};
		params.offsetFromCurrentLocation = offsetFromCurrentLocation;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::OnCarriedCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter");
		
		AIchthyornis_Character_BP_C_OnCarriedCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::StartFollowPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player");
		
		AIchthyornis_Character_BP_C_StartFollowPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrawScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AIchthyornis_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	TArray<struct FMultiUseEntry> AIchthyornis_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries");
		
		AIchthyornis_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		params.MultiUseEntries = MultiUseEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AIchthyornis_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse");
		
		AIchthyornis_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AIchthyornis_Character_BP_C::BPCanDragCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter");
		
		AIchthyornis_Character_BP_C_BPCanDragCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OriginalDamageAmount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AIchthyornis_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AIchthyornis_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer");
		
		AIchthyornis_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            WithPreviousCarriedCharacter                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* WithPreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter");
		
		AIchthyornis_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.WithPreviousCarriedCharacter = WithPreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             immersionDepth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Impulse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CalculateDiveUpImpulse(double immersionDepth, struct FVector* Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse");
		
		AIchthyornis_Character_BP_C_CalculateDiveUpImpulse_Params params {};
		params.immersionDepth = immersionDepth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impulse != nullptr)
			*Impulse = params.Impulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canGrab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanGrabPawn(class APawn* Pawn, bool* canGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn");
		
		AIchthyornis_Character_BP_C_CanGrabPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canGrab != nullptr)
			*canGrab = params.canGrab;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::RotateZtoTarget(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target");
		
		AIchthyornis_Character_BP_C_RotateZtoTarget_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CalculateDiveDownImpulse(struct FVector* Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse");
		
		AIchthyornis_Character_BP_C_CalculateDiveDownImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Impulse != nullptr)
			*Impulse = params.Impulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canDoAttack                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::CanUseRegularDive(class APrimalCharacter* Target, bool* canDoAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive");
		
		AIchthyornis_Character_BP_C_CanUseRegularDive_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canDoAttack != nullptr)
			*canDoAttack = params.canDoAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack");
		
		AIchthyornis_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              attackRangeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AIchthyornis_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack");
		
		AIchthyornis_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::RotationToTarget__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc");
		
		AIchthyornis_Character_BP_C_RotationToTarget__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::RotationToTarget__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc");
		
		AIchthyornis_Character_BP_C_RotationToTarget__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::DiveAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack");
		
		AIchthyornis_Character_BP_C_DiveAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::PreDiveDownActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions");
		
		AIchthyornis_Character_BP_C_PreDiveDownActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::StartDiveUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp");
		
		AIchthyornis_Character_BP_C_StartDiveUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::FinishDiveDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown");
		
		AIchthyornis_Character_BP_C_FinishDiveDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::PreDiveUpActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions");
		
		AIchthyornis_Character_BP_C_PreDiveUpActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::PostDiveUpActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions");
		
		AIchthyornis_Character_BP_C_PostDiveUpActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InitialRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIchthyornis_Character_BP_C::SlowlyRotateZTo(const struct FRotator& TargetRotation, double Time, const struct FRotator& InitialRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo");
		
		AIchthyornis_Character_BP_C_SlowlyRotateZTo_Params params {};
		params.TargetRotation = TargetRotation;
		params.Time = Time;
		params.InitialRotation = InitialRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               dropDragged                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               dropCarried                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               restoreFollowingVariables                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DropCarriedAfterTime(double Time, bool dropDragged, bool dropCarried, bool restoreFollowingVariables)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime");
		
		AIchthyornis_Character_BP_C_DropCarriedAfterTime_Params params {};
		params.Time = Time;
		params.dropDragged = dropDragged;
		params.dropCarried = dropCarried;
		params.restoreFollowingVariables = restoreFollowingVariables;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.dropCarried
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               dropDragged                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               dropCarried                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               restoreFollowingVariables                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::dropCarried(bool dropDragged, bool dropCarried, bool restoreFollowingVariables)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.dropCarried");
		
		AIchthyornis_Character_BP_C_dropCarried_Params params {};
		params.dropDragged = dropDragged;
		params.dropCarried = dropCarried;
		params.restoreFollowingVariables = restoreFollowingVariables;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::SpawnWaterParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles");
		
		AIchthyornis_Character_BP_C_SpawnWaterParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AIchthyornis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     beginning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DebugTrajectory_Multicast(const struct FVector& beginning, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast");
		
		AIchthyornis_Character_BP_C_DebugTrajectory_Multicast_Params params {};
		params.beginning = beginning;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     beginning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DebugTrajectory(const struct FVector& beginning, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory");
		
		AIchthyornis_Character_BP_C_DebugTrajectory_Params params {};
		params.beginning = beginning;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::FinishDiveUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp");
		
		AIchthyornis_Character_BP_C_FinishDiveUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::CheckForWaterEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects");
		
		AIchthyornis_Character_BP_C_CheckForWaterEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::ShowBag_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast");
		
		AIchthyornis_Character_BP_C_ShowBag_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::HideBag_Multicast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast");
		
		AIchthyornis_Character_BP_C_HideBag_Multicast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isDiving                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ShowBag(bool isDiving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag");
		
		AIchthyornis_Character_BP_C_ShowBag_Params params {};
		params.isDiving = isDiving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::EnablePendingEatAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim");
		
		AIchthyornis_Character_BP_C_EnablePendingEatAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::HarvestPreyAfterDelay(double Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay");
		
		AIchthyornis_Character_BP_C_HarvestPreyAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::SpawnVitaminEffects_Multicast(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast");
		
		AIchthyornis_Character_BP_C_SpawnVitaminEffects_Multicast_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     beginning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DebugTrajectorySphere_Multicast(const struct FVector& beginning, const struct FVector& End, double Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast");
		
		AIchthyornis_Character_BP_C_DebugTrajectorySphere_Multicast_Params params {};
		params.beginning = beginning;
		params.End = End;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     beginning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::DebugTrajectorySphere(const struct FVector& beginning, const struct FVector& End, double Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere");
		
		AIchthyornis_Character_BP_C_DebugTrajectorySphere_Params params {};
		params.beginning = beginning;
		params.End = End;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis");
		
		AIchthyornis_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay");
		
		AIchthyornis_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_Character_BP_C::InitializeLandingVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables");
		
		AIchthyornis_Character_BP_C_InitializeLandingVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::Debug_TorporAfterTime(double Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime");
		
		AIchthyornis_Character_BP_C_Debug_TorporAfterTime_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isFailedLaunch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::GoBackToOwnerAfterDelay(double Delay, bool isFailedLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay");
		
		AIchthyornis_Character_BP_C_GoBackToOwnerAfterDelay_Params params {};
		params.Delay = Delay;
		params.isFailedLaunch = isFailedLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_Character_BP_C::ExecuteUbergraph_Ichthyornis_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP");
		
		AIchthyornis_Character_BP_C_ExecuteUbergraph_Ichthyornis_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIchthyornis_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIchthyornis_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ichthyornis_Character_BP.Ichthyornis_Character_BP_C");
		return ptr;
	}

}


