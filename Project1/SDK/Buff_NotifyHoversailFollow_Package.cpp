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
	 * 		Name   -> Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm)
	 */
	void ABuff_NotifyHoversailFollow_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BPGetHUDElements");
		
		ABuff_NotifyHoversailFollow_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_NotifyHoversailFollow_C::SetandPassLoc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.Set and Pass Loc");
		
		ABuff_NotifyHoversailFollow_C_SetandPassLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_NotifyHoversailFollow_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickServer");
		
		ABuff_NotifyHoversailFollow_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_NotifyHoversailFollow_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C.BuffTickClient");
		
		ABuff_NotifyHoversailFollow_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_NotifyHoversailFollow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_NotifyHoversailFollow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C");
		return ptr;
	}

}


