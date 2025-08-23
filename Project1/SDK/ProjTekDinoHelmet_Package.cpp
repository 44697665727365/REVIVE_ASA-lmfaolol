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
	 * 		Name   -> Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.BPIgnoreRadialDamageVictim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AProjTekDinoHelmet_C::BPIgnoreRadialDamageVictim(class AActor* Victim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.BPIgnoreRadialDamageVictim");
		
		AProjTekDinoHelmet_C_BPIgnoreRadialDamageVictim_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjTekDinoHelmet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ReceiveBeginPlay");
		
		AProjTekDinoHelmet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjTekDinoHelmet_C::OnExplode(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode");
		
		AProjTekDinoHelmet_C_OnExplode_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjTekDinoHelmet_C::ExecuteUbergraph_ProjTekDinoHelmet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet");
		
		AProjTekDinoHelmet_C_ExecuteUbergraph_ProjTekDinoHelmet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjTekDinoHelmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjTekDinoHelmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C");
		return ptr;
	}

}


