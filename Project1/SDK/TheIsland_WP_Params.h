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
	 * Function TheIsland_WP.TheIsland_WP_C.FinalBossToggles
	 */
	struct ATheIsland_WP_C_FinalBossToggles_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.GetFoliageSolver
	 */
	struct ATheIsland_WP_C_GetFoliageSolver_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.SnowEnvToggles
	 */
	struct ATheIsland_WP_C_SnowEnvToggles_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G4RO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ToggleGrass
	 */
	struct ATheIsland_WP_C_ToggleGrass_Params
	{
	public:
		bool                                                       bGrassEnable;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.SetVisFlagsOnDCM
	 */
	struct ATheIsland_WP_C_SetVisFlagsOnDCM_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BlendMaterialFog
	 */
	struct ATheIsland_WP_C_BlendMaterialFog_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Set Ocean PPVis
	 */
	struct ATheIsland_WP_C_SetOceanPPVis_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MD45[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ToggleHLODVisibility
	 */
	struct ATheIsland_WP_C_ToggleHLODVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6G5B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.SortPostProcessVOlumes
	 */
	struct ATheIsland_WP_C_SortPostProcessVOlumes_Params
	{
	public:
		class APostProcessVolume*                                  NewPostProcess;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Debug
	 */
	struct ATheIsland_WP_C_Debug_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.WaterParticles
	 */
	struct ATheIsland_WP_C_WaterParticles_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.WorldActorVisibility
	 */
	struct ATheIsland_WP_C_WorldActorVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Set Skylight Visibility
	 */
	struct ATheIsland_WP_C_SetSkylightVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.UDS Visibility
	 */
	struct ATheIsland_WP_C_UDSVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Set Main Directional Visibility
	 */
	struct ATheIsland_WP_C_SetMainDirectionalVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Set World Fog Visiblity
	 */
	struct ATheIsland_WP_C_SetWorldFogVisiblity_Params
	{
	public:
		bool                                                       Visiblity;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.OnRep_CurrentTekCaveDifficulty
	 */
	struct ATheIsland_WP_C_OnRep_CurrentTekCaveDifficulty_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.IsReallyUnderwater
	 */
	struct ATheIsland_WP_C_IsReallyUnderwater_Params
	{
	public:
		bool                                                       ReallyUnderwater;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.OnRep_bIsRaining
	 */
	struct ATheIsland_WP_C_OnRep_bIsRaining_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_EnableCollision
	 */
	struct ATheIsland_WP_C_K2Node_MatineeController_176_EnableCollision_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_DisableCollision
	 */
	struct ATheIsland_WP_C_K2Node_MatineeController_176_DisableCollision_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_Finished
	 */
	struct ATheIsland_WP_C_K2Node_MatineeController_176_Finished_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ReceiveBeginPlay
	 */
	struct ATheIsland_WP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ReceiveTick
	 */
	struct ATheIsland_WP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.NetSetTekCaveDifficulty
	 */
	struct ATheIsland_WP_C_NetSetTekCaveDifficulty_Params
	{
	public:
		int32_t                                                    difficulty;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.NetClearTekCaveDifficulty
	 */
	struct ATheIsland_WP_C_NetClearTekCaveDifficulty_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.EndTekCave
	 */
	struct ATheIsland_WP_C_EndTekCave_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ActivateTekCave
	 */
	struct ATheIsland_WP_C_ActivateTekCave_Params
	{
	public:
		int32_t                                                    difficulty;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.EnableEndBossArena
	 */
	struct ATheIsland_WP_C_EnableEndBossArena_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.DisableEndBossArena
	 */
	struct ATheIsland_WP_C_DisableEndBossArena_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.SkiesofBlue
	 */
	struct ATheIsland_WP_C_SkiesofBlue_Params
	{
	public:
		double                                                     TransitionTime;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Umbrella
	 */
	struct ATheIsland_WP_C_Umbrella_Params
	{
	public:
		double                                                     TransitionTime;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.RunBenchmark
	 */
	struct ATheIsland_WP_C_RunBenchmark_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.StopTime
	 */
	struct ATheIsland_WP_C_StopTime_Params
	{
	public:
		bool                                                       HideSupplyDrops;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.StartTime
	 */
	struct ATheIsland_WP_C_StartTime_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.OnGameStateReady
	 */
	struct ATheIsland_WP_C_OnGameStateReady_Params
	{
	public:
		class AGameState*                                          GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.OnAnyPPEntered
	 */
	struct ATheIsland_WP_C_OnAnyPPEntered_Params
	{
	public:
		class APostProcessVolume*                                  PostProcessVolume;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.OnAnyPPLeft
	 */
	struct ATheIsland_WP_C_OnAnyPPLeft_Params
	{
	public:
		class APostProcessVolume*                                  PostProcessVolume;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ToggleFog
	 */
	struct ATheIsland_WP_C_ToggleFog_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.HeatWave
	 */
	struct ATheIsland_WP_C_HeatWave_Params
	{
	public:
		double                                                     TransitionTime;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Fog
	 */
	struct ATheIsland_WP_C_Fog_Params
	{
	public:
		double                                                     TransitionTime;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ColdFront
	 */
	struct ATheIsland_WP_C_ColdFront_Params
	{
	public:
		double                                                     TransitionTime;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature
	 */
	struct ATheIsland_WP_C_BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPrimaryPlayer;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Ascend0
	 */
	struct ATheIsland_WP_C_Ascend0_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Ascend1
	 */
	struct ATheIsland_WP_C_Ascend1_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.Ascend2
	 */
	struct ATheIsland_WP_C_Ascend2_Params
	{	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.SetCloudPhase
	 */
	struct ATheIsland_WP_C_SetCloudPhase_Params
	{
	public:
		double                                                     CloudPhase;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TheIsland_WP.TheIsland_WP_C.ExecuteUbergraph_TheIsland_WP
	 */
	struct ATheIsland_WP_C_ExecuteUbergraph_TheIsland_WP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_97HB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
