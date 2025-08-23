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
	 * BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C
	 * Size -> 0x0020 (FullSize[0x0F08] - InheritedSize[0x0EE8])
	 */
	class AShooterHudBP_C : public AShooterHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EE8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0EF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHUDNotificationPanel_C*                             CustomHUDNotificationPanelRef;                           // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UClass*                                              HUDNotificationsTemplate;                                // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool BPCustomAddHUDNotification(const class FString& NotificationString, const struct FColor& NotificationColor, class UMaterialInterface* NotificationMaterial, class UTexture2D* NotificationTexture, float DisplayTime, float DisplayScale, bool bIsSingleton, int32_t MessageTypeID, int32_t Priority);
		void GetAdditionalExplorerNoteDynamicMaterialParams(const struct FExplorerNoteEntry& ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams);
		void BPForceReinitUI();
		void ExecuteUbergraph_ShooterHudBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
