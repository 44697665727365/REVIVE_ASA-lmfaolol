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
	 * BlueprintGeneratedClass BPI_DayCycleManager.BPI_DayCycleManager_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_DayCycleManager_C : public UInterface
	{
	public:
		void SetSnowAmount(double NewSnowAmount);
		void SetRainAmount(double NewRainAmount);
		void SetInCave(bool NewInCave);
		void GetInCave(bool* IsInCave);
		void SetIsRaining(bool IsRaining);
		void SetBaseWind(double NewBaseWind);
		void SetBaseTemerature(double NewBaseTemp);
		void UpdateDCMTime(double NewTime);
		void GetTemperature(const struct FVector& Location, double* Temperature);
		void GetTime(double* CurrentTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
