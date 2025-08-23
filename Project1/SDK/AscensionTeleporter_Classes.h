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
	 * BlueprintGeneratedClass AscensionTeleporter.AscensionTeleporter_C
	 * Size -> 0x00B8 (FullSize[0x0C08] - InheritedSize[0x0B50])
	 */
	class AAscensionTeleporter_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     BeamSound;                                               // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BossArenaClass;                                          // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MaxTeleportDragWeight;                                   // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDinoTeleports;                                        // 0x0B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7ST6[0x4];                                   // 0x0B74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TeleportRadius;                                          // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              OverrideBossClass;                                       // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinimumPlayerLevelToTeleport;                            // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPlayerTeleports;                                      // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      PreventTeleportingDinoClasses;                           // 0x0B90(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    BossDifficulty;                                          // 0x0BA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QBGA[0x4];                                   // 0x0BA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DungeonManagerClass;                                     // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                TeleportText;                                            // 0x0BB0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     NetTeleportDelay;                                        // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TeleportDelay;                                           // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDoTeleport;                                             // 0x0BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3Y32[0x7];                                   // 0x0BD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TeleportedTriggerLevelEventName;                         // 0x0BE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                SP_TeleportText;                                         // 0x0BF0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ProgressActivities();
		void DoTeleportSound();
		void DoAscend();
		void BuffTickClient(float DeltaTime);
		void DoTeleport();
		void NetDoTeleport();
		void ReceiveBeginPlay();
		void SetBossDifficulty();
		void ExecuteUbergraph_AscensionTeleporter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
