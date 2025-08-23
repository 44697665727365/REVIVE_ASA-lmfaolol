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
	 * BlueprintGeneratedClass UDS_Island.UDS_Island_C
	 * Size -> 0x010C (FullSize[0x2214] - InheritedSize[0x2108])
	 */
	class AUDS_Island_C : public AUltra_Dynamic_Sky_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UExponentialHeightFogComponent*                      HeightFog_console;                                       // 0x2110(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                VolumeFogCube;                                           // 0x2118(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          Texture;                                                 // 0x2120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FGeometryScriptUVList                               UVList;                                                  // 0x2128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        ScatteringCoeff;                                         // 0x2138(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AbsorptionCoEff;                                         // 0x2148(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ExtinctionHeightOffset;                                  // 0x2158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ExtinctionMult;                                          // 0x2160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UnderWaterSourceAngle;                                   // 0x2168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UnderWaterMinBrightness;                                 // 0x2170(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UnderWaterMaxSaturation;                                 // 0x2178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunIndirectInverseIntensity;                             // 0x2180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonIndirectInverseIntensity;                            // 0x2184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunIndirectMin;                                          // 0x2188(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     SunIndirectMax;                                          // 0x2190(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonIndirectMin;                                         // 0x2198(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonIndirectMax;                                         // 0x21A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugOutputValuesToScreen;                              // 0x21A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XOEB[0x7];                                   // 0x21A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SunIndirectLightingCurve;                                // 0x21B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MoonIndirectLightingCurve;                               // 0x21B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     SunFinalIndirectMultiplier;                              // 0x21C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     MoonFinalIndirectMultiplier;                             // 0x21C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  LastPlayerPostProcessVolume;                             // 0x21D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DefaultSunColor;                                         // 0x21D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DefaultSunSourceAngle;                                   // 0x21E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DefaultSkylightColor;                                    // 0x21F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DefaultMoonColor;                                        // 0x2200(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultMoonSourceAngle;                                  // 0x2210(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AbsorptionColor();
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void SequencerUpdate();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_UDS_Island(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
