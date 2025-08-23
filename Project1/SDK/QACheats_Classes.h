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
	 * BlueprintGeneratedClass QACheats.QACheats_C
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UQACheats_C : public UPrimalCheatManagerExtension
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              MeatArray[0x10];                                         // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              GreensArray[0x10];                                       // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              DinoSaddlesContainer[0x10];                              // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              DinoContainer[0x10];                                     // 0x0060(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TMap<class FName, struct FSharedItemSet_Struct>            SharedItemSets;                                          // 0x0070(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FExplorerNoteLocationsPair>                  UndiscoveredExplorerNoteLocations;                       // 0x00C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     ShortestUndiscoveredExplorerNoteDistance;                // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ClosestUndiscoveredExplorerNoteLocation;                 // 0x00D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClosestUndiscoveredExplorerNoteIndex;                    // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SMMC[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UExplorerNoteLocations*                              ExplorerNoteLocationsData;                               // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     CurrentServerTime;                                       // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WaitTime;                                                // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RestartTime;                                             // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DelayedServerRestart(int32_t WaitTime);
		void GetCoordinatesFromCheatString(const struct FExplorerNoteLocationsPair& ExplorerNoteLocationsPair, int32_t* ExplorerNoteIndex, double* XOut, double* YOut, double* ZOut);
		void GiveSharedItemSet(const class FName& ItemSetName);
		void SpawnSpread(const class FString& DinoName, bool IsTamed, int32_t Level, int32_t NumberToSpawn);
		void HidePlayer(bool _1);
		void MakePoop();
		void GiveDinoSaddle(const class FString& DinoName);
		void GiveAllMeat();
		void GiveAllGreens();
		void PrintPlayerCharacter();
		void PrintRidingDino();
		void PrintTargetActor();
		void PrintAllNearbyWildDinos();
		void JumpToNextExplorerNote();
		void JumpToExplorerNoteByIndex(int32_t ExplorerNoteIndex, bool bOnlyIfUnopened);
		void RestartServer();
		void ExecuteUbergraph_QACheats(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
