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
	 * BlueprintGeneratedClass PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C
	 * Size -> 0x0021 (FullSize[0x0ED1] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponEmptyCryopod_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             NewEventDispatcher;                                      // 0x0EB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     DecayingDurability;                                      // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugInvalidRedirects;                                   // 0x0ED0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetStatRecoveryRateValue(EPrimalCharacterStatusValue Stat, TArray<double>* FloatVars, double* StatValue);
		void GetStatMaxValue(EPrimalCharacterStatusValue Stat, TArray<double>* FloatVars, double* StatValue);
		void GetRecoveryRateIndexForStat(EPrimalCharacterStatusValue Stat, int32_t* Index);
		void GetCurrentValueIndexForStat(EPrimalCharacterStatusValue Stat, int32_t* Index);
		void GetStatCurrentValue(EPrimalCharacterStatusValue Stat, TArray<double>* FloatVars, double* StatValue);
		void GetMaxValueIndexForStat(EPrimalCharacterStatusValue Stat, int32_t* Index);
		void IsIceBox(bool* IsIceBox, class APrimalStructureItemContainer** AsContainer);
		void IsCryoFridge(bool* IsFridge, class APrimalStructureItemContainer** AsContainer);
		void GetCooldownBuffIfLoaded(class UClass** OutputClass);
		void GetContainedDinoClass(class UClass** ResolvedClass, bool* HasData, struct FCustomItemData* RawCustomItemData);
		bool BPPreventUpload();
		void GetStatValueforDisplay(double MaxValue, EPrimalCharacterStatusValue Stat, double Value, class FText* Result);
		void GetStatDisplayName(EPrimalCharacterStatusValue Stat, class FText* DisplayName);
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		void BPInitIconMaterial();
		class UMaterialInterface* BPGetCustomIconMaterialParent();
		void BPTributeItemUploaded(class UObject* ContextObject);
		void BPTributeItemDownloaded(class UObject* ContextObject);
		void BPItemBelowDurabilityThreshold();
		struct FColor BPGetCustomInventoryWidgetTextColor();
		class FString BPGetCustomDurabilityText();
		float BPGetCustomAutoDecreaseDurabilityPerInterval();
		class FString BPGetCustomInventoryWidgetText();
		void BPItemBroken();
		void TryDeploy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Deployed, struct FVector* NewLocation, class FString* FailureReason);
		void CanFit(const struct FVector& Location, double VerticalOffset, double Angle, double HorizontalOffset, double Radius, double HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		void CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation, class FString* FailureReason);
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		void BrokenDeploy();
		void ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod(int32_t EntryPoint);
		void NewEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
