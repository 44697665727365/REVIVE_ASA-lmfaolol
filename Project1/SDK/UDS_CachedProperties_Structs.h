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
	 * UserDefinedEnum UDS_CachedProperties.UDS_CachedProperties
	 */
	enum class EUDS_CachedProperties : uint8_t
	{
		UDS_CachedPropertiesNewEnumerator0   = 0,
		UDS_CachedPropertiesNewEnumerator1   = 1,
		UDS_CachedPropertiesNewEnumerator3   = 2,
		UDS_CachedPropertiesNewEnumerator4   = 3,
		UDS_CachedPropertiesNewEnumerator5   = 4,
		UDS_CachedPropertiesNewEnumerator6   = 5,
		UDS_CachedPropertiesNewEnumerator7   = 6,
		UDS_CachedPropertiesNewEnumerator8   = 7,
		UDS_CachedPropertiesNewEnumerator9   = 8,
		UDS_CachedPropertiesNewEnumerator10  = 9,
		UDS_CachedPropertiesNewEnumerator11  = 10,
		UDS_CachedPropertiesNewEnumerator12  = 11,
		UDS_CachedPropertiesNewEnumerator13  = 12,
		UDS_CachedPropertiesNewEnumerator14  = 13,
		UDS_CachedPropertiesNewEnumerator15  = 14,
		UDS_CachedPropertiesNewEnumerator16  = 15,
		UDS_CachedPropertiesNewEnumerator17  = 16,
		UDS_CachedPropertiesNewEnumerator18  = 17,
		UDS_CachedPropertiesNewEnumerator19  = 18,
		UDS_CachedPropertiesNewEnumerator20  = 19,
		UDS_CachedPropertiesNewEnumerator21  = 20,
		UDS_CachedPropertiesNewEnumerator22  = 21,
		UDS_CachedPropertiesNewEnumerator23  = 22,
		UDS_CachedPropertiesNewEnumerator24  = 23,
		UDS_CachedPropertiesNewEnumerator25  = 24,
		UDS_CachedPropertiesNewEnumerator26  = 25,
		UDS_CachedPropertiesNewEnumerator27  = 26,
		UDS_CachedPropertiesNewEnumerator29  = 27,
		UDS_CachedPropertiesNewEnumerator30  = 28,
		UDS_CachedPropertiesNewEnumerator31  = 29,
		UDS_CachedPropertiesNewEnumerator32  = 30,
		UDS_CachedPropertiesNewEnumerator33  = 31,
		UDS_CachedPropertiesNewEnumerator34  = 32,
		UDS_CachedPropertiesNewEnumerator35  = 33,
		UDS_CachedPropertiesNewEnumerator36  = 34,
		UDS_CachedPropertiesNewEnumerator37  = 35,
		UDS_CachedPropertiesNewEnumerator38  = 36,
		UDS_CachedPropertiesNewEnumerator39  = 37,
		UDS_CachedPropertiesNewEnumerator40  = 38,
		UDS_CachedPropertiesNewEnumerator41  = 39,
		UDS_CachedPropertiesNewEnumerator42  = 40,
		UDS_CachedPropertiesNewEnumerator43  = 41,
		UDS_CachedPropertiesNewEnumerator44  = 42,
		UDS_CachedPropertiesNewEnumerator45  = 43,
		UDS_CachedPropertiesNewEnumerator46  = 44,
		UDS_CachedPropertiesNewEnumerator50  = 45,
		UDS_CachedPropertiesNewEnumerator51  = 46,
		UDS_CachedPropertiesNewEnumerator52  = 47,
		UDS_CachedPropertiesNewEnumerator53  = 48,
		UDS_CachedPropertiesNewEnumerator54  = 49,
		UDS_CachedPropertiesNewEnumerator55  = 50,
		UDS_CachedPropertiesNewEnumerator56  = 51,
		UDS_CachedPropertiesNewEnumerator57  = 52,
		UDS_CachedPropertiesNewEnumerator58  = 53,
		UDS_CachedPropertiesNewEnumerator61  = 54,
		UDS_CachedPropertiesNewEnumerator62  = 55,
		UDS_CachedPropertiesNewEnumerator63  = 56,
		UDS_CachedPropertiesNewEnumerator64  = 57,
		UDS_CachedPropertiesNewEnumerator65  = 58,
		UDS_CachedPropertiesNewEnumerator66  = 59,
		UDS_CachedPropertiesNewEnumerator67  = 60,
		UDS_CachedPropertiesNewEnumerator68  = 61,
		UDS_CachedPropertiesNewEnumerator69  = 62,
		UDS_CachedPropertiesNewEnumerator70  = 63,
		UDS_CachedPropertiesNewEnumerator71  = 64,
		UDS_CachedPropertiesNewEnumerator72  = 65,
		UDS_CachedPropertiesNewEnumerator74  = 66,
		UDS_CachedPropertiesNewEnumerator75  = 67,
		UDS_CachedPropertiesNewEnumerator76  = 68,
		UDS_CachedPropertiesNewEnumerator77  = 69,
		UDS_CachedPropertiesNewEnumerator79  = 70,
		UDS_CachedPropertiesNewEnumerator80  = 71,
		UDS_CachedPropertiesNewEnumerator85  = 72,
		UDS_CachedPropertiesNewEnumerator89  = 73,
		UDS_CachedPropertiesNewEnumerator90  = 74,
		UDS_CachedPropertiesNewEnumerator91  = 75,
		UDS_CachedPropertiesNewEnumerator97  = 76,
		UDS_CachedPropertiesNewEnumerator99  = 77,
		UDS_CachedPropertiesNewEnumerator100 = 78,
		UDS_CachedPropertiesNewEnumerator101 = 79,
		UDS_CachedPropertiesNewEnumerator102 = 80,
		UDS_CachedPropertiesNewEnumerator103 = 81,
		UDS_CachedPropertiesNewEnumerator105 = 82,
		UDS_CachedPropertiesNewEnumerator107 = 83,
		UDS_CachedPropertiesNewEnumerator108 = 84,
		UDS_CachedPropertiesNewEnumerator109 = 85,
		UDS_CachedPropertiesNewEnumerator110 = 86,
		UDS_CachedPropertiesNewEnumerator111 = 87,
		UDS_CachedPropertiesNewEnumerator112 = 88,
		UDS_CachedPropertiesNewEnumerator113 = 89,
		UDS_CachedPropertiesNewEnumerator114 = 90,
		UDS_CachedPropertiesNewEnumerator115 = 91,
		UDS_CachedPropertiesNewEnumerator116 = 92,
		UDS_CachedPropertiesNewEnumerator117 = 93,
		UDS_CachedPropertiesNewEnumerator118 = 94,
		UDS_CachedPropertiesNewEnumerator119 = 95,
		UDS_CachedPropertiesNewEnumerator120 = 96,
		UDS_CachedPropertiesNewEnumerator121 = 97,
		UDS_CachedPropertiesNewEnumerator123 = 98,
		UDS_CachedPropertiesNewEnumerator124 = 99,
		UDS_CachedPropertiesNewEnumerator125 = 100,
		UDS_CachedPropertiesNewEnumerator126 = 101,
		UDS_CachedPropertiesNewEnumerator127 = 102,
		UDS_CachedPropertiesNewEnumerator128 = 103,
		UDS_CachedPropertiesNewEnumerator129 = 104,
		UDS_CachedPropertiesNewEnumerator130 = 105,
		UDS_CachedPropertiesNewEnumerator131 = 106,
		UDS_CachedPropertiesUDS_MAX          = 107
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
