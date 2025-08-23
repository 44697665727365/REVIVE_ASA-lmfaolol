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
	 * 		Name   -> Function WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C.delay break and iron out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               delayforzoomout                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapTekCruiseMissile_Base_C::delaybreakandironout(bool delayforzoomout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C.delay break and iron out");
		
		AWeapTekCruiseMissile_Base_C_delaybreakandironout_Params params {};
		params.delayforzoomout = delayforzoomout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C.ExecuteUbergraph_WeapTekCruiseMissile_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapTekCruiseMissile_Base_C::ExecuteUbergraph_WeapTekCruiseMissile_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C.ExecuteUbergraph_WeapTekCruiseMissile_Base");
		
		AWeapTekCruiseMissile_Base_C_ExecuteUbergraph_WeapTekCruiseMissile_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTekCruiseMissile_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTekCruiseMissile_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C");
		return ptr;
	}

}


