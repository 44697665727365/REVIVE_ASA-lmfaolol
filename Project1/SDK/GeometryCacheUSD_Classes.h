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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GeometryCacheUSD.GeometryCacheTrackUsd
	 * Size -> 0x0178 (FullSize[0x01D0] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrackUsd : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_0DTM[0x178];                                 // 0x0058(0x0178) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCacheUSD.GeometryCacheUsdComponent
	 * Size -> 0x0000 (FullSize[0x0750] - InheritedSize[0x0750])
	 */
	class UGeometryCacheUsdComponent : public UGeometryCacheComponent
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
