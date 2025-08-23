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
	 * BlueprintGeneratedClass BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UBP_VFX_Spawn_Footprint_AnimNotify_C : public UAnimNotifyState
	{
	public:
		class FString                                              BoneName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             BoneOffset;                                              // 0x0040(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             NewEventDispatcher;                                      // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UNiagaraSystem*                                      Niagara_System;                                          // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DistanceToTestCollision;                                 // 0x0070(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AttachNStobone;                                          // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AT1I[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            NSRotate;                                                // 0x0090(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       backwards;                                               // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Front;                                                   // 0x00A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8IFP[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  FootprintMaterial;                                       // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RenderIndex;                                             // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowNotifyForPlayerCharacter;                          // 0x00BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9T9B[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxCamDistanceForVFX;                                    // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxCamDistanceForVFXByAPlayer;                           // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bPlaySound;                                              // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SKYB[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DinoFootprintOpacityScale;                               // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LR_FBOffset(const struct FVector& FrontOffset, const struct FVector& BackOffset, struct FVector* Offset);
		void NewFunction_1(bool Condition, bool Condition2);
		void DoTrace(class USkeletalMeshComponent* SKMeshComp, class AActor* InputPin, double BabyScale, bool IsPlayer, double* FootPrintSize, bool* HitBool, struct FHitResult* OutHit, class UMaterialInterface** FootPrintMaterialBack, class UMaterialInterface** FootPrintMaterialFront);
		void Spawn_Sound(class USceneComponent* Actor, const struct FVector& Location, double Size, const struct FAudio_Ground_Collection& StepSounds, bool IsPlayer);
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
