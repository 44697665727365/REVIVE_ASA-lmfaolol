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
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASarco_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPCanBeBaseForCharacter");
		
		ASarco_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASarco_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetGravityZScale");
		
		ASarco_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.TriggerLungeImpulse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::TriggerLungeImpulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.TriggerLungeImpulse");
		
		ASarco_Character_BP_C_TriggerLungeImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      newMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      newCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode newMovementMode, unsigned char PrevCustomMode, unsigned char newCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.K2_OnMovementModeChanged");
		
		ASarco_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.newMovementMode = newMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.newCustomMode = newCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPNotifyBumpedPawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BumpedPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPNotifyBumpedPawn");
		
		ASarco_Character_BP_C_BPNotifyBumpedPawn_Params params {};
		params.BumpedPawn = BumpedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Gravity                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ASarco_Character_BP_C::BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPOverrideCharacterNewFallVelocity");
		
		ASarco_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params params {};
		params.InitialVelocity = InitialVelocity;
		params.Gravity = Gravity;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASarco_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetCrosshairAlpha");
		
		ASarco_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ASarco_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPAllowCarryCharacter");
		
		ASarco_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.Compute Allow Carry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Allow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::ComputeAllowCarry(class APrimalCharacter* Target, bool* Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.Compute Allow Carry");
		
		ASarco_Character_BP_C_ComputeAllowCarry_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allow != nullptr)
			*Allow = params.Allow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASarco_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ASarco_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ASarco_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.BPAdjustAttackIndex");
		
		ASarco_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.ComputeAttackIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndexIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AttackIndexOut                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::ComputeAttackIndex(int32_t AttackIndexIn, int32_t* AttackIndexOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.ComputeAttackIndex");
		
		ASarco_Character_BP_C_ComputeAttackIndex_Params params {};
		params.AttackIndexIn = AttackIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackIndexOut != nullptr)
			*AttackIndexOut = params.AttackIndexOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_2");
		
		ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_1");
		
		ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_TurnForAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::AnimNotify_TurnForAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_TurnForAttack");
		
		ASarco_Character_BP_C_AnimNotify_TurnForAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.RotateAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::RotateAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.RotateAttack");
		
		ASarco_Character_BP_C_RotateAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_AttackTurnFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::AnimNotify_AttackTurnFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_AttackTurnFinished");
		
		ASarco_Character_BP_C_AnimNotify_AttackTurnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Lunge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::AnimNotify_Lunge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Lunge");
		
		ASarco_Character_BP_C_AnimNotify_Lunge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.RequestLunge
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      LungeTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::RequestLunge(class AActor* LungeTarget, double Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.RequestLunge");
		
		ASarco_Character_BP_C_RequestLunge_Params params {};
		params.LungeTarget = LungeTarget;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.UpdateCrosshair
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::UpdateCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.UpdateCrosshair");
		
		ASarco_Character_BP_C_UpdateCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Roll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_C::AnimNotify_Roll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Roll");
		
		ASarco_Character_BP_C_AnimNotify_Roll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Sarco_Character_BP.Sarco_Character_BP_C.ExecuteUbergraph_Sarco_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASarco_Character_BP_C::ExecuteUbergraph_Sarco_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP.Sarco_Character_BP_C.ExecuteUbergraph_Sarco_Character_BP");
		
		ASarco_Character_BP_C_ExecuteUbergraph_Sarco_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASarco_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASarco_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sarco_Character_BP.Sarco_Character_BP_C");
		return ptr;
	}

}


