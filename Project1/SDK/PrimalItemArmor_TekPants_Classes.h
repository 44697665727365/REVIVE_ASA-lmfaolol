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
	 * BlueprintGeneratedClass PrimalItemArmor_TekPants.PrimalItemArmor_TekPants_C
	 * Size -> 0x003F (FullSize[0x0F58] - InheritedSize[0x0F19])
	 */
	class UPrimalItemArmor_TekPants_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_SLHV[0x7];                                   // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SoundOverrideProneStart;                                 // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideProneEnd;                                   // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideProneStep;                                  // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideCrouchStart;                                // 0x0F38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideCrouchEnd;                                  // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              CannotUseAbilityDescriptionaddon;                        // 0x0F48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		class USoundBase* OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32_t soundState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
