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
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetInCave
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInCave                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetInCave(bool* IsInCave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetInCave");
		
		ADayCycleManagerBase_C_GetInCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInCave != nullptr)
			*IsInCave = params.IsInCave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetTemperature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Temperature                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetTemperature(const struct FVector& Location, double* Temperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetTemperature");
		
		ADayCycleManagerBase_C_GetTemperature_Params params {};
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
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CurrentTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetTime(double* CurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetTime");
		
		ADayCycleManagerBase_C_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentTime != nullptr)
			*CurrentTime = params.CurrentTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherModifiedAmbientSoundMultiplier
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADayCycleAmbientSound*                       ForDayCycleAmbientSound                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	float ADayCycleManagerBase_C::GetWeatherModifiedAmbientSoundMultiplier(class ADayCycleAmbientSound* ForDayCycleAmbientSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherModifiedAmbientSoundMultiplier");
		
		ADayCycleManagerBase_C_GetWeatherModifiedAmbientSoundMultiplier_Params params {};
		params.ForDayCycleAmbientSound = ForDayCycleAmbientSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          PP                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetTeleportTransferWorldPP(class APostProcessVolume** PP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP");
		
		ADayCycleManagerBase_C_GetTeleportTransferWorldPP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PP != nullptr)
			*PP = params.PP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          PP                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetVRWorldPP(class APostProcessVolume** PP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP");
		
		ADayCycleManagerBase_C_GetVRWorldPP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PP != nullptr)
			*PP = params.PP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalProjectileGrapplingHook*              GrapHookProj                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADayCycleManagerBase_C::HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook* GrapHookProj, struct FHitResult* HitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted");
		
		ADayCycleManagerBase_C_HandleGrappleHookImpacted_Params params {};
		params.GrapHookProj = GrapHookProj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitInfo != nullptr)
			*HitInfo = params.HitInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WeatherEventWarningType                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetWeatherEventWarning(int32_t* WeatherEventWarningType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning");
		
		ADayCycleManagerBase_C_GetWeatherEventWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeatherEventWarningType != nullptr)
			*WeatherEventWarningType = params.WeatherEventWarningType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      isScorchedEarthMesh                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetGolemMeshClass(class UClass** isScorchedEarthMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass");
		
		ADayCycleManagerBase_C_GetGolemMeshClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isScorchedEarthMesh != nullptr)
			*isScorchedEarthMesh = params.isScorchedEarthMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ModifiedBaseTemperature                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::GetBaseTemperatureModified(double* ModifiedBaseTemperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified");
		
		ADayCycleManagerBase_C_GetBaseTemperatureModified_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedBaseTemperature != nullptr)
			*ModifiedBaseTemperature = params.ModifiedBaseTemperature;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructureItemContainer*               ActiveStructure                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::ActivatedStructureUpdated(class APrimalStructureItemContainer* ActiveStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated");
		
		ADayCycleManagerBase_C_ActivatedStructureUpdated_Params params {};
		params.ActiveStructure = ActiveStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.UpdateDCMTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::UpdateDCMTime(double NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.UpdateDCMTime");
		
		ADayCycleManagerBase_C_UpdateDCMTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetTimeOfDay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Hours                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minutes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetTimeOfDay(int32_t Hours, int32_t Minutes, int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetTimeOfDay");
		
		ADayCycleManagerBase_C_SetTimeOfDay_Params params {};
		params.Hours = Hours;
		params.Minutes = Minutes;
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetBaseWind
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewBaseWind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetBaseWind(double NewBaseWind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetBaseWind");
		
		ADayCycleManagerBase_C_SetBaseWind_Params params {};
		params.NewBaseWind = NewBaseWind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetBaseTemerature
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewBaseTemp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetBaseTemerature(double NewBaseTemp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetBaseTemerature");
		
		ADayCycleManagerBase_C_SetBaseTemerature_Params params {};
		params.NewBaseTemp = NewBaseTemp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetIsRaining
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRaining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetIsRaining(bool IsRaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetIsRaining");
		
		ADayCycleManagerBase_C_SetIsRaining_Params params {};
		params.IsRaining = IsRaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetInCave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewInCave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetInCave(bool NewInCave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetInCave");
		
		ADayCycleManagerBase_C_SetInCave_Params params {};
		params.NewInCave = NewInCave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetRainAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewRainAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetRainAmount(double NewRainAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetRainAmount");
		
		ADayCycleManagerBase_C_SetRainAmount_Params params {};
		params.NewRainAmount = NewRainAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.SetSnowAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSnowAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::SetSnowAmount(double NewSnowAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.SetSnowAmount");
		
		ADayCycleManagerBase_C_SetSnowAmount_Params params {};
		params.NewSnowAmount = NewSnowAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADayCycleManagerBase_C::ExecuteUbergraph_DayCycleManagerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase");
		
		ADayCycleManagerBase_C_ExecuteUbergraph_DayCycleManagerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DayCycleManagerBase.DayCycleManagerBase_C.DCMUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ADayCycleManagerBase_C::DCMUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DayCycleManagerBase.DayCycleManagerBase_C.DCMUpdated__DelegateSignature");
		
		ADayCycleManagerBase_C_DCMUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADayCycleManagerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADayCycleManagerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DayCycleManagerBase.DayCycleManagerBase_C");
		return ptr;
	}

}


