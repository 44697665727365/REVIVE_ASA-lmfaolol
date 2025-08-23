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
	 * 		Name   -> Function TestGameMode.TestGameMode_C.StartEventManagedActors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATestGameMode_C::StartEventManagedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.StartEventManagedActors");
		
		ATestGameMode_C_StartEventManagedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TestGameMode.TestGameMode_C.BPPreSpawnedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        TheDino                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGameMode_C::BPPreSpawnedDino(class APrimalDinoCharacter* TheDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.BPPreSpawnedDino");
		
		ATestGameMode_C_BPPreSpawnedDino_Params params {};
		params.TheDino = TheDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TestGameMode.TestGameMode_C.OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ATestGameMode_C::OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2");
		
		ATestGameMode_C_OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TheShooterCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGameMode_C::OnShooterCharacterSpawned_Event(class AShooterCharacter* TheShooterCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.OnShooterCharacterSpawned_Event");
		
		ATestGameMode_C_OnShooterCharacterSpawned_Event_Params params {};
		params.TheShooterCharacter = TheShooterCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TestGameMode.TestGameMode_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGameMode_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ReceiveTick");
		
		ATestGameMode_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATestGameMode_C::ExecuteUbergraph_TestGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TestGameMode.TestGameMode_C.ExecuteUbergraph_TestGameMode");
		
		ATestGameMode_C_ExecuteUbergraph_TestGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TestGameMode.TestGameMode_C");
		return ptr;
	}

}


