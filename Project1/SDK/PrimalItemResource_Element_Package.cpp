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
	 * 		Name   -> Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPrimalItemResource_Element_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand");
		
		UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params params {};
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
	 * 		Name   -> Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Shapeshifter                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RetMounted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_Element_C::FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter");
		
		UPrimalItemResource_Element_C_FindShapeshifter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Shapeshifter != nullptr)
			*Shapeshifter = params.Shapeshifter;
		if (RetMounted != nullptr)
			*RetMounted = params.RetMounted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItemResource_Element_C::BPPreUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem");
		
		UPrimalItemResource_Element_C_BPPreUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItemResource_Element_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse");
		
		UPrimalItemResource_Element_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItemResource_Element_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem");
		
		UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 DestinationItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AdditionalData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemResource_Element_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem");
		
		UPrimalItemResource_Element_C_BPUsedOntoItem_Params params {};
		params.DestinationItem = DestinationItem;
		params.AdditionalData = AdditionalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResource_Element_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResource_Element_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C");
		return ptr;
	}

}


