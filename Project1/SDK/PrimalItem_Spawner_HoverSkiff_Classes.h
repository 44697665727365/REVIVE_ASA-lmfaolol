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
	 * BlueprintGeneratedClass PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C
	 * Size -> 0x0090 (FullSize[0x10C0] - InheritedSize[0x1030])
	 */
	class UPrimalItem_Spawner_HoverSkiff_C : public UPrimalItem_DinoSpawner_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    NumSpawnAttempts;                                        // 0x1038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U34X[0x4];                                   // 0x103C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CraftingShooterChar;                                     // 0x1040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9AFM[0x8];                                   // 0x1048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x1050(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SkiffSpawnString;                                        // 0x10B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		class FString BPAllowCrafting(class AShooterPlayerController* ForPC);
		void GetValidSpawnTransform(struct FTransform* SpawnTransform, bool* SpawnValid);
		void BPCrafted();
		void SpawnCraftedSkiff();
		void ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
