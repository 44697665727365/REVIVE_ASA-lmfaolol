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
	 * BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C
	 * Size -> 0x00F1 (FullSize[0x1121] - InheritedSize[0x1030])
	 */
	class UPrimalItem_Spawner_HoverSail_Parent_C : public UPrimalItem_DinoSpawner_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    NumSpawnAttempts;                                        // 0x1038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MOEP[0x4];                                   // 0x103C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CraftingShooterChar;                                     // 0x1040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_70FG[0x8];                                   // 0x1048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x1050(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SkiffSpawnString;                                        // 0x10B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class APrimalDinoCharacter*                                spawneddino;                                             // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     alloweddistancetodespawnhoversail;                       // 0x10C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       shouldhaveaspawneddino;                                  // 0x10D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11NV[0x7];                                   // 0x10D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              lostreferencestring;                                     // 0x10D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       couldfindavalidlocationnexttotarget;                     // 0x10E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I42C[0x7];                                   // 0x10E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              usetofollowstring;                                       // 0x10F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              usetodeploystring;                                       // 0x1100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              usetoputawaystring;                                      // 0x1110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       showappropriateitemdescriptionbasedonstatenotworkingondedi; // 0x1120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void notifyhoversaildestroyed();
		void Delaymount();
		bool BPCanUse(bool bIgnoreCooldown);
		void SpawnCraftedSkiff();
		void ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
