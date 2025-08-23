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
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.InitSavedTimeOfDay
	 */
	struct AUltra_Dynamic_Sky_C_InitSavedTimeOfDay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateClientTimeOdFay
	 */
	struct AUltra_Dynamic_Sky_C_UpdateClientTimeOdFay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Toggle Sequence Track
	 */
	struct AUltra_Dynamic_Sky_C_ToggleSequenceTrack_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RV9A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ScrubSequenceActor
	 */
	struct AUltra_Dynamic_Sky_C_ScrubSequenceActor_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.CreateComponentListForHide
	 */
	struct AUltra_Dynamic_Sky_C_CreateComponentListForHide_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetDataMPCs
	 */
	struct AUltra_Dynamic_Sky_C_SetDataMPCs_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.HideIfCave
	 */
	struct AUltra_Dynamic_Sky_C_HideIfCave_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.GetDCM
	 */
	struct AUltra_Dynamic_Sky_C_GetDCM_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateDCM
	 */
	struct AUltra_Dynamic_Sky_C_UpdateDCM_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.GetPlayerOcclusion
	 */
	struct AUltra_Dynamic_Sky_C_GetPlayerOcclusion_Params
	{
	public:
		bool                                                       Invert;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NWIB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Occlusion;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Fog Mei Properties
	 */
	struct AUltra_Dynamic_Sky_C_SetFogMeiProperties_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateDCMTime
	 */
	struct AUltra_Dynamic_Sky_C_UpdateDCMTime_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Sky Atmo Contribution
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudSkyAtmoContribution_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Brightness
	 */
	struct AUltra_Dynamic_Sky_C_OvercastBrightness_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Volumetric Cloud Light Rays Movement
	 */
	struct AUltra_Dynamic_Sky_C_UpdateVolumetricCloudLightRaysMovement_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Notify of Removed Cloud Paint Container
	 */
	struct AUltra_Dynamic_Sky_C_NotifyofRemovedCloudPaintContainer_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Volumetric Cloud Light Rays
	 */
	struct AUltra_Dynamic_Sky_C_UpdateVolumetricCloudLightRays_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Volumetric Cloud Light Rays
	 */
	struct AUltra_Dynamic_Sky_C_SetUpVolumetricCloudLightRays_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Cloud Coverage After Painting
	 */
	struct AUltra_Dynamic_Sky_C_UpdateCloudCoverageAfterPainting_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Test Point for Painted Cloud Coverage
	 */
	struct AUltra_Dynamic_Sky_C_TestPointforPaintedCloudCoverage_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CloudCoveragewithPainting;                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Sky Atmosphere Location
	 */
	struct AUltra_Dynamic_Sky_C_UpdateSkyAtmosphereLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Multiscattering Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudMultiscatteringIntensity_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Cloud Wisps Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentCloudWispsColor_Params
	{
	public:
		struct FLinearColor                                        Out;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Nearby Cloud Cells To Load Asynchronously
	 */
	struct AUltra_Dynamic_Sky_C_GetNearbyCloudCellsToLoadAsynchronously_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Release Async Loaded Object
	 */
	struct AUltra_Dynamic_Sky_C_ReleaseAsyncLoadedObject_Params
	{
	public:
		unsigned char                                              UnknownData_E82N[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Add Object to Async Loading Queue
	 */
	struct AUltra_Dynamic_Sky_C_AddObjecttoAsyncLoadingQueue_Params
	{
	public:
		unsigned char                                              UnknownData_YHQC[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       HighPriority;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJES[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Cloud Coverage Target Recenter
	 */
	struct AUltra_Dynamic_Sky_C_CheckforCloudCoverageTargetRecenter_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.World Space to Drawn Target Pixel Space
	 */
	struct AUltra_Dynamic_Sky_C_WorldSpacetoDrawnTargetPixelSpace_Params
	{
	public:
		struct FVector2D                                           In;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Coverage Target Mapping
	 */
	struct AUltra_Dynamic_Sky_C_CloudCoverageTargetMapping_Params
	{
	public:
		struct FVector                                             Mapping;                                                 // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Painted Cloud Coverage Target
	 */
	struct AUltra_Dynamic_Sky_C_UpdatePaintedCloudCoverageTarget_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Atmosphere Absorption Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSkyAtmosphereAbsorptionColor_Params
	{
	public:
		struct FLinearColor                                        Out;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Inner Emit Limit
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudInnerEmitLimit_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Inside Outside Cloud Layer
	 */
	struct AUltra_Dynamic_Sky_C_InsideOutsideCloudLayer_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Luminance Boost
	 */
	struct AUltra_Dynamic_Sky_C_OvercastLuminanceBoost_Params
	{
	public:
		double                                                     Multiplier;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Ambient Light Color
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudAmbientLightColor_Params
	{
	public:
		struct FLinearColor                                        Bottom;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Top;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Coverage Local
	 */
	struct AUltra_Dynamic_Sky_C_CloudCoverageLocal_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Layer Top and Bottom World Height
	 */
	struct AUltra_Dynamic_Sky_C_CloudLayerTopandBottomWorldHeight_Params
	{
	public:
		double                                                     BottomWorldHeight;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     TopWorldHeight;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Camera Location and Camera Relative Heights
	 */
	struct AUltra_Dynamic_Sky_C_GetCameraLocationandCameraRelativeHeights_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Light Shaft Settings
	 */
	struct AUltra_Dynamic_Sky_C_ApplyLightShaftSettings_Params
	{
	public:
		class UDirectionalLightComponent*                          Light;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MaxBrightness;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           BloomThreshold;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           BloomScale;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ForwardVector;                                           // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check if Point is Exposed to Sun or Moon Light
	 */
	struct AUltra_Dynamic_Sky_C_CheckifPointisExposedtoSunorMoonLight_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DistancetoTrace;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      ActorstoIgnoreinTrace;                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ExposedtoSun;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ExposedtoMoon;                                           // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ExposedtoEither;                                         // 0x0032(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CJ2B[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     LightIntensityLux;                                       // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Distance to Sample Max Count
	 */
	struct AUltra_Dynamic_Sky_C_UpdateDistancetoSampleMaxCount_Params
	{
	public:
		bool                                                       ShutDown;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moons Cloud Mask
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonsCloudMask_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update from UDW Construction Script
	 */
	struct AUltra_Dynamic_Sky_C_UpdatefromUDWConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Swap with Cinematic Runtime Value
	 */
	struct AUltra_Dynamic_Sky_C_SwapwithCinematicRuntimeValue_Params
	{
	public:
		double                                                     In;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Cine;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UserHigher;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XN4G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Out;                                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check To Use Existing MIDs
	 */
	struct AUltra_Dynamic_Sky_C_CheckToUseExistingMIDs_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Solar Eclipse Circle Mask
	 */
	struct AUltra_Dynamic_Sky_C_SolarEclipseCircleMask_Params
	{
	public:
		double                                                     SunAngularRadius;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MoonAngularRadius;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MoonVector;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MoonSoftness;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FractionShowing;                                         // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Space Layer Brightness
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSpaceLayerBrightness_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Space Planet Parent MID
	 */
	struct AUltra_Dynamic_Sky_C_SpacePlanetParentMID_Params
	{
	public:
		struct FUDS_Space_Planet                                   Planet;                                                  // 0x0000(0x0278)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L15M[0x30];                                  // 0x0278(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Space Planet Vectors
	 */
	struct AUltra_Dynamic_Sky_C_UpdateSpacePlanetVectors_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Z Vector
	 */
	struct AUltra_Dynamic_Sky_C_MoonZVector_Params
	{
	public:
		struct FVector                                             Out;                                                     // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Z Vector
	 */
	struct AUltra_Dynamic_Sky_C_SunZVector_Params
	{
	public:
		struct FVector                                             Out;                                                     // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construct Space Layer
	 */
	struct AUltra_Dynamic_Sky_C_ConstructSpaceLayer_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Cache Timer
	 */
	struct AUltra_Dynamic_Sky_C_IncrementCacheTimer_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is it Daytime?
	 */
	struct AUltra_Dynamic_Sky_C_IsitDaytime_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GETY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Combined Night Brightness
	 */
	struct AUltra_Dynamic_Sky_C_CombinedNightBrightness_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Real Time Sky Light Capture
	 */
	struct AUltra_Dynamic_Sky_C_RestartRealTimeSkyLightCapture_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Hard Reset Cache
	 */
	struct AUltra_Dynamic_Sky_C_HardResetCache_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Days Since J2000
	 */
	struct AUltra_Dynamic_Sky_C_DaysSinceJ2000_Params
	{
	public:
		int32_t                                                    InputYear;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DayofYear;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Days;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Forced Active Variables
	 */
	struct AUltra_Dynamic_Sky_C_UpdateForcedActiveVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Wisp Gradient Vector
	 */
	struct AUltra_Dynamic_Sky_C_CloudWispGradientVector_Params
	{
	public:
		struct FLinearColor                                        Out;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Directional Inscattering Exponent
	 */
	struct AUltra_Dynamic_Sky_C_CurrentDirectionalInscatteringExponent_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current View Sample Scale
	 */
	struct AUltra_Dynamic_Sky_C_CurrentViewSampleScale_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Three Time Floats
	 */
	struct AUltra_Dynamic_Sky_C_ThreeTimeFloats_Params
	{
	public:
		double                                                     Day;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Dusk;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Night;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Post Process Blend Weights
	 */
	struct AUltra_Dynamic_Sky_C_UpdatePostProcessBlendWeights_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create Post Process Components
	 */
	struct AUltra_Dynamic_Sky_C_CreatePostProcessComponents_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Sky Mode at Runtime
	 */
	struct AUltra_Dynamic_Sky_C_ChangeSkyModeatRuntime_Params
	{
	public:
		EUDS_SkyMode                                               NewSkyMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Location Preset
	 */
	struct AUltra_Dynamic_Sky_C_ApplyLocationPreset_Params
	{
	public:
		EUDS_CityPresets                                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Shadow Tracing Distance
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudShadowTracingDistance_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Atmosphere Luminance
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSkyAtmosphereLuminance_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Control UDW Weather State
	 */
	struct AUltra_Dynamic_Sky_C_ControlUDWWeatherState_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds SubNoise Scales
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudsSubNoiseScales_Params
	{
	public:
		struct FLinearColor                                        High;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Low;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Floor Variation
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudFloorVariation_Params
	{
	public:
		double                                                     HeightClear;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     HeightCloudy;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Color;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Flat Cloudiness
	 */
	struct AUltra_Dynamic_Sky_C_FlatCloudiness_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83CW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Static Clouds XYZ Masks
	 */
	struct AUltra_Dynamic_Sky_C_StaticCloudsXYZMasks_Params
	{
	public:
		struct FLinearColor                                        XYMask;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ZMask;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Starting Cloud Formation
	 */
	struct AUltra_Dynamic_Sky_C_StartingCloudFormation_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increase Tick Frequency
	 */
	struct AUltra_Dynamic_Sky_C_IncreaseTickFrequency_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Simplified Sun Glow Color
	 */
	struct AUltra_Dynamic_Sky_C_SimplifiedSunGlowColor_Params
	{
	public:
		struct FLinearColor                                        Out;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Size Cache Arrays
	 */
	struct AUltra_Dynamic_Sky_C_SizeCacheArrays_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Lens Flare Enabled
	 */
	struct AUltra_Dynamic_Sky_C_IsLensFlareEnabled_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQSO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Exposure Bias
	 */
	struct AUltra_Dynamic_Sky_C_CurrentExposureBias_Params
	{
	public:
		double                                                     Bias;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Monitor for Changes
	 */
	struct AUltra_Dynamic_Sky_C_MonitorforChanges_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Scaled Cache Period
	 */
	struct AUltra_Dynamic_Sky_C_ScaledCachePeriod_Params
	{
	public:
		double                                                     Period;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Vector
	 */
	struct AUltra_Dynamic_Sky_C_GetCachedVector_Params
	{
	public:
		EUDS_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O34G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Vector
	 */
	struct AUltra_Dynamic_Sky_C_CacheVector_Params
	{
	public:
		EUDS_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QHNX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetValue;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Sun and Moon Orientation
	 */
	struct AUltra_Dynamic_Sky_C_CacheSunandMoonOrientation_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Color
	 */
	struct AUltra_Dynamic_Sky_C_GetCachedColor_Params
	{
	public:
		EUDS_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NLXN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Value;                                                   // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Color
	 */
	struct AUltra_Dynamic_Sky_C_CacheColor_Params
	{
	public:
		EUDS_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5Y3B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        SetValue;                                                // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cache Alpha
	 */
	struct AUltra_Dynamic_Sky_C_SetCacheAlpha_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Float
	 */
	struct AUltra_Dynamic_Sky_C_CacheFloat_Params
	{
	public:
		EUDS_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ABQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetValue;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Properties
	 */
	struct AUltra_Dynamic_Sky_C_CacheProperties_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Float
	 */
	struct AUltra_Dynamic_Sky_C_GetCachedFloat_Params
	{
	public:
		EUDS_CachedProperties                                      Property;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S5BT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Value;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Height
	 */
	struct AUltra_Dynamic_Sky_C_SunHeight_Params
	{
	public:
		double                                                     Z;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Solar Eclipse Values
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSolarEclipseValues_Params
	{
	public:
		struct FLinearColor                                        TintColor;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     EclipsePercent;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Adjust Base Sun Light Intensity
	 */
	struct AUltra_Dynamic_Sky_C_AdjustBaseSunLightIntensity_Params
	{
	public:
		struct FVector                                             SunVector;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Intensity;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Multiplier;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Filtered Moon Light Intensity
	 */
	struct AUltra_Dynamic_Sky_C_FilteredMoonLightIntensity_Params
	{
	public:
		double                                                     Unfiltered;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Intensity;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Both Cloud Shadows MIDs
	 */
	struct AUltra_Dynamic_Sky_C_BothCloudShadowsMIDs_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    Out;                                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Shadows MIDs
	 */
	struct AUltra_Dynamic_Sky_C_SunShadowsMIDs_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    Out;                                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Initialize Occlusion
	 */
	struct AUltra_Dynamic_Sky_C_InitializeOcclusion_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Exposure Bias
	 */
	struct AUltra_Dynamic_Sky_C_UpdateExposureBias_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Tick Time Transition
	 */
	struct AUltra_Dynamic_Sky_C_TickTimeTransition_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Finish Time Transition
	 */
	struct AUltra_Dynamic_Sky_C_FinishTimeTransition_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Time of Day
	 */
	struct AUltra_Dynamic_Sky_C_TransitionTimeofDay_Params
	{
	public:
		double                                                     NewTimeofDay;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     TransitionDurationSeconds;                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEasingFunc                                                EasingFunction;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4IGD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     EasingExponent;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllowTimeGoingBackwards;                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Directional Light Dimming
	 */
	struct AUltra_Dynamic_Sky_C_DirectionalLightDimming_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Lens Flare Parent Material
	 */
	struct AUltra_Dynamic_Sky_C_LensFlareParentMaterial_Params
	{
	public:
		unsigned char                                              UnknownData_04QU[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Parent Material
	 */
	struct AUltra_Dynamic_Sky_C_CloudShadowsParentMaterial_Params
	{
	public:
		unsigned char                                              UnknownData_RREW[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Static Clouds Parent Material
	 */
	struct AUltra_Dynamic_Sky_C_StaticCloudsParentMaterial_Params
	{
	public:
		unsigned char                                              UnknownData_GVW6[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.2D Clouds Base Texture
	 */
	struct AUltra_Dynamic_Sky_C__2DCloudsBaseTexture_Params
	{
	public:
		unsigned char                                              UnknownData_M4G5[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Load Required Assets
	 */
	struct AUltra_Dynamic_Sky_C_LoadRequiredAssets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Source Angle
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonSourceAngle_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Twilight Brightness Falloff
	 */
	struct AUltra_Dynamic_Sky_C_TwilightBrightnessFalloff_Params
	{
	public:
		double                                                     Z;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Scale;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Overcast Turbulence
	 */
	struct AUltra_Dynamic_Sky_C_SetUpOvercastTurbulence_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Overcast Turbulence
	 */
	struct AUltra_Dynamic_Sky_C_UpdateOvercastTurbulence_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID
	 */
	struct AUltra_Dynamic_Sky_C_UpdateCurrentVolumetricCloudsMID_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Max Trace Distance
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMaxTraceDistance_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds Base Clouds Texture
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudsBaseCloudsTexture_Params
	{
	public:
		unsigned char                                              UnknownData_BK9W[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Location Inside Cloud Layer
	 */
	struct AUltra_Dynamic_Sky_C_IsLocationInsideCloudLayer_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Inside;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZVX4[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Source Angle
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunSourceAngle_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cancel Shadows Value
	 */
	struct AUltra_Dynamic_Sky_C_CancelShadowsValue_Params
	{
	public:
		struct FVector                                             LightVector;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Light Vector Process
	 */
	struct AUltra_Dynamic_Sky_C_CloudShadowsLightVectorProcess_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Out;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Console Variable with Check
	 */
	struct AUltra_Dynamic_Sky_C_ApplyConsoleVariablewithCheck_Params
	{
	public:
		class FString                                              Cvar;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		double                                                     setting;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Light Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonLightColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Simplified Current Color
	 */
	struct AUltra_Dynamic_Sky_C_SimplifiedCurrentColor_Params
	{
	public:
		struct FLinearColor                                        DayColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DuskColor;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NightColor;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Out;                                                     // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Directional Inscattering Multiplier
	 */
	struct AUltra_Dynamic_Sky_C_DirectionalInscatteringMultiplier_Params
	{
	public:
		double                                                     Multiplier;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Query Project Settings And UDS Version
	 */
	struct AUltra_Dynamic_Sky_C_QueryProjectSettingsAndUDSVersion_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sky Atmosphere Fog Contribution
	 */
	struct AUltra_Dynamic_Sky_C_SkyAtmosphereFogContribution_Params
	{
	public:
		double                                                     Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Layer Scale
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudLayerScale_Params
	{
	public:
		double                                                     LayerScale;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Shadows Altitude
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudShadowsAltitude_Params
	{
	public:
		double                                                     CloudShadowsAltitude;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Top Altitude
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudTopAltitude_Params
	{
	public:
		double                                                     CloudTopAltitude;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Layer Height
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudLayerHeight_Params
	{
	public:
		double                                                     BaseCloudHeight;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     LayerHeight;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Base Cloud Height
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudBaseCloudHeight_Params
	{
	public:
		double                                                     BaseCloudHeight;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Ambient Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSkyAmbientColor_Params
	{
	public:
		struct FLinearColor                                        SkyAmbientColor;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Directional Inscattering Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentFogDirectionalInscatteringColor_Params
	{
	public:
		struct FLinearColor                                        DirectionalInscatteringColor;                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Inscattering Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentFogInscatteringColor_Params
	{
	public:
		struct FLinearColor                                        InscatteringColor;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Fog Base Colors
	 */
	struct AUltra_Dynamic_Sky_C_GetCurrentFogBaseColors_Params
	{
	public:
		struct FLinearColor                                        AmbientFogColor;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DirectionalBaseColor;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ScaledDirectionalBaseColor;                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        SunFogBase;                                              // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MoonFogBase;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Scale Sample Count
	 */
	struct AUltra_Dynamic_Sky_C_ScaleSampleCount_Params
	{
	public:
		double                                                     In;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Out;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fire Editor Dispatchers
	 */
	struct AUltra_Dynamic_Sky_C_FireEditorDispatchers_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Overcast Swirl
	 */
	struct AUltra_Dynamic_Sky_C_CurrentOvercastSwirl_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Wisps Opacity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentWispsOpacity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sky MID Cloud Density
	 */
	struct AUltra_Dynamic_Sky_C_SkyMIDCloudDensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Overall Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentOverallIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Lit Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentLitIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Saturation
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSaturation_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fog Start Distance
	 */
	struct AUltra_Dynamic_Sky_C_FogStartDistance_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fog Height Falloff
	 */
	struct AUltra_Dynamic_Sky_C_FogHeightFalloff_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Density
	 */
	struct AUltra_Dynamic_Sky_C_CurrentFogDensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Sky MID Parent Material Instance
	 */
	struct AUltra_Dynamic_Sky_C_GetSkyMIDParentMaterialInstance_Params
	{
	public:
		unsigned char                                              UnknownData_39Y0[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sunset Event Time
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunsetEventTime_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sunrise Event Time
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunriseEventTime_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Clouds Time of Day Factor
	 */
	struct AUltra_Dynamic_Sky_C_CloudsTimeofDayFactor_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Total Time Elapsed
	 */
	struct AUltra_Dynamic_Sky_C_TotalTimeElapsed_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.MS to Time of Day
	 */
	struct AUltra_Dynamic_Sky_C_MStoTimeofDay_Params
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minutes;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Seconds;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Miliseconds;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Time;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Convert Time of Day to Time Code
	 */
	struct AUltra_Dynamic_Sky_C_ConvertTimeofDaytoTimeCode_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTimecode                                           Timecode;                                                // 0x0008(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJLE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Time of Day Offset
	 */
	struct AUltra_Dynamic_Sky_C_TimeofDayOffset_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current 2D Cloud Tint
	 */
	struct AUltra_Dynamic_Sky_C_Current2DCloudTint_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Night Filter
	 */
	struct AUltra_Dynamic_Sky_C_NightFilter_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Find Overall Intensity
	 */
	struct AUltra_Dynamic_Sky_C_FindOverallIntensity_Params
	{
	public:
		double                                                     CloudDarkening;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Darkening
	 */
	struct AUltra_Dynamic_Sky_C_CloudDarkening_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Absent Directional Lights Brightness
	 */
	struct AUltra_Dynamic_Sky_C_AbsentDirectionalLightsBrightness_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Phase Multiplier
	 */
	struct AUltra_Dynamic_Sky_C_MoonPhaseMultiplier_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     WithoutLightBrightness;                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Gate With Current Changes
	 */
	struct AUltra_Dynamic_Sky_C_GateWithCurrentChanges_Params
	{
	public:
		bool                                                       CloudsChanging;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FogChanging;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DustChanging;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Using 2D Clouds
	 */
	struct AUltra_Dynamic_Sky_C_Using2DClouds_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Dimming Directional Lights
	 */
	struct AUltra_Dynamic_Sky_C_DimmingDirectionalLights_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Use Sky Atmosphere
	 */
	struct AUltra_Dynamic_Sky_C_UseSkyAtmosphere_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Light Pollution
	 */
	struct AUltra_Dynamic_Sky_C_CurrentLightPollution_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Light Contribution
	 */
	struct AUltra_Dynamic_Sky_C_OvercastLightContribution_Params
	{
	public:
		bool                                                       ForVolumetricClouds;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCMS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Aurora Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentAuroraIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Night Sky Glow
	 */
	struct AUltra_Dynamic_Sky_C_CurrentNightSkyGlow_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Stars Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentStarsColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Rayleigh Scattering Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentRayleighScatteringColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Mie Scattering Scale
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMieScatteringScale_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Mie Anisotropy
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMieAnisotropy_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Sky Light Color and Intensity
	 */
	struct AUltra_Dynamic_Sky_C_GetCurrentSkyLightColorandIntensity_Params
	{
	public:
		double                                                     OutIntensity;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        OutColor;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Light Lower Hemisphere Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSkyLightLowerHemisphereColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Light Material Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonLightMaterialColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Lit Percent
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonLitPercent_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Material Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonMaterialIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Phase Angle
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonPhaseAngle_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Scale and Cutout Value
	 */
	struct AUltra_Dynamic_Sky_C_CurrentMoonScaleandCutoutValue_Params
	{
	public:
		double                                                     Scale;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Cutout;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Light Specular Scale
	 */
	struct AUltra_Dynamic_Sky_C_MoonLightSpecularScale_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Light Volumetric Scattering Intensity
	 */
	struct AUltra_Dynamic_Sky_C_MoonLightVolumetricScatteringIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Moon Light Casting Shadows
	 */
	struct AUltra_Dynamic_Sky_C_IsMoonLightCastingShadows_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Unfiltered Moon Light Intensity
	 */
	struct AUltra_Dynamic_Sky_C_UnfilteredMoonLightIntensity_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Radius
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunRadius_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Light Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunLightIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Sun Light Casting Shadows
	 */
	struct AUltra_Dynamic_Sky_C_IsSunLightCastingShadows_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Light Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunLightColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Disk Color
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunDiskColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Disk Intensity
	 */
	struct AUltra_Dynamic_Sky_C_CurrentSunDiskIntensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Cloud Density
	 */
	struct AUltra_Dynamic_Sky_C_CloudShadowsCloudDensity_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Cloud Shadows Intensity and Softness
	 */
	struct AUltra_Dynamic_Sky_C_GetCurrentCloudShadowsIntensityandSoftness_Params
	{
	public:
		double                                                     Intensity;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Softness;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Volumetric Cloud Emissive Colors
	 */
	struct AUltra_Dynamic_Sky_C_GetVolumetricCloudEmissiveColors_Params
	{
	public:
		struct FLinearColor                                        Bottom;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Top;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.All Volumetric Cloud MIDs
	 */
	struct AUltra_Dynamic_Sky_C_AllVolumetricCloudMIDs_Params
	{
	public:
		bool                                                       Shadows;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8ZQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMaterialInstanceDynamic*>                    Mids;                                                    // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Base Clouds Scale
	 */
	struct AUltra_Dynamic_Sky_C_CurrentBaseCloudsScale_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Texture Velocity
	 */
	struct AUltra_Dynamic_Sky_C_CloudTextureVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Lerp to Simplified Clouds
	 */
	struct AUltra_Dynamic_Sky_C_CurrentLerptoSimplifiedClouds_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds Parent Materials
	 */
	struct AUltra_Dynamic_Sky_C_VolumetricCloudsParentMaterials_Params
	{
	public:
		unsigned char                                              UnknownData_FZCE[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_RCCA[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Macro Variation
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudMacroVariation_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Albedo
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudAlbedo_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Multiscattering Occlusion
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudMultiscatteringOcclusion_Params
	{
	public:
		double                                                     Occlusion;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Volumetric Cloud Extinction Scale
	 */
	struct AUltra_Dynamic_Sky_C_GetCurrentVolumetricCloudExtinctionScale_Params
	{
	public:
		double                                                     Top;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Clouds Density
	 */
	struct AUltra_Dynamic_Sky_C_CurrentVolumetricCloudsDensity_Params
	{
	public:
		double                                                     Layer1;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CloudLayerVisible;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQM5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Layer2;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Dynamic Sky Light Multiplier
	 */
	struct AUltra_Dynamic_Sky_C_UpdateDynamicSkyLightMultiplier_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Sky Light Intensity
	 */
	struct AUltra_Dynamic_Sky_C_TransitionSkyLightIntensity_Params
	{
	public:
		double                                                     NewSkyLightIntensityMultiplier;                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     TransitionTime;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lens Flare
	 */
	struct AUltra_Dynamic_Sky_C_UpdateLensFlare_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Lens Flare
	 */
	struct AUltra_Dynamic_Sky_C_SetUpLensFlare_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Volumetric Mode
	 */
	struct AUltra_Dynamic_Sky_C_ApplyVolumetricMode_Params
	{
	public:
		EUDS_VolRT_Mode                                            Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Moon Parameters
	 */
	struct AUltra_Dynamic_Sky_C_UpdateMoonParameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise Times
	 */
	struct AUltra_Dynamic_Sky_C_SunriseTimes_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Saved UDS And UDW State
	 */
	struct AUltra_Dynamic_Sky_C_ApplySavedUDSAndUDWState_Params
	{
	public:
		struct FUDS_and_UDW_State                                  State;                                                   // 0x0000(0x0178)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create UDS and UDW State for Saving
	 */
	struct AUltra_Dynamic_Sky_C_CreateUDSandUDWStateforSaving_Params
	{
	public:
		struct FUDS_and_UDW_State                                  PackagedState;                                           // 0x0000(0x0178)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time
	 */
	struct AUltra_Dynamic_Sky_C_UpdateReplicatedTime_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Clouds
	 */
	struct AUltra_Dynamic_Sky_C_UpdateStaticClouds_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day
	 */
	struct AUltra_Dynamic_Sky_C_OnRep_ReplicatedTimeofDay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time
	 */
	struct AUltra_Dynamic_Sky_C_GetCurrentDateandTime_Params
	{
	public:
		struct FDateTime                                           CurrentDateandTime;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time
	 */
	struct AUltra_Dynamic_Sky_C_CheckforDaylightSavingsTime_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day
	 */
	struct AUltra_Dynamic_Sky_C_IncrementDay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day
	 */
	struct AUltra_Dynamic_Sky_C_ForceValidDay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars
	 */
	struct AUltra_Dynamic_Sky_C_ApproximateRealSunMoonandStars_Params
	{
	public:
		int32_t                                                    Month;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Day;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Year;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WRAO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     TimeOfDay;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     TimeZone;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnlyCalculateSun;                                        // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1SLL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SunVector;                                               // 0x0028(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MoonVector;                                              // 0x0040(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     RealPhase;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PhaseAlignment;                                          // 0x0060(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CelestialOrbit;                                          // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        CelestialYaw;                                            // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time
	 */
	struct AUltra_Dynamic_Sky_C_SetDateandTime_Params
	{
	public:
		struct FDateTime                                           DateTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Light Rotations
	 */
	struct AUltra_Dynamic_Sky_C_UpdateDirectionalLightRotations_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture Sky Light
	 */
	struct AUltra_Dynamic_Sky_C_RecaptureSkyLight_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Settings Based on Platform and Scalability
	 */
	struct AUltra_Dynamic_Sky_C_UpdateSettingsBasedonPlatformandScalability_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled By Weather
	 */
	struct AUltra_Dynamic_Sky_C_UpdateVariablesControlledByWeather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function
	 */
	struct AUltra_Dynamic_Sky_C_ConstructionScriptFunction_Params
	{
	public:
		bool                                                       RunByCounterpart;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       MoveStaticLights;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RunBySequence;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing
	 */
	struct AUltra_Dynamic_Sky_C_SetCloudTiming_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables
	 */
	struct AUltra_Dynamic_Sky_C_UpdateStaticVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code
	 */
	struct AUltra_Dynamic_Sky_C_SetTimeofDayusingTimeCode_Params
	{
	public:
		struct FTimecode                                           TimeCode;                                                // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G6K5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format
	 */
	struct AUltra_Dynamic_Sky_C_GetTimeofDayinRealTimeFormat_Params
	{
	public:
		struct FTimecode                                           Time;                                                    // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables
	 */
	struct AUltra_Dynamic_Sky_C_UpdateActiveVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation
	 */
	struct AUltra_Dynamic_Sky_C_SetSunandMoonRootRotation_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript
	 */
	struct AUltra_Dynamic_Sky_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnLoaded_AA91001A446E22425F2F54AAB2159C50
	 */
	struct AUltra_Dynamic_Sky_C_OnLoaded_AA91001A446E22425F2F54AAB2159C50_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Start Async Loader
	 */
	struct AUltra_Dynamic_Sky_C_StartAsyncLoader_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick
	 */
	struct AUltra_Dynamic_Sky_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay
	 */
	struct AUltra_Dynamic_Sky_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Day Ended
	 */
	struct AUltra_Dynamic_Sky_C_DayEnded_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog
	 */
	struct AUltra_Dynamic_Sky_C_RestartInsideCloudFog_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD
	 */
	struct AUltra_Dynamic_Sky_C_UpdateReplicatedToD_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Timed Override with New Changes
	 */
	struct AUltra_Dynamic_Sky_C_TimedOverridewithNewChanges_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Startup
	 */
	struct AUltra_Dynamic_Sky_C_ForceStartup_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveEndPlay
	 */
	struct AUltra_Dynamic_Sky_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetNewTime
	 */
	struct AUltra_Dynamic_Sky_C_SetNewTime_Params
	{
	public:
		struct FTimecode                                           NewTime;                                                 // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky
	 */
	struct AUltra_Dynamic_Sky_C_ExecuteUbergraph_Ultra_Dynamic_Sky_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Hourly__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Hourly__DelegateSignature_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Midnight__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Sunrise__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Sunset__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
