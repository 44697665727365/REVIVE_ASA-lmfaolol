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
	 * BlueprintGeneratedClass PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C
	 * Size -> 0x0180 (FullSize[0x1030] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_DinoSpawner_Base_C : public UPrimalItem_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       DebugStatConversion;                                     // 0x0EB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ConvertItemStats;                                        // 0x0EB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ConvertItemStatsOnlyIfMissingData;                       // 0x0EBA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KU4K[0x5];                                   // 0x0EBB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemToDinoStatParams>                       ItemToDinoStatMapping;                                   // 0x0EC0(0x0010) Edit, BlueprintVisible
		struct FDinoSetup                                          DinoSetup;                                               // 0x0ED0(0x0120) Edit, BlueprintVisible
		class FName                                                DinoStatsDataName;                                       // 0x0FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EPrimalCharacterStatusValue>                        StatsToDisplayOnTooltip;                                 // 0x0FF8(0x0010) Edit, BlueprintVisible
		int32_t                                                    BaselineStatValueForTooltipPercentageDisplay;            // 0x1008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DinoColorizationDataName;                                // 0x100C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YRZX[0x4];                                   // 0x1014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawningDinoAtLocation;                                  // 0x1018(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FColor BPGetCustomInventoryWidgetTextColor();
		class FString BPGetCustomInventoryWidgetText();
		void DoesClientHaveStatData(bool* HasData);
		bool BPCanUse(bool bIgnoreCooldown);
		void GetDinoColorizationData(bool* HasAnyColorData, TArray<unsigned char>* ColorData);
		void PreDinoSpawned();
		void CopyDinoStatsFromDino(class UPrimalCharacterStatusComponent* StatusComp, TArray<int32_t>* StatOffsets, TArray<unsigned char>* Colorization);
		void GetStatDisplayString(EPrimalCharacterStatusValue Stat, int32_t Value, int32_t StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
		void GetDinoStat(EPrimalCharacterStatusValue StatType, int32_t* NumDinoLevels, int32_t* StatMapIndexUsed, bool* Success);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void OnDinoSpawned(class APrimalDinoCharacter* NewDino);
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItem_DinoSpawner_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
