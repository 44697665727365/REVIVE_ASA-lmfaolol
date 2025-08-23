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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass TheIsland_WP.TheIsland_WP_C
	 * Size -> 0x0208 (FullSize[0x06C8] - InheritedSize[0x04C0])
	 */
	class ATheIsland_WP_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bIsRaining;                                              // 0x04C8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KIIX[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            RainParticles;                                           // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       bInCave;                                                 // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWeatherEnabled;                                         // 0x04D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsUnderwater;                                           // 0x04DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8JYG[0x5];                                   // 0x04DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            UnderwaterParticles;                                     // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPlayerIndoors;                                        // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRiverWater;                                           // 0x04E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H9AK[0x6];                                   // 0x04EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            RiverParticles;                                          // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      DefaultRefs;                                             // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystem*                                     RainVFXTemplate;                                         // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WaterVFXTemplate;                                        // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInSnowBiome;                                          // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C3DV[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     LastRainVFXTemplate;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsRainEnabled;                                          // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_08BF[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RefCount;                                                // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  NullMat;                                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTekCaveDifficulty;                                // 0x0538(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bKidsModeOn;                                             // 0x053C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EMV9[0x3];                                   // 0x053D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUDS_Digital_Clock_C*                                UDSDigitalClock;                                         // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UObject*                                             UDSMiniControls;                                         // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class URandom_Weather_Variation_C*                         WeatherVAR;                                              // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class URandom_Weather_Variation_C*                         RandoWeather;                                            // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class AUltra_Dynamic_Weather_C*                            AsUltraDynamicWeather;                                   // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceHideSupplyDrops;                                    // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6MT6[0x7];                                   // 0x0569(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APostProcessVolume*>                          CurrentPostProcessVolumes;                               // 0x0570(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       RecentlyLeftWater;                                       // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StillUnderwater;                                         // 0x0581(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LakeWater;                                               // 0x0582(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CaveWater;                                               // 0x0583(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_11QS[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FogBlendSpeedOcean;                                      // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RandomWeatherStartTimer;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDoingRandomWeather;                                     // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YI4K[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ForceRainTimer;                                          // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RandomWeatherStopTimer;                                  // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WeatherTransitionTime;                                   // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTimeStopped;                                            // 0x05B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LDRB[0x7];                                   // 0x05B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_FoliageSolver_New_C*                             FoliageSolver;                                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               Cave3_ExponentialHeightFog_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05C8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               Cave5ExponentialHeightFog_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05D0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               Cave6ExponentialHeightFog_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05D8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               Cave7ExponentialHeightFog_2_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05E0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               IceCaveExponentialHeightFog_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05E8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               CaveVolcanoExponentialHeightFog_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05F0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AShooterMatineeActor*                                DoorOpenMatinee_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x05F8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ABlockingVolume*                                     DoorBlockingVolume_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0600(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AServerSidePoint_Huge_C*                             CenterOfVolcanoCavePoint_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0608(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ATileStreamingVolume*                                RegionTileStreamingVolume_Hallway_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0610(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ATogglePainVolume*                                   RegionHallwayKillVolume_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0618(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 LevelSequenceActor_1_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0620(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               Cave2_ExponentialHeightFog_2_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0628(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ATogglePainVolume*                                   TogglePainVolume_UAID_C87F54C5CAFA909601_1131433911_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0630(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AUDS_Island_C*                                       UDS_Island_C_1_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0638(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_0_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0640(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               ExponentialHeightFog_2_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0648(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               ExponentialHeightFog_0_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0650(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AExponentialHeightFog*                               Cave1_ExponentialHeightFog_ExecuteUbergraph_TheIsland_WP_RefProperty; // 0x0658(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AUDS_Island_C*                                       UDS_Island_C_1_UDSVisibility_MERGED_RefProperty;         // 0x0660(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ASkeletalMeshActor*                                  Elemental_Door_Open_2_WorldActorVisibility_MERGED_RefProperty; // 0x0668(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_UAID_04421AF203C240AE01_1969631171_WorldActorVisibility_MERGED_RefProperty; // 0x0670(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_UAID_04421AF203C240AE01_1969591170_WorldActorVisibility_MERGED_RefProperty; // 0x0678(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_UAID_04421AF203C240AE01_1969553169_WorldActorVisibility_MERGED_RefProperty; // 0x0680(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_UAID_04421AF203C240AE01_1969513168_WorldActorVisibility_MERGED_RefProperty; // 0x0688(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_UAID_04421AF203C240AE01_1969430167_WorldActorVisibility_MERGED_RefProperty; // 0x0690(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_UAID_E884A567E020EAA801_1854137546_WorldActorVisibility_MERGED_RefProperty; // 0x0698(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    StaticMeshActor_0_WorldActorVisibility_MERGED_RefProperty; // 0x06A0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ABP_IslandWaterPlane_C*                              BP_IslandWaterPlane_C_0_WorldActorVisibility_MERGED_RefProperty; // 0x06A8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AStaticMeshActor*                                    Dirt_Plane_2700_WorldActorVisibility_MERGED_RefProperty; // 0x06B0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class ABP_FX_Underwater_Detritus_C*                        BP_FX_Underwater_Detritus_C_UAID_F02F7432CA9A439501_1735006297_WaterParticles_MERGED_RefProperty; // 0x06B8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_0_SetOceanPPVis_MERGED_RefProperty;    // 0x06C0(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash

	public:
		void FinalBossToggles(bool Enable);
		void GetFoliageSolver();
		void SnowEnvToggles(bool Enable);
		void ToggleGrass(bool bGrassEnable);
		void SetVisFlagsOnDCM();
		void BlendMaterialFog();
		void SetOceanPPVis(bool Enabled);
		void ToggleHLODVisibility(bool Visible);
		void SortPostProcessVOlumes(class APostProcessVolume* NewPostProcess);
		void Debug();
		void WaterParticles();
		void WorldActorVisibility(bool Visibility);
		void SetSkylightVisibility(bool Visibility);
		void UDSVisibility(bool Visibility);
		void SetMainDirectionalVisibility(bool Visibility);
		void SetWorldFogVisiblity(bool Visiblity);
		void OnRep_CurrentTekCaveDifficulty();
		void IsReallyUnderwater(bool* ReallyUnderwater);
		void OnRep_bIsRaining();
		void K2Node_MatineeController_176_EnableCollision();
		void K2Node_MatineeController_176_DisableCollision();
		void K2Node_MatineeController_176_Finished();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void NetSetTekCaveDifficulty(int32_t difficulty);
		void NetClearTekCaveDifficulty();
		void EndTekCave();
		void ActivateTekCave(int32_t difficulty);
		void BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void EnableEndBossArena();
		void DisableEndBossArena();
		void BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void SkiesofBlue(double TransitionTime);
		void Umbrella(double TransitionTime);
		void RunBenchmark();
		void StopTime(bool HideSupplyDrops);
		void StartTime();
		void OnGameStateReady(class AGameState* GameState);
		void OnAnyPPEntered(class APostProcessVolume* PostProcessVolume, class APlayerController* Controller, bool bIsPrimaryPlayer);
		void OnAnyPPLeft(class APostProcessVolume* PostProcessVolume, class APlayerController* Controller, bool bIsPrimaryPlayer);
		void ToggleFog();
		void HeatWave(double TransitionTime);
		void Fog(double TransitionTime);
		void ColdFront(double TransitionTime);
		void BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
		void Ascend0();
		void Ascend1();
		void Ascend2();
		void SetCloudPhase(double CloudPhase);
		void ExecuteUbergraph_TheIsland_WP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
