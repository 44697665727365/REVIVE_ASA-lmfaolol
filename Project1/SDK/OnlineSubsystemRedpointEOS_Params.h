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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
	 */
	struct UEOSUserInterface_EnterDevicePinCode_Context_CancelLogin_Params
	{	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
	 */
	struct UEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params
	{
	public:
		class UEOSUserInterface_EnterDevicePinCode_Context*        Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              VerificationUrl;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PinCode;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context.SelectedCandidates
	 */
	struct UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context_SelectedCandidates_Params
	{
	public:
		TArray<struct FEOSUserInterface_CandidateEOSAccount>       SelectedCandidates;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform.SetupUserInterface
	 */
	struct UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_SetupUserInterface_Params
	{
	public:
		class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FEOSUserInterface_CandidateEOSAccount>       AvailableCandidates;                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context.SelectCandidate
	 */
	struct UEOSUserInterface_SelectEOSAccount_Context_SelectCandidate_Params
	{
	public:
		struct FEOSUserInterface_CandidateEOSAccount               SelectedCandidate;                                       // 0x0000(0x00D0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount.SetupUserInterface
	 */
	struct UEOSUserInterface_SelectEOSAccount_SetupUserInterface_Params
	{
	public:
		class UEOSUserInterface_SelectEOSAccount_Context*          Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FEOSUserInterface_CandidateEOSAccount>       AvailableCandidates;                                     // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
	 */
	struct UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params
	{
	public:
		EEOSUserInterface_SignInOrCreateAccount_Choice             SelectedChoice;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
	 */
	struct UEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params
	{
	public:
		class UEOSUserInterface_SignInOrCreateAccount_Context*     Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context.SelectChoice
	 */
	struct UEOSUserInterface_SwitchToCrossPlatformAccount_Context_SelectChoice_Params
	{
	public:
		EEOSUserInterface_SwitchToCrossPlatformAccount_Choice      SelectedChoice;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount.SetupUserInterface
	 */
	struct UEOSUserInterface_SwitchToCrossPlatformAccount_SetupUserInterface_Params
	{
	public:
		class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EpicAccountName;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
