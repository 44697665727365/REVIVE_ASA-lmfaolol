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
	 * BlueprintGeneratedClass Buff_StegoBackplate.Buff_StegoBackplate_C
	 * Size -> 0x0020 (FullSize[0x0B79] - InheritedSize[0x0B59])
	 */
	class ABuff_StegoBackplate_C : public ABuff_Base_C
	{
	public:
		E_StegoBackplateMode                                       StegoBackplateMode;                                      // 0x0B59(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ALW0[0x6];                                   // 0x0B5A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HardenedPlateIcon;                                       // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          SharpendPlateIcon;                                       // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          HeavyPlateIcon;                                          // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       NewVar;                                                  // 0x0B78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification);
		struct FStatusValueModifierDescription GetBuffDescription();
		void SetBackplateMode(E_StegoBackplateMode StegoBackplateMode);
		void GetBackplateMode(E_StegoBackplateMode* BackplateMode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
