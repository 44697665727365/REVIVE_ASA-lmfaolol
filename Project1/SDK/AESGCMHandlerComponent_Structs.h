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
	 * Enum AESGCMHandlerComponent.EAESGCMNetResult
	 */
	enum class EAESGCMNetResult : uint8_t
	{
		Unknown             = 0,
		Success             = 1,
		AESMissingIV        = 2,
		AESMissingAuthTag   = 3,
		AESMissingPayload   = 4,
		AESDecryptionFailed = 5,
		AESZeroLastByte     = 6,
		MAX                 = 7
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
