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
	 * 		Name   -> Function Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UClose_Thunder_Audio_Player_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C.ReceiveBeginPlay");
		
		UClose_Thunder_Audio_Player_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C.ExecuteUbergraph_Close_Thunder_Audio_Player
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClose_Thunder_Audio_Player_C::ExecuteUbergraph_Close_Thunder_Audio_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C.ExecuteUbergraph_Close_Thunder_Audio_Player");
		
		UClose_Thunder_Audio_Player_C_ExecuteUbergraph_Close_Thunder_Audio_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClose_Thunder_Audio_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClose_Thunder_Audio_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Close_Thunder_Audio_Player.Close_Thunder_Audio_Player_C");
		return ptr;
	}

}


