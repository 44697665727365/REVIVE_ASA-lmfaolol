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
	 * Class OnlineSubsystemRedpointEOS.EOSControlChannel
	 * Size -> 0x0220 (FullSize[0x02A8] - InheritedSize[0x0088])
	 */
	class UEOSControlChannel : public UControlChannel
	{
	public:
		unsigned char                                              UnknownData_U371[0x220];                                 // 0x0088(0x0220) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSIpNetConnection
	 * Size -> 0x0000 (FullSize[0x1EB8] - InheritedSize[0x1EB8])
	 */
	class UEOSIpNetConnection : public UIpConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSNetConnection
	 * Size -> 0x0010 (FullSize[0x1DF8] - InheritedSize[0x1DE8])
	 */
	class UEOSNetConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_8KCF[0x10];                                  // 0x1DE8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSNetDriver
	 * Size -> 0x0088 (FullSize[0x08C8] - InheritedSize[0x0840])
	 */
	class UEOSNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_JE8S[0x78];                                  // 0x0840(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEOSNetConnection*>                           PendingConnectionClose;                                  // 0x08B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSSubsystem
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UEOSSubsystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnAddWidgetToViewport;                                   // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveWidgetFromViewport;                              // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQFA[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
	{
	public:
		unsigned char                                              UnknownData_T2F2[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void CancelLogin();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_EnterDevicePinCode : public UInterface
	{
	public:
		void SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject
	{
	public:
		unsigned char                                              UnknownData_WK6C[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SelectedCandidates(TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public UInterface
	{
	public:
		void SetupUserInterface(class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_SelectEOSAccount_Context : public UObject
	{
	public:
		unsigned char                                              UnknownData_NDDB[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SelectCandidate(const struct FEOSUserInterface_CandidateEOSAccount& SelectedCandidate);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_SelectEOSAccount : public UInterface
	{
	public:
		void SetupUserInterface(class UEOSUserInterface_SelectEOSAccount_Context* Context, TArray<struct FEOSUserInterface_CandidateEOSAccount> AvailableCandidates);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
	{
	public:
		unsigned char                                              UnknownData_XG52[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_SignInOrCreateAccount : public UInterface
	{
	public:
		void SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject
	{
	public:
		unsigned char                                              UnknownData_DGL3[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SelectChoice(EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectedChoice);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSUserInterface_SwitchToCrossPlatformAccount : public UInterface
	{
	public:
		void SetupUserInterface(class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context, const class FString& EpicAccountName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class URecentPlayersWorldSubsystem : public URecentPlayersWorldSubsystemBase
	{
	public:
		unsigned char                                              UnknownData_4PJK[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
