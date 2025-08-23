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
	 * 		Name   -> Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.InitColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateSpawnInEmitter_C::InitColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.InitColor");
		
		ASupplyCrateSpawnInEmitter_C_InitColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.SetupEmitter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      FromActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateSpawnInEmitter_C::SetupEmitter(class AActor* FromActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.SetupEmitter");
		
		ASupplyCrateSpawnInEmitter_C_SetupEmitter_Params params {};
		params.FromActor = FromActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.UpdateEmitter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      FromActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateSpawnInEmitter_C::UpdateEmitter(float DeltaTime, float Alpha, class AActor* FromActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.UpdateEmitter");
		
		ASupplyCrateSpawnInEmitter_C_UpdateEmitter_Params params {};
		params.DeltaTime = DeltaTime;
		params.Alpha = Alpha;
		params.FromActor = FromActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateSpawnInEmitter_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter");
		
		ASupplyCrateSpawnInEmitter_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASupplyCrateSpawnInEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASupplyCrateSpawnInEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C");
		return ptr;
	}

}


