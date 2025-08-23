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
	 * BlueprintGeneratedClass PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C
	 * Size -> 0x0000 (FullSize[0x0EC8] - InheritedSize[0x0EC8])
	 */
	class UPrimalItemArmor_HyaenodonSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
	{
	public:
		void BlueprintUnequipped();
		void BlueprintEquipped(bool bIsFromSaveGame);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
