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
	 * Function SteelShield.SteelShieldSubsystem.Stop
	 */
	struct USteelShieldSubsystem_Stop_Params
	{	};

	/**
	 * Function SteelShield.SteelShieldSubsystem.Start
	 */
	struct USteelShieldSubsystem_Start_Params
	{
	public:
		int32_t                                                    TokenNum;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteelShield.SteelShieldSubsystem.SetTokenProvider
	 */
	struct USteelShieldSubsystem_SetTokenProvider_Params
	{
	public:
		class UClass*                                              TokenProviderClass;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USteelShieldTokenProvider*                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SteelShield.SteelShieldSubsystem.OnInitializedBP__DelegateSignature
	 */
	struct USteelShieldSubsystem_OnInitializedBP__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccessful;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteelShield.SteelShieldSubsystem.IsRolloverInProgress
	 */
	struct USteelShieldSubsystem_IsRolloverInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteelShield.SteelShieldSubsystem.IsEnabled
	 */
	struct USteelShieldSubsystem_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SteelShield.SteelShieldSubsystem.GetTokenProvider
	 */
	struct USteelShieldSubsystem_GetTokenProvider_Params
	{
	public:
		class USteelShieldTokenProvider*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
