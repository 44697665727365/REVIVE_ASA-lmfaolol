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
	 * Enum LocalFileNetworkReplayStreaming.ELocalFileReplayResult
	 */
	enum class ELocalFileReplayResult : uint8_t
	{
		Success                  = 0,
		InvalidReplayInfo        = 1,
		StreamChunkIndexMismatch = 2,
		DecompressBuffer         = 3,
		CompressionNotSupported  = 4,
		DecryptBuffer            = 5,
		EncryptionNotSupported   = 6,
		Unknown                  = 7,
		MAX                      = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
