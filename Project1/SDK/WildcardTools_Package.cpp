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
	 * 		RVA    -> 0x01565F80
	 * 		Name   -> Function WildcardTools.WildcardHelpers.CreateJIRABug
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWildcardHelpers::STATIC_CreateJIRABug(const class FString& Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WildcardTools.WildcardHelpers.CreateJIRABug");
		
		UWildcardHelpers_CreateJIRABug_Params params {};
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWildcardHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWildcardHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WildcardTools.WildcardHelpers");
		return ptr;
	}

}


