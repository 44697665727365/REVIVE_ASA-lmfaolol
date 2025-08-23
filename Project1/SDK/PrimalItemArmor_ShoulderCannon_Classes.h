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
	 * BlueprintGeneratedClass PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C
	 * Size -> 0x0017 (FullSize[0x0F30] - InheritedSize[0x0F19])
	 */
	class UPrimalItemArmor_ShoulderCannon_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_JSGH[0x7];                                   // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   Player;                                                  // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABuff_TekArmor_C*                                    Buff;                                                    // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void HasAmmoOrElement(bool* Allowed);
		void ConsumeAmmo(int32_t Amount, int32_t* UpdatedAmount);
		void GetBuff();
		void InitBuff();
		void BPAddedAttachments();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
