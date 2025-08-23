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
	 * BlueprintGeneratedClass ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C
	 * Size -> 0x00C8 (FullSize[0x1CE8] - InheritedSize[0x1C20])
	 */
	class AASA_Global_PostProcess_Blueprint_C : public AGlobal_PostProcess_Blueprint_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1C20(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     AvgEV100;                                                // 0x1C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DayCurve;                                                // 0x1C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         NightCurve;                                              // 0x1C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DawnCurve;                                               // 0x1C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     ExposureCompensationPPV;                                 // 0x1C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CurveNightWeight;                                        // 0x1C50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CurveDawnWeight;                                         // 0x1C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     CurveDayWeight;                                          // 0x1C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugExposure;                                          // 0x1C68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bApplyExposureCurveBlend;                                // 0x1C69(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bApplyExposureCurveDetailAndMidtoneAdjustment;           // 0x1C6A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LX1F[0x5];                                   // 0x1C6B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DetailStrengthExposureCurve;                             // 0x1C70(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         MidtoneContrastExposureCurve;                            // 0x1C78(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         CharacterEnhancementExposureCurve;                       // 0x1C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         EnvironmentEnhancementExposureCurve;                     // 0x1C88(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ExposureSaturationCurve;                                 // 0x1C90(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     FinalSaturationMultiplier;                               // 0x1C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ExposureCompensationInterpolationSpeed;                  // 0x1CA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetingModeExposureCompensationInterpolationSpeed;     // 0x1CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonTargetingModeLowPercent;                              // 0x1CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetingModeLowPercent;                                 // 0x1CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonTargetingModeHighlightContrastScale;                  // 0x1CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NonTargetingModeShadowContrastScale;                     // 0x1CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetingModeHighlightContrastScale;                     // 0x1CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetingModeShadowContrastScale;                        // 0x1CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TargetingModeContrastScaleInterpSpeed;                   // 0x1CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ApplyCurveExposure();
		void CaptureSettings();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_ASA_Global_PostProcess_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
