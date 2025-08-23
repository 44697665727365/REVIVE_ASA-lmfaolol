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
	 * BlueprintGeneratedClass PreviewScene_Painting.PreviewScene_Painting_C
	 * Size -> 0x0020 (FullSize[0x0620] - InheritedSize[0x0600])
	 */
	class APreviewScene_Painting_C : public APreviewScene_Base_C
	{
	public:
		class USkyLightComponent*                                  SkyLight;                                                // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          DirectionalLight1;                                       // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          DirectionalLight;                                        // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DirectionalLightsParent;                                 // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
