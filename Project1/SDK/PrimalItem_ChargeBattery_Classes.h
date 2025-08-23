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
	 * BlueprintGeneratedClass PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C
	 * Size -> 0x0020 (FullSize[0x0ED0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_ChargeBattery_C : public UPrimalItem_Base_Battery_C
	{
	public:
		class FName                                                IconParameterName;                                       // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     minDurability;                                           // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  batteryIcons;                                            // 0x0EC0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		float BPGetItemDurabilityPercentage();
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		class FString BPGetCustomInventoryWidgetText();
		void AddDurabilitySafe(double amountToAdd, double* AmountAdded);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
