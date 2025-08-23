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
	 * BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
	 * Size -> 0x0008 (FullSize[0x1468] - InheritedSize[0x1460])
	 */
	class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x1460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BPOnTransferAll(class UPrimalInventoryComponent* ToInventory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
