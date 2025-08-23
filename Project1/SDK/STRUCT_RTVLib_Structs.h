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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct STRUCT_RTVLib.STRUCT_RTVLib
	 * Size -> 0x0080
	 */
	struct FSTRUCT_RTVLib
	{
	public:
		class UTextureRenderTargetVolume*                          RTV_debug_12_F296917844366A6990503186EC4D7B2A;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_advect_13_69E747DA47C16724D81CD7988BC66F0B;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_pressureDivergence_14_56DC1BD44B416BF9D0768CAFABC311F6; // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_pressureDivergenceTemp_15_1684673C41610D675AB28A95883E65D8; // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_painter_16_474D4A1A4392AE807BBAA98BE05E7093;         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_composite_17_FFA3C6164DD68CF7F7A4C2B72912B320;       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UTextureRenderTargetVolume*>     RTVs_22_79BD954F43DDDDEA2DA1219026C6F897;                // 0x0030(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
