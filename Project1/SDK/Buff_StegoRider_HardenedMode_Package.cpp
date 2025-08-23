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
	 * 		Name   -> Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TheDamageCauser                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      TheDamgeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	float ABuff_StegoRider_HardenedMode_C::BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C.BuffAdjustDamage");
		
		ABuff_StegoRider_HardenedMode_C_BuffAdjustDamage_Params params {};
		params.Damage = Damage;
		params.HitInfo = HitInfo;
		params.EventInstigator = EventInstigator;
		params.TheDamageCauser = TheDamageCauser;
		params.TheDamgeType = TheDamgeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_StegoRider_HardenedMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_StegoRider_HardenedMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C");
		return ptr;
	}

}


