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
	 * BlueprintGeneratedClass Benchmark_001.Benchmark_001_DirectorBP_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UBenchmark_001_DirectorBP_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTBenchmark_001DirectorBP_4(class AUltra_Dynamic_Weather_C* Ultra_Dynamic_Weather);
		void SequenceEvent__ENTRYPOINTBenchmark_001DirectorBP_3(class AUltra_Dynamic_Weather_C* Ultra_Dynamic_Weather);
		void SequenceEvent__ENTRYPOINTBenchmark_001DirectorBP_2(class AUltra_Dynamic_Weather_C* Ultra_Dynamic_Weather);
		void SequenceEvent__ENTRYPOINTBenchmark_001DirectorBP_1(class AUltra_Dynamic_Weather_C* Ultra_Dynamic_Weather);
		void SequenceEvent__ENTRYPOINTBenchmark_001DirectorBP(class AUltra_Dynamic_Weather_C* Ultra_Dynamic_Weather);
		void Ultra_Dynamic_Weather_Event(class AUltra_Dynamic_Weather_C* Ultra_Dynamic_Weather, class UUDS_Weather_Settings_C* NewWeatherType, double TimetoTransitiontoNewWeatherSeconds, bool ResetParticleEmitters);
		void ExecuteUbergraph_Benchmark_001DirectorBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
