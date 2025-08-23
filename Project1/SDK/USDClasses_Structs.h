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
	 * Enum USDClasses.EUsdDuplicateType
	 */
	enum class EUsdDuplicateType : uint8_t
	{
		FlattenComposedPrim = 0,
		SingleLayerSpecs    = 1,
		AllLocalLayerSpecs  = 2,
		MAX                 = 3
	};

	/**
	 * Enum USDClasses.EUsdSaveDialogBehavior
	 */
	enum class EUsdSaveDialogBehavior : uint8_t
	{
		NeverSave  = 0,
		AlwaysSave = 1,
		ShowPrompt = 2,
		MAX        = 3
	};

	/**
	 * Enum USDClasses.EUsdUpAxis
	 */
	enum class EUsdUpAxis : uint8_t
	{
		YAxis = 0,
		ZAxis = 1,
		MAX   = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct USDClasses.UsdPrimPathList
	 * Size -> 0x0010
	 */
	struct FUsdPrimPathList
	{
	public:
		TArray<class FString>                                      PrimPaths;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct USDClasses.UsdStageOptions
	 * Size -> 0x0008
	 */
	struct FUsdStageOptions
	{
	public:
		float                                                      MetersPerUnit;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsdUpAxis                                                 UpAxis;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BB8M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct USDClasses.UsdUnrealAssetInfo
	 * Size -> 0x0070
	 */
	struct FUsdUnrealAssetInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Identifier;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnrealContentPath;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnrealAssetType;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnrealExportTime;                                        // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnrealEngineVersion;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
