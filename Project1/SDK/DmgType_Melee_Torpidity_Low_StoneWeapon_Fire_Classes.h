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
	 * BlueprintGeneratedClass DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C
	 * Size -> 0x000F (FullSize[0x0188] - InheritedSize[0x0179])
	 */
	class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C : public UDmgType_Melee_Torpidity_Low_StoneWeapon_C
	{
	public:
		unsigned char                                              UnknownData_PQLF[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxEnflameWeight;                                        // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UClass* OverrideBuffToGiveVictimCharacter(class APrimalCharacter* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
