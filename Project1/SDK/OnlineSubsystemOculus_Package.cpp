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
	 * 		RVA    -> 0x01C1B560
	 * 		Name   -> Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OculusMatchmakingPool                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::STATIC_CreateSession(int32_t PublicConnections, const class FString& OculusMatchmakingPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession");
		
		UOculusCreateSessionCallbackProxy_CreateSession_Params params {};
		params.PublicConnections = PublicConnections;
		params.OculusMatchmakingPool = OculusMatchmakingPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusCreateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusCreateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C1BAF0
	 * 		Name   -> Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::STATIC_VerifyEntitlement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement");
		
		UOculusEntitlementCallbackProxy_VerifyEntitlement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusEntitlementCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusEntitlementCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C1BE20
	 * 		Name   -> Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::STATIC_FindModeratedSessions(int32_t MaxResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions");
		
		UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params params {};
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C1BF20
	 * 		Name   -> Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OculusMatchmakingPool                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::STATIC_FindMatchmakingSessions(int32_t MaxResults, const class FString& OculusMatchmakingPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions");
		
		UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params params {};
		params.MaxResults = MaxResults;
		params.OculusMatchmakingPool = OculusMatchmakingPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C1C490
	 * 		Name   -> Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::STATIC_GetOculusIdentity(int32_t LocalUserNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity");
		
		UOculusIdentityCallbackProxy_GetOculusIdentity_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusIdentityCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusIdentityCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusIdentityCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C1CC30
	 * 		Name   -> Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldEnqueueInMatchmakingPool                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue");
		
		UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params params {};
		params.bShouldEnqueueInMatchmakingPool = bShouldEnqueueInMatchmakingPool;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusUpdateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusUpdateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy");
		return ptr;
	}

}


