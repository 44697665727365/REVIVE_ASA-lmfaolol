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
	 * Enum UnrealUSDWrapper.EUsdPurpose
	 */
	enum class EUsdPurpose : uint8_t
	{
		Default = 0,
		Proxy   = 1,
		Render  = 2,
		Guide   = 3,
		MAX     = 4
	};

	/**
	 * Enum UnrealUSDWrapper.EUsdDefaultKind
	 */
	enum class EUsdDefaultKind : uint8_t
	{
		None         = 0,
		Model        = 1,
		Component    = 2,
		Group        = 3,
		Assembly     = 4,
		Subcomponent = 5,
		MAX          = 6
	};

	/**
	 * Enum UnrealUSDWrapper.EUsdInitialLoadSet
	 */
	enum class EUsdInitialLoadSet : uint8_t
	{
		LoadAll  = 0,
		LoadNone = 1,
		MAX      = 2
	};

	/**
	 * Enum UnrealUSDWrapper.EUsdInterpolationType
	 */
	enum class EUsdInterpolationType : uint8_t
	{
		Held   = 0,
		Linear = 1,
		MAX    = 2
	};

	/**
	 * Enum UnrealUSDWrapper.EUsdRootMotionHandling
	 */
	enum class EUsdRootMotionHandling : uint8_t
	{
		NoAdditionalRootMotion = 0,
		UseMotionFromSkelRoot  = 1,
		UseMotionFromSkeleton  = 2,
		MAX                    = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
