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
	 * BlueprintGeneratedClass PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C
	 * Size -> 0x000C (FullSize[0x0EBC] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_DungeonEntrance_Base_C : public UPrimalItem_Base_C
	{
	public:
		class UClass*                                              DungeonArenaManagerClass;                                // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DungeonDifficultyIndex;                                  // 0x0EB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPCrafted();
		class FString BPAllowCrafting(class AShooterPlayerController* ForPC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
