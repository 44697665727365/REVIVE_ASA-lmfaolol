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
	 * 		Name   -> Function Buff_SummoningSickness.Buff_SummoningSickness_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterHUD*                                 HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrawScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_SummoningSickness_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SummoningSickness.Buff_SummoningSickness_C.DrawBuffFloatingHUD");
		
		ABuff_SummoningSickness_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
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
	 * 		Name   -> Function Buff_SummoningSickness.Buff_SummoningSickness_C.BPPreventAddingOtherBuff
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      anotherBuffClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool ABuff_SummoningSickness_C::BPPreventAddingOtherBuff(class UClass* anotherBuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SummoningSickness.Buff_SummoningSickness_C.BPPreventAddingOtherBuff");
		
		ABuff_SummoningSickness_C_BPPreventAddingOtherBuff_Params params {};
		params.anotherBuffClass = anotherBuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_SummoningSickness.Buff_SummoningSickness_C.BPPreSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_SummoningSickness_C::BPPreSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SummoningSickness.Buff_SummoningSickness_C.BPPreSetupForInstigator");
		
		ABuff_SummoningSickness_C_BPPreSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_SummoningSickness.Buff_SummoningSickness_C.BuffAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TheDamageCauser                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      TheDamgeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	float ABuff_SummoningSickness_C::BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SummoningSickness.Buff_SummoningSickness_C.BuffAdjustDamage");
		
		ABuff_SummoningSickness_C_BuffAdjustDamage_Params params {};
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
	 * 		Name   -> PredefinedFunction ABuff_SummoningSickness_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SummoningSickness_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SummoningSickness.Buff_SummoningSickness_C");
		return ptr;
	}

}


