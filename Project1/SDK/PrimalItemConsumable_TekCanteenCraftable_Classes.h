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
	 * BlueprintGeneratedClass PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C
	 * Size -> 0x0091 (FullSize[0x0F41] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumable_TekCanteenCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     MaxShardPower;                                           // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PowerCostPerUse;                                         // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      UnpoweredBuffsToGive;                                    // 0x0EC8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      PoweredBuffsToGive_Cold;                                 // 0x0ED8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      PoweredBuffsToGive_Hot;                                  // 0x0EE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                DefaultWaterMode;                                        // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HotWaterBuffClearTag;                                    // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ColdWaterBuffClearTag;                                   // 0x0F08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HotWaterModeTextColor;                                   // 0x0F10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColdWaterModeTextColor;                                  // 0x0F20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NormalWaterModeTextColor;                                // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseShardPowerCost;                                       // 0x0F40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsCustomContextMenuItemEnabled(const class FName& ContextItem);
		struct FColor BPGetCustomInventoryWidgetTextColor();
		void HasEnoughPowerForUse(bool* bHasEnoughPower);
		void ApplyUnpoweredBuffs();
		void TryClearBuffs();
		void GetCurrentWaterMode(class FName* WaterMode);
		class FString BPGetCustomInventoryWidgetText();
		void SetWaterMode(const class FName& NewWaterMode);
		void SelectedCustomContextMenuItem(const class FName& ContextItem, class AShooterPlayerController* ForPC);
		void TryConsumeWithPower();
		void BlueprintUsed();
		void SetShardDescription();
		void GetElementShardValue(bool* HasData, double* Value);
		void BPPostInitializeItem(class UWorld* OptionalInitWorld);
		void ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
