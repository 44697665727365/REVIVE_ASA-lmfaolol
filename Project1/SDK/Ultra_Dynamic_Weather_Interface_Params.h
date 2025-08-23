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
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.IsOverridingSkylightTemperature
	 */
	struct UUltra_Dynamic_Weather_Interface_C_IsOverridingSkylightTemperature_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetSnowAmount
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetSnowAmount_Params
	{
	public:
		double                                                     Snow;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetRainAmount
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetRainAmount_Params
	{
	public:
		double                                                     Rain;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.GetConditions
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetConditions_Params
	{
	public:
		double                                                     WindStrength;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     WindDirectionYaw;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Temperature_C;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Temperature_F;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     RelativeTemperature;                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsRaining;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSnowing;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHeatwave;                                              // 0x002A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsColdfront;                                             // 0x002B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Up Rainbow MID
	 */
	struct UUltra_Dynamic_Weather_Interface_C_SetUpRainbowMID_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Rainbow MID
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetRainbowMID_Params
	{
	public:
		bool                                                       RainbowEnabled;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C0C2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Water Level
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetIntendedWaterLevel_Params
	{
	public:
		bool                                                       UsingWaterLevel;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GKSK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     WaterLevel;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Rainbow
	 */
	struct UUltra_Dynamic_Weather_Interface_C_UpdateRainbow_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Project Mode
	 */
	struct UUltra_Dynamic_Weather_Interface_C_SetProjectMode_Params
	{
	public:
		EUDS_Project_Mode                                          Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Weather Particle Collision Channel
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetWeatherParticleCollisionChannel_Params
	{
	public:
		ECollisionChannel                                          Channel;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Hard Refresh Cached Properties
	 */
	struct UUltra_Dynamic_Weather_Interface_C_HardRefreshCachedProperties_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Destroy Close Thunder Component
	 */
	struct UUltra_Dynamic_Weather_Interface_C_DestroyCloseThunderComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Close Thunder Sound Occlusion
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetCloseThunderSoundOcclusion_Params
	{
	public:
		double                                                     Volume;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     LPF;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
	 */
	struct UUltra_Dynamic_Weather_Interface_C_UpdateMaterialEffects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
	 */
	struct UUltra_Dynamic_Weather_Interface_C_ApplyState_Params
	{
	public:
		struct FUDS_and_UDW_State                                  State;                                                   // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetStateforSaving_Params
	{
	public:
		struct FUDS_and_UDW_State                                  UDWState;                                                // 0x0000(0x0178)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetIntendedCloudDirection_Params
	{
	public:
		double                                                     IntendedCloudDirection;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
	 */
	struct UUltra_Dynamic_Weather_Interface_C_GetIntendedCloudSpeed_Params
	{
	public:
		double                                                     IntendedCloudSpeed;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Weather Settings from UDS
	 */
	struct UUltra_Dynamic_Weather_Interface_C_UpdateWeatherSettingsfromUDS_Params
	{
	public:
		double                                                     CloudCoverage;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Fog;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Dust;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
	 */
	struct UUltra_Dynamic_Weather_Interface_C_InitializeWeather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Season
	 */
	struct UUltra_Dynamic_Weather_Interface_C_SetSeason_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
