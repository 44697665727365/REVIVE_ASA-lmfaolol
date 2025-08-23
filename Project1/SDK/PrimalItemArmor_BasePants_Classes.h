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
	 * BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
	 * Size -> 0x0028 (FullSize[0x0EE0] - InheritedSize[0x0EB8])
	 */
	class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
	{
	public:
		class USoundBase*                                          SoundOverrideProneStart;                                 // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideProneEnd;                                   // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideProneStep;                                  // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideCrouchStart;                                // 0x0ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoundOverrideCrouchEnd;                                  // 0x0ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class USoundBase* OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32_t soundState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
