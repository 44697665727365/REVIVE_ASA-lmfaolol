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
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             initialDesire                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             initialMultiplier                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             desire                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             desireMultiplier                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_AIController_BP_C::GetTargetingDesireTamed(class APrimalCharacter* Character, double initialDesire, double initialMultiplier, double* desire, double* desireMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed");
		
		AIchthyornis_AIController_BP_C_GetTargetingDesireTamed_Params params {};
		params.Character = Character;
		params.initialDesire = initialDesire;
		params.initialMultiplier = initialMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (desire != nullptr)
			*desire = params.desire;
		if (desireMultiplier != nullptr)
			*desireMultiplier = params.desireMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AIchthyornis_Character_BP_C*                 IchthyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_AIController_BP_C::StandardTargetChecks(class APrimalCharacter* Target, class AIchthyornis_Character_BP_C* IchthyPawn, bool* canTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks");
		
		AIchthyornis_AIController_BP_C_StandardTargetChecks_Params params {};
		params.Target = Target;
		params.IchthyPawn = IchthyPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canTarget != nullptr)
			*canTarget = params.canTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             initialDesire                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             initialMultiplier                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             desire                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_AIController_BP_C::GetTargetingDesireWild(class APrimalCharacter* Character, double initialDesire, double initialMultiplier, double* desire, double* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild");
		
		AIchthyornis_AIController_BP_C_GetTargetingDesireWild_Params params {};
		params.Character = Character;
		params.initialDesire = initialDesire;
		params.initialMultiplier = initialMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (desire != nullptr)
			*desire = params.desire;
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AIchthyornis_AIController_BP_C::GetAggroNotifyNeighborsRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange");
		
		AIchthyornis_AIController_BP_C_GetAggroNotifyNeighborsRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             targetingRange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_AIController_BP_C::GetTargetingRangeForPlayers(double* targetingRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers");
		
		AIchthyornis_AIController_BP_C_GetTargetingRangeForPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetingRange != nullptr)
			*targetingRange = params.targetingRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NotTooDeep                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIchthyornis_AIController_BP_C::DoDepthCheck(class APrimalCharacter* Character, bool* NotTooDeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck");
		
		AIchthyornis_AIController_BP_C_DoDepthCheck_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotTooDeep != nullptr)
			*NotTooDeep = params.NotTooDeep;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_AIController_BP_C::UpdateFlyingOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset");
		
		AIchthyornis_AIController_BP_C_UpdateFlyingOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_AIController_BP_C::UpdateCombatOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset");
		
		AIchthyornis_AIController_BP_C_UpdateCombatOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIchthyornis_AIController_BP_C::ChangedAITarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget");
		
		AIchthyornis_AIController_BP_C_ChangedAITarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ForTargetingDesireValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AIchthyornis_AIController_BP_C::BPGetTargetingDesire(class AActor* ForTarget, float ForTargetingDesireValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire");
		
		AIchthyornis_AIController_BP_C_BPGetTargetingDesire_Params params {};
		params.ForTarget = ForTarget;
		params.ForTargetingDesireValue = ForTargetingDesireValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIchthyornis_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIchthyornis_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C");
		return ptr;
	}

}


