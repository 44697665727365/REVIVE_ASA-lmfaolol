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
	 * 		Name   -> Function WeapBaseClub.WeapBaseClub_C.DoAppliedDamageToTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ElementCostMultiplier                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DamageIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bExtraDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapBaseClub_C::DoAppliedDamageToTarget(class AActor* DamageTarget, double ElementCostMultiplier, int32_t DamageIn, bool* bExtraDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapBaseClub.WeapBaseClub_C.DoAppliedDamageToTarget");
		
		AWeapBaseClub_C_DoAppliedDamageToTarget_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapBaseClub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapBaseClub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapBaseClub.WeapBaseClub_C");
		return ptr;
	}

}


