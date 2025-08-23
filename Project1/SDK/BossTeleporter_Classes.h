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
	 * BlueprintGeneratedClass BossTeleporter.BossTeleporter_C
	 * Size -> 0x00D9 (FullSize[0x0C29] - InheritedSize[0x0B50])
	 */
	class ABossTeleporter_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     BeamSound;                                               // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BossArenaClass;                                          // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MaxTeleportDragWeight;                                   // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDinoTeleports;                                        // 0x0B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EP7F[0x4];                                   // 0x0B74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TeleportRadius;                                          // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              OverrideBossClass;                                       // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinimumPlayerLevelToTeleport;                            // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPlayerTeleports;                                      // 0x0B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      PreventTeleportingDinoClasses;                           // 0x0B90(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TeleportText;                                            // 0x0BA0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SP_TeleportText;                                         // 0x0BB8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AllowFlyers;                                             // 0x0BD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FPDH[0x7];                                   // 0x0BD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ForceAllowTeleportingDinoClasses;                        // 0x0BD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       PreventDinosWithSaddleStructures;                        // 0x0BE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X7L6[0x7];                                   // 0x0BE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BackupTPLocation;                                        // 0x0BF0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            BackupTPRotation;                                        // 0x0C08(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FName                                                BackupLevelToCheckLoaded;                                // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsNotActuallyBossTeleporter;                             // 0x0C28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ManageArenaDisableBuffsForCharacter(class APrimalCharacter* ForCharacter);
		void BackupCallArenaDidTeleportOnLevelLoaded();
		void DoTeleportSound();
		void BuffTickClient(float DeltaTime);
		void DoTeleport();
		void NetDoTeleport();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BossTeleporter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
