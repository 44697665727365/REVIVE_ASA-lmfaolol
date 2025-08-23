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
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Select New Weather
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URandom_Weather_Variation_C::StartTimertoSelectNewWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Select New Weather");
		
		URandom_Weather_Variation_C_StartTimertoSelectNewWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Change Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URandom_Weather_Variation_C::IncrementChangeTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Change Timer");
		
		URandom_Weather_Variation_C_IncrementChangeTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Create Composite Probability Map
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       Out                                                        (Parm, OutParm)
	 */
	void URandom_Weather_Variation_C::CreateCompositeProbabilityMap(TMap<class UUDS_Weather_Settings_C*, double>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Create Composite Probability Map");
		
		URandom_Weather_Variation_C_CreateCompositeProbabilityMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRandomWeatherVariation_State               RandomWeatherState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::ApplyState(const struct FRandomWeatherVariation_State& RandomWeatherState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State");
		
		URandom_Weather_Variation_C_ApplyState_Params params {};
		params.RandomWeatherState = RandomWeatherState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRandomWeatherVariation_State               State                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeather_Override_Volume_C*                  Volume                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::GetStateforSaving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving");
		
		URandom_Weather_Variation_C_GetStateforSaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		if (Volume != nullptr)
			*Volume = params.Volume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FilterProbabilityList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::SelectNewRandomWeatherType(bool FilterProbabilityList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type");
		
		URandom_Weather_Variation_C_SelectNewRandomWeatherType_Params params {};
		params.FilterProbabilityList = FilterProbabilityList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URandom_Weather_Variation_C::IncrementRandomWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather");
		
		URandom_Weather_Variation_C_IncrementRandomWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AUltra_Dynamic_Weather_C*                    UDW                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       SummerProbabilities                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       AutumnProbabilities                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       WinterProbabilities                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TMap<class UUDS_Weather_Settings_C*, double>       SpringProbabilities                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               StartwithRandomType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<class UUDS_Weather_Settings_C*, double> SummerProbabilities, TMap<class UUDS_Weather_Settings_C*, double> AutumnProbabilities, TMap<class UUDS_Weather_Settings_C*, double> WinterProbabilities, TMap<class UUDS_Weather_Settings_C*, double> SpringProbabilities, bool StartwithRandomType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize");
		
		URandom_Weather_Variation_C_Initialize_Params params {};
		params.UDW = UDW;
		params.SummerProbabilities = SummerProbabilities;
		params.AutumnProbabilities = AutumnProbabilities;
		params.WinterProbabilities = WinterProbabilities;
		params.SpringProbabilities = SpringProbabilities;
		params.StartwithRandomType = StartwithRandomType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick");
		
		URandom_Weather_Variation_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void URandom_Weather_Variation_C::ResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer");
		
		URandom_Weather_Variation_C_ResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::ExecuteUbergraph_Random_Weather_Variation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation");
		
		URandom_Weather_Variation_C_ExecuteUbergraph_Random_Weather_Variation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandom_Weather_Variation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandom_Weather_Variation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C");
		return ptr;
	}

}


