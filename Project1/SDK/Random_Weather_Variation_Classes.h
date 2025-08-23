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
	 * BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C
	 * Size -> 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
	 */
	class URandom_Weather_Variation_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUltra_Dynamic_Weather_C*                            UDW;                                                     // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             TargetRandomWeatherType;                                 // 0x00C8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesSummer;                          // 0x00D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesAutumn;                          // 0x0120(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesWinter;                          // 0x0170(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UUDS_Weather_Settings_C*, double>               WeatherTypeProbabilitiesSpring;                          // 0x01C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     CurrentLerpAlpha;                                        // 0x0210(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentTimerLength;                                      // 0x0218(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWeather_Override_Volume_C*                          Volume;                                                  // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalChanges;                                            // 0x0228(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChangingWeather;                                         // 0x022C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZRJ9[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUDS_Weather_Settings_C*                             LastRandomWeatherType;                                   // 0x0230(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UUDS_Weather_Settings_C*                             CurrentRandomWeatherState;                               // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ChangeTimer;                                             // 0x0240(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunningTimer;                                            // 0x0248(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTransitionLengthIsFraction;                             // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WOW1[0x6];                                   // 0x024A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentTransitionLength;                                 // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartTimertoSelectNewWeather();
		void IncrementChangeTimer();
		void CreateCompositeProbabilityMap(TMap<class UUDS_Weather_Settings_C*, double>* Out);
		void ApplyState(const struct FRandomWeatherVariation_State& RandomWeatherState);
		void GetStateforSaving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume);
		void SelectNewRandomWeatherType(bool FilterProbabilityList);
		void IncrementRandomWeather();
		void Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<class UUDS_Weather_Settings_C*, double> SummerProbabilities, TMap<class UUDS_Weather_Settings_C*, double> AutumnProbabilities, TMap<class UUDS_Weather_Settings_C*, double> WinterProbabilities, TMap<class UUDS_Weather_Settings_C*, double> SpringProbabilities, bool StartwithRandomType);
		void ReceiveTick(float DeltaSeconds);
		void ResetTimer();
		void ExecuteUbergraph_Random_Weather_Variation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
