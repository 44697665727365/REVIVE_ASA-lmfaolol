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
	 * BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C
	 * Size -> 0x00D0 (FullSize[0x0F80] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_StartingNote_C : public UPrimalItem_Note_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UTexture2D*>                                  AscensionIcons;                                          // 0x0EB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              LocalCustomItemDesc;                                     // 0x0EC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      DifficultyStrings;                                       // 0x0ED8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      BossStrings;                                             // 0x0EE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FArrayOfStrings>                             BossPostStrings;                                         // 0x0EF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          LocalItemIcon;                                           // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  LocalAscensionIcons;                                     // 0x0F10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UTexture2D*>                                  SecondaryAscensionIcons;                                 // 0x0F20(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          SecondaryIcon;                                           // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  TertiaryAscensionIcons;                                  // 0x0F38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          TertiaryIcon;                                            // 0x0F48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  QuaternaryAscensionIcons;                                // 0x0F50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          QuaternaryIcon;                                          // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bResetHighlightTime;                                     // 0x0F68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7D7D[0x7];                                   // 0x0F69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     HighlightStartTime;                                      // 0x0F70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HighlightTimeToEnableRespawn;                            // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPCanUse(bool bIgnoreCooldown);
		void BPDrawItemIcon(class UCanvas* ItemCanvas, const struct FVector2D& ItemCanvasSize, const struct FVector2D& ItemCanvasScale, bool bItemEnabled, const struct FLinearColor& TheTintColor);
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		void IsLocalImplant(class AShooterPlayerController* ForPC, bool* IsLocal);
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		void GetSurvivalQuotientString(TArray<double>* SurvData, class FString* OutString);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void BPPreInitializeItem(class UWorld* OptionalInitWorld);
		void BlueprintUsed();
		void BPOnUpdatedItemContextMenu();
		void ExecuteUbergraph_PrimalItem_StartingNote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
