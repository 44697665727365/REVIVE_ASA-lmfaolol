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
	 * 		Name   -> Function DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C.IsCurrentlyActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDinoHUDStatusBarsWidget_C::IsCurrentlyActive(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C.IsCurrentlyActive");
		
		UDinoHUDStatusBarsWidget_C_IsCurrentlyActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoHUDStatusBarsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoHUDStatusBarsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C");
		return ptr;
	}

}


