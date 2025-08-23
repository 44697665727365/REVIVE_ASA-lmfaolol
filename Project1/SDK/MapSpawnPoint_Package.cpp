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
	 * 		Name   -> Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	ESlateVisibility UMapSpawnPoint_C::Get_Default__MapSpawnPoint_C_Visiblity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapSpawnPoint.MapSpawnPoint_C.Get_Default__MapSpawnPoint_C_Visiblity_1");
		
		UMapSpawnPoint_C_Get_Default__MapSpawnPoint_C_Visiblity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapSpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapSpawnPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C");
		return ptr;
	}

}


