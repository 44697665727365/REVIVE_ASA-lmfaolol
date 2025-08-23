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
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Select New Weather
	 */
	struct URandom_Weather_Variation_C_StartTimertoSelectNewWeather_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Change Timer
	 */
	struct URandom_Weather_Variation_C_IncrementChangeTimer_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Create Composite Probability Map
	 */
	struct URandom_Weather_Variation_C_CreateCompositeProbabilityMap_Params
	{
	public:
		TMap<class UUDS_Weather_Settings_C*, double>               Out;                                                     // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State
	 */
	struct URandom_Weather_Variation_C_ApplyState_Params
	{
	public:
		struct FRandomWeatherVariation_State                       RandomWeatherState;                                      // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving
	 */
	struct URandom_Weather_Variation_C_GetStateforSaving_Params
	{
	public:
		struct FRandomWeatherVariation_State                       State;                                                   // 0x0000(0x0020)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AWeather_Override_Volume_C*                          Volume;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
	 */
	struct URandom_Weather_Variation_C_SelectNewRandomWeatherType_Params
	{
	public:
		bool                                                       FilterProbabilityList;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_20W5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
	 */
	struct URandom_Weather_Variation_C_IncrementRandomWeather_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize
	 */
	struct URandom_Weather_Variation_C_Initialize_Params
	{
	public:
		class AUltra_Dynamic_Weather_C*                            UDW;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TMap<class UUDS_Weather_Settings_C*, double>               SummerProbabilities;                                     // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TMap<class UUDS_Weather_Settings_C*, double>               AutumnProbabilities;                                     // 0x0058(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TMap<class UUDS_Weather_Settings_C*, double>               WinterProbabilities;                                     // 0x00A8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TMap<class UUDS_Weather_Settings_C*, double>               SpringProbabilities;                                     // 0x00F8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       StartwithRandomType;                                     // 0x0148(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
	 */
	struct URandom_Weather_Variation_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer
	 */
	struct URandom_Weather_Variation_C_ResetTimer_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
	 */
	struct URandom_Weather_Variation_C_ExecuteUbergraph_Random_Weather_Variation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
