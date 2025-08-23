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
	 * 		Name   -> Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TextToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UPrimalItem_WeaponTekCruiseMissile_C::BPProcessEditText(class AShooterPlayerController* ForPC, const class FString& TextToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText");
		
		UPrimalItem_WeaponTekCruiseMissile_C_BPProcessEditText_Params params {};
		params.ForPC = ForPC;
		params.TextToUse = TextToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<double>                                     Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPrimalItem_WeaponTekCruiseMissile_C::SetScoutCharacterStatusValues(TArray<double>* Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values");
		
		UPrimalItem_WeaponTekCruiseMissile_C_SetScoutCharacterStatusValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stats != nullptr)
			*Stats = params.Stats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               delayforzoomout                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_WeaponTekCruiseMissile_C::MissileReleasedPossessingSurvivor(bool delayforzoomout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor");
		
		UPrimalItem_WeaponTekCruiseMissile_C_MissileReleasedPossessingSurvivor_Params params {};
		params.delayforzoomout = delayforzoomout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponTekCruiseMissile_C::MissilePossessedbySurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor");
		
		UPrimalItem_WeaponTekCruiseMissile_C_MissilePossessedbySurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponTekCruiseMissile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponTekCruiseMissile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C");
		return ptr;
	}

}


