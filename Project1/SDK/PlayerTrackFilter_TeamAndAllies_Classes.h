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
	 * BlueprintGeneratedClass PlayerTrackFilter_TeamAndAllies.PlayerTrackFilter_TeamAndAllies_C
	 * Size -> 0x0000 (FullSize[0x0057] - InheritedSize[0x0057])
	 */
	class UPlayerTrackFilter_TeamAndAllies_C : public UPlayerTrackFilter_ParentClass_C
	{
	public:
		bool ShouldActorBeTracked(class AActor* InvestigatedActor, int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, bool* Handled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
