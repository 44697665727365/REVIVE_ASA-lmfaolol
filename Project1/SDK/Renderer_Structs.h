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
	 * Enum Renderer.EDynamicCustomDataPassType
	 */
	enum class EDynamicCustomDataPassType : uint8_t
	{
		AllocationPass = 0,
		OutputPass     = 1,
		MAX            = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
