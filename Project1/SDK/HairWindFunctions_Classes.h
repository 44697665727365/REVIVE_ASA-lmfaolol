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
	 * BlueprintGeneratedClass HairWindFunctions.HairWindFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHairWindFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CalculateWind(double PlayerSpeed, double WindFrequency, double GameSeconds, double WindAmount, const struct FVector& GlobalWindDirection, double GlobalWindIntensity, double MinWindFrequency, double MaxWindFrequency, double MinWindIntensity, double MinRainyIntensity, double MaxRainyIntensity, class UObject* __WorldContext, struct FVector* Wind);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
