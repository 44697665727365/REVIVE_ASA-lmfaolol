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
	 * 		Name   -> Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FCFCoreMod>                          InModsList                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FInstallProgressMod>                 OutModsList                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	bool UBP_CFCoreUIModel_C::OnEventReceived(EGameModsEvent evt, TArray<struct FCFCoreMod> InModsList, TArray<struct FInstallProgressMod>* OutModsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived");
		
		UBP_CFCoreUIModel_C_OnEventReceived_Params params {};
		params.evt = evt;
		params.InModsList = InModsList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModsList != nullptr)
			*OutModsList = params.OutModsList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLibraryProgress                            progress                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FInstallProgressMod>                 OutModsList                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	bool UBP_CFCoreUIModel_C::OnEventReceived_LibraryProgress(EGameModsEvent evt, const struct FLibraryProgress& progress, TArray<struct FInstallProgressMod>* OutModsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress");
		
		UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params params {};
		params.evt = evt;
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModsList != nullptr)
			*OutModsList = params.OutModsList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CFCoreUIModel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CFCoreUIModel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CFCoreUIModel.BP_CFCoreUIModel_C");
		return ptr;
	}

}


