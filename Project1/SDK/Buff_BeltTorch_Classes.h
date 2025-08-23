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
	 * BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C
	 * Size -> 0x00A8 (FullSize[0x0BF8] - InheritedSize[0x0B50])
	 */
	class ABuff_BeltTorch_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NiagaraSystemFPV;                                        // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio;                                                   // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   NiagaraSystemTPV;                                        // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BeltTorchSM;                                             // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Transform;                                               // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimalItem*                                         AssociatedTorchItem;                                     // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AssociatedTorchItemID1;                                  // 0x0B88(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AssociatedTorchItemID2;                                  // 0x0B8C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAreTorchIDsInitialized;                                 // 0x0B90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTorchMeshInitialized;                                 // 0x0B91(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NNIX[0x6];                                   // 0x0B92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterWeapon_Melee*                                DefaultTorchWeapon;                                      // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     LastTimeConsumedDurability;                              // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ItemPassiveDurabilityConsumptionMultiplier;              // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FLinearColor>                                TorchColors;                                             // 0x0BB0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		bool                                                       bAreTorchColorsInitialized;                              // 0x0BC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C5I7[0x7];                                   // 0x0BC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AssociatedWeaponClass;                                   // 0x0BC8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFlameColorInitialized;                                // 0x0BD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JIJJ[0x3];                                   // 0x0BD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FlameColorIndex;                                         // 0x0BD4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseCascade;                                             // 0x0BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsInitializedFromSave;                                  // 0x0BD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseFPV;                                                 // 0x0BDA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2UQ0[0x5];                                   // 0x0BDB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FPVLightOffset;                                          // 0x0BE0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActivateVFX();
		void UpdateTorchType(bool FPV);
		bool BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries);
		void InitializeTorchFromItem(class UPrimalItem* theItem, class UClass* WeaponClassOverride);
		void SetFlameColorIndex(int32_t theIndex);
		void UpdateTorchFlameColor();
		void SetTorchFlameColor(const struct FLinearColor& theColor);
		void InitializeAssociatedWeaponClass(class UClass* WeaponClass);
		void UpdateAllTorchColors();
		void UpdateTorchColorsArray(class UPrimalItem* ForPrimalItem);
		void SetTorchColorByIndex(const struct FLinearColor& theColor, int32_t TheColorIndex);
		void ApplyMeshColorization();
		void ShouldDeactivateBuff(bool* bShouldDeactivate);
		void InitializeDefaultTorchWeapon();
		void InitializeTorchMesh();
		void DeactivateBeltTorch(bool bEquipTorchOnDeactivation);
		void AreValidTorchIDs(int32_t TorchID1, int32_t TorchID2, bool* bAreValid);
		void InitializeTorchItem(bool* bInitialized);
		void InitializeTorchIDs(class UPrimalItem* TorchItem);
		void Server_DeactivateBeltTorch();
		void BuffTickServer(float DeltaTime);
		void SetTorchColorByIndex_Multicast(const struct FLinearColor& theColor, int32_t theIndex);
		void BPOnInputEvent(EPrimalCharacterInputType inputType);
		void SetTorchFlameColor_Multicast(const struct FLinearColor& theColor);
		void BuffTickClient(float DeltaTime);
		void BPDeactivated(class AActor* ForInstigator);
		void ExecuteUbergraph_Buff_BeltTorch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
