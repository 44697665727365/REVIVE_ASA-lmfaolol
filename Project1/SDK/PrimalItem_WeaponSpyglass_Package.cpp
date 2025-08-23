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
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.CanUseItemPing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UPrimalItem_WeaponSpyglass_C::CanUseItemPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.CanUseItemPing");
		
		UPrimalItem_WeaponSpyglass_C_CanUseItemPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPPreventWeaponEquip
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UPrimalItem_WeaponSpyglass_C::BPPreventWeaponEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPPreventWeaponEquip");
		
		UPrimalItem_WeaponSpyglass_C_BPPreventWeaponEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerDoubleTap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponSpyglass_C::TimerDoubleTap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerDoubleTap");
		
		UPrimalItem_WeaponSpyglass_C_TimerDoubleTap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerUsePingWheel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_WeaponSpyglass_C::TimerUsePingWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerUsePingWheel");
		
		UPrimalItem_WeaponSpyglass_C_TimerUsePingWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseStartHoldBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_WeaponSpyglass_C::LocalUseStartHoldBP(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseStartHoldBP");
		
		UPrimalItem_WeaponSpyglass_C_LocalUseStartHoldBP_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseItemReleaseBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_WeaponSpyglass_C::LocalUseItemReleaseBP(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseItemReleaseBP");
		
		UPrimalItem_WeaponSpyglass_C_LocalUseItemReleaseBP_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseAfterHoldBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_WeaponSpyglass_C::LocalUseAfterHoldBP(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseAfterHoldBP");
		
		UPrimalItem_WeaponSpyglass_C_LocalUseAfterHoldBP_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPServerHandleItemNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPrimalItem_WeaponSpyglass_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPServerHandleItemNetExecCommand");
		
		UPrimalItem_WeaponSpyglass_C_BPServerHandleItemNetExecCommand_Params params {};
		params.ForPC = ForPC;
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.ExecuteUbergraph_PrimalItem_WeaponSpyglass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_WeaponSpyglass_C::ExecuteUbergraph_PrimalItem_WeaponSpyglass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.ExecuteUbergraph_PrimalItem_WeaponSpyglass");
		
		UPrimalItem_WeaponSpyglass_C_ExecuteUbergraph_PrimalItem_WeaponSpyglass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_WeaponSpyglass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_WeaponSpyglass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C");
		return ptr;
	}

}


