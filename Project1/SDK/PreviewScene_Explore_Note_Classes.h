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
	 * BlueprintGeneratedClass PreviewScene_Explore_Note.PreviewScene_Explore_Note_C
	 * Size -> 0x0018 (FullSize[0x0618] - InheritedSize[0x0600])
	 */
	class APreviewScene_Explore_Note_C : public APreviewScene_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight_FrontLight;                                    // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkyLightComponent*                                  SkyLight_Custom;                                         // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void NotifyPreviewSceneUpdated(float DeltaTime);
		void ExecuteUbergraph_PreviewScene_Explore_Note(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
