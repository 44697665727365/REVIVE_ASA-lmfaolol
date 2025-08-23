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
	 * BlueprintGeneratedClass TrackBinocularsBuff.TrackBinocularsBuff_C
	 * Size -> 0x07E9 (FullSize[0x1339] - InheritedSize[0x0B50])
	 */
	class ATrackBinocularsBuff_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     LastTimeServerUpdateStats;                               // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBinocularsUI_C*                                     BinocularsHUD;                                           // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class AShooterPlayerController*                            AsShooterPlayerController;                               // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ZoomPercent;                                             // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BinocularsHUDTemplate;                                   // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       HasHitted;                                               // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTargetingWIthBinoculars;                               // 0x0B81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FB3H[0x6];                                   // 0x0B82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TrackingActor;                                           // 0x0B88(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AShooterWeapon*                                      BinoWeaponRef;                                           // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastTracedActor;                                         // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTraceDistance;                                        // 0x0BA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X8C3[0x4];                                   // 0x0BA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastChangeTargetingTime;                                 // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastOutlineActor;                                        // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FNGJ[0x8];                                   // 0x0BB8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                DefaultPPSettings;                                       // 0x0BC0(0x0770) Edit, BlueprintVisible, DisableEditOnInstance
		class APostProcessVolume*                                  GlobalPPVolumeRef;                                       // 0x1330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsDoFDisabled;                                          // 0x1338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleDepthOfField(bool ShouldBeDisabled);
		void ShouldPPBeActive(bool* ShouldBeActive);
		void BPDeactivated(class AActor* ForInstigator);
		void UpdateCustomDepth(class AActor* ForActor, bool Enable);
		void UpdatePP(bool ForceDisable);
		bool AllowPostProcessEffect();
		void BPGetWaypointsBuff(TArray<struct FPointOfInterestData_ForCompanion>* IndicatorsOut);
		void TryDeactivateTrackBino(bool RemoveWeaponRef);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		void GetAllStatPoints(class UPrimalCharacterStatusComponent* self2, class UPrimalActor* Target, TArray<int32_t>* Wild, TArray<int32_t>* Mutations, TArray<int32_t>* Tamed);
		void ReplicateCharStats(class APrimalCharacter* Char);
		void ClientUpdateStatsChar(const struct FCharacterStatusReplicatedBinoculars& Update, class APrimalCharacter* primalChar);
		void BuffTickClient(float DeltaTime);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void SetupZoom(bool IsTargeting, double ZoomPercent);
		void BuffTickServer(float DeltaTime);
		void SetupNewTrackActor(class AActor* Actor);
		void TrackCurrentActorTraced();
		void InputDismissPOI_BP(class APlayerController* ForPC, int32_t Index);
		void ServerClearTrackBino();
		void ExecuteUbergraph_TrackBinocularsBuff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
