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
	 * Enum HttpNetworkReplayStreaming.EHttpReplayResult
	 */
	enum class EHttpReplayResult : uint8_t
	{
		Success             = 0,
		FailedJsonParse     = 1,
		DataUnavailable     = 2,
		InvalidHttpResponse = 3,
		CompressionFailed   = 4,
		DecompressionFailed = 5,
		InvalidPayload      = 6,
		Unknown             = 7,
		MAX                 = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
