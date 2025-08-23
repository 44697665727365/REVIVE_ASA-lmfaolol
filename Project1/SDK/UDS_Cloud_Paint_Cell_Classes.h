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
	 * BlueprintGeneratedClass UDS_Cloud_Paint_Cell.UDS_Cloud_Paint_Cell_C
	 * Size -> 0x0043 (FullSize[0x0073] - InheritedSize[0x0030])
	 */
	class UUDS_Cloud_Paint_Cell_C : public UPrimaryDataAsset
	{
	public:
		TArray<struct FLinearColor>                                PaintingArray;                                           // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              Texture[0x30];                                           // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ZeroCoveragePresent;                                     // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MidCoveragePresent;                                      // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FullCoveragePresent;                                     // 0x0072(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
