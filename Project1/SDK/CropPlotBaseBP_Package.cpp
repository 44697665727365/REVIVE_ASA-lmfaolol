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
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.GetCurrentStackCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MaxCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalStructure*                            PlacingOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StackCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACropPlotBaseBP_C::GetCurrentStackCount(int32_t MaxCount, class APrimalStructure* PlacingOn, int32_t* StackCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.GetCurrentStackCount");
		
		ACropPlotBaseBP_C_GetCurrentStackCount_Params params {};
		params.MaxCount = MaxCount;
		params.PlacingOn = PlacingOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackCount != nullptr)
			*StackCount = params.StackCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.BPOverrideCantBuildReasonString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CantBuildReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ACropPlotBaseBP_C::BPOverrideCantBuildReasonString(int32_t CantBuildReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.BPOverrideCantBuildReasonString");
		
		ACropPlotBaseBP_C_BPOverrideCantBuildReasonString_Params params {};
		params.CantBuildReason = CantBuildReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.BPIsAllowedToBuild
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              OutPlacementData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		int32_t                                            CurrentAllowedReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ACropPlotBaseBP_C::BPIsAllowedToBuild(const struct FPlacementData& OutPlacementData, int32_t CurrentAllowedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.BPIsAllowedToBuild");
		
		ACropPlotBaseBP_C_BPIsAllowedToBuild_Params params {};
		params.OutPlacementData = OutPlacementData;
		params.CurrentAllowedReason = CurrentAllowedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.IsOverStackLimit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlacementData                              PlacementData                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsOverLimit                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACropPlotBaseBP_C::IsOverStackLimit(const struct FPlacementData& PlacementData, bool* IsOverLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.IsOverStackLimit");
		
		ACropPlotBaseBP_C_IsOverStackLimit_Params params {};
		params.PlacementData = PlacementData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOverLimit != nullptr)
			*IsOverLimit = params.IsOverLimit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool ACropPlotBaseBP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand");
		
		ACropPlotBaseBP_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ACropPlotBaseBP_C::CanAttachToExosuit(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit");
		
		ACropPlotBaseBP_C_CanAttachToExosuit_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ACropPlotBaseBP_C::CanBeStoredByExosuit(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit");
		
		ACropPlotBaseBP_C_CanBeStoredByExosuit_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACropPlotBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACropPlotBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C");
		return ptr;
	}

}


