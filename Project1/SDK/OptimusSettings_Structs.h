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
	 * Enum OptimusSettings.EOptimusDefaultDeformerMode
	 */
	enum class EOptimusDefaultDeformerMode : uint8_t
	{
		Never         = 0,
		SkinCacheOnly = 1,
		Always        = 2,
		MAX           = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
