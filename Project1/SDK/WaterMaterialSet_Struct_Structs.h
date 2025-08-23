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
	 * UserDefinedStruct WaterMaterialSet_Struct.WaterMaterialSet_Struct
	 * Size -> 0x0020
	 */
	struct FWaterMaterialSet_Struct
	{
	public:
		class UMaterialInstance*                                   Top_8_722FC69C42B3BB61D298C5890E4501AF;                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   UnderSide_7_9DB7DAD24E3575E8BB17818BBE8DB124;            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   PP_6_5207BEF74A0C207598CC66BAB0875BE6;                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   LumenBounce_12_A09E6D114E20CFF2C71E76A61B4A5ECB;         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
