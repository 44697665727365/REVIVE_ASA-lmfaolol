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
	 * 		Name   -> Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.FluidSpash
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNiagaraSystem*                              FluidSimSplashTemplateOverride                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySplashSound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVolumentricDispatcherBP_C::FluidSpash(const struct FVector& Location, float Radius, const struct FVector& Velocity, class UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.FluidSpash");
		
		AVolumentricDispatcherBP_C_FluidSpash_Params params {};
		params.Location = Location;
		params.Radius = Radius;
		params.Velocity = Velocity;
		params.FluidSimSplashTemplateOverride = FluidSimSplashTemplateOverride;
		params.PlaySplashSound = PlaySplashSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.ExecuteUbergraph_VolumentricDispatcherBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVolumentricDispatcherBP_C::ExecuteUbergraph_VolumentricDispatcherBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VolumentricDispatcherBP.VolumentricDispatcherBP_C.ExecuteUbergraph_VolumentricDispatcherBP");
		
		AVolumentricDispatcherBP_C_ExecuteUbergraph_VolumentricDispatcherBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVolumentricDispatcherBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVolumentricDispatcherBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VolumentricDispatcherBP.VolumentricDispatcherBP_C");
		return ptr;
	}

}


