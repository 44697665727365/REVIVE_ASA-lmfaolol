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
	 * BlueprintGeneratedClass TestGameMode.TestGameMode_C
	 * Size -> 0x0058 (FullSize[0x3F78] - InheritedSize[0x3F20])
	 */
	class ATestGameMode_C : public AShooterGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x3F20(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x3F28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ActiveEventBuffClass;                                    // 0x3F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bTimedEventActorIsActive;                                // 0x3F38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PKKP[0x7];                                   // 0x3F39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ActiveEventTimedSpawnActor;                              // 0x3F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              WinterWonderlandEventTimedSpawnActor[0x30];              // 0x3F48(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void StartEventManagedActors();
		void BPPreSpawnedDino(class APrimalDinoCharacter* TheDino);
		void OnLoaded_E6BE3CEA4B6D7935900FD2A42B6552F2(class UClass* Loaded);
		void OnShooterCharacterSpawned_Event(class AShooterCharacter* TheShooterCharacter);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_TestGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
