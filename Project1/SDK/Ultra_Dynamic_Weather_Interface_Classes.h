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
	 * BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUltra_Dynamic_Weather_Interface_C : public UInterface
	{
	public:
		void IsOverridingSkylightTemperature(bool* Return);
		void GetSnowAmount(double* Snow);
		void GetRainAmount(double* Rain);
		void GetConditions(double* WindStrength, double* WindDirectionYaw, double* Temperature_C, double* Temperature_F, double* RelativeTemperature, bool* IsRaining, bool* IsSnowing, bool* IsHeatwave, bool* IsColdfront);
		void SetUpRainbowMID();
		void GetRainbowMID(bool* RainbowEnabled, class UMaterialInstanceDynamic** Mid);
		void GetIntendedWaterLevel(bool* UsingWaterLevel, double* WaterLevel);
		void UpdateRainbow();
		void SetProjectMode(EUDS_Project_Mode Mode);
		void GetWeatherParticleCollisionChannel(ECollisionChannel* Channel);
		void HardRefreshCachedProperties();
		void DestroyCloseThunderComponent(class USceneComponent* Component);
		void GetCloseThunderSoundOcclusion(double* Volume, double* LPF);
		void UpdateMaterialEffects();
		void ApplyState(const struct FUDS_and_UDW_State& State);
		void GetStateforSaving(struct FUDS_and_UDW_State* UDWState);
		void GetIntendedCloudDirection(double* IntendedCloudDirection);
		void GetIntendedCloudSpeed(double* IntendedCloudSpeed);
		void UpdateWeatherSettingsfromUDS(double CloudCoverage, double Fog, double Dust);
		void InitializeWeather();
		void SetSeason();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
