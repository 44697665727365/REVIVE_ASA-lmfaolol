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
	 * 		Name   -> Function Buff_StegoRider.Buff_StegoRider_C.BPPreventAddingOtherBuff
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      anotherBuffClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool ABuff_StegoRider_C::BPPreventAddingOtherBuff(class UClass* anotherBuffClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoRider.Buff_StegoRider_C.BPPreventAddingOtherBuff");
		
		ABuff_StegoRider_C_BPPreventAddingOtherBuff_Params params {};
		params.anotherBuffClass = anotherBuffClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_StegoRider.Buff_StegoRider_C.BPNotifyPreventDismounting
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        FromDino                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_StegoRider_C::BPNotifyPreventDismounting(class APrimalDinoCharacter* FromDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoRider.Buff_StegoRider_C.BPNotifyPreventDismounting");
		
		ABuff_StegoRider_C_BPNotifyPreventDismounting_Params params {};
		params.FromDino = FromDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_StegoRider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_StegoRider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StegoRider.Buff_StegoRider_C");
		return ptr;
	}

}


