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
	 * Enum PCGGeometryScriptInterop.EPCGMeshSamplingMethod
	 */
	enum class EPCGMeshSamplingMethod : uint8_t
	{
		OnePointPerTriangle = 0,
		OnePointPerVertex   = 1,
		PoissonSampling     = 2,
		MAX                 = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
