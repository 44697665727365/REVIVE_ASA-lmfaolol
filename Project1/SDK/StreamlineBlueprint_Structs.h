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
	 * Enum StreamlineBlueprint.UStreamlineFeature
	 */
	enum class EUStreamlineFeature : uint8_t
	{
		UStreamlineFeatureDLSSG                  = 0,
		UStreamlineFeatureReflex                 = 1,
		UStreamlineFeatureCount                  = 2,
		UStreamlineFeatureUStreamlineFeature_MAX = 3
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineFeatureSupport
	 */
	enum class EUStreamlineFeatureSupport : uint8_t
	{
		UStreamlineFeatureSupportSupported                                    = 0,
		UStreamlineFeatureSupportNotSupported                                 = 1,
		UStreamlineFeatureSupportNotSupportedIncompatibleHardware             = 2,
		UStreamlineFeatureSupportNotSupportedDriverOutOfDate                  = 3,
		UStreamlineFeatureSupportNotSupportedOperatingSystemOutOfDate         = 4,
		UStreamlineFeatureSupportNotSupportedHardewareSchedulingDisabled      = 5,
		UStreamlineFeatureSupportNotSupportedByRHI                            = 6,
		UStreamlineFeatureSupportNotSupportedByPlatformAtBuildTime            = 7,
		UStreamlineFeatureSupportNotSupportedIncompatibleAPICaptureToolActive = 8,
		UStreamlineFeatureSupportUStreamlineFeatureSupport_MAX                = 9
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
	 */
	enum class EUStreamlineFeatureRequirementsFlags : uint8_t
	{
		UStreamlineFeatureRequirementsFlagsNone                                    = 0,
		UStreamlineFeatureRequirementsFlagsD3D11Supported                          = 1,
		UStreamlineFeatureRequirementsFlagsD3D12Supported                          = 2,
		UStreamlineFeatureRequirementsFlagsVulkanSupported                         = 3,
		UStreamlineFeatureRequirementsFlagsVSyncOffRequired                        = 4,
		UStreamlineFeatureRequirementsFlagsHardwareSchedulingRequired              = 5,
		UStreamlineFeatureRequirementsFlagsUStreamlineFeatureRequirementsFlags_MAX = 6
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineDLSSGMode
	 */
	enum class EUStreamlineDLSSGMode : uint8_t
	{
		UStreamlineDLSSGModeOff                      = 0,
		UStreamlineDLSSGModeOn                       = 1,
		UStreamlineDLSSGModeAuto                     = 2,
		UStreamlineDLSSGModeUStreamlineDLSSGMode_MAX = 3
	};

	/**
	 * Enum StreamlineBlueprint.UStreamlineReflexMode
	 */
	enum class EUStreamlineReflexMode : uint8_t
	{
		UStreamlineReflexModeDisabled                  = 0,
		UStreamlineReflexModeEnabled                   = 1,
		UStreamlineReflexModeEnabledPlusBoost          = 2,
		UStreamlineReflexModeUStreamlineReflexMode_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StreamlineBlueprint.StreamlineVersion
	 * Size -> 0x000C
	 */
	struct FStreamlineVersion
	{
	public:
		int32_t                                                    Major;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minor;                                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Build;                                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct StreamlineBlueprint.StreamlineFeatureRequirements
	 * Size -> 0x0034
	 */
	struct FStreamlineFeatureRequirements
	{
	public:
		EUStreamlineFeatureSupport                                 Support;                                                 // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUStreamlineFeatureRequirementsFlags                       Requirements;                                            // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBAL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStreamlineVersion                                  RequiredOperatingSystemVersion;                          // 0x0004(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FStreamlineVersion                                  DetectedOperatingSystemVersion;                          // 0x0010(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FStreamlineVersion                                  RequiredDriverVersion;                                   // 0x001C(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FStreamlineVersion                                  DetectedDriverVersion;                                   // 0x0028(0x000C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
