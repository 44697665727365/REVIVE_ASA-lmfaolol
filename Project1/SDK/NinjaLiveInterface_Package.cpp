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
	 * 		Name   -> Function NinjaLiveInterface.NinjaLiveInterface_C.LiveFluidParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BrushSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveInterface_C::LiveFluidParams(double BrushSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveInterface.NinjaLiveInterface_C.LiveFluidParams");
		
		UNinjaLiveInterface_C_LiveFluidParams_Params params {};
		params.BrushSize = BrushSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveInterface.NinjaLiveInterface_C.LiveActivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FadeTimeOfBrush                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FadeTimeOfCanvas                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveInterface_C::LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveInterface.NinjaLiveInterface_C.LiveActivation");
		
		UNinjaLiveInterface_C_LiveActivation_Params params {};
		params.ParamName = ParamName;
		params.FadeTimeOfBrush = FadeTimeOfBrush;
		params.FadeTimeOfCanvas = FadeTimeOfCanvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNinjaLiveInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNinjaLiveInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NinjaLiveInterface.NinjaLiveInterface_C");
		return ptr;
	}

}


