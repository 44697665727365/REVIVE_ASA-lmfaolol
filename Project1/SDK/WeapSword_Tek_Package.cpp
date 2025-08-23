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
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.DoAppliedDamageToTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ElementCostMultiplier                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DamageIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bExtraDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapSword_Tek_C::DoAppliedDamageToTarget(class AActor* DamageTarget, double ElementCostMultiplier, int32_t DamageIn, bool* bExtraDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.DoAppliedDamageToTarget");
		
		AWeapSword_Tek_C_DoAppliedDamageToTarget_Params params {};
		params.DamageTarget = DamageTarget;
		params.ElementCostMultiplier = ElementCostMultiplier;
		params.DamageIn = DamageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExtraDamage != nullptr)
			*bExtraDamage = params.bExtraDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.OnRep_HideWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::OnRep_HideWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.OnRep_HideWeapon");
		
		AWeapSword_Tek_C_OnRep_HideWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ElementCostMultiplier                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DamageIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bExtraDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapSword_Tek_C::AppliedDamageToTarget(class AActor* DamageTarget, double ElementCostMultiplier, int32_t DamageIn, bool* bExtraDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget");
		
		AWeapSword_Tek_C_AppliedDamageToTarget_Params params {};
		params.DamageTarget = DamageTarget;
		params.ElementCostMultiplier = ElementCostMultiplier;
		params.DamageIn = DamageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExtraDamage != nullptr)
			*bExtraDamage = params.bExtraDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ShootDir                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		float                                              Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t AWeapSword_Tek_C::BPWeaponDealDamage(const struct FHitResult& Impact, const struct FVector& ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage");
		
		AWeapSword_Tek_C_BPWeaponDealDamage_Params params {};
		params.Impact = Impact;
		params.ShootDir = ShootDir;
		params.DamageAmount = DamageAmount;
		params.DamageType = DamageType;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::BPStartEquippedNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify");
		
		AWeapSword_Tek_C_BPStartEquippedNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent");
		
		AWeapSword_Tek_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapSword_Tek_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick");
		
		AWeapSword_Tek_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::BPHandleMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack");
		
		AWeapSword_Tek_C_BPHandleMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::BPAppliedPrimalItemToWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon");
		
		AWeapSword_Tek_C_BPAppliedPrimalItemToWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript");
		
		AWeapSword_Tek_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::PlayAttackSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound");
		
		AWeapSword_Tek_C_PlayAttackSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapSword_Tek_C::NetDoPlayMeleeAttackSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound");
		
		AWeapSword_Tek_C_NetDoPlayMeleeAttackSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapSword_Tek_C::ExecuteUbergraph_WeapSword_Tek(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek");
		
		AWeapSword_Tek_C_ExecuteUbergraph_WeapSword_Tek_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapSword_Tek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapSword_Tek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C");
		return ptr;
	}

}


