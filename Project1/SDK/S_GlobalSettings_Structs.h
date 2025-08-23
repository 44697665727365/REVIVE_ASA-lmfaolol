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
	 * UserDefinedStruct S_GlobalSettings.S_GlobalSettings
	 * Size -> 0x0030
	 */
	struct FS_GlobalSettings
	{
	public:
		double                                                     GlobalMuscle_4_A495DAB84135EFDCE91944AFB14B4D25;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GlobalFat_5_8A9BEE5044B0C216A2948D835EDAA789;            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ArmorSearchPath_8_F19F0C264E4FDD76515FC7ACEF90D358;      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Gender_10_84FFEC6D418F432D3E17ABB1FD46C95E;              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
