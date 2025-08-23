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
	 * AnimBlueprintGeneratedClass AlienSupplyCrate_GroundConform_PPAnimBP.AlienSupplyCrate_GroundConform_PPAnimBP_C
	 * Size -> 0x07C5 (FullSize[0x0B0D] - InheritedSize[0x0348])
	 */
	class UAlienSupplyCrate_GroundConform_PPAnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VDBM[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0388(0x00C8)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x0450(0x0470)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x08C0(0x0108)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x09C8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0A90(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0AB8(0x0028)
		bool                                                       __CustomProperty_AllowSleep_4D4B555046C49C5DBD65369296523F32; // 0x0AE0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CrateOpened;                                             // 0x0AE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FT5N[0x6];                                   // 0x0AE2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASupplyCrateBaseBP_C*                                SupplyCrateRef;                                          // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowSleep;                                              // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O68L[0x7];                                   // 0x0AF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ResetSleepTimerHandle;                                   // 0x0AF8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha;                                                   // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BeingDestroyed;                                          // 0x0B04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8U1C[0x3];                                   // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentFadeOutTime;                                      // 0x0B08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableControlRig;                                       // 0x0B0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP_AnimGraphNode_TwoWayBlend_2E0C0EC7478166F86BA5B7B165207E20();
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ResetSleep();
		void ExecuteUbergraph_AlienSupplyCrate_GroundConform_PPAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
