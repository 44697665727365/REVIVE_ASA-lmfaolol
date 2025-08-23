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
	 * BlueprintGeneratedClass CreatureTrackFilter_IsCarnivore.CreatureTrackFilter_IsCarnivore_C
	 * Size -> 0x0017 (FullSize[0x0070] - InheritedSize[0x0059])
	 */
	class UCreatureTrackFilter_IsCarnivore_C : public UCreatureTrackFilter_ParentClass_C
	{
	public:
		unsigned char                                              UnknownData_ZE5R[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ForceCarnivoresFilterDinoClasses[0x10];                  // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		bool ShouldActorBeTracked(class AActor* InvestigatedActor, int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, bool* Handled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
