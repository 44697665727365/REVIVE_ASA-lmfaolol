#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFBD[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusCreateSessionCallbackProxy* STATIC_CreateSession(int32_t PublicConnections, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UOculusEntitlementCallbackProxy* STATIC_VerifyEntitlement();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_517S[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusFindSessionsCallbackProxy* STATIC_FindModeratedSessions(int32_t MaxResults);
		class UOculusFindSessionsCallbackProxy* STATIC_FindMatchmakingSessions(int32_t MaxResults, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLA5[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOculusIdentityCallbackProxy* STATIC_GetOculusIdentity(int32_t LocalUserNum);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetConnection
	 * Size -> 0x0010 (FullSize[0x1EC8] - InheritedSize[0x1EB8])
	 */
	class UOculusNetConnection : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_TMG0[0x10];                                  // 0x1EB8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetDriver
	 * Size -> 0x00B8 (FullSize[0x08F8] - InheritedSize[0x0840])
	 */
	class UOculusNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_JVU1[0xB8];                                  // 0x0840(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESBN[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UOculusUpdateSessionCallbackProxy* STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
