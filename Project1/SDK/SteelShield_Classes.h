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
	 * Class SteelShield.SteelShieldTokenProvider
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USteelShieldTokenProvider : public UObject
	{
	public:
		unsigned char                                              UnknownData_MYE2[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.ClientTokenProvider
	 * Size -> 0x00B8 (FullSize[0x0118] - InheritedSize[0x0060])
	 */
	class UClientTokenProvider : public USteelShieldTokenProvider
	{
	public:
		unsigned char                                              UnknownData_CW92[0xA8];                                  // 0x0060(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USteelShieldTokenRequest*>                    ActiveRequests;                                          // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.DefaultTokenProvider
	 * Size -> 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
	 */
	class UDefaultTokenProvider : public UClientTokenProvider
	{
	public:
		unsigned char                                              UnknownData_3ALY[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USteelShieldJWT*                                     JWT;                                                     // 0x0120(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.EOSTokenProvider
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UEOSTokenProvider : public UClientTokenProvider
	{
	public:
		unsigned char                                              UnknownData_H5RF[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.SteelShieldJWT
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USteelShieldJWT : public UObject
	{
	public:
		unsigned char                                              UnknownData_WNWU[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.SteelShieldRuntimeSettings
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class USteelShieldRuntimeSettings : public UObject
	{
	public:
		int32_t                                                    ApiVersion;                                              // 0x0028(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_624L[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Developer;                                               // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Game;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformKey;                                             // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackendURL;                                              // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthProvider;                                            // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameClientVersion;                                       // 0x0090(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Certificate;                                             // 0x00A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EJWTCertificateType                                        CertificateType;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZ3Y[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.SteelShieldSubsystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USteelShieldSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_TPAU[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInitializedBP;                                         // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USteelShieldTokenProvider*                           TokenProvider;                                           // 0x0060(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XRPP[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		void Stop();
		bool Start(int32_t TokenNum);
		class USteelShieldTokenProvider* SetTokenProvider(class UClass* TokenProviderClass);
		void OnInitializedBP__DelegateSignature(bool bSuccessful);
		bool IsRolloverInProgress();
		bool IsEnabled();
		class USteelShieldTokenProvider* GetTokenProvider();
		static UClass* StaticClass();
	};

	/**
	 * Class SteelShield.SteelShieldTokenRequest
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USteelShieldTokenRequest : public UObject
	{
	public:
		unsigned char                                              UnknownData_MOBU[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
