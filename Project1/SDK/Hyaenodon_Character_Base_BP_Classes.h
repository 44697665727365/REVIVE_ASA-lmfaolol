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
	 * BlueprintGeneratedClass Hyaenodon_Character_Base_BP.Hyaenodon_Character_Base_BP_C
	 * Size -> 0x0000 (FullSize[0x33A4] - InheritedSize[0x33A4])
	 */
	class AHyaenodon_Character_Base_BP_C : public ADino_Character_BP_Pack_C
	{
	public:
		void OnSaddleUnequipped();
		void OnSaddleEquipped();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
