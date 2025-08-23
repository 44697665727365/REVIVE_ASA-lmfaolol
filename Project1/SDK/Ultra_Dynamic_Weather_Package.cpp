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
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.IsOverridingSkylightTemperature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::IsOverridingSkylightTemperature(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.IsOverridingSkylightTemperature");
		
		AUltra_Dynamic_Weather_C_IsOverridingSkylightTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetSnowAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Snow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetSnowAmount(double* Snow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetSnowAmount");
		
		AUltra_Dynamic_Weather_C_GetSnowAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Snow != nullptr)
			*Snow = params.Snow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetRainAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Rain                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetRainAmount(double* Rain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetRainAmount");
		
		AUltra_Dynamic_Weather_C_GetRainAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rain != nullptr)
			*Rain = params.Rain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetConditions
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             WindStrength                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WindDirectionYaw                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Temperature_C                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Temperature_F                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RelativeTemperature                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRaining                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSnowing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHeatwave                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsColdfront                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetConditions(double* WindStrength, double* WindDirectionYaw, double* Temperature_C, double* Temperature_F, double* RelativeTemperature, bool* IsRaining, bool* IsSnowing, bool* IsHeatwave, bool* IsColdfront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetConditions");
		
		AUltra_Dynamic_Weather_C_GetConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindStrength != nullptr)
			*WindStrength = params.WindStrength;
		if (WindDirectionYaw != nullptr)
			*WindDirectionYaw = params.WindDirectionYaw;
		if (Temperature_C != nullptr)
			*Temperature_C = params.Temperature_C;
		if (Temperature_F != nullptr)
			*Temperature_F = params.Temperature_F;
		if (RelativeTemperature != nullptr)
			*RelativeTemperature = params.RelativeTemperature;
		if (IsRaining != nullptr)
			*IsRaining = params.IsRaining;
		if (IsSnowing != nullptr)
			*IsSnowing = params.IsSnowing;
		if (IsHeatwave != nullptr)
			*IsHeatwave = params.IsHeatwave;
		if (IsColdfront != nullptr)
			*IsColdfront = params.IsColdfront;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Rainbow MID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               RainbowEnabled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Mid                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetRainbowMID(bool* RainbowEnabled, class UMaterialInstanceDynamic** Mid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Rainbow MID");
		
		AUltra_Dynamic_Weather_C_GetRainbowMID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RainbowEnabled != nullptr)
			*RainbowEnabled = params.RainbowEnabled;
		if (Mid != nullptr)
			*Mid = params.Mid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Water Level
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingWaterLevel                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WaterLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetIntendedWaterLevel(bool* UsingWaterLevel, double* WaterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Water Level");
		
		AUltra_Dynamic_Weather_C_GetIntendedWaterLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UsingWaterLevel != nullptr)
			*UsingWaterLevel = params.UsingWaterLevel;
		if (WaterLevel != nullptr)
			*WaterLevel = params.WaterLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Particle Collision Channel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECollisionChannel                                  Channel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetWeatherParticleCollisionChannel(ECollisionChannel* Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Particle Collision Channel");
		
		AUltra_Dynamic_Weather_C_GetWeatherParticleCollisionChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Channel != nullptr)
			*Channel = params.Channel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Close Thunder Sound Occlusion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LPF                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetCloseThunderSoundOcclusion(double* Volume, double* LPF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Close Thunder Sound Occlusion");
		
		AUltra_Dynamic_Weather_C_GetCloseThunderSoundOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Volume != nullptr)
			*Volume = params.Volume;
		if (LPF != nullptr)
			*LPF = params.LPF;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          UDWState                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetStateforSaving(struct FUDS_and_UDW_State* UDWState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving");
		
		AUltra_Dynamic_Weather_C_GetStateforSaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UDWState != nullptr)
			*UDWState = params.UDWState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             IntendedCloudDirection                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetIntendedCloudDirection(double* IntendedCloudDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction");
		
		AUltra_Dynamic_Weather_C_GetIntendedCloudDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntendedCloudDirection != nullptr)
			*IntendedCloudDirection = params.IntendedCloudDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             IntendedCloudSpeed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetIntendedCloudSpeed(double* IntendedCloudSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed");
		
		AUltra_Dynamic_Weather_C_GetIntendedCloudSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntendedCloudSpeed != nullptr)
			*IntendedCloudSpeed = params.IntendedCloudSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Weather Transition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::StartWeatherTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Weather Transition");
		
		AUltra_Dynamic_Weather_C_StartWeatherTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.WOV_State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::WOV_State(bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.WOV_State");
		
		AUltra_Dynamic_Weather_C_WOV_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Interior Temperature with Occlusion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Temp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Occlusion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ApplyInteriorTemperaturewithOcclusion(double Temp, double Occlusion, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Interior Temperature with Occlusion");
		
		AUltra_Dynamic_Weather_C_ApplyInteriorTemperaturewithOcclusion_Params params {};
		params.Temp = Temp;
		params.Occlusion = Occlusion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Change Temperature Scale
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ChecktoChangeTemperatureScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Change Temperature Scale");
		
		AUltra_Dynamic_Weather_C_ChecktoChangeTemperatureScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Convert Temperature Scale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUDS_TemperatureType                               InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUDS_TemperatureType                               OutScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RelativeDegrees                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Snap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ConvertTemperatureScale(double Input, EUDS_TemperatureType InScale, EUDS_TemperatureType OutScale, bool RelativeDegrees, bool Snap, double* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Convert Temperature Scale");
		
		AUltra_Dynamic_Weather_C_ConvertTemperatureScale_Params params {};
		params.Input = Input;
		params.InScale = InScale;
		params.OutScale = OutScale;
		params.RelativeDegrees = RelativeDegrees;
		params.Snap = Snap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Trace Bounds for Exposure Values
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BoundsOrigin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BoundsExtent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorstoIgnore                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               TestWeather                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ExposureValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::TraceBoundsforExposureValues(const struct FVector& BoundsOrigin, const struct FVector& BoundsExtent, TArray<class AActor*>* ActorstoIgnore, bool TestWeather, double* ExposureValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Trace Bounds for Exposure Values");
		
		AUltra_Dynamic_Weather_C_TraceBoundsforExposureValues_Params params {};
		params.BoundsOrigin = BoundsOrigin;
		params.BoundsExtent = BoundsExtent;
		params.TestWeather = TestWeather;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorstoIgnore != nullptr)
			*ActorstoIgnore = params.ActorstoIgnore;
		if (ExposureValue != nullptr)
			*ExposureValue = params.ExposureValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Component for Wind Exposure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WindExposure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::TestComponentforWindExposure(class UPrimitiveComponent* Component, double* WindExposure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Component for Wind Exposure");
		
		AUltra_Dynamic_Weather_C_TestComponentforWindExposure_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindExposure != nullptr)
			*WindExposure = params.WindExposure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Normalized Wind Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WindVector                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentNormalizedWindDirection(struct FVector* WindVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Normalized Wind Direction");
		
		AUltra_Dynamic_Weather_C_CurrentNormalizedWindDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindVector != nullptr)
			*WindVector = params.WindVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Turn on UDS Rainbow
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ChecktoTurnonUDSRainbow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Turn on UDS Rainbow");
		
		AUltra_Dynamic_Weather_C_ChecktoTurnonUDSRainbow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check To Limit Construction
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CheckToLimitConstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check To Limit Construction");
		
		AUltra_Dynamic_Weather_C_CheckToLimitConstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Scale Cache Period
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Weather_C::ScaleCachePeriod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Scale Cache Period");
		
		AUltra_Dynamic_Weather_C_ScaleCachePeriod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Increment Cache Timer
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::IncrementCacheTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Increment Cache Timer");
		
		AUltra_Dynamic_Weather_C_IncrementCacheTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Obscured Lightning Glow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateObscuredLightningGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Obscured Lightning Glow");
		
		AUltra_Dynamic_Weather_C_UpdateObscuredLightningGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lerp Yaw Angles
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             AngleA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             AngleB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LerpYawAngles(double AngleA, double AngleB, double Alpha, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lerp Yaw Angles");
		
		AUltra_Dynamic_Weather_C_LerpYawAngles_Params params {};
		params.AngleA = AngleA;
		params.AngleB = AngleB;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Combined Wind Direction
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Weather_C::CombinedWindDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Combined Wind Direction");
		
		AUltra_Dynamic_Weather_C_CombinedWindDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Bolt Target Offset
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LightningBoltTargetOffset(struct FVector* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Bolt Target Offset");
		
		AUltra_Dynamic_Weather_C_LightningBoltTargetOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Remove Old Drawing Actors
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::RemoveOldDrawingActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Remove Old Drawing Actors");
		
		AUltra_Dynamic_Weather_C_RemoveOldDrawingActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Report Removal of Drawing Actor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ReportRemovalofDrawingActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Report Removal of Drawing Actor");
		
		AUltra_Dynamic_Weather_C_ReportRemovalofDrawingActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Query Project Settings
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::QueryProjectSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Query Project Settings");
		
		AUltra_Dynamic_Weather_C_QueryProjectSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check UDS Version
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CheckUDSVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check UDS Version");
		
		AUltra_Dynamic_Weather_C_CheckUDSVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Max to Material Effects
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUDS_Weather_Settings_C*                     Weather                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SnowCoverage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Wetness                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Dust                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ApplyMaxtoMaterialEffects(class UUDS_Weather_Settings_C* Weather, double* SnowCoverage, double* Wetness, double* Dust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Max to Material Effects");
		
		AUltra_Dynamic_Weather_C_ApplyMaxtoMaterialEffects_Params params {};
		params.Weather = Weather;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SnowCoverage != nullptr)
			*SnowCoverage = params.SnowCoverage;
		if (Wetness != nullptr)
			*Wetness = params.Wetness;
		if (Dust != nullptr)
			*Dust = params.Dust;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Recenter Weather Override Volume Target
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ChecktoRecenterWeatherOverrideVolumeTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Recenter Weather Override Volume Target");
		
		AUltra_Dynamic_Weather_C_ChecktoRecenterWeatherOverrideVolumeTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update WOV Target Coordinates
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseEditorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::UpdateWOVTargetCoordinates(bool UseEditorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update WOV Target Coordinates");
		
		AUltra_Dynamic_Weather_C_UpdateWOVTargetCoordinates_Params params {};
		params.UseEditorLocation = UseEditorLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Override Volume Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::InitializeWeatherOverrideVolumeTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Override Volume Target");
		
		AUltra_Dynamic_Weather_C_InitializeWeatherOverrideVolumeTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Override Volume Target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::DrawWeatherOverrideVolumeTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Override Volume Target");
		
		AUltra_Dynamic_Weather_C_DrawWeatherOverrideVolumeTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Outdoor Sound Mix
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateOutdoorSoundMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Outdoor Sound Mix");
		
		AUltra_Dynamic_Weather_C_UpdateOutdoorSoundMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Make Outdoor Sound Mix
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::MakeOutdoorSoundMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Make Outdoor Sound Mix");
		
		AUltra_Dynamic_Weather_C_MakeOutdoorSoundMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Component States
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateDLWEComponentStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Component States");
		
		AUltra_Dynamic_Weather_C_UpdateDLWEComponentStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.PPWF Velocity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector AUltra_Dynamic_Weather_C::PPWFVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.PPWF Velocity");
		
		AUltra_Dynamic_Weather_C_PPWFVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Add Weather Override Volume to Array
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeather_Override_Volume_C*                  WeatherOverrideVolume                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::AddWeatherOverrideVolumetoArray(class AWeather_Override_Volume_C* WeatherOverrideVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Add Weather Override Volume to Array");
		
		AUltra_Dynamic_Weather_C_AddWeatherOverrideVolumetoArray_Params params {};
		params.WeatherOverrideVolume = WeatherOverrideVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Starting Weather Override Volumes
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::GetStartingWeatherOverrideVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Starting Weather Override Volumes");
		
		AUltra_Dynamic_Weather_C_GetStartingWeatherOverrideVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cached Wind Rotation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::CachedWindRotation(struct FRotator* Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cached Wind Rotation");
		
		AUltra_Dynamic_Weather_C_CachedWindRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Cached Property Changing
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EUDW_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::IsCachedPropertyChanging(EUDW_CachedProperties Property, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Cached Property Changing");
		
		AUltra_Dynamic_Weather_C_IsCachedPropertyChanging_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Global and Local Weather State
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateCurrentGlobalandLocalWeatherState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Global and Local Weather State");
		
		AUltra_Dynamic_Weather_C_UpdateCurrentGlobalandLocalWeatherState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Lightning Timer
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::GlobalLightningTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Lightning Timer");
		
		AUltra_Dynamic_Weather_C_GlobalLightningTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Size Cache Arrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SizeCacheArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Size Cache Arrays");
		
		AUltra_Dynamic_Weather_C_SizeCacheArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Cache Alpha
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SetCacheAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Cache Alpha");
		
		AUltra_Dynamic_Weather_C_SetCacheAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Cached Vector
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDW_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetCachedVector(EUDW_CachedProperties Property, struct FVector* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Cached Vector");
		
		AUltra_Dynamic_Weather_C_GetCachedVector_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Vector
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDW_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SetValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CacheVector(EUDW_CachedProperties Property, const struct FVector& SetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Vector");
		
		AUltra_Dynamic_Weather_C_CacheVector_Params params {};
		params.Property = Property;
		params.SetValue = SetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Float
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDW_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CacheFloat(EUDW_CachedProperties Property, double SetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Float");
		
		AUltra_Dynamic_Weather_C_CacheFloat_Params params {};
		params.Property = Property;
		params.SetValue = SetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Cached Float
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDW_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetCachedFloat(EUDW_CachedProperties Property, double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Cached Float");
		
		AUltra_Dynamic_Weather_C_GetCachedFloat_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Properties
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CacheProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Properties");
		
		AUltra_Dynamic_Weather_C_CacheProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current PPWF Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentPPWFIntensity(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current PPWF Intensity");
		
		AUltra_Dynamic_Weather_C_CurrentPPWFIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Flash Location
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LightningFlashLocation(struct FVector* Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Flash Location");
		
		AUltra_Dynamic_Weather_C_LightningFlashLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning World Height
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LightningWorldHeight(double* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning World Height");
		
		AUltra_Dynamic_Weather_C_LightningWorldHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Invalidate VHFM Level
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Threshold                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Buffer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Current                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Continue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::InvalidateVHFMLevel(double Threshold, double Distance, struct FVector* Buffer, const struct FVector& Current, bool* Continue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Invalidate VHFM Level");
		
		AUltra_Dynamic_Weather_C_InvalidateVHFMLevel_Params params {};
		params.Threshold = Threshold;
		params.Distance = Distance;
		params.Current = Current;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Buffer != nullptr)
			*Buffer = params.Buffer;
		if (Continue != nullptr)
			*Continue = params.Continue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Invalidate VHFM With Material States
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::InvalidateVHFMWithMaterialStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Invalidate VHFM With Material States");
		
		AUltra_Dynamic_Weather_C_InvalidateVHFMWithMaterialStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Rainbow Intensity
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateRainbowIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Rainbow Intensity");
		
		AUltra_Dynamic_Weather_C_UpdateRainbowIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Up Rainbow
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SetUpRainbow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Up Rainbow");
		
		AUltra_Dynamic_Weather_C_SetUpRainbow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Occlusion
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::InitializeOcclusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Occlusion");
		
		AUltra_Dynamic_Weather_C_InitializeOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sample Current Sound Occlusion Values
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NonDirectionalOcclusion                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             XOcclusion                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             YOcclusion                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             XOcclusion2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             YOcclusion2                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::SampleCurrentSoundOcclusionValues(double* NonDirectionalOcclusion, double* XOcclusion, double* YOcclusion, double* XOcclusion2, double* YOcclusion2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sample Current Sound Occlusion Values");
		
		AUltra_Dynamic_Weather_C_SampleCurrentSoundOcclusionValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NonDirectionalOcclusion != nullptr)
			*NonDirectionalOcclusion = params.NonDirectionalOcclusion;
		if (XOcclusion != nullptr)
			*XOcclusion = params.XOcclusion;
		if (YOcclusion != nullptr)
			*YOcclusion = params.YOcclusion;
		if (XOcclusion2 != nullptr)
			*XOcclusion2 = params.XOcclusion2;
		if (YOcclusion2 != nullptr)
			*YOcclusion2 = params.YOcclusion2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Display Name for Current Weather
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AsString                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EUDS_Weather_Display_Names                         AsEnumerator                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetDisplayNameforCurrentWeather(class FString* AsString, EUDS_Weather_Display_Names* AsEnumerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Display Name for Current Weather");
		
		AUltra_Dynamic_Weather_C_GetDisplayNameforCurrentWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsString != nullptr)
			*AsString = params.AsString;
		if (AsEnumerator != nullptr)
			*AsEnumerator = params.AsEnumerator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Load Required Assets
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::LoadRequiredAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Load Required Assets");
		
		AUltra_Dynamic_Weather_C_LoadRequiredAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Make Manual State
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::MakeManualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Make Manual State");
		
		AUltra_Dynamic_Weather_C_MakeManualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Light Rain Sound Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Int                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LightRainSoundIntensity(double* Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Light Rain Sound Intensity");
		
		AUltra_Dynamic_Weather_C_LightRainSoundIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Season
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateSeason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Season");
		
		AUltra_Dynamic_Weather_C_UpdateSeason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Fog Particle Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFXSystemComponent*                          Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxParticlePercentage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WeatherIntensity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ParticleIntensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::UpdateFogParticleParameters(class UFXSystemComponent* Target, double MaxParticlePercentage, double WeatherIntensity, double ParticleIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Fog Particle Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateFogParticleParameters_Params params {};
		params.Target = Target;
		params.MaxParticlePercentage = MaxParticlePercentage;
		params.WeatherIntensity = WeatherIntensity;
		params.ParticleIntensity = ParticleIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Dust Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateActiveDustParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Dust Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateActiveDustParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Wind Debris Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateActiveWindDebrisParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Wind Debris Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateActiveWindDebrisParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Snow Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateActiveSnowParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Snow Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateActiveSnowParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Rain Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateActiveRainParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Rain Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateActiveRainParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Old State With Replicated Variables
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateOldStateWithReplicatedVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Old State With Replicated Variables");
		
		AUltra_Dynamic_Weather_C_UpdateOldStateWithReplicatedVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Replicated Old Weather State
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SetReplicatedOldWeatherState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Replicated Old Weather State");
		
		AUltra_Dynamic_Weather_C_SetReplicatedOldWeatherState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compare Weather States
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUDS_Weather_Settings_C*                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UUDS_Weather_Settings_C*                     B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CompareWeatherStates(class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compare Weather States");
		
		AUltra_Dynamic_Weather_C_CompareWeatherStates_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difference != nullptr)
			*Difference = params.Difference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Copy Weather State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUDS_Weather_Settings_C*                     Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UUDS_Weather_Settings_C*                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetMaterialEffects                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CopyWeatherState(class UUDS_Weather_Settings_C* Source, class UUDS_Weather_Settings_C* Target, bool SetMaterialEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Copy Weather State");
		
		AUltra_Dynamic_Weather_C_CopyWeatherState_Params params {};
		params.Source = Source;
		params.Target = Target;
		params.SetMaterialEffects = SetMaterialEffects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Weather State Objects
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CreateWeatherStateObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Weather State Objects");
		
		AUltra_Dynamic_Weather_C_CreateWeatherStateObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lerp Between Weather States
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUDS_Weather_Settings_C*                     A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UUDS_Weather_Settings_C*                     B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUDS_Weather_Settings_C*                     TargetState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetMaterialEffects                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseBiasforMaterialEffects                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LerpBetweenWeatherStates(class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double Alpha, class UUDS_Weather_Settings_C* TargetState, bool SetMaterialEffects, bool UseBiasforMaterialEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lerp Between Weather States");
		
		AUltra_Dynamic_Weather_C_LerpBetweenWeatherStates_Params params {};
		params.A = A;
		params.B = B;
		params.Alpha = Alpha;
		params.TargetState = TargetState;
		params.SetMaterialEffects = SetMaterialEffects;
		params.UseBiasforMaterialEffects = UseBiasforMaterialEffects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Dusty
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentlyDusty(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Dusty");
		
		AUltra_Dynamic_Weather_C_CurrentlyDusty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Brushes by Height
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AWeather_Mask_Brush_C*>               Brushes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AWeather_Mask_Brush_C*>               SortedBrushes                                              (Parm, OutParm)
	 */
	void AUltra_Dynamic_Weather_C::SortBrushesbyHeight(TArray<class AWeather_Mask_Brush_C*>* Brushes, TArray<class AWeather_Mask_Brush_C*>* SortedBrushes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Brushes by Height");
		
		AUltra_Dynamic_Weather_C_SortBrushesbyHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brushes != nullptr)
			*Brushes = params.Brushes;
		if (SortedBrushes != nullptr)
			*SortedBrushes = params.SortedBrushes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Close Thunder Sound Delay
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CloseThunderSoundDelay(double* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Close Thunder Sound Delay");
		
		AUltra_Dynamic_Weather_C_CloseThunderSoundDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Approximate Weather Mask Brush Effect
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeather_Mask_Brush_C*                       Brush                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Cancel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ApproximateWeatherMaskBrushEffect(class AWeather_Mask_Brush_C* Brush, const struct FVector2D& Location, double Height, double* Out, bool* Cancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Approximate Weather Mask Brush Effect");
		
		AUltra_Dynamic_Weather_C_ApproximateWeatherMaskBrushEffect_Params params {};
		params.Brush = Brush;
		params.Location = Location;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (Cancel != nullptr)
			*Cancel = params.Cancel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Redraw Weather Mask Target
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ChecktoRedrawWeatherMaskTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Redraw Weather Mask Target");
		
		AUltra_Dynamic_Weather_C_ChecktoRedrawWeatherMaskTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Mask Target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::InitializeWeatherMaskTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Mask Target");
		
		AUltra_Dynamic_Weather_C_InitializeWeatherMaskTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Mask Brush Target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseEditorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DrawWeatherMaskBrushTarget(bool UseEditorLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Mask Brush Target");
		
		AUltra_Dynamic_Weather_C_DrawWeatherMaskBrushTarget_Params params {};
		params.UseEditorLocation = UseEditorLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Delta Time with Tick Set
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Delta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DeltaTimewithTickSet(double* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Delta Time with Tick Set");
		
		AUltra_Dynamic_Weather_C_DeltaTimewithTickSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Cloudy
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentlyCloudy(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Cloudy");
		
		AUltra_Dynamic_Weather_C_CurrentlyCloudy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Snowing
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentlySnowing(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Snowing");
		
		AUltra_Dynamic_Weather_C_CurrentlySnowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Raining
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentlyRaining(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Raining");
		
		AUltra_Dynamic_Weather_C_CurrentlyRaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Rotation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::WindRotation(struct FRotator* Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Rotation");
		
		AUltra_Dynamic_Weather_C_WindRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Point in DLWE Space
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::IsPointinDLWESpace(const struct FVector& Point, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Point in DLWE Space");
		
		AUltra_Dynamic_Weather_C_IsPointinDLWESpace_Params params {};
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Does DLWE Need Recentering
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NeedsXAxisRecenter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NeedsYAxisRecenter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DoesDLWENeedRecentering(bool* NeedsXAxisRecenter, bool* NeedsYAxisRecenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Does DLWE Need Recentering");
		
		AUltra_Dynamic_Weather_C_DoesDLWENeedRecentering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedsXAxisRecenter != nullptr)
			*NeedsXAxisRecenter = params.NeedsXAxisRecenter;
		if (NeedsYAxisRecenter != nullptr)
			*NeedsYAxisRecenter = params.NeedsYAxisRecenter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Render Target Area
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Area                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DLWERenderTargetArea(double* Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Render Target Area");
		
		AUltra_Dynamic_Weather_C_DLWERenderTargetArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Area != nullptr)
			*Area = params.Area;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Compression Brush
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Resolution                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Spread                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   CornerPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BrushSize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DLWECompressionBrush(const struct FVector& Location, double Size, int32_t Resolution, double Spread, struct FVector2D* CornerPosition, struct FVector2D* BrushSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Compression Brush");
		
		AUltra_Dynamic_Weather_C_DLWECompressionBrush_Params params {};
		params.Location = Location;
		params.Size = Size;
		params.Resolution = Resolution;
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CornerPosition != nullptr)
			*CornerPosition = params.CornerPosition;
		if (BrushSize != nullptr)
			*BrushSize = params.BrushSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE_Render Target Mapping
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Mapping                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DLWE_RenderTargetMapping(struct FLinearColor* Mapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE_Render Target Mapping");
		
		AUltra_Dynamic_Weather_C_DLWE_RenderTargetMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mapping != nullptr)
			*Mapping = params.Mapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Distant Thunder Sound Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Int                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DistantThunderSoundIntensity(double* Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Distant Thunder Sound Intensity");
		
		AUltra_Dynamic_Weather_C_DistantThunderSoundIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Whistling Sound Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Int                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::WindWhistlingSoundIntensity(double* Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Whistling Sound Intensity");
		
		AUltra_Dynamic_Weather_C_WindWhistlingSoundIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Sound Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Int                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::WindSoundIntensity(double* Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Sound Intensity");
		
		AUltra_Dynamic_Weather_C_WindSoundIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Rain Sound Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Int                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::RainSoundIntensity(double* Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Rain Sound Intensity");
		
		AUltra_Dynamic_Weather_C_RainSoundIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Distance Range
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LightningDistanceRange(double* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Distance Range");
		
		AUltra_Dynamic_Weather_C_LightningDistanceRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Snow Spawn Rate
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SpawnRate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WindBonus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentRainSnowSpawnRate(double Intensity, double SpawnRate, double WindBonus, double* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Snow Spawn Rate");
		
		AUltra_Dynamic_Weather_C_CurrentRainSnowSpawnRate_Params params {};
		params.Intensity = Intensity;
		params.SpawnRate = SpawnRate;
		params.WindBonus = WindBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Dust Velocity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentDustVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Dust Velocity");
		
		AUltra_Dynamic_Weather_C_CurrentDustVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Wind Debris Velocity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentWindDebrisVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Wind Debris Velocity");
		
		AUltra_Dynamic_Weather_C_CurrentWindDebrisVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Snow Velocity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentSnowVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Snow Velocity");
		
		AUltra_Dynamic_Weather_C_CurrentSnowVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Velocity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentRainVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Velocity");
		
		AUltra_Dynamic_Weather_C_CurrentRainVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Shared Weather Particle Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNiagaraComponent*                           System                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::SetSharedWeatherParticleParameters(class UNiagaraComponent* System)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Shared Weather Particle Parameters");
		
		AUltra_Dynamic_Weather_C_SetSharedWeatherParticleParameters_Params params {};
		params.System = System;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SortWeatherOverrideVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes");
		
		AUltra_Dynamic_Weather_C_SortWeatherOverrideVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateScreenDroplets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets");
		
		AUltra_Dynamic_Weather_C_UpdateScreenDroplets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::StartScreenDroplets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets");
		
		AUltra_Dynamic_Weather_C_StartScreenDroplets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CheckforEventstoDispatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch");
		
		AUltra_Dynamic_Weather_C_CheckforEventstoDispatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TestCollidingComponentsOnly                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUDS_Weather_Settings_C*                     CustomWeatherStateObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RainExposure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SnowExposure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WindExposure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DustExposure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::TestActorforWeatherExposure(class AActor* Actor, bool TestCollidingComponentsOnly, class UUDS_Weather_Settings_C* CustomWeatherStateObject, double* RainExposure, double* SnowExposure, double* WindExposure, double* DustExposure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure");
		
		AUltra_Dynamic_Weather_C_TestActorforWeatherExposure_Params params {};
		params.Actor = Actor;
		params.TestCollidingComponentsOnly = TestCollidingComponentsOnly;
		params.CustomWeatherStateObject = CustomWeatherStateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RainExposure != nullptr)
			*RainExposure = params.RainExposure;
		if (SnowExposure != nullptr)
			*SnowExposure = params.SnowExposure;
		if (WindExposure != nullptr)
			*WindExposure = params.WindExposure;
		if (DustExposure != nullptr)
			*DustExposure = params.DustExposure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAudioComponent*                             TestedComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UAudioComponent*>                     AffectedComponents                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		double                                             CurrentSoundIntensity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             StartRandomization                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EnableBool                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::UpdateAudioComponentActivity(class UAudioComponent* TestedComponent, TArray<class UAudioComponent*>* AffectedComponents, double CurrentSoundIntensity, double StartRandomization, bool EnableBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity");
		
		AUltra_Dynamic_Weather_C_UpdateAudioComponentActivity_Params params {};
		params.TestedComponent = TestedComponent;
		params.CurrentSoundIntensity = CurrentSoundIntensity;
		params.StartRandomization = StartRandomization;
		params.EnableBool = EnableBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AffectedComponents != nullptr)
			*AffectedComponents = params.AffectedComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateEnabledSoundComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components");
		
		AUltra_Dynamic_Weather_C_UpdateEnabledSoundComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdatePostProcessWindFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog");
		
		AUltra_Dynamic_Weather_C_UpdatePostProcessWindFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SetupPostProcessWindFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog");
		
		AUltra_Dynamic_Weather_C_SetupPostProcessWindFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Lightning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Period                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CurrentLightningPeriodandStatus(double Lightning, double* Period, bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status");
		
		AUltra_Dynamic_Weather_C_CurrentLightningPeriodandStatus_Params params {};
		params.Lightning = Lightning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Period != nullptr)
			*Period = params.Period;
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateMaterialEffectParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateMaterialEffectParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::GetUpdatedControlPointLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location");
		
		AUltra_Dynamic_Weather_C_GetUpdatedControlPointLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Local Weather
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUDS_Weather_Settings_C*                     TargetStateObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TestLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LocalWeather(class UUDS_Weather_Settings_C* TargetStateObject, const struct FVector& TestLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Local Weather");
		
		AUltra_Dynamic_Weather_C_LocalWeather_Params params {};
		params.TargetStateObject = TargetStateObject;
		params.TestLocation = TestLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles Snow Or Dust
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GroundNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicalMaterial*                           PhysicalMaterial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             PuddleDepth                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SnowDepth                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DustDepth                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CheckPointforPuddlesSnowOrDust(const struct FVector& Location, const struct FVector& GroundNormal, class UPhysicalMaterial* PhysicalMaterial, double* PuddleDepth, double* SnowDepth, double* DustDepth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles Snow Or Dust");
		
		AUltra_Dynamic_Weather_C_CheckPointforPuddlesSnowOrDust_Params params {};
		params.Location = Location;
		params.GroundNormal = GroundNormal;
		params.PhysicalMaterial = PhysicalMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PuddleDepth != nullptr)
			*PuddleDepth = params.PuddleDepth;
		if (SnowDepth != nullptr)
			*SnowDepth = params.SnowDepth;
		if (DustDepth != nullptr)
			*DustDepth = params.DustDepth;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CreateCloudReferenceArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array");
		
		AUltra_Dynamic_Weather_C_CreateCloudReferenceArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::RecycleRenderTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets");
		
		AUltra_Dynamic_Weather_C_RecycleRenderTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateDLWEPuddleRipples()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples");
		
		AUltra_Dynamic_Weather_C_UpdateDLWEPuddleRipples_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::RippleDLWEPuddle(const struct FVector& Location, double Size, double Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle");
		
		AUltra_Dynamic_Weather_C_RippleDLWEPuddle_Params params {};
		params.Location = Location;
		params.Size = Size;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ChecktochangeDLWEMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode");
		
		AUltra_Dynamic_Weather_C_ChecktochangeDLWEMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ETextureRenderTargetFormat                         Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ClearColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          EdgeFadeMaterial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Resolution                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DrawEdgeFade                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::RecenterDLWERenderTarget(class UTextureRenderTarget2D* RenderTarget, ETextureRenderTargetFormat Format, const struct FLinearColor& ClearColor, class UMaterialInterface* EdgeFadeMaterial, int32_t Resolution, bool DrawEdgeFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target");
		
		AUltra_Dynamic_Weather_C_RecenterDLWERenderTarget_Params params {};
		params.RenderTarget = RenderTarget;
		params.Format = Format;
		params.ClearColor = ClearColor;
		params.EdgeFadeMaterial = EdgeFadeMaterial;
		params.Resolution = Resolution;
		params.DrawEdgeFade = DrawEdgeFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::FadeDLWETargetOverTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time");
		
		AUltra_Dynamic_Weather_C_FadeDLWETargetOverTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateDLWESnowCompressions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions");
		
		AUltra_Dynamic_Weather_C_UpdateDLWESnowCompressions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::CompressDLWESnow(const struct FVector& Location, double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow");
		
		AUltra_Dynamic_Weather_C_CompressDLWESnow_Params params {};
		params.Location = Location;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CheckforDLWERecenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter");
		
		AUltra_Dynamic_Weather_C_CheckforDLWERecenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateDLWEParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters");
		
		AUltra_Dynamic_Weather_C_UpdateDLWEParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FirstRun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::UpdateDLWETargets(bool FirstRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets");
		
		AUltra_Dynamic_Weather_C_UpdateDLWETargets_Params params {};
		params.FirstRun = FirstRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ApplyInteriorTemperature                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUDS_Weather_Settings_C*                     CustomWeatherStateObject                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Celsius                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Fahrenheit                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RelativeTemperature                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GetCurrentTemperature(bool ApplyInteriorTemperature, class UUDS_Weather_Settings_C* CustomWeatherStateObject, double* Celsius, double* Fahrenheit, double* RelativeTemperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature");
		
		AUltra_Dynamic_Weather_C_GetCurrentTemperature_Params params {};
		params.ApplyInteriorTemperature = ApplyInteriorTemperature;
		params.CustomWeatherStateObject = CustomWeatherStateObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Celsius != nullptr)
			*Celsius = params.Celsius;
		if (Fahrenheit != nullptr)
			*Fahrenheit = params.Fahrenheit;
		if (RelativeTemperature != nullptr)
			*RelativeTemperature = params.RelativeTemperature;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       ProbabilityMap                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UUDS_Weather_Settings_C*                     CurrentRandomType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       FilteredProbabilityMap                                     (Parm, OutParm)
	 */
	void AUltra_Dynamic_Weather_C::FilterProbabilityMap(TMap<class UUDS_Weather_Settings_C*, double> ProbabilityMap, class UUDS_Weather_Settings_C* CurrentRandomType, TMap<class UUDS_Weather_Settings_C*, double>* FilteredProbabilityMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map");
		
		AUltra_Dynamic_Weather_C_FilterProbabilityMap_Params params {};
		params.ProbabilityMap = ProbabilityMap;
		params.CurrentRandomType = CurrentRandomType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredProbabilityMap != nullptr)
			*FilteredProbabilityMap = params.FilteredProbabilityMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RunByCounterpart                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ConstructionScript_Function(bool RunByCounterpart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function");
		
		AUltra_Dynamic_Weather_C_ConstructionScript_Function_Params params {};
		params.RunByCounterpart = RunByCounterpart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::AudioUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update");
		
		AUltra_Dynamic_Weather_C_AudioUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateCurrentMaterialEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects");
		
		AUltra_Dynamic_Weather_C_UpdateCurrentMaterialEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status to Screen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::PrintCurrentStatustoScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status to Screen");
		
		AUltra_Dynamic_Weather_C_PrintCurrentStatustoScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateStaticVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables");
		
		AUltra_Dynamic_Weather_C_UpdateStaticVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateActiveVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables");
		
		AUltra_Dynamic_Weather_C_UpdateActiveVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript");
		
		AUltra_Dynamic_Weather_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::EndLightningFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash");
		
		AUltra_Dynamic_Weather_C_EndLightningFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::TickLightningFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash");
		
		AUltra_Dynamic_Weather_C_TickLightningFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Lightning Internal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AWeather_Override_Volume_C*                  Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::LocalLightningInternal(class AWeather_Override_Volume_C* Volume, double Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Lightning Internal");
		
		AUltra_Dynamic_Weather_C_LocalLightningInternal_Params params {};
		params.Volume = Volume;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseCustomLightningLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CustomLightningLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CustomTargetLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::FlashLightning(double Angle, bool UseCustomLightningLocation, const struct FVector& CustomLightningLocation, const struct FVector& CustomTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning");
		
		AUltra_Dynamic_Weather_C_FlashLightning_Params params {};
		params.Angle = Angle;
		params.UseCustomLightningLocation = UseCustomLightningLocation;
		params.CustomLightningLocation = CustomLightningLocation;
		params.CustomTargetLocation = CustomTargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Lightning Internal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::GlobalLightningInternal(double Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Lightning Internal");
		
		AUltra_Dynamic_Weather_C_GlobalLightningInternal_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Up Rainbow MID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SetUpRainbowMID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Up Rainbow MID");
		
		AUltra_Dynamic_Weather_C_SetUpRainbowMID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Rainbow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateRainbow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Rainbow");
		
		AUltra_Dynamic_Weather_C_UpdateRainbow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Destroy Close Thunder Component
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::DestroyCloseThunderComponent(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Destroy Close Thunder Component");
		
		AUltra_Dynamic_Weather_C_DestroyCloseThunderComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick");
		
		AUltra_Dynamic_Weather_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Project Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_Project_Mode                                  Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::SetProjectMode(EUDS_Project_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Project Mode");
		
		AUltra_Dynamic_Weather_C_SetProjectMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ForceTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick");
		
		AUltra_Dynamic_Weather_C_ForceTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUDS_Weather_Settings_C*                     NewWeatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TimetoTransitiontoNewWeatherSeconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ResetParticleEmitters                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ChangeWeather(class UUDS_Weather_Settings_C* NewWeatherType, double TimetoTransitiontoNewWeatherSeconds, bool ResetParticleEmitters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather");
		
		AUltra_Dynamic_Weather_C_ChangeWeather_Params params {};
		params.NewWeatherType = NewWeatherType;
		params.TimetoTransitiontoNewWeatherSeconds = TimetoTransitiontoNewWeatherSeconds;
		params.ResetParticleEmitters = ResetParticleEmitters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Hard Refresh Cached Properties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::HardRefreshCachedProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Hard Refresh Cached Properties");
		
		AUltra_Dynamic_Weather_C_HardRefreshCachedProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clients Transition Start
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ClientsTransitionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clients Transition Start");
		
		AUltra_Dynamic_Weather_C_ClientsTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ResetAllEmitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters");
		
		AUltra_Dynamic_Weather_C_ResetAllEmitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change to Random Weather
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TimetoTransitiontoRandomWeatherSeconds                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ResetParticleEmitters                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ChangetoRandomWeather(double TimetoTransitiontoRandomWeatherSeconds, bool ResetParticleEmitters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change to Random Weather");
		
		AUltra_Dynamic_Weather_C_ChangetoRandomWeather_Params params {};
		params.TimetoTransitiontoRandomWeatherSeconds = TimetoTransitiontoRandomWeatherSeconds;
		params.ResetParticleEmitters = ResetParticleEmitters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::InitializeWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather");
		
		AUltra_Dynamic_Weather_C_InitializeWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay");
		
		AUltra_Dynamic_Weather_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force All Clients Cache
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::ForceAllClientsCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force All Clients Cache");
		
		AUltra_Dynamic_Weather_C_ForceAllClientsCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::TimedOverridewithNewChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes");
		
		AUltra_Dynamic_Weather_C_TimedOverridewithNewChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::UpdateMaterialEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects");
		
		AUltra_Dynamic_Weather_C_UpdateMaterialEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Restart Random Weather
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::RestartRandomWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Restart Random Weather");
		
		AUltra_Dynamic_Weather_C_RestartRandomWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ApplyState(const struct FUDS_and_UDW_State& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State");
		
		AUltra_Dynamic_Weather_C_ApplyState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Weather Settings from UDS
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CloudCoverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Fog                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Dust                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::UpdateWeatherSettingsfromUDS(double CloudCoverage, double Fog, double Dust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Weather Settings from UDS");
		
		AUltra_Dynamic_Weather_C_UpdateWeatherSettingsfromUDS_Params params {};
		params.CloudCoverage = CloudCoverage;
		params.Fog = Fog;
		params.Dust = Dust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Season
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SetSeason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Season");
		
		AUltra_Dynamic_Weather_C_SetSeason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.MC_ChangeWeather
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_WeatherTypesASA                               NewWeatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TransitionLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ResetParticleEmitters                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::MC_ChangeWeather(EUDS_WeatherTypesASA NewWeatherType, double TransitionLength, bool ResetParticleEmitters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.MC_ChangeWeather");
		
		AUltra_Dynamic_Weather_C_MC_ChangeWeather_Params params {};
		params.NewWeatherType = NewWeatherType;
		params.TransitionLength = TransitionLength;
		params.ResetParticleEmitters = ResetParticleEmitters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ROS_ChangeWeather
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_WeatherTypesASA                               NewWeatherType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TransitionLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ResetParticleEmitters                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ROS_ChangeWeather(EUDS_WeatherTypesASA NewWeatherType, double TransitionLength, bool ResetParticleEmitters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ROS_ChangeWeather");
		
		AUltra_Dynamic_Weather_C_ROS_ChangeWeather_Params params {};
		params.NewWeatherType = NewWeatherType;
		params.TransitionLength = TransitionLength;
		params.ResetParticleEmitters = ResetParticleEmitters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ExecuteUbergraph_Ultra_Dynamic_Weather(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather");
		
		AUltra_Dynamic_Weather_C_ExecuteUbergraph_Ultra_Dynamic_Weather_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE State__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_DLWE_Mode                                     CurrentMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RenderTargetCenter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MappingSpace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::UpdateDLWEState__DelegateSignature(EUDS_DLWE_Mode CurrentMode, const struct FVector& RenderTargetCenter, const struct FVector& MappingSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE State__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_UpdateDLWEState__DelegateSignature_Params params {};
		params.CurrentMode = CurrentMode;
		params.RenderTargetCenter = RenderTargetCenter;
		params.MappingSpace = MappingSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Weather Display Name Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_Weather_Display_Names                         WeatherName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::WeatherDisplayNameChanged__DelegateSignature(EUDS_Weather_Display_Names WeatherName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Weather Display Name Changed__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_WeatherDisplayNameChanged__DelegateSignature_Params params {};
		params.WeatherName = WeatherName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sand Clearing__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SandClearing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sand Clearing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_SandClearing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sand Forming__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::SandForming__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sand Forming__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_SandForming__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::CloudsClearing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_CloudsClearing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::GettingCloudy__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_GettingCloudy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::FinishedSnowing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_FinishedSnowing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::FinishedRaining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_FinishedRaining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::StartedSnowing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_StartedSnowing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Weather_C::StartedRaining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_StartedRaining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUltra_Dynamic_Weather_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUltra_Dynamic_Weather_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C");
		return ptr;
	}

}


