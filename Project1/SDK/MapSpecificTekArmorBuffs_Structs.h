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
	 * UserDefinedStruct MapSpecificTekArmorBuffs.MapSpecificTekArmorBuffs
	 * Size -> 0x0040
	 */
	struct FMapSpecificTekArmorBuffs
	{
	public:
		unsigned char                                              TekArmorBuff_6_F5E423204C994EC6354175AE7BC652F7[0x30];   // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              ForMap_5_BDE018E042331E4B7EC006837145188A;               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
