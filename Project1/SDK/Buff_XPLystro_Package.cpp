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
	 * 		Name   -> Function Buff_XPLystro.Buff_XPLystro_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterHUD*                                 HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CenterY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrawScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_XPLystro_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_XPLystro.Buff_XPLystro_C.DrawBuffFloatingHUD");
		
		ABuff_XPLystro_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_XPLystro.Buff_XPLystro_C.ExecuteUbergraph_Buff_XPLystro
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_XPLystro_C::ExecuteUbergraph_Buff_XPLystro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_XPLystro.Buff_XPLystro_C.ExecuteUbergraph_Buff_XPLystro");
		
		ABuff_XPLystro_C_ExecuteUbergraph_Buff_XPLystro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_XPLystro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_XPLystro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_XPLystro.Buff_XPLystro_C");
		return ptr;
	}

}


