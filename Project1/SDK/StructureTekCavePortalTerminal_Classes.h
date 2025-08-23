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
	 * BlueprintGeneratedClass StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C
	 * Size -> 0x0034 (FullSize[0x103C] - InheritedSize[0x1008])
	 */
	class AStructureTekCavePortalTerminal_C : public AStructureBaseBP_C
	{
	public:
		class UClass*                                              TeleporterBaseClass;                                     // 0x1008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class AActor*                                              SpawnTeleporterPoint;                                    // 0x1010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class ADungeonArenaManager_C*                              TheDungeonManager;                                       // 0x1018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      TeleporterDifficultyClasses;                             // 0x1020(0x0010) Edit, BlueprintVisible
		class UTexture2D*                                          ActivateTeleporterIcon;                                  // 0x1030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FColor                                              ActivateIconColor;                                       // 0x1038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
