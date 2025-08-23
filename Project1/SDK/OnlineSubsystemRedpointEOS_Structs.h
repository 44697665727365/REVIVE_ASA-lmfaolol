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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OnlineSubsystemRedpointEOS.EPresenceAdvertisementType
	 */
	enum class EPresenceAdvertisementType : uint8_t
	{
		None    = 0,
		Party   = 1,
		Session = 2,
		MAX     = 3
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.EEOSApiVersion
	 */
	enum class EEOSApiVersion : uint8_t
	{
		v2022_10  = 0,
		v2022_05  = 1,
		v2022_02  = 2,
		v2022_MAX = 3
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.EPartyJoinabilityConstraint
	 */
	enum class EPartyJoinabilityConstraint : uint8_t
	{
		AllowPlayersInMultipleParties = 0,
		IgnoreInvitesIfAlreadyInParty = 1,
		MAX                           = 2
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.ENetworkAuthenticationMode
	 */
	enum class ENetworkAuthenticationMode : uint8_t
	{
		Default = 0,
		IDToken = 1,
		Off     = 2,
		MAX     = 3
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.EDedicatedServersDistributionMode
	 */
	enum class EDedicatedServersDistributionMode : uint8_t
	{
		DevelopersOnly       = 0,
		DevelopersAndPlayers = 1,
		PlayersOnly          = 2,
		MAX                  = 3
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.EStatTypingRule
	 */
	enum class EStatTypingRule : uint8_t
	{
		Int32          = 0,
		Bool           = 1,
		FloatTruncated = 2,
		FloatEncoded   = 3,
		DoubleEncoded  = 4,
		MAX            = 5
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.EEOSUserInterface_SignInOrCreateAccount_Choice
	 */
	enum class EEOSUserInterface_SignInOrCreateAccount_Choice : uint8_t
	{
		SignIn                                      = 0,
		CreateAccount                               = 1,
		EEOSUserInterface_SignInOrCreateAccount_MAX = 2
	};

	/**
	 * Enum OnlineSubsystemRedpointEOS.EEOSUserInterface_SwitchToCrossPlatformAccount_Choice
	 */
	enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice : uint8_t
	{
		SwitchToThisAccount                                = 0,
		LinkADifferentAccount                              = 1,
		CancelLinking                                      = 2,
		EEOSUserInterface_SwitchToCrossPlatformAccount_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemRedpointEOS.EOSUserInterface_CandidateEOSAccount
	 * Size -> 0x00D0
	 */
	struct FEOSUserInterface_CandidateEOSAccount
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAY0[0xB8];                                  // 0x0018(0x00B8) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
