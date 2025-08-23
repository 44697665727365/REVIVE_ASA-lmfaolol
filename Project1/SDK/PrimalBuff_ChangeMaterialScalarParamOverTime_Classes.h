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
	 * BlueprintGeneratedClass PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C
	 * Size -> 0x0048 (FullSize[0x0B98] - InheritedSize[0x0B50])
	 */
	class APrimalBuff_ChangeMaterialScalarParamOverTime_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      ParamTimeline_Scalar_CEFDC60C489CB14F246A90BDE2569987;   // 0x0B58(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ParamTimeline__Direction_CEFDC60C489CB14F246A90BDE2569987; // 0x0B5C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S7ZZ[0x3];                                   // 0x0B5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ParamTimeline;                                           // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FName                                                ParamName;                                               // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ForwardDuration;                                         // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StartValue;                                              // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     EndValue;                                                // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ReverseDuration;                                         // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentDuration;                                         // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetParamValue(class UMeshComponent* Mesh, double Value);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void ParamTimeline__FinishedFunc();
		void ParamTimeline__UpdateFunc();
		void StartTimeline(bool Forward);
		void ReceiveBeginPlay();
		void SetValues(double Value);
		void ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
