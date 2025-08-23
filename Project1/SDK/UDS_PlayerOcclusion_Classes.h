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
	 * BlueprintGeneratedClass UDS_PlayerOcclusion.UDS_PlayerOcclusion_C
	 * Size -> 0x00A4 (FullSize[0x015C] - InheritedSize[0x00B8])
	 */
	class UUDS_PlayerOcclusion_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EUDS_Occlusion_Mode                                        OcclusionMode;                                           // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QV9G[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OcclusionLocation;                                       // 0x00C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxInteriorOcclusionDistance;                            // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETraceTypeQuery                                            OcclusionTraceChannel;                                   // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_153Q[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             TargetOcclusionProfile;                                  // 0x00F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     OcclusionUpdatePeriod;                                   // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             CurrentOcclusionProfile;                                 // 0x0108(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             RainVelocity;                                            // 0x0118(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CalculateRainOcclusion;                                  // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Running;                                                 // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AcquireCameraLocation;                                   // 0x0132(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CCIV[0x5];                                   // 0x0133(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     InvertedGlobalOcclusion;                                 // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FullOccludedPercent;                                     // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     NotOccludedPercent;                                      // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WaterLevel;                                              // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseWaterLevel;                                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceFullOcclusion;                                      // 0x0159(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Weather;                                                 // 0x015A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDrawDebugTrace                                            ShowTraceDebugs;                                         // 0x015B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TestPointforOcclusion(TArray<class AActor*>* ActorstoIgnore, const struct FVector& TestLocation, TArray<double>* OcclusionProfile, double* OverallOcclusion);
		void SetTargetFullyUnoccluded();
		void SetTargetFullyOccluded();
		void GetOcclusionLocation();
		void GetStartingOcclusionProfile();
		void Initialize();
		void UpdateCurrentOcclusionProfile();
		void UpdateTargetOcclusionProfile();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_UDS_PlayerOcclusion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
