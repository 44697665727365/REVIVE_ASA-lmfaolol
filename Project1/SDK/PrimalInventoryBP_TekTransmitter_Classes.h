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
	 * BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C
	 * Size -> 0x0001 (FullSize[0x0661] - InheritedSize[0x0660])
	 */
	class UPrimalInventoryBP_TekTransmitter_C : public UPrimalInventoryBP_BaseGasolineBurning_C
	{
	public:
		bool                                                       RequiresEngram;                                          // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPRemoteInventoryAllowViewing(class AShooterPlayerController* PC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
