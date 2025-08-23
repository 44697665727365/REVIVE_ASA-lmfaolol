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
	 * 		Name   -> Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaEnableBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBossArenaBuffControlInterface_C::BossArenaEnableBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaEnableBuff");
		
		UIBossArenaBuffControlInterface_C_BossArenaEnableBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaDisableBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UIBossArenaBuffControlInterface_C::BossArenaDisableBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C.BossArenaDisableBuff");
		
		UIBossArenaBuffControlInterface_C_BossArenaDisableBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBossArenaBuffControlInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBossArenaBuffControlInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBossArenaBuffControlInterface.IBossArenaBuffControlInterface_C");
		return ptr;
	}

}


