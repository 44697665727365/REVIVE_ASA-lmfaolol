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
	 * 		Name   -> Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.RefreshOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEyebrowStyle_Selector_ASA_C::RefreshOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.RefreshOptions");
		
		UEyebrowStyle_Selector_ASA_C_RefreshOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.GetOptions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          Icons                                                      (Parm, OutParm)
	 * 		TArray<class FString>                              Names                                                      (Parm, OutParm)
	 */
	void UEyebrowStyle_Selector_ASA_C::GetOptions(TArray<class UTexture2D*>* Icons, TArray<class FString>* Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.GetOptions");
		
		UEyebrowStyle_Selector_ASA_C_GetOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icons != nullptr)
			*Icons = params.Icons;
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.BPExecutedCommandForPrimalUI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEyebrowStyle_Selector_ASA_C::BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.BPExecutedCommandForPrimalUI");
		
		UEyebrowStyle_Selector_ASA_C_BPExecutedCommandForPrimalUI_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.ExecuteUbergraph_EyebrowStyle_Selector_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEyebrowStyle_Selector_ASA_C::ExecuteUbergraph_EyebrowStyle_Selector_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.ExecuteUbergraph_EyebrowStyle_Selector_ASA");
		
		UEyebrowStyle_Selector_ASA_C_ExecuteUbergraph_EyebrowStyle_Selector_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEyebrowStyle_Selector_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEyebrowStyle_Selector_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C");
		return ptr;
	}

}


