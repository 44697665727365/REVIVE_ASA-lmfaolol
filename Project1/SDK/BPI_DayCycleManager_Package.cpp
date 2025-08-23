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
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetSnowAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSnowAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::SetSnowAmount(double NewSnowAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetSnowAmount");
		
		UBPI_DayCycleManager_C_SetSnowAmount_Params params {};
		params.NewSnowAmount = NewSnowAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetRainAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewRainAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::SetRainAmount(double NewRainAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetRainAmount");
		
		UBPI_DayCycleManager_C_SetRainAmount_Params params {};
		params.NewRainAmount = NewRainAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetInCave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewInCave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::SetInCave(bool NewInCave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetInCave");
		
		UBPI_DayCycleManager_C_SetInCave_Params params {};
		params.NewInCave = NewInCave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetInCave
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInCave                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::GetInCave(bool* IsInCave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetInCave");
		
		UBPI_DayCycleManager_C_GetInCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInCave != nullptr)
			*IsInCave = params.IsInCave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetIsRaining
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRaining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::SetIsRaining(bool IsRaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetIsRaining");
		
		UBPI_DayCycleManager_C_SetIsRaining_Params params {};
		params.IsRaining = IsRaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetBaseWind
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewBaseWind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::SetBaseWind(double NewBaseWind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetBaseWind");
		
		UBPI_DayCycleManager_C_SetBaseWind_Params params {};
		params.NewBaseWind = NewBaseWind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetBaseTemerature
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewBaseTemp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::SetBaseTemerature(double NewBaseTemp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetBaseTemerature");
		
		UBPI_DayCycleManager_C_SetBaseTemerature_Params params {};
		params.NewBaseTemp = NewBaseTemp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.UpdateDCMTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::UpdateDCMTime(double NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.UpdateDCMTime");
		
		UBPI_DayCycleManager_C_UpdateDCMTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetTemperature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Temperature                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::GetTemperature(const struct FVector& Location, double* Temperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetTemperature");
		
		UBPI_DayCycleManager_C_GetTemperature_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Temperature != nullptr)
			*Temperature = params.Temperature;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CurrentTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DayCycleManager_C::GetTime(double* CurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetTime");
		
		UBPI_DayCycleManager_C_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentTime != nullptr)
			*CurrentTime = params.CurrentTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_DayCycleManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_DayCycleManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DayCycleManager.BPI_DayCycleManager_C");
		return ptr;
	}

}


