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
	 * BlueprintGeneratedClass Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C
	 * Size -> 0x1698 (FullSize[0x1B50] - InheritedSize[0x04B8])
	 */
	class AUltra_Dynamic_Weather_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Rainbow;                                                 // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUDS_PlayerOcclusion_C*                              PlayerOcclusion;                                         // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     LightRainSoundComp;                                      // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Dust_Particles;                                          // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Wind_Debris_Particles;                                   // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Snow_Particles;                                          // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Wind_X;                                                  // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RainSoundComp;                                           // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Wind_Y;                                                  // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Wind_Y2;                                                 // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Wind_X2;                                                 // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SpatializedAudioRoot;                                    // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URandom_Weather_Variation_C*                         Random_Weather_Variation;                                // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Wind_Whistling;                                          // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     DistantThunder_Cue;                                      // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Obscured_Lightning;                                      // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          LightningLight;                                          // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Root;                                                    // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Rain_Particles;                                          // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AUltra_Dynamic_Sky_C*                                UltraDynamicSky;                                         // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             Weather;                                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudCoverage;                                           // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Fog;                                                     // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WindIntensity;                                           // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Rain;                                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Snow;                                                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Lightning;                                               // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Dust;                                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaterialWetness;                                         // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaterialSnowCoverage;                                    // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WindDirection;                                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LerptoNewSettings;                                       // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LerptoStaticSettings;                                    // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TransitionInTime;                                        // 0x05C8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TransitionState;                                         // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X48T[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Timer;                                                   // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ParticleCollisionEnabled;                                // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PFRG[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CeilingCheckHeight;                                      // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SpawnDirectionForwardBias;                               // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SpawnBoxHeight;                                          // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxSpawnDistance;                                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SpawnDistanceDistribution;                               // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinimumParticleDistance;                                 // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WorldSpawnOffset;                                        // 0x0618(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraForwardSpawnOffset;                                // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseWaterLevel;                                           // 0x0638(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VZW6[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WaterLevel;                                              // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          WeatherParticleCollisionChannel;                         // 0x0648(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableRainParticles;                                     // 0x0649(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DH7Q[0x6];                                   // 0x064A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxRainParticleSpawnRate;                                // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     RainGPUParticleSpawnMultiplier;                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RainDropsScale;                                          // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        RainParticleColorMultiplier;                             // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RainDropsAlpha;                                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RainRefractionIntensity;                                 // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RainAmbientLightIntensity;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RainParticlesTimeDilation;                               // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RenderRaindropDecals;                                    // 0x0694(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GC69[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SplashFrequency;                                         // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SplashParticlesScale;                                    // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxDuplicateSplashRange;                                 // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableSnowParticles;                                     // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R1GN[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxSnowParticleSpawnRate;                                // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SnowGPUParticleSpawnMultiplier;                          // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SnowFlakesScale;                                         // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SnowFlakesAlpha;                                         // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SnowAmbientLightIntensity;                               // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SnowParticlesTimeDilation;                               // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SnowParticleColorMultiplier;                             // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SnowFlakesSticktoSurfaces;                               // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A7ST[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SnowFlakesStickTime;                                     // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       SpawnLightningFlashes;                                   // 0x0708(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SGKZ[0x7];                                   // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LightningFlashIntervalMin;                               // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningFlashIntervalMax;                               // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningFlash_Timing_Randomization;                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightningEffectColor;                                    // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       LightningFlashLightSource;                               // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7DN7[0x3];                                   // 0x0739(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        LightningFlashLightSourceColor;                          // 0x073C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HHR[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaximumLightningFlashLightIntensity;                     // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       LightningFlashesCastShadows;                             // 0x0758(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LightningFlashesCastLightShaftBloom;                     // 0x0759(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8NDX[0x6];                                   // 0x075A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LightningFlashLightShaftIntensity;                       // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningFlashMinimumDistance;                           // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningFlashMaximumDistance;                           // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableObscuredLightning;                                 // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VIK5[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ObscuredLightningSpawnRate;                              // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningHeightOffset;                                   // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableFogParticles;                                      // 0x0790(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VF3L[0x7];                                   // 0x0791(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxFogParticlePercentageRain;                            // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaxFogParticlePercentageSnow;                            // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaxFogParticlePercentageDust;                            // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogParticleIntensityRain;                                // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogParticleIntensitySnow;                                // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogParticleIntensityDust;                                // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogParticlesDrawDistance;                                // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWindDirectionalSource*                              WindDirectionalSourceActorforSpeedTree;                  // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     MaxMaterialWetness;                                      // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaxMaterialSnowCoverage;                                 // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaxDustCoverage;                                         // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       MaterialEffectsTakeTimetoChange;                         // 0x07F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6NWV[0x7];                                   // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeforMaterialstoGetWet;                                // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TimeforMaterialstoDryOut;                                // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TimeforMaterialstoGatherSnow;                            // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TimeforSnowtoMelt;                                       // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TimeforMaterialstoGatherDust;                            // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     AmountofSnowtoTurntoWetnesswhenMelted;                   // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WindForceScale;                                          // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     SnowDelta;                                               // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRandomWeatherVariation;                               // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartWithaRandomWeatherType;                             // 0x0839(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EL9K[0x6];                                   // 0x083A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WeatherTypeChangeMinimumInterval;                        // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WeatherTypeChangeMaximumInterval;                        // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TransitionLength;                                        // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesSpring;                          // 0x0858(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesSummer;                          // 0x08A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesAutumn;                          // 0x08F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesWinter;                          // 0x0948(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       BlendSeasonProbabilities;                                // 0x0998(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       AvoidExtremeCloudCoverageShifts;                         // 0x0999(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       AvoidRepeatingWeatherTypes;                              // 0x099A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       AvoidChangingDirectlyfromSnowtoRainOrViceVersa;          // 0x099B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y532[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ExtremeCloudCoverageShiftTheshold;                       // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       EnableRainSounds;                                        // 0x09A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8X12[0x7];                                   // 0x09A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RainVolume;                                              // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableDistantThunderSounds;                              // 0x09B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WDFN[0x7];                                   // 0x09B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DistantThunderVolume;                                    // 0x09C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableCloseThunderSounds;                                // 0x09C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SHO1[0x7];                                   // 0x09C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CloseThunderVolume;                                      // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloseThunderDelayPerKM;                                  // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableWindSounds;                                        // 0x09E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_25TZ[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WindVolume;                                              // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WindWhistlingVolume;                                     // 0x09F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     IntendedCloudSpeed;                                      // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     IntendedCloudCoverage;                                   // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     IntendedCloudDirection;                                  // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudSpeedMultiplier;                                    // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       Runtime;                                                 // 0x0A18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KNPH[0x7];                                   // 0x0A19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FogParticleCameraOffset;                                 // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WindDirectionalSourceIntensityScale;                     // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningBoltLength;                                     // 0x0A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningFlashMinimumLength;                             // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightningFlashMaximumLength;                             // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplicateLightningDirection;                             // 0x0A48(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QQ2P[0x7];                                   // 0x0A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LightningFlashMaxAnglefromForward;                       // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     LightningFlashLength;                                    // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FlashingLightning;                                       // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NGH9[0x7];                                   // 0x0A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LightningFlashTimer;                                     // 0x0A68(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         LightningFlashCurve;                                     // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EUDS_TemperatureType                                       TemperatureScale;                                        // 0x0A78(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WBV3[0x7];                                   // 0x0A79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BaseSummerTemperature;                                   // 0x0A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BaseAutumnTemperature;                                   // 0x0A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BaseWinterTemperature;                                   // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BaseSpringTemerature;                                    // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     NighttimeFactor;                                         // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     OvercastFactor;                                          // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     RainingFactor;                                           // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     EveningFactor;                                           // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SnowingFactor;                                           // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     RandomFactor;                                            // 0x0AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     InteriorTemperature;                                     // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     InteriorInsulation;                                      // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MinimumValidTemperature;                                 // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaximumValidTemperature;                                 // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaxCloudSpeed;                                           // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableDynamicLandscapeWeatherEffects;                    // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X4A6[0x7];                                   // 0x0AF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WeatherSpeed;                                            // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		EUDS_ControlPointMode                                      ControlPointLocationSource;                              // 0x0B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_NOOE[0x7];                                   // 0x0B09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomControlPointLocation;                              // 0x0B10(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     Dust2;                                                   // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     RenderTargetAreaforDynamicPuddles;                       // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SnowDepth;                                               // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustDepth;                                               // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyDynamicTrailstoSnow;                                // 0x0B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyDynamicTrailstoDust;                                // 0x0B49(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JXCJ[0x6];                                   // 0x0B4A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DustZNormalCutoff;                                       // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustZNormalFalloff;                                      // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustTextureScale;                                        // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustParallaxSampleScale;                                 // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustCompressionBrushSpread;                              // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustCompressionBrushScatter;                             // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustCompressionBrushSizeScatter;                         // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustCompressionFadeSpeedIdle;                            // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustCompressionFadeSpeedActive;                          // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustCompressionBrushSize;                                // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustCompressionNormalMapIntensity;                       // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustBuildup;                                             // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FramesPerUpdate;                                         // 0x0BB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       IncreasingMaterialSnowCoverage;                          // 0x0BB4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O9U3[0x3];                                   // 0x0BB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlayerPawnLocation;                                      // 0x0BB8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerCameraLocation;                                    // 0x0BD0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ControlPointLocation;                                    // 0x0BE8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyInteractionRipplestoPuddles;                        // 0x0C00(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WDJ1[0x7];                                   // 0x0C01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PuddlesZNormalCutoff;                                    // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PuddlesZNormalFalloff;                                   // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PuddleCoverage;                                          // 0x0C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BaseWetnesswhenRaining;                                  // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BaseWetnesswhenClear;                                    // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     PuddleSharpness;                                         // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WaterRoughness;                                          // 0x0C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     RippleSpread;                                            // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     RippleFadeSpeed;                                         // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     PuddleNormalsIntensity;                                  // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TArray<class UPhysicalMaterial*>                           PhysicalMaterialswhichenableDLWEInteractionsonnonLandscapes; // 0x0C58(0x0010) Edit, BlueprintVisible, AdvancedDisplay
		EObjectTypeQuery                                           LandscapeObjectType;                                     // 0x0C68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_1IBS[0x7];                                   // 0x0C69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPhysicalMaterial*>                           DustSoundsandParticles;                                  // 0x0C70(0x0010) Edit, BlueprintVisible, AdvancedDisplay
		TArray<class UPhysicalMaterial*>                           PhysicalMaterialswhichdisablePuddleSoundsandParticles;   // 0x0C80(0x0010) Edit, BlueprintVisible, AdvancedDisplay
		double                                                     VariationCloudsScale;                                    // 0x0C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       EnableWOVMaterialEffectTarget;                           // 0x0C98(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BI4Z[0x7];                                   // 0x0C99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WOVTargetSize;                                           // 0x0CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WOVTargetUpdateThresholdInsideVolume;                    // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     WOVTargetUpdateThresholdOutsideVolume;                   // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TArray<class AWeather_Override_Volume_C*>                  WeatherOverrideVolumes;                                  // 0x0CB8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    MaskTargetResolution;                                    // 0x0CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_FJCM[0x4];                                   // 0x0CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TilingRipplesScale;                                      // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCustomLightningLocation;                              // 0x0CD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TAEJ[0x7];                                   // 0x0CD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLightningLocation;                                 // 0x0CE0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingGlobalWeatherState;                                 // 0x0CF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResettingParticleEmitters;                               // 0x0CF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7JFL[0x6];                                   // 0x0CFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentMaxInteractDistance;                              // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Mobile;                                                  // 0x0D08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I2IW[0x7];                                   // 0x0D09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLightningTarget;                                   // 0x0D10(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentLightningIntensity;                               // 0x0D28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentLightningLocation;                                // 0x0D30(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentLightningAngle;                                   // 0x0D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWeather_Override_Volume_C*                          CurrentWeatherOverrideVolume;                            // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WOVTargetResolution;                                     // 0x0D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CurrentlyinaWeatherOverrideVolume;                       // 0x0D5C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SH62[0x3];                                   // 0x0D5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             DLWEBrushSizeBuffer;                                     // 0x0D60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstanceDynamic*>                    RippleBrushes;                                           // 0x0D70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class ALandscape*>                                  LandscapeActors;                                         // 0x0D80(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              DLWE_MaskTarget[0x30];                                   // 0x0D90(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             DLWE_RenderTarget_Center;                                // 0x0DC0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DLWE_Recenter_Offset;                                    // 0x0DD8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DLWEFrameCount;                                          // 0x0DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_DLWE_Mode                                             CurrentDLWEMode;                                         // 0x0DF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OM49[0x3];                                   // 0x0DF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   CloudReferenceArray;                                     // 0x0DF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTextureRenderTarget2D*>                      RenderTargetstoReleaseNextFrame;                         // 0x0E08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     DLWE_Brush_Locations_Buffer;                             // 0x0E18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             DLWEBrushStrengthBuffer;                                 // 0x0E28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseOcclusiontoAttenuateSoundsinInteriors;                // 0x0E38(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UDA1[0x7];                                   // 0x0E39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxAttenuation;                                          // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MinLPFFrequency;                                         // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EUDS_Occlusion_Mode                                        OcclusionSamplingMode;                                   // 0x0E50(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1YA2[0x7];                                   // 0x0E51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxInteriorTraceDistance;                                // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SoundOcclusionUpdatePeriod;                              // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            OcclusionTraceChannel;                                   // 0x0E68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnablePostProcessWindFog;                                // 0x0E69(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_02TE[0x6];                                   // 0x0E6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PPWFIntensityfromFog;                                    // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TArray<class UAudioComponent*>                             WindSoundComponents;                                     // 0x0E78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		double                                                     PPWFIntensityfromRain;                                   // 0x0E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     PPWFIntensityfromSnow;                                   // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     PPWFIntensityfromDust;                                   // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     PPWFFadeDistance;                                        // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PPWFMaxSampleDistance;                                   // 0x0EA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     PPWFSampleStepDistance;                                  // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     PPWF3DNoiseScale;                                        // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PostProcessWindFogMID;                                   // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     TimeRandomOffset;                                        // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableWindDirectionVariation;                            // 0x0ED0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GEW4[0x7];                                   // 0x0ED1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaximumWindDirectionVariation;                           // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentWindDirection;                                    // 0x0EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VariationSpeed;                                          // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WindVariationTime;                                       // 0x0EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunByCounterpart;                                        // 0x0EF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MIAE[0x3];                                   // 0x0EF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentTickSet;                                          // 0x0EFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Spread_OutTickBehaviorsOver3Frames;                      // 0x0F00(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       Initialized;                                             // 0x0F01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4CJF[0x6];                                   // 0x0F02(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, EUDS_PropertyType>                       Properties;                                              // 0x0F08(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             OcclusionLocation;                                       // 0x0F58(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCameraLocationforOcclusion;                           // 0x0F70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XJJT[0x7];                                   // 0x0F71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SnowCoverageLightsUpHeightFog;                           // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             StartedRaining;                                          // 0x0F80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             StartedSnowing;                                          // 0x0F90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             FinishedRaining;                                         // 0x0FA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             FinishedSnowing;                                         // 0x0FB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GettingCloudy;                                           // 0x0FC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CloudsClearing;                                          // 0x0FD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ED_Raining;                                              // 0x0FE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ED_Snowy;                                                // 0x0FE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ED_Cloudy;                                               // 0x0FE2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OS27[0x5];                                   // 0x0FE3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WOVTemperatureOffset;                                    // 0x0FE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableScreenDroplets;                                    // 0x0FF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SZL4[0x7];                                   // 0x0FF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ScreenCenterStrength;                                    // 0x0FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ScreenEdgeStrength;                                      // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraFacingRainBias;                                    // 0x1008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DropletTiling;                                           // 0x1010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BlurRadius;                                              // 0x1018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScreenDropletsMID;                                       // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     DripsIntensity;                                          // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DropsIntensity;                                          // 0x1030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DropsTime;                                               // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ScreenDropletsParentMaterial[0x30];                      // 0x1040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             PlayerCameraForwardVector;                               // 0x1070(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RainSystemSpawning;                                      // 0x1088(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ObscuredLightningSystemSpawning;                         // 0x1089(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CurrentWeatherStateChanged;                              // 0x108A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PXMB[0x5];                                   // 0x108B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UnoccludedRainVolume;                                    // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CurrentMaterialStateChanged;                             // 0x1098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FirstTick;                                               // 0x1099(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverridewithNewChanges;                                  // 0x109A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableDustParticles;                                     // 0x109B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MQAC[0x4];                                   // 0x109C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxDustParticleSpawnRate;                                // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustParticleScale;                                       // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DustParticleColor;                                       // 0x10B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustParticleAlpha;                                       // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableWindDebris;                                        // 0x10C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8378[0x7];                                   // 0x10C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WindDebrisAmount;                                        // 0x10D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DebrisScale;                                             // 0x10D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebrisParticleAlpha;                                     // 0x10E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WindDebrisAtlas[0x30];                                   // 0x10E8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UTextureRenderTarget2D*                              WeatherMaskBrushTarget;                                  // 0x1118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           WeatherBrushTargetCorner;                                // 0x1120(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeatherMaskTargetSize;                                   // 0x1130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeatherMaskBrushTargetResolution;                        // 0x1134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AWeather_Mask_Brush_C*>                       AllWeatherMaskBrushes;                                   // 0x1138(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       WeatherMaskTargetinUse;                                  // 0x1148(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7GTY[0x7];                                   // 0x1149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           WeatherBrushTargetCenter;                                // 0x1150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WeatherMaskTargetHalfSize;                               // 0x1160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WeatherMaskProjectionValue;                              // 0x1168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AWeather_Mask_Brush_C*>                       DLWERelevantWeatherMaskBrushes;                          // 0x1170(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector                                             WeatherBrushTargetRootPosition;                          // 0x1180(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TriggeredStartingDispatchers;                            // 0x1198(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4KYZ[0x7];                                   // 0x1199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUDS_Weather_Settings_C*                             OldWeatherState;                                         // 0x11A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             GlobalWeatherState;                                      // 0x11A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             LocalWeatherState;                                       // 0x11B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedMaterialWetness;                               // 0x11B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedMaterialSnow;                                  // 0x11C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             LastLocalWeatherState;                                   // 0x11C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     IntendedFog;                                             // 0x11D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SnowSystemSpawning;                                      // 0x11D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WindDebrisSystemSpawning;                                // 0x11D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_711M[0x6];                                   // 0x11DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     IntendedDust;                                            // 0x11E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DustParticlesTimeDilation;                               // 0x11E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DustSystemSpawning;                                      // 0x11EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DWOB[0x3];                                   // 0x11ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaterialDustCoverage;                                    // 0x11F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedMaterialDust;                                  // 0x11F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DLWESnowMode;                                            // 0x1200(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_SeasonMode                                            SeasonMode;                                              // 0x1204(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QGHR[0x3];                                   // 0x1205(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Season;                                                  // 0x1208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             IndividualSeasons;                                       // 0x1210(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     UnoccludedLightRainVolume;                               // 0x1220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldCloudCoverage;                                        // 0x1228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldRain;                                                 // 0x1230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldWindIntensity;                                        // 0x1238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldSnow;                                                 // 0x1240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Lightning2;                                              // 0x1248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldFog;                                                  // 0x1250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldDust;                                                 // 0x1258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldMaterialWetness;                                      // 0x1260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldMaterialSnowCoverage;                                 // 0x1268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldMaterialDustCoverage;                                 // 0x1270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             ManualWeatherState;                                      // 0x1278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     OldLerptoStaticSettings;                                 // 0x1280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WindCueSound[0x30];                                      // 0x1288(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RainCueSound[0x30];                                      // 0x12B8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LightRainCueSound[0x30];                                 // 0x12E8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DistantThunderCueSound[0x30];                            // 0x1318(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WindWhistlingCueSound[0x30];                             // 0x1348(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CloudsDiverseTexture[0x30];                              // 0x1378(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RainParticleNiagaraSystem[0x30];                         // 0x13A8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SnowParticleNiagaraSystem[0x30];                         // 0x13D8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DustParticleNiagaraSystem[0x30];                         // 0x1408(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WindDebrisNiagaraSystem[0x30];                           // 0x1438(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ObscuredLightningNiagaraSystem[0x30];                    // 0x1468(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PostProcessWindFogParentMaterial[0x30];                  // 0x1498(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FScriptMulticastDelegate                             SandForming;                                             // 0x14C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SandClearing;                                            // 0x14D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ED_Dusty;                                                // 0x14E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableRainbow;                                           // 0x14E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LE17[0x6];                                   // 0x14EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxRainbowStrength;                                      // 0x14F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     StrengthfromRain;                                        // 0x14F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     StrengthfromFog;                                         // 0x1500(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     StrengthinanyWeather;                                    // 0x1508(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Fog2;                                                    // 0x1510(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentRainbowVisibility;                                // 0x1518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaskRainbowAboveClouds;                                  // 0x1520(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaskRainbowBelowWater;                                   // 0x1528(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_Weather_Display_Names                                 ED_CurrentWeather;                                       // 0x1530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2C8B[0x7];                                   // 0x1531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             WeatherDisplayNameChanged;                               // 0x1538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SupportVirtualHeightfieldMesh;                           // 0x1548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4MUI[0x7];                                   // 0x1549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARuntimeVirtualTextureVolume*                        VHFMRuntimeVirtualTextureVolume;                         // 0x1550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     VHFMInvalidateLongRangeDistance;                         // 0x1558(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VHFMInvalidateLongRangeThreshold;                        // 0x1560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VHFMInvalidateMidRangeDistance;                          // 0x1568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VHFMInvalidateMidRangeThreshold;                         // 0x1570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VHFMInvalidateShortRangeDistance;                        // 0x1578(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VHFMInvalidateShortRangeThreshold;                       // 0x1580(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector                                             VHFMInvalidateLongRangeBuffer;                           // 0x1588(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector                                             VHFMInvalidateMidRangeBuffer;                            // 0x15A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FVector                                             VHFMInvalidateShortRangeBuffer;                          // 0x15B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		TArray<double>                                             CachedFloatsOld;                                         // 0x15D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             CachedFloatsNew;                                         // 0x15E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CachedVectorsOld;                                        // 0x15F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CachedVectorsNew;                                        // 0x1600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     CacheAlpha;                                              // 0x1610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FillingStartingCache;                                    // 0x1618(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IED4[0x7];                                   // 0x1619(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               CachedValueChanging;                                     // 0x1620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     CachePeriod;                                             // 0x1630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CachedWindDirection;                                     // 0x1638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FogParticlesActive;                                      // 0x1640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z7BQ[0x7];                                   // 0x1641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CachedRainVelocity;                                      // 0x1648(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastRecenterCheckLocation;                               // 0x1660(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentLocalWeatherChangeSpeed;                          // 0x1678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UpdateDLWEState;                                         // 0x1680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USoundMix*                                           OutdoorSoundMixModifier;                                 // 0x1690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MaxAttenuationforUDSOutdoorSound;                        // 0x1698(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     UpdateSeasonInterval;                                    // 0x16A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FUDS_and_UDW_State                                  StateBeingApplied;                                       // 0x16A8(0x0178) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              WeatherVolumeTarget[0x30];                               // 0x1820(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UMaterialInstanceDynamic*                            WOV_Target_Brush_MID;                                    // 0x1850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           WOVTargetCornerPosition;                                 // 0x1858(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WeatherOverrideVolumeTargetLocation;                     // 0x1868(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WOVMaterialEffectTargetActive;                           // 0x1880(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShuttingDown;                                            // 0x1881(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WeatherOverrideVolumeContributingSnowCoverage;           // 0x1882(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KGNE[0x5];                                   // 0x1883(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              MaskBufferTarget;                                        // 0x1888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              UDSVersion;                                              // 0x1890(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UUDS_VersionInfo_C*                                  UDSVersionInfo;                                          // 0x18A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AntiAliasingMethod;                                      // 0x18A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SeasonDayOffset;                                         // 0x18AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		TArray<class AWeather_Mask_Projection_Box_C*>              AllWeatherMaskProjectionBoxes;                           // 0x18B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AWeather_Mask_Projection_Box_C*>              DLWERelevantProjectionBoxes;                             // 0x18C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AWeather_Override_Volume_C*>                  WOVReferencestoRemove;                                   // 0x18D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AWeather_Mask_Brush_C*>                       MaskBrushReferencestoRemove;                             // 0x18E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AWeather_Mask_Projection_Box_C*>              ProjectionBoxReferencestoRemove;                         // 0x18F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector                                             EditorWOVTargetRoot;                                     // 0x1900(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EditorMaskTargetRoot;                                    // 0x1918(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           WOVWindDirection;                                        // 0x1930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurrentLightningTargetOffset;                            // 0x1940(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CacheCurrentTimer;                                       // 0x1958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UpdateAllCachedProperties;                               // 0x1960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U8OH[0x7];                                   // 0x1961(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SplashMaterialDecal[0x30];                               // 0x1968(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SplashMaterialTranslucent[0x30];                         // 0x1998(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EUDS_Project_Mode                                          ProjectMode;                                             // 0x19C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UDSNeedsUpdating;                                        // 0x19C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NotLimitingConstruction;                                 // 0x19CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L6DZ[0x5];                                   // 0x19CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastConstructionScriptTime;                              // 0x19D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowTraceDebugs;                                         // 0x19D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q8WX[0x7];                                   // 0x19D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            RainbowMID;                                              // 0x19E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RainbowMaterial2D[0x30];                                 // 0x19E8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RainbowMaterialVolumetric[0x30];                         // 0x1A18(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		double                                                     WeatherParticleMotionStretch;                            // 0x1A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ParticleSpriteMotionBlurwithCameraMovement;              // 0x1A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PreviousTemperatureScale;                                // 0x1A58(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyChangesAboveVolumetricCloudLayer;                   // 0x1A59(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K3IC[0x6];                                   // 0x1A5A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RainMultiplierAboveClouds;                               // 0x1A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SnowMultiplierAboveClouds;                               // 0x1A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustMultiplierAboveClouds;                               // 0x1A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FogMultiplierAboveClouds;                                // 0x1A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightningMultiplierAboveClouds;                          // 0x1A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WindMultiplierAboveClouds;                               // 0x1A88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceIgnoreAtmoHeightWithVFXEmitters;                    // 0x1A90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9XBC[0x7];                                   // 0x1A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADayCycleManager*                                    DCM;                                                     // 0x1A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         TemperatureCurveFloat;                                   // 0x1AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FRandomWeatherVariation_TransitionSettings>  RandomWeatherTypeTransitionSettings;                     // 0x1AA8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bDebugWeatherState;                                      // 0x1AB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZDKK[0x7];                                   // 0x1AB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TransitionStartTime;                                     // 0x1AC0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             DefaultWeather;                                          // 0x1AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     OldLerpToNewSettings;                                    // 0x1AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GlobalRainInfluenceOnLocalClouds;                        // 0x1AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastGlobalRainInfluenceOnLocalClouds;                    // 0x1AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInititalizedWeatherState;                               // 0x1AE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_WeatherTypesASA                                       CurrWeatherType;                                         // 0x1AE9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_WeatherTypesASA                                       PrevWeatherType;                                         // 0x1AEA(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FIX8[0x5];                                   // 0x1AEB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EUDS_WeatherTypesASA, class UUDS_Weather_Settings_C*> WeatherSettings;                                         // 0x1AF0(0x0050) Edit, BlueprintVisible, ExposeOnSpawn
		double                                                     ColdTemperatureFactor;                                   // 0x1B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HotTemperatureFactor;                                    // 0x1B48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsOverridingSkylightTemperature(bool* Return);
		void GetSnowAmount(double* Snow);
		void GetRainAmount(double* Rain);
		void GetConditions(double* WindStrength, double* WindDirectionYaw, double* Temperature_C, double* Temperature_F, double* RelativeTemperature, bool* IsRaining, bool* IsSnowing, bool* IsHeatwave, bool* IsColdfront);
		void GetRainbowMID(bool* RainbowEnabled, class UMaterialInstanceDynamic** Mid);
		void GetIntendedWaterLevel(bool* UsingWaterLevel, double* WaterLevel);
		void GetWeatherParticleCollisionChannel(ECollisionChannel* Channel);
		void GetCloseThunderSoundOcclusion(double* Volume, double* LPF);
		void GetStateforSaving(struct FUDS_and_UDW_State* UDWState);
		void GetIntendedCloudDirection(double* IntendedCloudDirection);
		void GetIntendedCloudSpeed(double* IntendedCloudSpeed);
		void StartWeatherTransition();
		void WOV_State(bool* Enabled);
		void ApplyInteriorTemperaturewithOcclusion(double Temp, double Occlusion, double* Out);
		void ChecktoChangeTemperatureScale();
		void ConvertTemperatureScale(double Input, EUDS_TemperatureType InScale, EUDS_TemperatureType OutScale, bool RelativeDegrees, bool Snap, double* Output);
		void TraceBoundsforExposureValues(const struct FVector& BoundsOrigin, const struct FVector& BoundsExtent, TArray<class AActor*>* ActorstoIgnore, bool TestWeather, double* ExposureValue);
		void TestComponentforWindExposure(class UPrimitiveComponent* Component, double* WindExposure);
		void CurrentNormalizedWindDirection(struct FVector* WindVector);
		void ChecktoTurnonUDSRainbow();
		void CheckToLimitConstruction();
		double ScaleCachePeriod();
		void IncrementCacheTimer();
		void UpdateObscuredLightningGlow();
		void LerpYawAngles(double AngleA, double AngleB, double Alpha, double* Out);
		double CombinedWindDirection();
		void LightningBoltTargetOffset(struct FVector* Out);
		void RemoveOldDrawingActors();
		void ReportRemovalofDrawingActor(class AActor* Actor);
		void QueryProjectSettings();
		void CheckUDSVersion();
		void ApplyMaxtoMaterialEffects(class UUDS_Weather_Settings_C* Weather, double* SnowCoverage, double* Wetness, double* Dust);
		void ChecktoRecenterWeatherOverrideVolumeTarget();
		void UpdateWOVTargetCoordinates(bool UseEditorLocation);
		void InitializeWeatherOverrideVolumeTarget();
		void DrawWeatherOverrideVolumeTarget();
		void UpdateOutdoorSoundMix();
		void MakeOutdoorSoundMix();
		void UpdateDLWEComponentStates();
		struct FVector PPWFVelocity();
		void AddWeatherOverrideVolumetoArray(class AWeather_Override_Volume_C* WeatherOverrideVolume);
		void GetStartingWeatherOverrideVolumes();
		void CachedWindRotation(struct FRotator* Rot);
		void IsCachedPropertyChanging(EUDW_CachedProperties Property, bool* Yes);
		void UpdateCurrentGlobalandLocalWeatherState();
		void GlobalLightningTimer();
		void SizeCacheArrays();
		void SetCacheAlpha();
		void GetCachedVector(EUDW_CachedProperties Property, struct FVector* Value);
		void CacheVector(EUDW_CachedProperties Property, const struct FVector& SetValue);
		void CacheFloat(EUDW_CachedProperties Property, double SetValue);
		void GetCachedFloat(EUDW_CachedProperties Property, double* Value);
		void CacheProperties();
		void CurrentPPWFIntensity(double* Out);
		void LightningFlashLocation(struct FVector* Loc);
		void LightningWorldHeight(double* Height);
		void InvalidateVHFMLevel(double Threshold, double Distance, struct FVector* Buffer, const struct FVector& Current, bool* Continue);
		void InvalidateVHFMWithMaterialStates();
		void UpdateRainbowIntensity();
		void SetUpRainbow();
		void InitializeOcclusion();
		void SampleCurrentSoundOcclusionValues(double* NonDirectionalOcclusion, double* XOcclusion, double* YOcclusion, double* XOcclusion2, double* YOcclusion2);
		void GetDisplayNameforCurrentWeather(class FString* AsString, EUDS_Weather_Display_Names* AsEnumerator);
		void LoadRequiredAssets();
		void MakeManualState();
		void LightRainSoundIntensity(double* Int);
		void UpdateSeason();
		void UpdateFogParticleParameters(class UFXSystemComponent* Target, double MaxParticlePercentage, double WeatherIntensity, double ParticleIntensity);
		void UpdateActiveDustParameters();
		void UpdateActiveWindDebrisParameters();
		void UpdateActiveSnowParameters();
		void UpdateActiveRainParameters();
		void UpdateOldStateWithReplicatedVariables();
		void SetReplicatedOldWeatherState();
		void CompareWeatherStates(class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double* Difference);
		void CopyWeatherState(class UUDS_Weather_Settings_C* Source, class UUDS_Weather_Settings_C* Target, bool SetMaterialEffects);
		void CreateWeatherStateObjects();
		void LerpBetweenWeatherStates(class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double Alpha, class UUDS_Weather_Settings_C* TargetState, bool SetMaterialEffects, bool UseBiasforMaterialEffects);
		void CurrentlyDusty(bool* Yes);
		void SortBrushesbyHeight(TArray<class AWeather_Mask_Brush_C*>* Brushes, TArray<class AWeather_Mask_Brush_C*>* SortedBrushes);
		void CloseThunderSoundDelay(double* Delay);
		void ApproximateWeatherMaskBrushEffect(class AWeather_Mask_Brush_C* Brush, const struct FVector2D& Location, double Height, double* Out, bool* Cancel);
		void ChecktoRedrawWeatherMaskTarget();
		void InitializeWeatherMaskTarget();
		void DrawWeatherMaskBrushTarget(bool UseEditorLocation);
		void DeltaTimewithTickSet(double* Delta);
		void CurrentlyCloudy(bool* Yes);
		void CurrentlySnowing(bool* Yes);
		void CurrentlyRaining(bool* Yes);
		void WindRotation(struct FRotator* Rot);
		void IsPointinDLWESpace(const struct FVector& Point, bool* Yes);
		void DoesDLWENeedRecentering(bool* NeedsXAxisRecenter, bool* NeedsYAxisRecenter);
		void DLWERenderTargetArea(double* Area);
		void DLWECompressionBrush(const struct FVector& Location, double Size, int32_t Resolution, double Spread, struct FVector2D* CornerPosition, struct FVector2D* BrushSize);
		void DLWE_RenderTargetMapping(struct FLinearColor* Mapping);
		void DistantThunderSoundIntensity(double* Int);
		void WindWhistlingSoundIntensity(double* Int);
		void WindSoundIntensity(double* Int);
		void RainSoundIntensity(double* Int);
		void LightningDistanceRange(double* Range);
		void CurrentRainSnowSpawnRate(double Intensity, double SpawnRate, double WindBonus, double* Rate);
		void CurrentDustVelocity(struct FVector* Velocity);
		void CurrentWindDebrisVelocity(struct FVector* Velocity);
		void CurrentSnowVelocity(struct FVector* Velocity);
		void CurrentRainVelocity(struct FVector* Velocity);
		void SetSharedWeatherParticleParameters(class UNiagaraComponent* System);
		void SortWeatherOverrideVolumes();
		void UpdateScreenDroplets();
		void StartScreenDroplets();
		void CheckforEventstoDispatch();
		void TestActorforWeatherExposure(class AActor* Actor, bool TestCollidingComponentsOnly, class UUDS_Weather_Settings_C* CustomWeatherStateObject, double* RainExposure, double* SnowExposure, double* WindExposure, double* DustExposure);
		void UpdateAudioComponentActivity(class UAudioComponent* TestedComponent, TArray<class UAudioComponent*>* AffectedComponents, double CurrentSoundIntensity, double StartRandomization, bool EnableBool);
		void UpdateEnabledSoundComponents();
		void UpdatePostProcessWindFog();
		void SetupPostProcessWindFog();
		void CurrentLightningPeriodandStatus(double Lightning, double* Period, bool* Enabled);
		void UpdateMaterialEffectParameters();
		void GetUpdatedControlPointLocation();
		void LocalWeather(class UUDS_Weather_Settings_C* TargetStateObject, const struct FVector& TestLocation);
		void CheckPointforPuddlesSnowOrDust(const struct FVector& Location, const struct FVector& GroundNormal, class UPhysicalMaterial* PhysicalMaterial, double* PuddleDepth, double* SnowDepth, double* DustDepth);
		void CreateCloudReferenceArray();
		void RecycleRenderTargets();
		void UpdateDLWEPuddleRipples();
		void RippleDLWEPuddle(const struct FVector& Location, double Size, double Strength);
		void ChecktochangeDLWEMode();
		void RecenterDLWERenderTarget(class UTextureRenderTarget2D* RenderTarget, ETextureRenderTargetFormat Format, const struct FLinearColor& ClearColor, class UMaterialInterface* EdgeFadeMaterial, int32_t Resolution, bool DrawEdgeFade);
		void FadeDLWETargetOverTime();
		void UpdateDLWESnowCompressions();
		void CompressDLWESnow(const struct FVector& Location, double Size);
		void CheckforDLWERecenter();
		void UpdateDLWEParameters();
		void UpdateDLWETargets(bool FirstRun);
		void GetCurrentTemperature(bool ApplyInteriorTemperature, class UUDS_Weather_Settings_C* CustomWeatherStateObject, double* Celsius, double* Fahrenheit, double* RelativeTemperature);
		void FilterProbabilityMap(TMap<class UUDS_Weather_Settings_C*, double> ProbabilityMap, class UUDS_Weather_Settings_C* CurrentRandomType, TMap<class UUDS_Weather_Settings_C*, double>* FilteredProbabilityMap);
		void ConstructionScript_Function(bool RunByCounterpart);
		void AudioUpdate();
		void UpdateCurrentMaterialEffects();
		void PrintCurrentStatustoScreen();
		void UpdateStaticVariables();
		void UpdateActiveVariables();
		void UserConstructionScript();
		void EndLightningFlash();
		void TickLightningFlash();
		void LocalLightningInternal(class AWeather_Override_Volume_C* Volume, double Angle);
		void FlashLightning(double Angle, bool UseCustomLightningLocation, const struct FVector& CustomLightningLocation, const struct FVector& CustomTargetLocation);
		void GlobalLightningInternal(double Angle);
		void SetUpRainbowMID();
		void UpdateRainbow();
		void DestroyCloseThunderComponent(class USceneComponent* Component);
		void ReceiveTick(float DeltaSeconds);
		void SetProjectMode(EUDS_Project_Mode Mode);
		void ForceTick();
		void ChangeWeather(class UUDS_Weather_Settings_C* NewWeatherType, double TimetoTransitiontoNewWeatherSeconds, bool ResetParticleEmitters);
		void HardRefreshCachedProperties();
		void ClientsTransitionStart();
		void ResetAllEmitters();
		void ChangetoRandomWeather(double TimetoTransitiontoRandomWeatherSeconds, bool ResetParticleEmitters);
		void InitializeWeather();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ForceAllClientsCache();
		void TimedOverridewithNewChanges();
		void UpdateMaterialEffects();
		void RestartRandomWeather();
		void ApplyState(const struct FUDS_and_UDW_State& State);
		void UpdateWeatherSettingsfromUDS(double CloudCoverage, double Fog, double Dust);
		void SetSeason();
		void MC_ChangeWeather(EUDS_WeatherTypesASA NewWeatherType, double TransitionLength, bool ResetParticleEmitters);
		void ROS_ChangeWeather(EUDS_WeatherTypesASA NewWeatherType, double TransitionLength, bool ResetParticleEmitters);
		void ExecuteUbergraph_Ultra_Dynamic_Weather(int32_t EntryPoint);
		void UpdateDLWEState__DelegateSignature(EUDS_DLWE_Mode CurrentMode, const struct FVector& RenderTargetCenter, const struct FVector& MappingSpace);
		void WeatherDisplayNameChanged__DelegateSignature(EUDS_Weather_Display_Names WeatherName);
		void SandClearing__DelegateSignature();
		void SandForming__DelegateSignature();
		void CloudsClearing__DelegateSignature();
		void GettingCloudy__DelegateSignature();
		void FinishedSnowing__DelegateSignature();
		void FinishedRaining__DelegateSignature();
		void StartedSnowing__DelegateSignature();
		void StartedRaining__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
