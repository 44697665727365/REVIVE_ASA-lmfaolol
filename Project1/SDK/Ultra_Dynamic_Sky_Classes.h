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
	 * BlueprintGeneratedClass Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C
	 * Size -> 0x1C50 (FullSize[0x2108] - InheritedSize[0x04B8])
	 */
	class AUltra_Dynamic_Sky_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   VolumetricCloud_LightRays;                               // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Rainbow;                                                 // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                compass;                                                 // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUDS_PlayerOcclusion_C*                              PlayerOcclusion;                                         // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     MoonIconArrow;                                           // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     SunIconArrow;                                            // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 SunIcon;                                                 // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 MoonIcon;                                                // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Overcast_Turbulence;                                     // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkyLightComponent*                                  CapturedSceneSkyLight;                                   // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Inside_Cloud_Fog;                                        // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVolumetricCloudComponent*                           VolumetricAurora;                                        // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticCloudsSphere;                                      // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Root;                                                    // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVolumetricCloudComponent*                           VolumetricCloud;                                         // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UExponentialHeightFogComponent*                      HeightFog;                                               // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          Moon;                                                    // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          Sun;                                                     // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkyAtmosphereComponent*                             SkyAtmosphere;                                           // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Moon_Root;                                               // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Sun_Root;                                                // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Ultra_Dynamic_Sky_Sphere;                                // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		EUDS_FeatureToggle                                         SunLight;                                                // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4A55[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADirectionalLight*                                   CustomSunLightActor;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Sky_MID;                                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     CloudSpeed;                                              // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudWispsOpacityClear;                                  // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       RefreshSettings;                                         // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PreviewCave;                                             // 0x0599(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PreviewInterior;                                         // 0x059A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FSY8[0x5];                                   // 0x059B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeOfDay;                                               // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EUDS_SkyMode                                               SkyMode;                                                 // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_ColorMode                                             ColorMode;                                               // 0x05A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_Project_Mode                                          ProjectMode;                                             // 0x05AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QNU7[0x5];                                   // 0x05AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CloudCoverage;                                           // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Fog;                                                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     OverallIntensity;                                        // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudDirection;                                          // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudPhase;                                              // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       ManuallyPositionMoonTarget;                              // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       RenderMoon;                                              // 0x05D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6D4N[0x6];                                   // 0x05DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MoonLightIntensity;                                      // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EComponentMobility                                         MoonMobility;                                            // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7F03[0x7];                                   // 0x05E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MoonAngle;                                               // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonInclination;                                         // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonVerticalOffset;                                      // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonOrbitOffset;                                         // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       MoonCastsShadows;                                        // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NY6D[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MoonScale;                                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonPhase;                                               // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       MoonPhaseChangesOverTime;                                // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V7T4[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DarkSideBrightness;                                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MoonTextureIntensityNight;                               // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       ManuallyPositionSunTarget;                               // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O7I0[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SunLightIntensity;                                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SunIndirectIntensity;                                    // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EComponentMobility                                         SunMobility;                                             // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MMQS[0x7];                                   // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SunAngle;                                                // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       AnimateTimeofDay;                                        // 0x0668(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P03N[0x7];                                   // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Contrast;                                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunInclination;                                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SunVerticalOffset;                                       // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       SunCastsShadows;                                         // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_51IW[0x3];                                   // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SunLightColor;                                           // 0x068C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YVG7[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MoonTextureIntensityDay;                                 // 0x06A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonLightColor;                                          // 0x06A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SoftenCloudLayer1;                                       // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SoftenCloudLayer2;                                       // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SharpenOuterEdge;                                        // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StarsIntensity;                                          // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        StarsColor;                                              // 0x06D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonMaterialColor;                                       // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SunTarget;                                               // 0x06F8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SunRadius;                                               // 0x0710(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            SunCloudShadowsMID;                                      // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCloudShadows;                                         // 0x0720(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C446[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CloudShadowsIntensityWhenSunny;                          // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EUDS_FeatureToggle                                         MoonLight;                                               // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L20A[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADirectionalLight*                                   CustomMoonLightActor;                                    // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     StarsSpeed;                                              // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MoonCloudShadowsMID;                                     // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     NewMoonLightBrightness;                                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonTextureRotation;                                     // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          CustomMoonTexture;                                       // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		EUDS_FeatureToggle                                         SkyLight;                                                // 0x0768(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GFLR[0x7];                                   // 0x0769(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASkyLight*                                           CustomSkyLightActor;                                     // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		EUDS_FeatureToggle                                         HeightFog2;                                              // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8WPE[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AExponentialHeightFog*                               CustomHeightFogActor;                                    // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		EUDS_SkyLightMode                                          SkyLightMode;                                            // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S3VT[0x7];                                   // 0x0789(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         NightFilterCurve;                                        // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MoonGlowIntensity;                                       // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseAuroras;                                              // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SAM4[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AuroraIntensity;                                         // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     AuroraSpeed;                                             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudShadowsIntensityWhenOvercast;                       // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudShadowsSoftnessWhenSunny;                           // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudShadowsSoftnessWhenOvercast;                        // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudTilingLayer1;                                       // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudTilingLayer2;                                       // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SoftenHorizon;                                           // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OneCloudLayer;                                           // 0x07E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X51F[0x7];                                   // 0x07E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CloudHeightLayer1;                                       // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudHeightLayer2;                                       // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OvercastSwirlingTexture;                                 // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Saturation;                                              // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DirectionalBalance;                                      // 0x0810(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DawnTime;                                                // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DuskTime;                                                // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NightBrightness;                                         // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SunSoftness;                                             // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunVolumetricScatteringIntensity;                        // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonVolumetricScatteringIntensity;                       // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     AuroraPhase;                                             // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UDirectionalLightComponent*                          Sun_LightComponent;                                      // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          Moon_LightComponent;                                     // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class USkyLightComponent*                                  SkyLightComponent;                                       // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UExponentialHeightFogComponent*                      HeightFogComponent;                                      // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyExposureSettings;                                   // 0x0870(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_947S[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ExposureCompensationCurve;                               // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		double                                                     DayLength;                                               // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     NightLength;                                             // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ExtendDawnandDusk;                                       // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       Stationary_Lights;                                       // 0x0898(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WWF0[0x7];                                   // 0x0899(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BaseFogDensity;                                          // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FoggyDensityContribution;                                // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudyDensityContribution;                               // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustDensityContribution;                                 // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ScaleTotalFogDensity;                                    // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FogExtinctionScale;                                      // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5NZH[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StarsTiling;                                             // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StarsDaytimeIntensity;                                   // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TwinkleAmount;                                           // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TwinkleSpeed;                                            // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TilingStarsTexture[0x30];                                // 0x08F0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RealStarsTexture[0x30];                                  // 0x0920(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		double                                                     StarsPhase;                                              // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCurveFloat*                                         StarsIntensityCurve;                                     // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     SkyLightIntensity;                                       // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EComponentMobility                                         SkyLight_Mobility;                                       // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9YBX[0x7];                                   // 0x0969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SkyLightTemperature;                                     // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SkyLightColorMultiplierDay;                              // 0x0978(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk;                                                    // 0x0988(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SkyLightColorMultiplierNight;                            // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       SkyLightCastsShadows;                                    // 0x09A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X0SO[0x7];                                   // 0x09A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DFAOMinOcclusion;                                        // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DFAOExponent;                                            // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              FlatCubemap[0x30];                                       // 0x09C0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CustomCubemap[0x30];                                     // 0x09F0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        TintedSkyLightLowerHemisphereColor;                      // 0x0A20(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       RealTimeCapture;                                         // 0x0A30(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_526H[0x3];                                   // 0x0A31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CapturedSkyLightLowerHemisphereTint;                     // 0x0A34(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       RecaptureSkylightPeriodically;                           // 0x0A44(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BT2R[0x3];                                   // 0x0A45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SkyLightRecapturePeriodSeconds;                          // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightsUpdatePeriod;                                      // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightsUpdateDegreeThreshold;                             // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunriseEventOffset;                                      // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunsetEventOffset;                                       // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Sunset;                                                  // 0x0A70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Sunrise;                                                 // 0x0A80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     CloudWispsOpacityCloudy;                                 // 0x0A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          CloudWispsTexture;                                       // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		EUDS_NoiseType                                             CloudNoiseType;                                          // 0x0AA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A559[0x7];                                   // 0x0AA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          CustomNoiseTexture;                                      // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     SunShaderIntensity;                                      // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DirectionalLightingIntensity;                            // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     SunHighlightRadius;                                      // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     CloudOpacity;                                            // 0x0AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     HorizonDensityMultiplier;                                // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ZenithDensityMultiplier;                                 // 0x0AD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     LatitudeGradientPosition;                                // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     LatitudeGradientWidth;                                   // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     AroundSunDensityMultiplier;                              // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     AroundSunDensityExponent;                                // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     AroundMoonDensityMultiplier;                             // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     AroundMoonDensityExponent;                               // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCurveFloat*                                         ShineIntensityCurve;                                     // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCurveFloat*                                         SunHighlightIntensityCurve;                              // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCurveFloat*                                         SunHighlightRadiusCurve;                                 // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       AdjustforPathTracer;                                     // 0x0B28(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       DimDirectionalLightswithCloudCoverage;                   // 0x0B29(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       SpreadOutTickBehaviorsOver3Frames;                       // 0x0B2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       OnlyFullyUpdateActiveParametersWhenCloudCoverageChanges; // 0x0B2B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_IOED[0x4];                                   // 0x0B2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ExtraNightBrightnesswhenCloudy;                          // 0x0B30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DirectionalLightsAbsentBrightness;                       // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Volumetric_Clouds_MID_Complex;                           // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		EUDS_VolRT_Mode                                            VolumetricCloudRenderingMode;                            // 0x0B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JBS2[0x7];                                   // 0x0B49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BottomAltitude;                                          // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LayerHeightScale;                                        // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BaseCloudsScale;                                         // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     _3DNoiseScale;                                           // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     _3DErosionIntensity;                                     // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     HighFrequencyNoiseAmount;                                // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HighFrequencyLevels;                                     // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BSVG[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DistortHighFrequencyNoise;                               // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ExtinctionScale;                                         // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VolumetricCloudsScale;                                   // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BaseFloorVariation;                                      // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     OvercastFloorVariation;                                  // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FloorLuminanceScale;                                     // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ViewSampleScaleDay;                                      // 0x0BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ViewSampleScaleNight;                                    // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ShadowSampleScale;                                       // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ShadowTracingDistance;                                   // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        VolumetricCloudColor;                                    // 0x0BD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CloudProfileLUT[0x30];                                   // 0x0BE8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EUDS_NoiseType                                             VolumetricCloudNoiseType;                                // 0x0C18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_1JDF[0x7];                                   // 0x0C19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          VolumetricCustomNoiseTexture;                            // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MinimumErosion;                                          // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DistancetoSampleMaxCount;                                // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     BaseCloudsMipLevel;                                      // 0x0C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ReflectionSampleCountScale;                              // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ReflectionShadowSampleCountScale;                        // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VolumetricCloudAmbientLightIntensity;                    // 0x0C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        VolumetricCloudAmbientLightDay;                          // 0x0C58(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk2;                                                   // 0x0C68(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        VolumetricCloudAmbientLightNight;                        // 0x0C78(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VolumetricCloudAmbientLightSaturation;                   // 0x0C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MultiscatteringLightIntensity;                           // 0x0C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MultiscatteringLightOcclusion;                           // 0x0C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Volumetric_Clouds_MID_Simplified;                        // 0x0CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     FogStartDistancewhenClear;                               // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogDensitywhereStartDistanceReachesZero;                 // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomizeCloudFormationonRun;                            // 0x0CB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_80JF[0x7];                                   // 0x0CB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     _3DNoiseVerticalMovement;                                // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      FormationChangeSpeed;                                    // 0x0CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4XJM[0x4];                                   // 0x0CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MacroVariation;                                          // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MacroScale;                                              // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MultiscatteringPhase1;                                   // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MultiscatteringPhase2;                                   // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MultiscatteringEccentricity;                             // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     TimeSpeed;                                               // 0x0CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     InternalTimeofDay;                                       // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Weather_BP;                                              // 0x0D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     TracingMaxStartDistance;                                 // 0x0D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            StaticCloudsMID;                                         // 0x0D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AuroraColor1;                                            // 0x0D20(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AuroraColor2;                                            // 0x0D30(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AuroraColor3;                                            // 0x0D40(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Volumetric_Aurora_MID;                                   // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSkyModeScalabilityMap;                                // 0x0D58(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_GG2N[0x7];                                   // 0x0D59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, EUDS_SkyMode>                                SkyModeScalabilityMap;                                   // 0x0D60(0x0050) Edit, BlueprintVisible, AdvancedDisplay
		double                                                     SunDiskIntensity;                                        // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   SunDiskColorCurve;                                       // 0x0DB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UCurveFloat*                                         AuroraIntensityCurve;                                    // 0x0DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Inside_Clouds_Fog_MID;                                   // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     TracingMaxDistanceInsideCloudLayer;                      // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     TracingMaxDistanceOutsideCloudLayer;                     // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       EnableFogInsideClouds;                                   // 0x0DE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4QSG[0x7];                                   // 0x0DE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AuroraTexture[0x30];                                     // 0x0DE8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		double                                                     _2DAuroraMaxSamples;                                     // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     _2DAuroraSampleStepSize;                                 // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     _2DAuroraLineExponent;                                   // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     _2DAuroraMaskExponent;                                   // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VolumetricAuroraSampleCountScale;                        // 0x0E38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     VolumetricAuroraLayerHeight;                             // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VolumetricAuroraBottomAltitude;                          // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FogDensityDaytimeMutliplier;                             // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogDensityNighttimeMultiplier;                           // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BaseHeightFogFalloff;                                    // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CloudyHeightFogFalloff;                                  // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FoggyHeightFogFalloff;                                   // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     InsideCloudFogStrength;                                  // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        InsideCloudFogColor;                                     // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     _2DOvercastTurbulence;                                   // 0x0E90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloseFadeDistance;                                       // 0x0E98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     CloseFadeOffset;                                         // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       TwoLayers;                                               // 0x0EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NTZH[0x7];                                   // 0x0EA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Layer2CoverageScale;                                     // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Layer2ExtinctionScale;                                   // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Layer2CloudScale;                                        // 0x0EC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Layer2MipOffset;                                         // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DistanceBetweenLayers;                                   // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableSunLightShaftBloom;                                // 0x0EE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FGIY[0x7];                                   // 0x0EE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SunLightShaftBloomScale;                                 // 0x0EE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           SunLightShaftMaxBrightness;                              // 0x0EF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           SunLightShaftBloomThreshold;                             // 0x0F08(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SunLightShaftTintColor;                                  // 0x0F18(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableMoonLightShaftBloom;                               // 0x0F28(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FWYO[0x7];                                   // 0x0F29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MoonLightShaftBloomScale;                                // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MoonLightShaftMaxBrightness;                             // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MoonLightShaftBloomThreshold;                            // 0x0F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonLightShaftTintColor;                                 // 0x0F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FactorAbsentDirectionalLightsBrightness;                 // 0x0F70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       RealTimeCaptureUsesTimeSlicing;                          // 0x0F71(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       UseMobileOverrides;                                      // 0x0F72(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_SkyMode                                               VolumetricCloudsReplacement;                             // 0x0F73(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_SkyLightMode                                          RealTimeCaptureSkyLightReplacement;                      // 0x0F74(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AdjustForMobileRenderer;                                 // 0x0F75(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y569[0x2];                                   // 0x0F76(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MobilePlatforms;                                         // 0x0F78(0x0010) Edit, BlueprintVisible, AdvancedDisplay
		struct FVector                                             MoonTarget;                                              // 0x0F88(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       Mobile;                                                  // 0x0FA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimulateRealSun;                                         // 0x0FA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimulateRealMoon;                                        // 0x0FA2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimulateRealStars;                                       // 0x0FA3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_CityPresets                                           LocationPreset;                                          // 0x0FA4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q071[0x3];                                   // 0x0FA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Latitude;                                                // 0x0FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Longitude;                                               // 0x0FB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     TimeZone;                                                // 0x0FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Year;                                                    // 0x0FC0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Month;                                                   // 0x0FC4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Day;                                                     // 0x0FC8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XC5I[0x4];                                   // 0x0FCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NorthYaw;                                                // 0x0FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SimulationSpeed;                                         // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       TrueRealWorldTime;                                       // 0x0FE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyDaylightSavingsTime;                                // 0x0FE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_87VA[0x2];                                   // 0x0FE2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DSTStartMonth;                                           // 0x0FE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    DSTStartDay;                                             // 0x0FE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    DSTEndMonth;                                             // 0x0FEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    DSTEndDay;                                               // 0x0FF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    DSTChangeHour;                                           // 0x0FF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		TArray<int32_t>                                            Months;                                                  // 0x0FF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            MonthsLeapYear;                                          // 0x1008(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     StellarCalibration;                                      // 0x1018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     LunarOrbitCalibration;                                   // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LunarInclinationCalibration;                             // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Runtime;                                                 // 0x1030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DaylightSavingsTime;                                     // 0x1031(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MZPI[0x2];                                   // 0x1032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalDaysElapsed;                                        // 0x1034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CloudsMovewithTimeofDay;                                 // 0x1038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O0SB[0x7];                                   // 0x1039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeofDayMovementMultiplier;                             // 0x1040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SkyMIDParentInstances[0x50];                             // 0x1048(0x0050) UNKNOWN PROPERTY: MapProperty
		double                                                     FogShadows;                                              // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     DustShadows;                                             // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     _2DCloudShadowsSpeed;                                    // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     _2DCloudShadowsScale;                                    // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableDirectionalLightShadowswhenFullyShadowedbyClouds; // 0x10B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_EG73[0x7];                                   // 0x10B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  CustomLightFunctionMaterial;                             // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       ForceLightFunctionsOn;                                   // 0x10C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_3GCC[0x7];                                   // 0x10C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeofDayReplicationPeriod;                              // 0x10D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedTimeofDay;                                     // 0x10D8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedMoonPhase;                                     // 0x10E0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ScaleSunRadiusasitNearsHorizon;                          // 0x10E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     SunSpecularScale;                                        // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ScaleMoonRadiusasitNearsHorizon;                         // 0x10F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       FogColorsfromSkyAtmosphere;                              // 0x1100(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YWMU[0x7];                                   // 0x1101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DustyHeightFogFalloff;                                   // 0x1108(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonSpecularScale;                                       // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ReplicatedDayLength;                                     // 0x1118(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedNightLength;                                   // 0x1120(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedTimeSpeed;                                     // 0x1128(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ReplicatedSimulationSpeed;                               // 0x1130(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     AmbientLightfromSkyAtmosphere;                           // 0x1138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     HighFrequencyDisableDistance;                            // 0x1140(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       ChangetoSimplifiedMaterialwhenOvercast;                  // 0x1148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_P460[0x7];                                   // 0x1149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SimplifiedMaterialCloudCoverageThreshold;                // 0x1150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     SimplifiedMaterialFadeLength;                            // 0x1158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ScaleViewSampleswhenOvercast;                            // 0x1160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    CurrentVolumetricCloudsMID;                              // 0x1168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAJD[0x4];                                   // 0x116C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CloudsPosition;                                          // 0x1170(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastCloudsTimeofDayFactor;                               // 0x1188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartingCloudTextureVelocity;                            // 0x1190(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ControlSkyAtmosphereSettings;                            // 0x11A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G76W[0x3];                                   // 0x11A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        RayleighScatteringColorDay;                              // 0x11AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk3;                                                   // 0x11BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        RayleighScatteringColorNight;                            // 0x11CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P2W8[0x4];                                   // 0x11DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DesaturateRayleighScatteringwhenCloudy;                  // 0x11E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BrightenRayleighScatteringWhenCloudy;                    // 0x11E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTickSet;                                          // 0x11F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRSC[0x4];                                   // 0x11F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CloudCoverageChangeSpeed;                                // 0x11F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeofDayChangeSpeed;                                    // 0x1200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FogChangeSpeed;                                          // 0x1208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustChangeSpeed;                                         // 0x1210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentTimeofDayOffset;                                  // 0x1218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastFrameCloudCoverage;                                  // 0x1220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudCoverageChangeThisFrame;                            // 0x1228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, EUDS_PropertyType>                       Properties;                                              // 0x1230(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     LastFrameTimeofDay;                                      // 0x1280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NightSkyGlow;                                            // 0x1288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NightSkyGlowColor;                                       // 0x1290(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightPollutionIntensity;                                 // 0x12A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightPollutionColor;                                     // 0x12A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CloudFogPostProcessMID;                                  // 0x12B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     DimmingRangeLowerBound;                                  // 0x12C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DimmingRangeUpperBound;                                  // 0x12C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DimmingRangeExponent;                                    // 0x12D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInterface*                                  CustomSkySphereMaterial;                                 // 0x12D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     FogSnowContribution;                                     // 0x12E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Midnight;                                                // 0x12E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     SunriseColorIntensityAbsorptionScale;                    // 0x12F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SunriseColorAbsorption;                                  // 0x1300(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimulatedSunriseTime;                                    // 0x1310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimulatedSunsetTime;                                     // 0x1318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisallowTickSkip;                                        // 0x1320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_93GT[0x7];                                   // 0x1321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BaseCloudHeight;                                         // 0x1328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableSunLensFlare;                                      // 0x1330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_LensFlareType                                         LensFlareType;                                           // 0x1331(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_33RG[0x6];                                   // 0x1332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LensFlareStrength;                                       // 0x1338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LensFlareTint;                                           // 0x1340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            LensFlareMID;                                            // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  CustomLensFlareParentInstance;                           // 0x1358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     ScaleFlareElements;                                      // 0x1360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DynamicSkyLightTransitionTime;                           // 0x1368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetSkyLightMultiplier;                                // 0x1370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DynamicSkyLightMultiplier;                               // 0x1378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverridewithNewChanges;                                  // 0x1380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_78EM[0x7];                                   // 0x1381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            OvercastTurbulenceMID;                                   // 0x1388(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     ScaleViewSampleswhenCameraisInCloudLayer;                // 0x1390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     LowMaterialQualitySampleCountScale;                      // 0x1398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MediumMaterialQualitySampleCountScale;                   // 0x13A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     EpicMaterialQualitySampleCountScale;                     // 0x13A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              EpicQualityVolumeTexture[0x30];                          // 0x13B0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HighQualityVolumeTexture[0x30];                          // 0x13E0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LowQualityVolumeTexture[0x30];                           // 0x1410(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InsideCloudFogParentMaterial[0x30];                      // 0x1440(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InsideCloudFogSystem[0x30];                              // 0x1470(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PostProcessCloudFogParentMaterial[0x30];                 // 0x14A0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UMaterialInstanceDynamic*>                    VolumetricCloudandShadowMIDs;                            // 0x14D0(0x0010) Edit, BlueprintVisible
		TArray<class UMaterialInstanceDynamic*>                    VolumetricCloudMIDs;                                     // 0x14E0(0x0010) Edit, BlueprintVisible
		double                                                     MoonLightCurrentIntensityValue;                          // 0x14F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TwilightColorIntensityAbsorptionScale;                   // 0x14F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TwilightColorAbsorption;                                 // 0x1500(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KeepPlanetTopatCameraXYLocation;                         // 0x1510(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RZJ1[0x3];                                   // 0x1511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BaseSkyColorDay;                                         // 0x1514(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk4;                                                   // 0x1524(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BaseSkyColorNight;                                       // 0x1534(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CloudLightColorDay;                                      // 0x1544(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk5;                                                   // 0x1554(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CloudLightColorNight;                                    // 0x1564(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CloudDarkColorDay;                                       // 0x1574(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk6;                                                   // 0x1584(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CloudDarkColorNight;                                     // 0x1594(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SunGlowColor;                                            // 0x15A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonGlowTint;                                            // 0x15B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IL31[0x4];                                   // 0x15C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DirectionalIntensityCurve;                               // 0x15C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   DirectionalLightScatteringCurve;                         // 0x15D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          AtmosphericScatteringLUTTexture;                         // 0x15D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		EUDS_FogColorMode                                          FogColorMode;                                            // 0x15E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BNQ[0x7];                                   // 0x15E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FogColorIntensityScale;                                  // 0x15E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   FogScatteringColorCurve;                                 // 0x15F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        FogInscatteringSun;                                      // 0x15F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FogInscatteringMoon;                                     // 0x1608(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   FogDirectionalScatteringColorCurve;                      // 0x1618(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        FogDirectionalInscattering;                              // 0x1620(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FoggyDesaturation;                                       // 0x1630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     OvercastDesaturation;                                    // 0x1638(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     OvercastBrightnessDay;                                   // 0x1640(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     OvercastBrightnessNight;                                 // 0x1648(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AllFogColorsMultiplier;                                  // 0x1650(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SkyAtmosphereFogInfluenceCurve;                          // 0x1660(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     DustAmount;                                              // 0x1668(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DustColor;                                               // 0x1670(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       UseVolumetricFog;                                        // 0x1680(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableHeightFogAboveVolumetricCloudLayer;               // 0x1681(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MW9O[0x2];                                   // 0x1682(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightFogDensity;                                        // 0x1684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingCloudFogPostProcess;                                // 0x1688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G5BN[0x7];                                   // 0x1689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurrentCameraLocation;                                   // 0x1690(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AmbientFogColor;                                         // 0x16A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DirectionalBaseFogColor;                                 // 0x16B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ScaledDirectionalBaseFogColor;                           // 0x16C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VolumetricAuroraParentMaterial[0x30];                    // 0x16D8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MoonMasksTexture[0x30];                                  // 0x1708(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UMaterialInstanceDynamic*>                    SkyandStaticCloudsMID;                                   // 0x1738(0x0010) Edit, BlueprintVisible
		TArray<class UMaterialInstanceDynamic*>                    SkyandShadowsMIDs;                                       // 0x1748(0x0010) Edit, BlueprintVisible
		unsigned char                                              OvercastTurbulenceParentMaterial[0x30];                  // 0x1758(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       ForwardShading;                                          // 0x1788(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LBIE[0x7];                                   // 0x1789(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Hourly;                                                  // 0x1790(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    EventHour;                                               // 0x17A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudWispsColorIntensity;                                // 0x17A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MaxSunSourceAngleScale;                                  // 0x17A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     SunSourceAngleSoftness;                                  // 0x17B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     MaxMoonSourceAngleScale;                                 // 0x17B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     TransitionTimeA;                                         // 0x17C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TransitionTimeB;                                         // 0x17C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TransitioningTime;                                       // 0x17D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEasingFunc                                                TransitionEasingFunction;                                // 0x17D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XP8P[0x6];                                   // 0x17D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TransitionEasingExponent;                                // 0x17D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TransitionTimer;                                         // 0x17E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     TransitionDuration;                                      // 0x17E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TransitionDaysCounted;                                   // 0x17F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TransitionCanGoBackwards;                                // 0x17F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_85QC[0x3];                                   // 0x17F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MoonSourceAngleSoftness;                                 // 0x17F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		float                                                      ExposureBiasDay;                                         // 0x1800(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ExposureBiasNight;                                       // 0x1804(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ExposureBiasCloudy;                                      // 0x1808(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ExposureBiasFoggy;                                       // 0x180C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ExposureBiasDusty;                                       // 0x1810(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		float                                                      ExposureMinBrightness;                                   // 0x1814(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExposureMaxBrightness;                                   // 0x1818(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ApplyInteriorAdjustments;                                // 0x181C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MZVS[0x3];                                   // 0x181D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ExtraFogStartDistanceinInterior;                         // 0x1820(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     FogDensityMultiplierinInterior;                          // 0x1828(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ExposureBiasinInterior;                                  // 0x1830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SkyLightIntensityMultiplierinInteriors;                  // 0x1838(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SunLightIntensityMultiplierinInteriors;                  // 0x1840(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonLightIntensityMultiplierinInteriors;                 // 0x1848(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ExtraSunVolumetricScatteringinInteriors;                 // 0x1850(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     ExtraMoonVolumetricScatteringinInteriors;                // 0x1858(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		EUDS_Occlusion_Mode                                        OcclusionSamplingMode;                                   // 0x1860(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_QK5L[0x7];                                   // 0x1861(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxInteriorTraceDistance;                                // 0x1868(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		ETraceTypeQuery                                            InteriorOcclusionTraceChannel;                           // 0x1870(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_MI8H[0x7];                                   // 0x1871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     InteriorOcclusionUpdatePeriod;                           // 0x1878(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            RainbowMID;                                              // 0x1880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     CloudShadowDisableThreshold;                             // 0x1888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FractionofTraceHitsforNoOcclusion;                       // 0x1890(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     FractionofTraceHitsforFullOcclusion;                     // 0x1898(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     CloudBottomWorldHeight;                                  // 0x18A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             CachedFloatsOld;                                         // 0x18A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<double>                                             CachedFloatsNew;                                         // 0x18B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     CacheAlpha;                                              // 0x18C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FillingStartingCache;                                    // 0x18D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AN5E[0x7];                                   // 0x18D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CachePeriod;                                             // 0x18D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FLinearColor>                                CachedColorsOld;                                         // 0x18E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FLinearColor>                                CachedColorsNew;                                         // 0x18F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CachedVectorsOld;                                        // 0x1900(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CachedVectorsNew;                                        // 0x1910(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             CachedSunVector;                                         // 0x1920(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CachedMoonVector;                                        // 0x1938(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FogChangeThisFrame;                                      // 0x1950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastFrameFog;                                            // 0x1958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastFrameDust;                                           // 0x1960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DustChangeThisFrame;                                     // 0x1968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>                                               CachedValueChanging;                                     // 0x1970(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     MaxPropertyCachePeriod;                                  // 0x1980(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     TimeofLastCache;                                         // 0x1988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EUDS_CityPresets, struct FVector>                     PresetLocationCoordinates;                               // 0x1990(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DisableImageBasedLensFlareswhenEnabled;                  // 0x19E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_YN37[0x7];                                   // 0x19E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartingSkyAtmosphereHeight;                             // 0x19E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugPostProcessWeightsRuntime;                          // 0x19F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PEK9[0x7];                                   // 0x19F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PostProcessBlendTransitionWeight;                        // 0x19F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FUDS_Post_Process_Stage>                     PostProcessComponents;                                   // 0x1A00(0x0010) Edit, BlueprintVisible
		bool                                                       UsingPostProcessComponents;                              // 0x1A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KWQY[0x3];                                   // 0x1A11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CloudWispsTintDay;                                       // 0x1A14(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Dusk7;                                                   // 0x1A24(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CloudWispsTintNight;                                     // 0x1A34(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J5II[0x4];                                   // 0x1A44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     IncreaseWispsBrightnessAroundSun;                        // 0x1A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     IncreaseWispsBrightnessAroundMoon;                       // 0x1A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     CachedMoonPhase;                                         // 0x1A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SolarEclipse;                                            // 0x1A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZF5Q[0x3];                                   // 0x1A61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SolarEclipseTintColor;                                   // 0x1A64(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S6JE[0x4];                                   // 0x1A74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SolarEclipseIntensityMultiplier;                         // 0x1A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FadeDownHighSunLightIntensityBelowHorizon;               // 0x1A80(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_L7RN[0x7];                                   // 0x1A81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UDSVersion;                                              // 0x1A88(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UUDS_VersionInfo_C*                                  UDSVersionInfo;                                          // 0x1A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     CloudsBTime;                                             // 0x1AA0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SkyAtmosphereOvercastLuminance;                          // 0x1AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OldMoonTarget;                                           // 0x1AB0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OldSunTarget;                                            // 0x1AC8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetsChangeSpeed;                                      // 0x1AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CacheTimerLength;                                        // 0x1AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CacheCurrentTimer;                                       // 0x1AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Initialized;                                             // 0x1AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7SY[0x7];                                   // 0x1AF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUDS_Planet_Preset_C*                                MoonPreset;                                              // 0x1B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<struct FUDS_Space_Planet>                           Moons;                                                   // 0x1B08(0x0010) Edit, BlueprintVisible
		double                                                     SpaceLayerBrightnessNight;                               // 0x1B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SpaceLayerBrightnessDay;                                 // 0x1B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SpaceGlowBrightness;                                     // 0x1B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UDS_SpaceParentMaterial[0x30];                           // 0x1B30(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UMaterialInstanceDynamic*>                    SpacePlanetMIDs;                                         // 0x1B60(0x0010) Edit, BlueprintVisible
		TArray<class USceneComponent*>                             SpaceSceneComponents;                                    // 0x1B70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UMaterialInstanceDynamic*, class UMaterialInstanceDynamic*> SpaceGlowMIDs;                                           // 0x1B80(0x0050) Edit, BlueprintVisible
		TArray<class UStaticMeshComponent*>                        SpacePlanetComponents;                                   // 0x1BD0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       SpaceLayerActive;                                        // 0x1BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y5R6[0x7];                                   // 0x1BE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UDS_SpaceSimStarsParentMaterial[0x30];                   // 0x1BE8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        CachedSolarEclipseTint;                                  // 0x1C18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CachedSunRadius;                                         // 0x1C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CachedEclipsePercent;                                    // 0x1C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CachedMoonCutout;                                        // 0x1C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CachedMoonScale;                                         // 0x1C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastConstructionScriptTime;                              // 0x1C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CreateNewMIDs;                                           // 0x1C50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SunLightingChannel0;                                     // 0x1C51(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       SunLightingChannel1;                                     // 0x1C52(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       SunLightingChannel2;                                     // 0x1C53(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		struct FLinearColor                                        LowMoonLightColorTint;                                   // 0x1C54(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       MoonLightingChannel0;                                    // 0x1C64(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       MoonLightingChannel1;                                    // 0x1C65(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       MoonLightingChannel2;                                    // 0x1C66(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		bool                                                       ShowTraceDebugs;                                         // 0x1C67(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		TArray<class USceneComponent*>                             SpaceRoots;                                              // 0x1C68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       RenderWaterCaustics;                                     // 0x1C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DNWJ[0x7];                                   // 0x1C79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WaterLevel;                                              // 0x1C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CausticsIntensity;                                       // 0x1C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CausticsFalloff;                                         // 0x1C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DeepWaterFalloff;                                        // 0x1C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CausticsTextureScale;                                    // 0x1CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MoonsCloudMask;                                          // 0x1CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BlurCausticswithDepth;                                   // 0x1CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     BlurCausticsinCloudShadow;                               // 0x1CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     BlurCausticswithCameraDistance;                          // 0x1CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		int32_t                                                    SunsetEventState;                                        // 0x1CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FogCloudinessAboveCloudLayer;                            // 0x1CCC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_1XOR[0x3];                                   // 0x1CCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EditorCameraNormalizedHeightinLayer;                     // 0x1CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		double                                                     CameraCloudLayerNormalizedHeight;                        // 0x1CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CameraSkyAtmosphereNormalizedDensity;                    // 0x1CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonFogBaseColor;                                        // 0x1CE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SunFogBaseColor;                                         // 0x1CF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CachedSkyAtmosphereLuminance;                            // 0x1D08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OldCloudLayerCameraLevel;                                // 0x1D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudCameraRelativeChangeSpeed;                          // 0x1D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CachedSkyAtmosphereAbsorptionColor;                      // 0x1D28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CloudCoverageTargetResolution;                           // 0x1D38(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XM4C[0x4];                                   // 0x1D3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              CloudCoverageRenderTarget;                               // 0x1D40(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CloudCoverageTargetSize;                                 // 0x1D48(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q6EA[0x4];                                   // 0x1D4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PaintedCloudCoverageOpacity;                             // 0x1D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     Layer2PaintedCloudCoverageOpacity;                       // 0x1D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     PaintedCoverageAffectsGlobalValues;                      // 0x1D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           EditorCloudCoverageTargetLocation;                       // 0x1D68(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FIntPoint, class UUDS_Cloud_Paint_Cell_C*>     LocalPaintingCellData;                                   // 0x1D78(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    LocalPaintedCellSize;                                    // 0x1DC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CloudPaintingActive;                                     // 0x1DCC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MKY3[0x3];                                   // 0x1DCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CloudCoverageTargetLocation;                             // 0x1DD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CurrentCloudCoverageRenderTargetMapping;                 // 0x1DE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CloudCoverageTargetinUse;                                // 0x1DF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LMJR[0x7];                                   // 0x1DF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AsyncLoadingQueue[0x10];                                 // 0x1DF8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UObject*>                                     AsyncLoadedObjects;                                      // 0x1E08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AsyncLoadingActive;                                      // 0x1E18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TNYM[0x7];                                   // 0x1E19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CloudCoverageAfterPainting;                              // 0x1E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CloudPaintCanAddCoverage;                                // 0x1E28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CloudPaintCanSubtractCoverage;                           // 0x1E29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableVolumetricCloudLightRays;                          // 0x1E2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JD0A[0x5];                                   // 0x1E2B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LightRayIntensity;                                       // 0x1E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightRayTintColor;                                       // 0x1E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightRaysPointSpacing;                                   // 0x1E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightRayLength;                                          // 0x1E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     IndividualCloudsLightRays;                               // 0x1E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ScaleLightRayWidth;                                      // 0x1E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LightRaysMaxDistanceKm;                                  // 0x1E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightRaysDepthFadeDistance;                              // 0x1E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightRays3DNoiseScale;                                   // 0x1E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VolumetricCloudLightRaysNiagaraSystem[0x30];             // 0x1E80(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		double                                                     MaxLightRayLength;                                       // 0x1EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CloudTopWorldHeight;                                     // 0x1EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CachedLightRayVector;                                    // 0x1EC0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LightRaysUsingSun;                                       // 0x1ED8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HGGP[0x7];                                   // 0x1ED9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CachedLightRayStrength;                                  // 0x1EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DCM;                                                     // 0x1EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ExposureSpeedUp;                                         // 0x1EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ExposureSpeedDown;                                       // 0x1EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APostProcessVolume*>                          WorldPostProcessActors;                                  // 0x1F00(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       IsEditor;                                                // 0x1F10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HUHP[0x3];                                   // 0x1F11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MieScatteringScale;                                      // 0x1F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MieScattering;                                           // 0x1F18(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MieAbsorptionScale;                                      // 0x1F28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MieAbsorption;                                           // 0x1F2C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MieAnisotropy;                                           // 0x1F3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MieExponentialDistribution;                              // 0x1F40(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_531M[0x4];                                   // 0x1F44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             OriginalExposureBiasSettings;                            // 0x1F48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     MoonIndirectIntensity;                                   // 0x1F58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class AActor*                                              DayCycleManager;                                         // 0x1F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      DCMConditionUpdateFrequency;                             // 0x1F68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZK2K[0x4];                                   // 0x1F6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RayleighScatteringScale;                                 // 0x1F70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HeightFogContribution;                                   // 0x1F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceHidden;                                             // 0x1F80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8ZC6[0x7];                                   // 0x1F81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             SceneComponentsToHide;                                   // 0x1F88(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FVector>                                     SupplyCrateLocations;                                    // 0x1F98(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            MID_SupplyCrate_Stamp;                                   // 0x1FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      ExternalActorsToHideInCave;                              // 0x1FB0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       bDisablePostProcessUpdate;                               // 0x1FC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MSP0[0x7];                                   // 0x1FC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALevelSequenceActor*                                 ExternalSequenceActor;                                   // 0x1FC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		double                                                     SEQTime;                                                 // 0x1FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastSetCloudDistanceToSampleMaxCount;                    // 0x1FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasInitializedSavedTime;                                // 0x1FE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8Q1H[0x7];                                   // 0x1FE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LowQualityViewSampleScaleDay;                            // 0x1FE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LowQualityViewSampleScaleNight;                          // 0x1FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     LowQualityShadowSampleScale;                             // 0x1FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRigVMFunction_AnimRichCurve                        DayTimeTempCurve;                                        // 0x2000(0x0090) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     SequenceSkyLightTemperature;                             // 0x2090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SkylightColorMultitplierColdTemperature;                 // 0x2098(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        SkylightColorMultiplierHotTemperature;                   // 0x20A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        MoonColorMultiplierFinal;                                // 0x20B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonColorMultiplierRaining;                              // 0x20C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonColorMultiplierHeatwave;                             // 0x20D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonColorMultiplierColdFront;                            // 0x20E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MoonColorMultiplierRegular;                              // 0x20F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitSavedTimeOfDay();
		void UpdateClientTimeOdFay();
		void ToggleSequenceTrack(bool Enable);
		void ScrubSequenceActor();
		void CreateComponentListForHide();
		void SetDataMPCs();
		void HideIfCave();
		void GetDCM();
		void UpdateDCM();
		void GetPlayerOcclusion(bool Invert, double* Occlusion);
		void SetFogMeiProperties();
		void UpdateDCMTime();
		double CurrentVolumetricCloudSkyAtmoContribution();
		double OvercastBrightness();
		void UpdateVolumetricCloudLightRaysMovement();
		void NotifyofRemovedCloudPaintContainer();
		void UpdateVolumetricCloudLightRays();
		void SetUpVolumetricCloudLightRays();
		void UpdateCloudCoverageAfterPainting();
		void TestPointforPaintedCloudCoverage(const struct FVector& Location, double* CloudCoveragewithPainting);
		void UpdateSkyAtmosphereLocation(const struct FVector& Location);
		void CurrentVolumetricCloudMultiscatteringIntensity(double* Out);
		void CurrentCloudWispsColor(struct FLinearColor* Out);
		void GetNearbyCloudCellsToLoadAsynchronously();
		void ReleaseAsyncLoadedObject();
		void AddObjecttoAsyncLoadingQueue(bool HighPriority);
		void CheckforCloudCoverageTargetRecenter();
		void WorldSpacetoDrawnTargetPixelSpace(const struct FVector2D& In, struct FVector2D* Out);
		void CloudCoverageTargetMapping(struct FVector* Mapping);
		void UpdatePaintedCloudCoverageTarget();
		void CurrentSkyAtmosphereAbsorptionColor(struct FLinearColor* Out);
		void CurrentVolumetricCloudInnerEmitLimit(double* Out);
		double InsideOutsideCloudLayer();
		void OvercastLuminanceBoost(double Multiplier, double* Out);
		void VolumetricCloudAmbientLightColor(struct FLinearColor* Bottom, struct FLinearColor* Top);
		void CloudCoverageLocal(double* Out);
		void CloudLayerTopandBottomWorldHeight(double* BottomWorldHeight, double* TopWorldHeight);
		void GetCameraLocationandCameraRelativeHeights();
		void ApplyLightShaftSettings(class UDirectionalLightComponent* Light, const struct FVector2D& MaxBrightness, const struct FVector2D& BloomThreshold, const struct FVector2D& BloomScale, const struct FVector& ForwardVector);
		void CheckifPointisExposedtoSunorMoonLight(const struct FVector& Location, double DistancetoTrace, TArray<class AActor*>* ActorstoIgnoreinTrace, bool* ExposedtoSun, bool* ExposedtoMoon, bool* ExposedtoEither, double* LightIntensityLux);
		void UpdateDistancetoSampleMaxCount(bool ShutDown);
		double CurrentMoonsCloudMask();
		void UpdatefromUDWConstructionScript();
		void SwapwithCinematicRuntimeValue(double In, double Cine, bool UserHigher, double* Out);
		void CheckToUseExistingMIDs();
		void SolarEclipseCircleMask(double SunAngularRadius, double MoonAngularRadius, const struct FVector& MoonVector, double MoonSoftness, double* FractionShowing);
		double CurrentSpaceLayerBrightness();
		void SpacePlanetParentMID(const struct FUDS_Space_Planet& Planet);
		void UpdateSpacePlanetVectors();
		void MoonZVector(struct FVector* Out);
		void SunZVector(struct FVector* Out);
		void ConstructSpaceLayer();
		void IncrementCacheTimer();
		void IsitDaytime(bool* Yes);
		void CombinedNightBrightness(double* Out);
		void RestartRealTimeSkyLightCapture();
		void HardResetCache();
		void DaysSinceJ2000(int32_t InputYear, int32_t DayofYear, int32_t* Days);
		void UpdateForcedActiveVariables();
		void CloudWispGradientVector(struct FLinearColor* Out);
		double CurrentDirectionalInscatteringExponent();
		void CurrentViewSampleScale(double* Out);
		void ThreeTimeFloats(double Day, double Dusk, double Night, double* Out);
		void UpdatePostProcessBlendWeights();
		void CreatePostProcessComponents();
		void ChangeSkyModeatRuntime(EUDS_SkyMode NewSkyMode);
		void ApplyLocationPreset(EUDS_CityPresets Location);
		void CurrentVolumetricCloudShadowTracingDistance(double* Out);
		struct FLinearColor CurrentSkyAtmosphereLuminance();
		void ControlUDWWeatherState();
		void VolumetricCloudsSubNoiseScales(struct FLinearColor* High, struct FLinearColor* Low);
		void VolumetricCloudFloorVariation(double* HeightClear, double* HeightCloudy, double* Color);
		void FlatCloudiness(bool* On);
		void StaticCloudsXYZMasks(struct FLinearColor* XYMask, double* ZMask);
		void StartingCloudFormation();
		bool IncreaseTickFrequency();
		void SimplifiedSunGlowColor(struct FLinearColor* Out);
		void SizeCacheArrays();
		void IsLensFlareEnabled(bool* Yes);
		void CurrentExposureBias(double* Bias);
		void MonitorforChanges();
		void ScaledCachePeriod(double* Period);
		void GetCachedVector(EUDS_CachedProperties Property, struct FVector* Value);
		void CacheVector(EUDS_CachedProperties Property, const struct FVector& SetValue);
		void CacheSunandMoonOrientation();
		void GetCachedColor(EUDS_CachedProperties Property, struct FLinearColor* Value);
		void CacheColor(EUDS_CachedProperties Property, const struct FLinearColor& SetValue);
		void SetCacheAlpha();
		void CacheFloat(EUDS_CachedProperties Property, double SetValue);
		void CacheProperties();
		void GetCachedFloat(EUDS_CachedProperties Property, double* Value);
		void SunHeight(double* Z);
		void CurrentSolarEclipseValues(struct FLinearColor* TintColor, double* EclipsePercent);
		void AdjustBaseSunLightIntensity(const struct FVector& SunVector, double* Intensity, double* Multiplier);
		void FilteredMoonLightIntensity(double Unfiltered, double* Intensity);
		void BothCloudShadowsMIDs(TArray<class UMaterialInstanceDynamic*>* Out);
		void SunShadowsMIDs(TArray<class UMaterialInstanceDynamic*>* Out);
		void InitializeOcclusion();
		void UpdateExposureBias();
		void TickTimeTransition();
		void FinishTimeTransition();
		void TransitionTimeofDay(double NewTimeofDay, double TransitionDurationSeconds, EEasingFunc EasingFunction, double EasingExponent, bool AllowTimeGoingBackwards);
		void DirectionalLightDimming(double* Out);
		void LensFlareParentMaterial();
		void CloudShadowsParentMaterial();
		void StaticCloudsParentMaterial();
		void _2DCloudsBaseTexture();
		void LoadRequiredAssets();
		void CurrentMoonSourceAngle(double* Out);
		void TwilightBrightnessFalloff(double Z, double* Scale);
		void SetUpOvercastTurbulence();
		void UpdateOvercastTurbulence();
		void UpdateCurrentVolumetricCloudsMID();
		void CurrentMaxTraceDistance(double* Out);
		void VolumetricCloudsBaseCloudsTexture();
		void IsLocationInsideCloudLayer(const struct FVector& Location, bool* Inside);
		void CurrentSunSourceAngle(double* Out);
		void CancelShadowsValue(const struct FVector& LightVector, double* Out);
		void CloudShadowsLightVectorProcess(const struct FVector& Vector, struct FLinearColor* Out);
		void ApplyConsoleVariablewithCheck(const class FString& Cvar, double setting, int32_t Type);
		void CurrentMoonLightColor(struct FLinearColor* Color);
		void SimplifiedCurrentColor(const struct FLinearColor& DayColor, const struct FLinearColor& DuskColor, const struct FLinearColor& NightColor, struct FLinearColor* Out);
		void DirectionalInscatteringMultiplier(double* Multiplier);
		void QueryProjectSettingsAndUDSVersion();
		void SkyAtmosphereFogContribution(double* Output);
		void VolumetricCloudLayerScale(double* LayerScale);
		void VolumetricCloudShadowsAltitude(double* CloudShadowsAltitude);
		void VolumetricCloudTopAltitude(double* CloudTopAltitude);
		void VolumetricCloudLayerHeight(double BaseCloudHeight, double* LayerHeight);
		void VolumetricCloudBaseCloudHeight(double* BaseCloudHeight);
		void CurrentSkyAmbientColor(struct FLinearColor* SkyAmbientColor);
		void CurrentFogDirectionalInscatteringColor(struct FLinearColor* DirectionalInscatteringColor);
		void CurrentFogInscatteringColor(struct FLinearColor* InscatteringColor);
		void GetCurrentFogBaseColors(struct FLinearColor* AmbientFogColor, struct FLinearColor* DirectionalBaseColor, struct FLinearColor* ScaledDirectionalBaseColor, struct FLinearColor* SunFogBase, struct FLinearColor* MoonFogBase);
		void ScaleSampleCount(double In, double* Out);
		void FireEditorDispatchers();
		double CurrentOvercastSwirl();
		double CurrentWispsOpacity();
		double SkyMIDCloudDensity();
		double CurrentOverallIntensity();
		double CurrentLitIntensity();
		double CurrentSaturation();
		double FogStartDistance();
		double FogHeightFalloff();
		double CurrentFogDensity();
		void GetSkyMIDParentMaterialInstance();
		double CurrentSunsetEventTime();
		double CurrentSunriseEventTime();
		double CloudsTimeofDayFactor();
		double TotalTimeElapsed();
		void MStoTimeofDay(int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Miliseconds, double* Time);
		void ConvertTimeofDaytoTimeCode(double Time, struct FTimecode* Timecode);
		double TimeofDayOffset();
		struct FLinearColor Current2DCloudTint();
		double NightFilter();
		double FindOverallIntensity(double CloudDarkening);
		double CloudDarkening();
		double AbsentDirectionalLightsBrightness();
		double MoonPhaseMultiplier(double* WithoutLightBrightness);
		bool GateWithCurrentChanges(bool CloudsChanging, bool FogChanging, bool DustChanging);
		bool Using2DClouds();
		bool DimmingDirectionalLights();
		bool UseSkyAtmosphere();
		struct FLinearColor CurrentLightPollution();
		struct FLinearColor OvercastLightContribution(bool ForVolumetricClouds);
		double CurrentAuroraIntensity();
		struct FLinearColor CurrentNightSkyGlow();
		struct FLinearColor CurrentStarsColor();
		struct FLinearColor CurrentRayleighScatteringColor();
		double CurrentMieScatteringScale();
		double CurrentMieAnisotropy();
		void GetCurrentSkyLightColorandIntensity(double* OutIntensity, struct FLinearColor* OutColor);
		struct FLinearColor CurrentSkyLightLowerHemisphereColor();
		struct FLinearColor CurrentMoonLightMaterialColor();
		double CurrentMoonLitPercent();
		double CurrentMoonMaterialIntensity();
		struct FLinearColor CurrentMoonPhaseAngle();
		void CurrentMoonScaleandCutoutValue(double* Scale, double* Cutout);
		double MoonLightSpecularScale();
		double MoonLightVolumetricScatteringIntensity();
		void IsMoonLightCastingShadows(bool* Yes);
		void UnfilteredMoonLightIntensity(double* Out);
		double CurrentSunRadius();
		double CurrentSunLightIntensity();
		void IsSunLightCastingShadows(bool* Yes);
		struct FLinearColor CurrentSunLightColor();
		struct FLinearColor CurrentSunDiskColor();
		double CurrentSunDiskIntensity();
		double CloudShadowsCloudDensity();
		void GetCurrentCloudShadowsIntensityandSoftness(double* Intensity, double* Softness);
		void GetVolumetricCloudEmissiveColors(struct FLinearColor* Bottom, struct FLinearColor* Top);
		void AllVolumetricCloudMIDs(bool Shadows, TArray<class UMaterialInstanceDynamic*>* Mids);
		double CurrentBaseCloudsScale();
		struct FVector CloudTextureVelocity();
		void CurrentLerptoSimplifiedClouds(double* Alpha);
		void VolumetricCloudsParentMaterials();
		double CurrentVolumetricCloudMacroVariation();
		struct FLinearColor CurrentVolumetricCloudAlbedo();
		void CurrentVolumetricCloudMultiscatteringOcclusion(double* Occlusion);
		void GetCurrentVolumetricCloudExtinctionScale(double* Top);
		void CurrentVolumetricCloudsDensity(double* Layer1, bool* CloudLayerVisible, double* Layer2);
		void UpdateDynamicSkyLightMultiplier();
		void TransitionSkyLightIntensity(double NewSkyLightIntensityMultiplier, double TransitionTime);
		void UpdateLensFlare();
		void SetUpLensFlare();
		void ApplyVolumetricMode(EUDS_VolRT_Mode Mode);
		void UpdateMoonParameters();
		void SunriseTimes();
		void ApplySavedUDSAndUDWState(const struct FUDS_and_UDW_State& State);
		void CreateUDSandUDWStateforSaving(struct FUDS_and_UDW_State* PackagedState);
		void UpdateReplicatedTime();
		void UpdateStaticClouds();
		void OnRep_ReplicatedTimeofDay();
		void GetCurrentDateandTime(struct FDateTime* CurrentDateandTime);
		void CheckforDaylightSavingsTime();
		void IncrementDay();
		void ForceValidDay();
		void ApproximateRealSunMoonandStars(int32_t Month, int32_t Day, int32_t Year, double TimeOfDay, double TimeZone, bool OnlyCalculateSun, struct FVector* SunVector, struct FVector* MoonVector, double* RealPhase, struct FVector* PhaseAlignment, double* CelestialOrbit, struct FLinearColor* CelestialYaw);
		void SetDateandTime(const struct FDateTime& DateTime);
		void UpdateDirectionalLightRotations();
		void RecaptureSkyLight();
		void UpdateSettingsBasedonPlatformandScalability();
		void UpdateVariablesControlledByWeather();
		void ConstructionScriptFunction(bool RunByCounterpart, bool MoveStaticLights, bool RunBySequence);
		void SetCloudTiming();
		void UpdateStaticVariables();
		void SetTimeofDayusingTimeCode(const struct FTimecode& TimeCode);
		void GetTimeofDayinRealTimeFormat(struct FTimecode* Time);
		void UpdateActiveVariables();
		void SetSunandMoonRootRotation();
		void UserConstructionScript();
		void OnLoaded_AA91001A446E22425F2F54AAB2159C50(class UObject* Loaded);
		void StartAsyncLoader();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void DayEnded();
		void RestartInsideCloudFog();
		void UpdateReplicatedToD();
		void TimedOverridewithNewChanges();
		void ForceStartup();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetNewTime(const struct FTimecode& NewTime);
		void ExecuteUbergraph_Ultra_Dynamic_Sky(int32_t EntryPoint);
		void Hourly__DelegateSignature(int32_t Hour);
		void Midnight__DelegateSignature();
		void Sunrise__DelegateSignature();
		void Sunset__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
