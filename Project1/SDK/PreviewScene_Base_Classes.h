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
	 * BlueprintGeneratedClass PreviewScene_Base.PreviewScene_Base_C
	 * Size -> 0x0148 (FullSize[0x0600] - InheritedSize[0x04B8])
	 */
	class APreviewScene_Base_C : public APrimalPreviewSceneSetup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 TopLight;                                                // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow3;                                                  // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     arrow;                                                   // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 KeyLight4;                                               // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow2;                                                  // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 KeyLight2;                                               // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     KeyLight2_Parent;                                        // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TopLight_Parent;                                         // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 BackgroundLight;                                         // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BackgroundLight_Parent;                                  // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 KeyLight3;                                               // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow1;                                                  // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 KeyLight1;                                               // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     KeyLight1_Parent;                                        // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                AmbientLight;                                            // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                AmbientLight2;                                           // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                AmbientLight1;                                           // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LightParent;                                             // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bDebugComponents;                                        // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1T8F[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshComponent*                                      ForMeshComp;                                             // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     CameraDistance;                                          // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSimpleDof;                                            // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_41FA[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CameraSimpleDofAperature;                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HFRE[0x8];                                   // 0x0598(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CameraSimpleDofTarget;                                   // 0x05A0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetDebugLightIntensity(double NewIntensity);
		void SetDebugLightRotation(const struct FRotator& NewRotation);
		void DebugLights();
		void UpdateFloorLocation(bool isFemale);
		void NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, TArray<class USceneComponent*> ForChildComps, class AShooterPlayerController* ForPC);
		void NotifyPreviewSceneUpdated(float DeltaTime);
		void ExecuteUbergraph_PreviewScene_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
