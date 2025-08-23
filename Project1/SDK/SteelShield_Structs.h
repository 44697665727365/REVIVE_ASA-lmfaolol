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
	 * Enum SteelShield.ESteelShieldEnvironment
	 */
	enum class ESteelShieldEnvironment : uint8_t
	{
		Production  = 0,
		Development = 1,
		MAX         = 2
	};

	/**
	 * Enum SteelShield.EJWTCertificateType
	 */
	enum class EJWTCertificateType : uint8_t
	{
		HS256 = 0,
		HS384 = 1,
		HS512 = 2,
		RS256 = 3,
		RS384 = 4,
		RS512 = 5,
		MAX   = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
