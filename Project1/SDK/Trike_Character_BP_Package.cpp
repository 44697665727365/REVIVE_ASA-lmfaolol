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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::StopRamAttackBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Stop Ram Attack Buildup");
		
		ATrike_Character_BP_C_StopRamAttackBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::GetRammingSpeedMax(double* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.GetRammingSpeedMax");
		
		ATrike_Character_BP_C_GetRammingSpeedMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::CanTickStartedRam(bool* Tick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CanTickStartedRam");
		
		ATrike_Character_BP_C_CanTickStartedRam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tick != nullptr)
			*Tick = params.Tick;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::StartRamAttackBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Start Ram Attack Buildup");
		
		ATrike_Character_BP_C_StartRamAttackBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATrike_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllowedToRam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::CanStartRamAttack(bool* AllowedToRam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CanStartRamAttack");
		
		ATrike_Character_BP_C_CanStartRamAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedToRam != nullptr)
			*AllowedToRam = params.AllowedToRam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATrike_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ATrike_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             RamBuildupTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RamDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::HandleRamStarted(double RamBuildupTime, double RamDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Started");
		
		ATrike_Character_BP_C_HandleRamStarted_Params params {};
		params.RamBuildupTime = RamBuildupTime;
		params.RamDuration = RamDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HitSomething                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::HandleRamEnded(bool HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Handle Ram Ended");
		
		ATrike_Character_BP_C_HandleRamEnded_Params params {};
		params.HitSomething = HitSomething;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             HoldTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::CalculateRamDuration(double HoldTime, double* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.Calculate Ram Duration");
		
		ATrike_Character_BP_C_CalculateRamDuration_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATrike_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanRiderAttack");
		
		ATrike_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATrike_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ATrike_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATrike_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPHandleOnStopTargeting");
		
		ATrike_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATrike_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		ATrike_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              attackRangeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATrike_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BlueprintCanAttack");
		
		ATrike_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         AsPrimitiveComponent                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::GetPawnRootComponent(class AActor* Target, class UPrimitiveComponent** AsPrimitiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.GetPawnRootComponent");
		
		ATrike_Character_BP_C_GetPawnRootComponent_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPrimitiveComponent != nullptr)
			*AsPrimitiveComponent = params.AsPrimitiveComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPointDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  PointHitInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	float ATrike_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BPAdjustDamage");
		
		ATrike_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       DamageTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::DoReflectDamage(class APawn* DamageTarget, double Damage, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.DoReflectDamage");
		
		ATrike_Character_BP_C_DoReflectDamage_Params params {};
		params.DamageTarget = DamageTarget;
		params.Damage = Damage;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        FromBone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::MulticastReflectDamageEffect(const class FName& FromBone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.MulticastReflectDamageEffect");
		
		ATrike_Character_BP_C_MulticastReflectDamageEffect_Params params {};
		params.FromBone = FromBone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.ReceiveBeginPlay");
		
		ATrike_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::CheckRivalryTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.CheckRivalryTick");
		
		ATrike_Character_BP_C_CheckRivalryTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::RamBuildupEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.RamBuildupEndEvent");
		
		ATrike_Character_BP_C_RamBuildupEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrike_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.BP_OnJumpPressed");
		
		ATrike_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrike_Character_BP_C::ExecuteUbergraph_Trike_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Trike_Character_BP.Trike_Character_BP_C.ExecuteUbergraph_Trike_Character_BP");
		
		ATrike_Character_BP_C_ExecuteUbergraph_Trike_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrike_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrike_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Trike_Character_BP.Trike_Character_BP_C");
		return ptr;
	}

}


