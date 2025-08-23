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
	 * BlueprintGeneratedClass PrimalDinoTrackFilter_ParentClass.PrimalDinoTrackFilter_ParentClass_C
	 * Size -> 0x0002 (FullSize[0x0059] - InheritedSize[0x0057])
	 */
	class UPrimalDinoTrackFilter_ParentClass_C : public UCharacterTrackFilter_SearchName_C
	{
	public:
		bool                                                       AllowVehicles;                                           // 0x0057(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowNonVehiclesregularcreatures;                        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldActorBeTracked(class AActor* InvestigatedActor, int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, bool* Handled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
