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
	 * 		Name   -> Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerState*                         ForPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalPlayerDataBP_C::BPAppliedToPlayerState(class AShooterPlayerState* ForPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState");
		
		UPrimalPlayerDataBP_C_BPAppliedToPlayerState_Params params {};
		params.ForPlayerState = ForPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerState*                         ForPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalPlayerDataBP_C::BPApplyToPlayerCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter");
		
		UPrimalPlayerDataBP_C_BPApplyToPlayerCharacter_Params params {};
		params.ForPlayerState = ForPlayerState;
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalPlayerDataBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalPlayerDataBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataBP.PrimalPlayerDataBP_C");
		return ptr;
	}

}


