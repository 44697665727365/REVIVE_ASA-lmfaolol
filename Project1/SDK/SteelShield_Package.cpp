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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteelShieldTokenProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteelShieldTokenProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.SteelShieldTokenProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClientTokenProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClientTokenProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.ClientTokenProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultTokenProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultTokenProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.DefaultTokenProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSTokenProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSTokenProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.EOSTokenProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteelShieldJWT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteelShieldJWT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.SteelShieldJWT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteelShieldRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteelShieldRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.SteelShieldRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0253DBE0
	 * 		Name   -> Function SteelShield.SteelShieldSubsystem.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USteelShieldSubsystem::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteelShield.SteelShieldSubsystem.Stop");
		
		USteelShieldSubsystem_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0253DC00
	 * 		Name   -> Function SteelShield.SteelShieldSubsystem.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TokenNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteelShieldSubsystem::Start(int32_t TokenNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteelShield.SteelShieldSubsystem.Start");
		
		USteelShieldSubsystem_Start_Params params {};
		params.TokenNum = TokenNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0253DAF0
	 * 		Name   -> Function SteelShield.SteelShieldSubsystem.SetTokenProvider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      TokenProviderClass                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USteelShieldTokenProvider* USteelShieldSubsystem::SetTokenProvider(class UClass* TokenProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteelShield.SteelShieldSubsystem.SetTokenProvider");
		
		USteelShieldSubsystem_SetTokenProvider_Params params {};
		params.TokenProviderClass = TokenProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> DelegateFunction SteelShield.SteelShieldSubsystem.OnInitializedBP__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteelShieldSubsystem::OnInitializedBP__DelegateSignature(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction SteelShield.SteelShieldSubsystem.OnInitializedBP__DelegateSignature");
		
		USteelShieldSubsystem_OnInitializedBP__DelegateSignature_Params params {};
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0253DA80
	 * 		Name   -> Function SteelShield.SteelShieldSubsystem.IsRolloverInProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USteelShieldSubsystem::IsRolloverInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteelShield.SteelShieldSubsystem.IsRolloverInProgress");
		
		USteelShieldSubsystem_IsRolloverInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0253DAA0
	 * 		Name   -> Function SteelShield.SteelShieldSubsystem.IsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USteelShieldSubsystem::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteelShield.SteelShieldSubsystem.IsEnabled");
		
		USteelShieldSubsystem_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0253DAD0
	 * 		Name   -> Function SteelShield.SteelShieldSubsystem.GetTokenProvider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USteelShieldTokenProvider* USteelShieldSubsystem::GetTokenProvider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteelShield.SteelShieldSubsystem.GetTokenProvider");
		
		USteelShieldSubsystem_GetTokenProvider_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteelShieldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteelShieldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.SteelShieldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteelShieldTokenRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteelShieldTokenRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteelShield.SteelShieldTokenRequest");
		return ptr;
	}

}


