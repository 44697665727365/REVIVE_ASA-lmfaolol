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
	 * BlueprintGeneratedClass BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UBP_VFX_AN_blood_test_C : public UAnimNotifyState
	{
	public:
		class FString                                              BoneName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             BoneOffset;                                              // 0x0040(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             NewEventDispatcher;                                      // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     ImpactSize;                                              // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LR_FBOffset(const struct FVector& FrontOffset, const struct FVector& BackOffset, struct FVector* Offset);
		void NewFunction_1(bool Condition, bool Condition2);
		void DoTrace(class USkeletalMeshComponent* SKMeshComp, class AActor* InputPin, double BabyScale, bool IsPlayer, double* FootPrintSize, bool* HitBool, struct FHitResult* OutHit);
		void Spawn_Sound(class USceneComponent* Actor, const struct FVector& Location, double Speed, double Size, const struct FAudio_Ground_Collection& StepSounds);
		void Spawn_Anim_Notify();
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference);
		bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference);
		class FString GetNotifyName();
		bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference);
		void NewEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
