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
	 * BlueprintGeneratedClass PreviewScene_InventoryNew.PreviewScene_InventoryNew_C
	 * Size -> 0x0090 (FullSize[0x0690] - InheritedSize[0x0600])
	 */
	class APreviewScene_InventoryNew_C : public APreviewScene_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     NewLightRig;                                             // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          DirectionalLight;                                        // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight1;                                              // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight3;                                              // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight2;                                              // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkyLightComponent*                                  SkyLight;                                                // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight_FrontLight;                                    // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_DomeInverted;                                         // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Floor;                                                   // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SpotlightRoot;                                           // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LightingGeo;                                             // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     INVENTORY_LIGHTS;                                        // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Sphere;                                                  // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FloorBlendCurve;                                         // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FrontLightBlendCurve;                                    // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterialInstanceENV;                              // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateFloorLocation(bool isFemale);
		void FrontLightChangeWhenBelowFloor();
		void RotateLightsInZWithCamera();
		void NotifyPreviewSceneUpdated(float DeltaTime);
		void NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, TArray<class USceneComponent*> ForChildComps, class AShooterPlayerController* ForPC);
		void ExecuteUbergraph_PreviewScene_InventoryNew(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
