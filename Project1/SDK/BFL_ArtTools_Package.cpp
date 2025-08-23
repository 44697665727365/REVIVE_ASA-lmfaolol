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
	 * 		Name   -> Function BFL_ArtTools.BFL_ArtTools_C.BlendPostProcessSettings
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FPostProcessSettings>                Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<double>                                     Weights                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPostProcessSettings                        BlendedResult                                              (Parm, OutParm)
	 */
	void UBFL_ArtTools_C::STATIC_BlendPostProcessSettings(TArray<struct FPostProcessSettings>* Settings, TArray<double>* Weights, class UObject* __WorldContext, struct FPostProcessSettings* BlendedResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_ArtTools.BFL_ArtTools_C.BlendPostProcessSettings");
		
		UBFL_ArtTools_C_BlendPostProcessSettings_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
		if (Weights != nullptr)
			*Weights = params.Weights;
		if (BlendedResult != nullptr)
			*BlendedResult = params.BlendedResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BFL_ArtTools.BFL_ArtTools_C.ResolvePostProcessTableRow
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         TableRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPostProcessSettings                        Result                                                     (Parm, OutParm)
	 */
	void UBFL_ArtTools_C::STATIC_ResolvePostProcessTableRow(const struct FDataTableRowHandle& TableRow, class UObject* __WorldContext, bool* Success, struct FPostProcessSettings* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_ArtTools.BFL_ArtTools_C.ResolvePostProcessTableRow");
		
		UBFL_ArtTools_C_ResolvePostProcessTableRow_Params params {};
		params.TableRow = TableRow;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BFL_ArtTools.BFL_ArtTools_C.GetDCM
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DCM                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_ArtTools_C::STATIC_GetDCM(class UWorld* World, class UObject* __WorldContext, bool* Success, class AActor** DCM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_ArtTools.BFL_ArtTools_C.GetDCM");
		
		UBFL_ArtTools_C_GetDCM_Params params {};
		params.World = World;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DCM != nullptr)
			*DCM = params.DCM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BFL_ArtTools.BFL_ArtTools_C.GetGameTime
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             GameTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             UDSTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_ArtTools_C::STATIC_GetGameTime(class UObject* __WorldContext, double* GameTime, double* UDSTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_ArtTools.BFL_ArtTools_C.GetGameTime");
		
		UBFL_ArtTools_C_GetGameTime_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameTime != nullptr)
			*GameTime = params.GameTime;
		if (UDSTime != nullptr)
			*UDSTime = params.UDSTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBFL_ArtTools_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_ArtTools_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_ArtTools.BFL_ArtTools_C");
		return ptr;
	}

}


