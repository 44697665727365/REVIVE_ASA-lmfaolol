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
	 * 		Name   -> PredefinedFunction UEOSControlChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSControlChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSControlChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSIpNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSIpNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSIpNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x019B4C70
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UEOSUserInterface_EnterDevicePinCode_Context::CancelLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin");
		
		UEOSUserInterface_EnterDevicePinCode_Context_CancelLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_EnterDevicePinCode_Context.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_EnterDevicePinCode_Context::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEOSUserInterface_EnterDevicePinCode_Context* Context                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VerificationUrl                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PinCode                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_EnterDevicePinCode::SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface");
		
		UEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params params {};
		params.Context = Context;
		params.VerificationUrl = VerificationUrl;
		params.PinCode = PinCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_EnterDevicePinCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_EnterDevicePinCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x019B5200
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::SelectedCandidates(TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates");
		
		UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context_SelectedCandidates_Params params {};
		params.SelectedCandidates = SelectedCandidates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface");
		
		UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_SetupUserInterface_Params params {};
		params.Context = Context;
		params.AvailableCandidates = AvailableCandidates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x019B5A10
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FEOSUserInterface_CandidateEOSAccount       SelectedCandidate                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_SelectEOSAccount_Context::SelectCandidate(const struct FEOSUserInterface_CandidateEOSAccount& SelectedCandidate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate");
		
		UEOSUserInterface_SelectEOSAccount_Context_SelectCandidate_Params params {};
		params.SelectedCandidate = SelectedCandidate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_SelectEOSAccount_Context.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_SelectEOSAccount_Context::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEOSUserInterface_SelectEOSAccount_Context*  Context                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_SelectEOSAccount::SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface");
		
		UEOSUserInterface_SelectEOSAccount_SetupUserInterface_Params params {};
		params.Context = Context;
		params.AvailableCandidates = AvailableCandidates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_SelectEOSAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_SelectEOSAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x019B60D0
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEOSUserInterface_SignInOrCreateAccount_Choice     SelectedChoice                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_SignInOrCreateAccount_Context::SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice");
		
		UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params params {};
		params.SelectedChoice = SelectedChoice;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_SignInOrCreateAccount_Context.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_SignInOrCreateAccount_Context::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEOSUserInterface_SignInOrCreateAccount_Context* Context                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_SignInOrCreateAccount::SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface");
		
		UEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_SignInOrCreateAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_SignInOrCreateAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x019B60D0
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_SwitchToCrossPlatformAccount_Context::SelectChoice(EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice");
		
		UEOSUserInterface_SwitchToCrossPlatformAccount_Context_SelectChoice_Params params {};
		params.SelectedChoice = SelectedChoice;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_SwitchToCrossPlatformAccount_Context.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_SwitchToCrossPlatformAccount_Context::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EpicAccountName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSUserInterface_SwitchToCrossPlatformAccount::SetupUserInterface(class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, const class FString& EpicAccountName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface");
		
		UEOSUserInterface_SwitchToCrossPlatformAccount_SetupUserInterface_Params params {};
		params.Context = Context;
		params.EpicAccountName = EpicAccountName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSUserInterface_SwitchToCrossPlatformAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSUserInterface_SwitchToCrossPlatformAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecentPlayersWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecentPlayersWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem");
		return ptr;
	}

}


