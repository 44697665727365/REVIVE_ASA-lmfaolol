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
	 * 		Name   -> Function FL_CharMeetsRequirements.FL_CharMeetsRequirements_C.Debug Failures
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      failreason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_CharMeetsRequirements_C::DebugFailures(const class FString& failreason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_CharMeetsRequirements.FL_CharMeetsRequirements_C.Debug Failures");
		
		UFL_CharMeetsRequirements_C_DebugFailures_Params params {};
		params.failreason = failreason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_CharMeetsRequirements.FL_CharMeetsRequirements_C.HasEnemyTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        PrimalDino                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFL_CharMeetsRequirements_C::HasEnemyTarget(class APrimalDinoCharacter* PrimalDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_CharMeetsRequirements.FL_CharMeetsRequirements_C.HasEnemyTarget");
		
		UFL_CharMeetsRequirements_C_HasEnemyTarget_Params params {};
		params.PrimalDino = PrimalDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_CharMeetsRequirements.FL_CharMeetsRequirements_C.Is Character Is Not Restricted By Conditions?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldRestrictIfDead                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldRestrictIfAsleep                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfHasEnemyTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfFollowing                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfWild                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CreatureShouldRestrictIfRidden                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanGrab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasdead                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasasleep                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonhadenemy                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasfollowing                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwaswild                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               failurereasonwasridden                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_CharMeetsRequirements_C::IsCharacterIsNotRestrictedByConditions(class APrimalCharacter* Character, bool ShouldRestrictIfDead, bool ShouldRestrictIfAsleep, bool CreatureShouldRestrictIfHasEnemyTarget, bool CreatureShouldRestrictIfFollowing, bool CreatureShouldRestrictIfWild, bool CreatureShouldRestrictIfRidden, bool* CanGrab, bool* failurereasonwasdead, bool* failurereasonwasasleep, bool* failurereasonhadenemy, bool* failurereasonwasfollowing, bool* failurereasonwaswild, bool* failurereasonwasridden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_CharMeetsRequirements.FL_CharMeetsRequirements_C.Is Character Is Not Restricted By Conditions?");
		
		UFL_CharMeetsRequirements_C_IsCharacterIsNotRestrictedByConditions_Params params {};
		params.Character = Character;
		params.ShouldRestrictIfDead = ShouldRestrictIfDead;
		params.ShouldRestrictIfAsleep = ShouldRestrictIfAsleep;
		params.CreatureShouldRestrictIfHasEnemyTarget = CreatureShouldRestrictIfHasEnemyTarget;
		params.CreatureShouldRestrictIfFollowing = CreatureShouldRestrictIfFollowing;
		params.CreatureShouldRestrictIfWild = CreatureShouldRestrictIfWild;
		params.CreatureShouldRestrictIfRidden = CreatureShouldRestrictIfRidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanGrab != nullptr)
			*CanGrab = params.CanGrab;
		if (failurereasonwasdead != nullptr)
			*failurereasonwasdead = params.failurereasonwasdead;
		if (failurereasonwasasleep != nullptr)
			*failurereasonwasasleep = params.failurereasonwasasleep;
		if (failurereasonhadenemy != nullptr)
			*failurereasonhadenemy = params.failurereasonhadenemy;
		if (failurereasonwasfollowing != nullptr)
			*failurereasonwasfollowing = params.failurereasonwasfollowing;
		if (failurereasonwaswild != nullptr)
			*failurereasonwaswild = params.failurereasonwaswild;
		if (failurereasonwasridden != nullptr)
			*failurereasonwasridden = params.failurereasonwasridden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_CharMeetsRequirements_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_CharMeetsRequirements_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FL_CharMeetsRequirements.FL_CharMeetsRequirements_C");
		return ptr;
	}

}


