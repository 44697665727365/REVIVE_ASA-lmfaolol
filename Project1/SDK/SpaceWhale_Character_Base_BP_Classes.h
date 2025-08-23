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
	 * BlueprintGeneratedClass SpaceWhale_Character_Base_BP.SpaceWhale_Character_Base_BP_C
	 * Size -> 0x0000 (FullSize[0x32E8] - InheritedSize[0x32E8])
	 */
	class ASpaceWhale_Character_Base_BP_C : public ADino_Character_BP_C
	{
	public:
		void OnSaddleEquipped(bool Equipped);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
