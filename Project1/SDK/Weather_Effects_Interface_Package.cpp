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
	 * 		Name   -> Function Weather_Effects_Interface.Weather_Effects_Interface_C.Force Startup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWeather_Effects_Interface_C::ForceStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Effects_Interface.Weather_Effects_Interface_C.Force Startup");
		
		UWeather_Effects_Interface_C_ForceStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weather_Effects_Interface.Weather_Effects_Interface_C.Reset Emitters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWeather_Effects_Interface_C::ResetEmitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Effects_Interface.Weather_Effects_Interface_C.Reset Emitters");
		
		UWeather_Effects_Interface_C_ResetEmitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Weather_Effects_Interface.Weather_Effects_Interface_C.Editor Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWeather_Effects_Interface_C::EditorUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Effects_Interface.Weather_Effects_Interface_C.Editor Update");
		
		UWeather_Effects_Interface_C_EditorUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeather_Effects_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeather_Effects_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weather_Effects_Interface.Weather_Effects_Interface_C");
		return ptr;
	}

}


