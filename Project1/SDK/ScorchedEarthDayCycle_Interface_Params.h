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
	 * Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm
	 */
	struct UScorchedEarthDayCycle_Interface_C_GetIsElectricalStorm_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
	 */
	struct UScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params
	{
	public:
		TArray<class AActor*>                                      LocationRegions;                                         // 0x0000(0x0010)  (Parm, OutParm)
		int32_t                                                    CurrentRegion;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CYBS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Radius;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
