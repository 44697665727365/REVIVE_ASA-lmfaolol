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
	 * BlueprintGeneratedClass PrimalItem_WeaponTorch.PrimalItem_WeaponTorch_C
	 * Size -> 0x0030 (FullSize[0x0EE0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponTorch_C : public UPrimalItemWeaponGenericAmmoless_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     DurabilityLossPerSecond;                                 // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TorchOnBeltWidgetTextColor;                              // 0x0EC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              TorchOnBeltWidgetText;                                   // 0x0ED0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		bool BPPreventNewColorization();
		void GetFlameColorIndex(int32_t* Index);
		void UpdateBeltTorchMeshColors();
		bool BPShouldHideTopLevelCustomContextMenuOption(const class FName& ContextItem);
		bool BPPreventWeaponEquip();
		void RemoveTorchFromBelt(class AShooterCharacter* ForCharacter);
		void PutTorchOnBelt(class AShooterCharacter* ForCharacter);
		void CanTorchBeOnBelt(bool* bCanBeOnBelt);
		void GetBeltTorchBuffInstanceForCharacter(class AShooterCharacter* ShooterCharacter, class APrimalBuff** BeltTorchBuff);
		bool IsCustomContextMenuItemEnabled(const class FName& ContextItem);
		void IsTorchOnBelt(bool* bIsOnBelt);
		class FString BPGetCustomInventoryWidgetText();
		struct FColor BPGetCustomInventoryWidgetTextColor();
		void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime);
		void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime);
		void SkinEquippedBlueprintTick(class UPrimalItem* OwnerItem, float DeltaSeconds);
		bool BPPreventUseOntoItem(class UPrimalItem* DestinationItem);
		void BPPreUseItem();
		void BPNotifyItemRefreshed();
		void SelectedCustomContextMenuItem(const class FName& ContextItem, class AShooterPlayerController* ForPC);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		void ExecuteUbergraph_PrimalItem_WeaponTorch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
