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
	 * Enum DLSSMoviePipelineSupport.EMoviePipelineDLSSQuality
	 */
	enum class EMoviePipelineDLSSQuality : uint8_t
	{
		DLAA             = 0,
		UltraQuality     = 1,
		Quality          = 2,
		Balanced         = 3,
		Performance      = 4,
		UltraPerformance = 5,
		MAX              = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
