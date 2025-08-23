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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.IsOverridingSkylightTemperature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::IsOverridingSkylightTemperature(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.IsOverridingSkylightTemperature");
		
		UUltra_Dynamic_Weather_Interface_C_IsOverridingSkylightTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetSnowAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Snow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetSnowAmount(double* Snow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetSnowAmount");
		
		UUltra_Dynamic_Weather_Interface_C_GetSnowAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Snow != nullptr)
			*Snow = params.Snow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetRainAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Rain                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetRainAmount(double* Rain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetRainAmount");
		
		UUltra_Dynamic_Weather_Interface_C_GetRainAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rain != nullptr)
			*Rain = params.Rain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetConditions
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
	void UUltra_Dynamic_Weather_Interface_C::GetConditions(double* WindStrength, double* WindDirectionYaw, double* Temperature_C, double* Temperature_F, double* RelativeTemperature, bool* IsRaining, bool* IsSnowing, bool* IsHeatwave, bool* IsColdfront)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetConditions");
		
		UUltra_Dynamic_Weather_Interface_C_GetConditions_Params params {};
		
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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Up Rainbow MID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUltra_Dynamic_Weather_Interface_C::SetUpRainbowMID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Up Rainbow MID");
		
		UUltra_Dynamic_Weather_Interface_C_SetUpRainbowMID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Rainbow MID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               RainbowEnabled                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    Mid                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetRainbowMID(bool* RainbowEnabled, class UMaterialInstanceDynamic** Mid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Rainbow MID");
		
		UUltra_Dynamic_Weather_Interface_C_GetRainbowMID_Params params {};
		
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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Water Level
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UsingWaterLevel                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WaterLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetIntendedWaterLevel(bool* UsingWaterLevel, double* WaterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Water Level");
		
		UUltra_Dynamic_Weather_Interface_C_GetIntendedWaterLevel_Params params {};
		
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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Rainbow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUltra_Dynamic_Weather_Interface_C::UpdateRainbow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Rainbow");
		
		UUltra_Dynamic_Weather_Interface_C_UpdateRainbow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Project Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_Project_Mode                                  Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::SetProjectMode(EUDS_Project_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Project Mode");
		
		UUltra_Dynamic_Weather_Interface_C_SetProjectMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Weather Particle Collision Channel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECollisionChannel                                  Channel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetWeatherParticleCollisionChannel(ECollisionChannel* Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Weather Particle Collision Channel");
		
		UUltra_Dynamic_Weather_Interface_C_GetWeatherParticleCollisionChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Channel != nullptr)
			*Channel = params.Channel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Hard Refresh Cached Properties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUltra_Dynamic_Weather_Interface_C::HardRefreshCachedProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Hard Refresh Cached Properties");
		
		UUltra_Dynamic_Weather_Interface_C_HardRefreshCachedProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::DestroyCloseThunderComponent(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component");
		
		UUltra_Dynamic_Weather_Interface_C_DestroyCloseThunderComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LPF                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetCloseThunderSoundOcclusion(double* Volume, double* LPF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion");
		
		UUltra_Dynamic_Weather_Interface_C_GetCloseThunderSoundOcclusion_Params params {};
		
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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUltra_Dynamic_Weather_Interface_C::UpdateMaterialEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects");
		
		UUltra_Dynamic_Weather_Interface_C_UpdateMaterialEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::ApplyState(const struct FUDS_and_UDW_State& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State");
		
		UUltra_Dynamic_Weather_Interface_C_ApplyState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          UDWState                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetStateforSaving(struct FUDS_and_UDW_State* UDWState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving");
		
		UUltra_Dynamic_Weather_Interface_C_GetStateforSaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UDWState != nullptr)
			*UDWState = params.UDWState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             IntendedCloudDirection                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetIntendedCloudDirection(double* IntendedCloudDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction");
		
		UUltra_Dynamic_Weather_Interface_C_GetIntendedCloudDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntendedCloudDirection != nullptr)
			*IntendedCloudDirection = params.IntendedCloudDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             IntendedCloudSpeed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::GetIntendedCloudSpeed(double* IntendedCloudSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed");
		
		UUltra_Dynamic_Weather_Interface_C_GetIntendedCloudSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntendedCloudSpeed != nullptr)
			*IntendedCloudSpeed = params.IntendedCloudSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CloudCoverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Fog                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Dust                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::UpdateWeatherSettingsfromUDS(double CloudCoverage, double Fog, double Dust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS");
		
		UUltra_Dynamic_Weather_Interface_C_UpdateWeatherSettingsfromUDS_Params params {};
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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUltra_Dynamic_Weather_Interface_C::InitializeWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather");
		
		UUltra_Dynamic_Weather_Interface_C_InitializeWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Season
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUltra_Dynamic_Weather_Interface_C::SetSeason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Season");
		
		UUltra_Dynamic_Weather_Interface_C_SetSeason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUltra_Dynamic_Weather_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUltra_Dynamic_Weather_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C");
		return ptr;
	}

}


