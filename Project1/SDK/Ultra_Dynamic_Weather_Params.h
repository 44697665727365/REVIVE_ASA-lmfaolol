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
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.IsOverridingSkylightTemperature
	 */
	struct AUltra_Dynamic_Weather_C_IsOverridingSkylightTemperature_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetSnowAmount
	 */
	struct AUltra_Dynamic_Weather_C_GetSnowAmount_Params
	{
	public:
		double                                                     Snow;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetRainAmount
	 */
	struct AUltra_Dynamic_Weather_C_GetRainAmount_Params
	{
	public:
		double                                                     Rain;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.GetConditions
	 */
	struct AUltra_Dynamic_Weather_C_GetConditions_Params
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
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Rainbow MID
	 */
	struct AUltra_Dynamic_Weather_C_GetRainbowMID_Params
	{
	public:
		bool                                                       RainbowEnabled;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQ46[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Water Level
	 */
	struct AUltra_Dynamic_Weather_C_GetIntendedWaterLevel_Params
	{
	public:
		bool                                                       UsingWaterLevel;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3P0B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     WaterLevel;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Particle Collision Channel
	 */
	struct AUltra_Dynamic_Weather_C_GetWeatherParticleCollisionChannel_Params
	{
	public:
		ECollisionChannel                                          Channel;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Close Thunder Sound Occlusion
	 */
	struct AUltra_Dynamic_Weather_C_GetCloseThunderSoundOcclusion_Params
	{
	public:
		double                                                     Volume;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     LPF;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving
	 */
	struct AUltra_Dynamic_Weather_C_GetStateforSaving_Params
	{
	public:
		struct FUDS_and_UDW_State                                  UDWState;                                                // 0x0000(0x0178)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction
	 */
	struct AUltra_Dynamic_Weather_C_GetIntendedCloudDirection_Params
	{
	public:
		double                                                     IntendedCloudDirection;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed
	 */
	struct AUltra_Dynamic_Weather_C_GetIntendedCloudSpeed_Params
	{
	public:
		double                                                     IntendedCloudSpeed;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Weather Transition
	 */
	struct AUltra_Dynamic_Weather_C_StartWeatherTransition_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.WOV_State
	 */
	struct AUltra_Dynamic_Weather_C_WOV_State_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Interior Temperature with Occlusion
	 */
	struct AUltra_Dynamic_Weather_C_ApplyInteriorTemperaturewithOcclusion_Params
	{
	public:
		double                                                     Temp;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Occlusion;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Change Temperature Scale
	 */
	struct AUltra_Dynamic_Weather_C_ChecktoChangeTemperatureScale_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Convert Temperature Scale
	 */
	struct AUltra_Dynamic_Weather_C_ConvertTemperatureScale_Params
	{
	public:
		double                                                     Input;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUDS_TemperatureType                                       InScale;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUDS_TemperatureType                                       OutScale;                                                // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RelativeDegrees;                                         // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Snap;                                                    // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IJBR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Output;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Trace Bounds for Exposure Values
	 */
	struct AUltra_Dynamic_Weather_C_TraceBoundsforExposureValues_Params
	{
	public:
		struct FVector                                             BoundsOrigin;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BoundsExtent;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      ActorstoIgnore;                                          // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       TestWeather;                                             // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOOS[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ExposureValue;                                           // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Component for Wind Exposure
	 */
	struct AUltra_Dynamic_Weather_C_TestComponentforWindExposure_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		double                                                     WindExposure;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Normalized Wind Direction
	 */
	struct AUltra_Dynamic_Weather_C_CurrentNormalizedWindDirection_Params
	{
	public:
		struct FVector                                             WindVector;                                              // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Turn on UDS Rainbow
	 */
	struct AUltra_Dynamic_Weather_C_ChecktoTurnonUDSRainbow_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check To Limit Construction
	 */
	struct AUltra_Dynamic_Weather_C_CheckToLimitConstruction_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Scale Cache Period
	 */
	struct AUltra_Dynamic_Weather_C_ScaleCachePeriod_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Increment Cache Timer
	 */
	struct AUltra_Dynamic_Weather_C_IncrementCacheTimer_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Obscured Lightning Glow
	 */
	struct AUltra_Dynamic_Weather_C_UpdateObscuredLightningGlow_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lerp Yaw Angles
	 */
	struct AUltra_Dynamic_Weather_C_LerpYawAngles_Params
	{
	public:
		double                                                     AngleA;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     AngleB;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Alpha;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Combined Wind Direction
	 */
	struct AUltra_Dynamic_Weather_C_CombinedWindDirection_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Bolt Target Offset
	 */
	struct AUltra_Dynamic_Weather_C_LightningBoltTargetOffset_Params
	{
	public:
		struct FVector                                             Out;                                                     // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Remove Old Drawing Actors
	 */
	struct AUltra_Dynamic_Weather_C_RemoveOldDrawingActors_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Report Removal of Drawing Actor
	 */
	struct AUltra_Dynamic_Weather_C_ReportRemovalofDrawingActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Query Project Settings
	 */
	struct AUltra_Dynamic_Weather_C_QueryProjectSettings_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check UDS Version
	 */
	struct AUltra_Dynamic_Weather_C_CheckUDSVersion_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Max to Material Effects
	 */
	struct AUltra_Dynamic_Weather_C_ApplyMaxtoMaterialEffects_Params
	{
	public:
		class UUDS_Weather_Settings_C*                             Weather;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     SnowCoverage;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Wetness;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Dust;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Recenter Weather Override Volume Target
	 */
	struct AUltra_Dynamic_Weather_C_ChecktoRecenterWeatherOverrideVolumeTarget_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update WOV Target Coordinates
	 */
	struct AUltra_Dynamic_Weather_C_UpdateWOVTargetCoordinates_Params
	{
	public:
		bool                                                       UseEditorLocation;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z9MS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Override Volume Target
	 */
	struct AUltra_Dynamic_Weather_C_InitializeWeatherOverrideVolumeTarget_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Override Volume Target
	 */
	struct AUltra_Dynamic_Weather_C_DrawWeatherOverrideVolumeTarget_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Outdoor Sound Mix
	 */
	struct AUltra_Dynamic_Weather_C_UpdateOutdoorSoundMix_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Make Outdoor Sound Mix
	 */
	struct AUltra_Dynamic_Weather_C_MakeOutdoorSoundMix_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Component States
	 */
	struct AUltra_Dynamic_Weather_C_UpdateDLWEComponentStates_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.PPWF Velocity
	 */
	struct AUltra_Dynamic_Weather_C_PPWFVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Add Weather Override Volume to Array
	 */
	struct AUltra_Dynamic_Weather_C_AddWeatherOverrideVolumetoArray_Params
	{
	public:
		class AWeather_Override_Volume_C*                          WeatherOverrideVolume;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Starting Weather Override Volumes
	 */
	struct AUltra_Dynamic_Weather_C_GetStartingWeatherOverrideVolumes_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cached Wind Rotation
	 */
	struct AUltra_Dynamic_Weather_C_CachedWindRotation_Params
	{
	public:
		struct FRotator                                            Rot;                                                     // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Cached Property Changing
	 */
	struct AUltra_Dynamic_Weather_C_IsCachedPropertyChanging_Params
	{
	public:
		EUDW_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Yes;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ENS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Global and Local Weather State
	 */
	struct AUltra_Dynamic_Weather_C_UpdateCurrentGlobalandLocalWeatherState_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Lightning Timer
	 */
	struct AUltra_Dynamic_Weather_C_GlobalLightningTimer_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Size Cache Arrays
	 */
	struct AUltra_Dynamic_Weather_C_SizeCacheArrays_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Cache Alpha
	 */
	struct AUltra_Dynamic_Weather_C_SetCacheAlpha_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Cached Vector
	 */
	struct AUltra_Dynamic_Weather_C_GetCachedVector_Params
	{
	public:
		EUDW_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9GLA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Vector
	 */
	struct AUltra_Dynamic_Weather_C_CacheVector_Params
	{
	public:
		EUDW_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X08W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetValue;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Float
	 */
	struct AUltra_Dynamic_Weather_C_CacheFloat_Params
	{
	public:
		EUDW_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GDEA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetValue;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Cached Float
	 */
	struct AUltra_Dynamic_Weather_C_GetCachedFloat_Params
	{
	public:
		EUDW_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ICMR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Value;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Cache Properties
	 */
	struct AUltra_Dynamic_Weather_C_CacheProperties_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current PPWF Intensity
	 */
	struct AUltra_Dynamic_Weather_C_CurrentPPWFIntensity_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Flash Location
	 */
	struct AUltra_Dynamic_Weather_C_LightningFlashLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning World Height
	 */
	struct AUltra_Dynamic_Weather_C_LightningWorldHeight_Params
	{
	public:
		double                                                     Height;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Invalidate VHFM Level
	 */
	struct AUltra_Dynamic_Weather_C_InvalidateVHFMLevel_Params
	{
	public:
		double                                                     Threshold;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Distance;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Buffer;                                                  // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Current;                                                 // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Continue;                                                // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Invalidate VHFM With Material States
	 */
	struct AUltra_Dynamic_Weather_C_InvalidateVHFMWithMaterialStates_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Rainbow Intensity
	 */
	struct AUltra_Dynamic_Weather_C_UpdateRainbowIntensity_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Up Rainbow
	 */
	struct AUltra_Dynamic_Weather_C_SetUpRainbow_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Occlusion
	 */
	struct AUltra_Dynamic_Weather_C_InitializeOcclusion_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sample Current Sound Occlusion Values
	 */
	struct AUltra_Dynamic_Weather_C_SampleCurrentSoundOcclusionValues_Params
	{
	public:
		double                                                     NonDirectionalOcclusion;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     XOcclusion;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     YOcclusion;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     XOcclusion2;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     YOcclusion2;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Display Name for Current Weather
	 */
	struct AUltra_Dynamic_Weather_C_GetDisplayNameforCurrentWeather_Params
	{
	public:
		class FString                                              AsString;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		EUDS_Weather_Display_Names                                 AsEnumerator;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Load Required Assets
	 */
	struct AUltra_Dynamic_Weather_C_LoadRequiredAssets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Make Manual State
	 */
	struct AUltra_Dynamic_Weather_C_MakeManualState_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Light Rain Sound Intensity
	 */
	struct AUltra_Dynamic_Weather_C_LightRainSoundIntensity_Params
	{
	public:
		double                                                     Int;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Season
	 */
	struct AUltra_Dynamic_Weather_C_UpdateSeason_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Fog Particle Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateFogParticleParameters_Params
	{
	public:
		class UFXSystemComponent*                                  Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxParticlePercentage;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     WeatherIntensity;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ParticleIntensity;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Dust Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateActiveDustParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Wind Debris Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateActiveWindDebrisParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Snow Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateActiveSnowParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Rain Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateActiveRainParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Old State With Replicated Variables
	 */
	struct AUltra_Dynamic_Weather_C_UpdateOldStateWithReplicatedVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Replicated Old Weather State
	 */
	struct AUltra_Dynamic_Weather_C_SetReplicatedOldWeatherState_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compare Weather States
	 */
	struct AUltra_Dynamic_Weather_C_CompareWeatherStates_Params
	{
	public:
		class UUDS_Weather_Settings_C*                             A;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UUDS_Weather_Settings_C*                             B;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Difference;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Copy Weather State
	 */
	struct AUltra_Dynamic_Weather_C_CopyWeatherState_Params
	{
	public:
		class UUDS_Weather_Settings_C*                             Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UUDS_Weather_Settings_C*                             Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetMaterialEffects;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Weather State Objects
	 */
	struct AUltra_Dynamic_Weather_C_CreateWeatherStateObjects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lerp Between Weather States
	 */
	struct AUltra_Dynamic_Weather_C_LerpBetweenWeatherStates_Params
	{
	public:
		class UUDS_Weather_Settings_C*                             A;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UUDS_Weather_Settings_C*                             B;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Alpha;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUDS_Weather_Settings_C*                             TargetState;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetMaterialEffects;                                      // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseBiasforMaterialEffects;                               // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WO71[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Dusty
	 */
	struct AUltra_Dynamic_Weather_C_CurrentlyDusty_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Brushes by Height
	 */
	struct AUltra_Dynamic_Weather_C_SortBrushesbyHeight_Params
	{
	public:
		TArray<class AWeather_Mask_Brush_C*>                       Brushes;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AWeather_Mask_Brush_C*>                       SortedBrushes;                                           // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Close Thunder Sound Delay
	 */
	struct AUltra_Dynamic_Weather_C_CloseThunderSoundDelay_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Approximate Weather Mask Brush Effect
	 */
	struct AUltra_Dynamic_Weather_C_ApproximateWeatherMaskBrushEffect_Params
	{
	public:
		class AWeather_Mask_Brush_C*                               Brush;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Location;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Height;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Cancel;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to Redraw Weather Mask Target
	 */
	struct AUltra_Dynamic_Weather_C_ChecktoRedrawWeatherMaskTarget_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather Mask Target
	 */
	struct AUltra_Dynamic_Weather_C_InitializeWeatherMaskTarget_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Draw Weather Mask Brush Target
	 */
	struct AUltra_Dynamic_Weather_C_DrawWeatherMaskBrushTarget_Params
	{
	public:
		bool                                                       UseEditorLocation;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9WRO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Delta Time with Tick Set
	 */
	struct AUltra_Dynamic_Weather_C_DeltaTimewithTickSet_Params
	{
	public:
		double                                                     Delta;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Cloudy
	 */
	struct AUltra_Dynamic_Weather_C_CurrentlyCloudy_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Snowing
	 */
	struct AUltra_Dynamic_Weather_C_CurrentlySnowing_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Currently Raining
	 */
	struct AUltra_Dynamic_Weather_C_CurrentlyRaining_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Rotation
	 */
	struct AUltra_Dynamic_Weather_C_WindRotation_Params
	{
	public:
		struct FRotator                                            Rot;                                                     // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Is Point in DLWE Space
	 */
	struct AUltra_Dynamic_Weather_C_IsPointinDLWESpace_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Yes;                                                     // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Does DLWE Need Recentering
	 */
	struct AUltra_Dynamic_Weather_C_DoesDLWENeedRecentering_Params
	{
	public:
		bool                                                       NeedsXAxisRecenter;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NeedsYAxisRecenter;                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19YF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Render Target Area
	 */
	struct AUltra_Dynamic_Weather_C_DLWERenderTargetArea_Params
	{
	public:
		double                                                     Area;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE Compression Brush
	 */
	struct AUltra_Dynamic_Weather_C_DLWECompressionBrush_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Size;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Resolution;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F8AT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Spread;                                                  // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           CornerPosition;                                          // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           BrushSize;                                               // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.DLWE_Render Target Mapping
	 */
	struct AUltra_Dynamic_Weather_C_DLWE_RenderTargetMapping_Params
	{
	public:
		struct FLinearColor                                        Mapping;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Distant Thunder Sound Intensity
	 */
	struct AUltra_Dynamic_Weather_C_DistantThunderSoundIntensity_Params
	{
	public:
		double                                                     Int;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Whistling Sound Intensity
	 */
	struct AUltra_Dynamic_Weather_C_WindWhistlingSoundIntensity_Params
	{
	public:
		double                                                     Int;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Wind Sound Intensity
	 */
	struct AUltra_Dynamic_Weather_C_WindSoundIntensity_Params
	{
	public:
		double                                                     Int;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Rain Sound Intensity
	 */
	struct AUltra_Dynamic_Weather_C_RainSoundIntensity_Params
	{
	public:
		double                                                     Int;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Lightning Distance Range
	 */
	struct AUltra_Dynamic_Weather_C_LightningDistanceRange_Params
	{
	public:
		double                                                     Range;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Snow Spawn Rate
	 */
	struct AUltra_Dynamic_Weather_C_CurrentRainSnowSpawnRate_Params
	{
	public:
		double                                                     Intensity;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SpawnRate;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     WindBonus;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Rate;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Dust Velocity
	 */
	struct AUltra_Dynamic_Weather_C_CurrentDustVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Wind Debris Velocity
	 */
	struct AUltra_Dynamic_Weather_C_CurrentWindDebrisVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Snow Velocity
	 */
	struct AUltra_Dynamic_Weather_C_CurrentSnowVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Rain Velocity
	 */
	struct AUltra_Dynamic_Weather_C_CurrentRainVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Shared Weather Particle Parameters
	 */
	struct AUltra_Dynamic_Weather_C_SetSharedWeatherParticleParameters_Params
	{
	public:
		class UNiagaraComponent*                                   System;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes
	 */
	struct AUltra_Dynamic_Weather_C_SortWeatherOverrideVolumes_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets
	 */
	struct AUltra_Dynamic_Weather_C_UpdateScreenDroplets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets
	 */
	struct AUltra_Dynamic_Weather_C_StartScreenDroplets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch
	 */
	struct AUltra_Dynamic_Weather_C_CheckforEventstoDispatch_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure
	 */
	struct AUltra_Dynamic_Weather_C_TestActorforWeatherExposure_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       TestCollidingComponentsOnly;                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RU8R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUDS_Weather_Settings_C*                             CustomWeatherStateObject;                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     RainExposure;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SnowExposure;                                            // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     WindExposure;                                            // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DustExposure;                                            // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity
	 */
	struct AUltra_Dynamic_Weather_C_UpdateAudioComponentActivity_Params
	{
	public:
		class UAudioComponent*                                     TestedComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class UAudioComponent*>                             AffectedComponents;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		double                                                     CurrentSoundIntensity;                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     StartRandomization;                                      // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EnableBool;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S7V0[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components
	 */
	struct AUltra_Dynamic_Weather_C_UpdateEnabledSoundComponents_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog
	 */
	struct AUltra_Dynamic_Weather_C_UpdatePostProcessWindFog_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog
	 */
	struct AUltra_Dynamic_Weather_C_SetupPostProcessWindFog_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status
	 */
	struct AUltra_Dynamic_Weather_C_CurrentLightningPeriodandStatus_Params
	{
	public:
		double                                                     Lightning;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Period;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KTN6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateMaterialEffectParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location
	 */
	struct AUltra_Dynamic_Weather_C_GetUpdatedControlPointLocation_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Local Weather
	 */
	struct AUltra_Dynamic_Weather_C_LocalWeather_Params
	{
	public:
		class UUDS_Weather_Settings_C*                             TargetStateObject;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TestLocation;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles Snow Or Dust
	 */
	struct AUltra_Dynamic_Weather_C_CheckPointforPuddlesSnowOrDust_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             GroundNormal;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     PuddleDepth;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SnowDepth;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DustDepth;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array
	 */
	struct AUltra_Dynamic_Weather_C_CreateCloudReferenceArray_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets
	 */
	struct AUltra_Dynamic_Weather_C_RecycleRenderTargets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples
	 */
	struct AUltra_Dynamic_Weather_C_UpdateDLWEPuddleRipples_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle
	 */
	struct AUltra_Dynamic_Weather_C_RippleDLWEPuddle_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Size;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Strength;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode
	 */
	struct AUltra_Dynamic_Weather_C_ChecktochangeDLWEMode_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target
	 */
	struct AUltra_Dynamic_Weather_C_RecenterDLWERenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ETextureRenderTargetFormat                                 Format;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HOVT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ClearColor;                                              // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ISZM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  EdgeFadeMaterial;                                        // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Resolution;                                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DrawEdgeFade;                                            // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BOD1[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time
	 */
	struct AUltra_Dynamic_Weather_C_FadeDLWETargetOverTime_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions
	 */
	struct AUltra_Dynamic_Weather_C_UpdateDLWESnowCompressions_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow
	 */
	struct AUltra_Dynamic_Weather_C_CompressDLWESnow_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Size;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter
	 */
	struct AUltra_Dynamic_Weather_C_CheckforDLWERecenter_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters
	 */
	struct AUltra_Dynamic_Weather_C_UpdateDLWEParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets
	 */
	struct AUltra_Dynamic_Weather_C_UpdateDLWETargets_Params
	{
	public:
		bool                                                       FirstRun;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5F9U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature
	 */
	struct AUltra_Dynamic_Weather_C_GetCurrentTemperature_Params
	{
	public:
		bool                                                       ApplyInteriorTemperature;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5NK7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUDS_Weather_Settings_C*                             CustomWeatherStateObject;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Celsius;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Fahrenheit;                                              // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     RelativeTemperature;                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map
	 */
	struct AUltra_Dynamic_Weather_C_FilterProbabilityMap_Params
	{
	public:
		TMap<class UUDS_Weather_Settings_C*, double>               ProbabilityMap;                                          // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUDS_Weather_Settings_C*                             CurrentRandomType;                                       // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TMap<class UUDS_Weather_Settings_C*, double>               FilteredProbabilityMap;                                  // 0x0058(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function
	 */
	struct AUltra_Dynamic_Weather_C_ConstructionScript_Function_Params
	{
	public:
		bool                                                       RunByCounterpart;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update
	 */
	struct AUltra_Dynamic_Weather_C_AudioUpdate_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects
	 */
	struct AUltra_Dynamic_Weather_C_UpdateCurrentMaterialEffects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status to Screen
	 */
	struct AUltra_Dynamic_Weather_C_PrintCurrentStatustoScreen_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables
	 */
	struct AUltra_Dynamic_Weather_C_UpdateStaticVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables
	 */
	struct AUltra_Dynamic_Weather_C_UpdateActiveVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript
	 */
	struct AUltra_Dynamic_Weather_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash
	 */
	struct AUltra_Dynamic_Weather_C_EndLightningFlash_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash
	 */
	struct AUltra_Dynamic_Weather_C_TickLightningFlash_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Lightning Internal
	 */
	struct AUltra_Dynamic_Weather_C_LocalLightningInternal_Params
	{
	public:
		class AWeather_Override_Volume_C*                          Volume;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Angle;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning
	 */
	struct AUltra_Dynamic_Weather_C_FlashLightning_Params
	{
	public:
		double                                                     Angle;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseCustomLightningLocation;                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXT6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CustomLightningLocation;                                 // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CustomTargetLocation;                                    // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Global Lightning Internal
	 */
	struct AUltra_Dynamic_Weather_C_GlobalLightningInternal_Params
	{
	public:
		double                                                     Angle;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Up Rainbow MID
	 */
	struct AUltra_Dynamic_Weather_C_SetUpRainbowMID_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Rainbow
	 */
	struct AUltra_Dynamic_Weather_C_UpdateRainbow_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Destroy Close Thunder Component
	 */
	struct AUltra_Dynamic_Weather_C_DestroyCloseThunderComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick
	 */
	struct AUltra_Dynamic_Weather_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Project Mode
	 */
	struct AUltra_Dynamic_Weather_C_SetProjectMode_Params
	{
	public:
		EUDS_Project_Mode                                          Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick
	 */
	struct AUltra_Dynamic_Weather_C_ForceTick_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather
	 */
	struct AUltra_Dynamic_Weather_C_ChangeWeather_Params
	{
	public:
		class UUDS_Weather_Settings_C*                             NewWeatherType;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     TimetoTransitiontoNewWeatherSeconds;                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ResetParticleEmitters;                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Hard Refresh Cached Properties
	 */
	struct AUltra_Dynamic_Weather_C_HardRefreshCachedProperties_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clients Transition Start
	 */
	struct AUltra_Dynamic_Weather_C_ClientsTransitionStart_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters
	 */
	struct AUltra_Dynamic_Weather_C_ResetAllEmitters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change to Random Weather
	 */
	struct AUltra_Dynamic_Weather_C_ChangetoRandomWeather_Params
	{
	public:
		double                                                     TimetoTransitiontoRandomWeatherSeconds;                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ResetParticleEmitters;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather
	 */
	struct AUltra_Dynamic_Weather_C_InitializeWeather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay
	 */
	struct AUltra_Dynamic_Weather_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force All Clients Cache
	 */
	struct AUltra_Dynamic_Weather_C_ForceAllClientsCache_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes
	 */
	struct AUltra_Dynamic_Weather_C_TimedOverridewithNewChanges_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects
	 */
	struct AUltra_Dynamic_Weather_C_UpdateMaterialEffects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Restart Random Weather
	 */
	struct AUltra_Dynamic_Weather_C_RestartRandomWeather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State
	 */
	struct AUltra_Dynamic_Weather_C_ApplyState_Params
	{
	public:
		struct FUDS_and_UDW_State                                  State;                                                   // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Weather Settings from UDS
	 */
	struct AUltra_Dynamic_Weather_C_UpdateWeatherSettingsfromUDS_Params
	{
	public:
		double                                                     CloudCoverage;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Fog;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Dust;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Season
	 */
	struct AUltra_Dynamic_Weather_C_SetSeason_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.MC_ChangeWeather
	 */
	struct AUltra_Dynamic_Weather_C_MC_ChangeWeather_Params
	{
	public:
		EUDS_WeatherTypesASA                                       NewWeatherType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OOOS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TransitionLength;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ResetParticleEmitters;                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ROS_ChangeWeather
	 */
	struct AUltra_Dynamic_Weather_C_ROS_ChangeWeather_Params
	{
	public:
		EUDS_WeatherTypesASA                                       NewWeatherType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9N96[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TransitionLength;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ResetParticleEmitters;                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather
	 */
	struct AUltra_Dynamic_Weather_C_ExecuteUbergraph_Ultra_Dynamic_Weather_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE State__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_UpdateDLWEState__DelegateSignature_Params
	{
	public:
		EUDS_DLWE_Mode                                             CurrentMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S684[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             RenderTargetCenter;                                      // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MappingSpace;                                            // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Weather Display Name Changed__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_WeatherDisplayNameChanged__DelegateSignature_Params
	{
	public:
		EUDS_Weather_Display_Names                                 WeatherName;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sand Clearing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_SandClearing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sand Forming__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_SandForming__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_CloudsClearing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_GettingCloudy__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_FinishedSnowing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_FinishedRaining__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_StartedSnowing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_StartedRaining__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
