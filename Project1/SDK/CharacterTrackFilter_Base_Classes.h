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
	 * BlueprintGeneratedClass CharacterTrackFilter_Base.CharacterTrackFilter_Base_C
	 * Size -> 0x0003 (FullSize[0x0053] - InheritedSize[0x0050])
	 */
	class UCharacterTrackFilter_Base_C : public UDinoTrackFilterOption
	{
	public:
		bool                                                       UseCustomActorList;                                      // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnlyOnSameTeam;                                          // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnlyLiving;                                              // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<class AActor*> GetActorsToSearchThrough_BP(class AShooterPlayerController* SPC);
		bool ShouldActorBeTracked(class AActor* InvestigatedActor, int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, bool* Handled);
		TArray<class AActor*> GetActorsToSearchThrough();
		void IsInDinoGroup(class AActor* checkedactor, class APlayerState* playerstate, int32_t DinoGroupNum, bool isfavorited, bool* IsInGroup);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
