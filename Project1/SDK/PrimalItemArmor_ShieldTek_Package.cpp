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
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPClientHandleItemNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_ShieldTek_C::BPClientHandleItemNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPClientHandleItemNetExecCommand");
		
		UPrimalItemArmor_ShieldTek_C_BPClientHandleItemNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.PlayHitShieldEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLocalOnly                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemArmor_ShieldTek_C::PlayHitShieldEffect(bool bLocalOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.PlayHitShieldEffect");
		
		UPrimalItemArmor_ShieldTek_C_PlayHitShieldEffect_Params params {};
		params.bLocalOnly = bLocalOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPConsumeProjectileImpact
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          TheProjectile                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool UPrimalItemArmor_ShieldTek_C::BPConsumeProjectileImpact(class AShooterProjectile* TheProjectile, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPConsumeProjectileImpact");
		
		UPrimalItemArmor_ShieldTek_C_BPConsumeProjectileImpact_Params params {};
		params.TheProjectile = TheProjectile;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPAddedAttachments
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ShieldTek_C::BPAddedAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPAddedAttachments");
		
		UPrimalItemArmor_ShieldTek_C_BPAddedAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.RefreshAmmoMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ShieldTek_C::RefreshAmmoMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.RefreshAmmoMaterial");
		
		UPrimalItemArmor_ShieldTek_C_RefreshAmmoMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ClientUpdatedWeaponClipAmmo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemArmor_ShieldTek_C::ClientUpdatedWeaponClipAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ClientUpdatedWeaponClipAmmo");
		
		UPrimalItemArmor_ShieldTek_C_ClientUpdatedWeaponClipAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.HandleShieldDamageBlocking
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForShooterCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitPoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UPrimalItemArmor_ShieldTek_C::HandleShieldDamageBlocking(class AShooterCharacter* ForShooterCharacter, float DamageIn, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FVector& HitPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.HandleShieldDamageBlocking");
		
		UPrimalItemArmor_ShieldTek_C_HandleShieldDamageBlocking_Params params {};
		params.ForShooterCharacter = ForShooterCharacter;
		params.DamageIn = DamageIn;
		params.DamageEvent = DamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.HitPoint = HitPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_ShieldTek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_ShieldTek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C");
		return ptr;
	}

}


