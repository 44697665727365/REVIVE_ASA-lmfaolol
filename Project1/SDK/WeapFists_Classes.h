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
	 * BlueprintGeneratedClass WeapFists.WeapFists_C
	 * Size -> 0x0010 (FullSize[0x1050] - InheritedSize[0x1040])
	 */
	class AWeapFists_C : public AShooterWeapon_Melee
	{
	public:
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base1;                      // 0x1040(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base;                       // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class FName BPOverrideMeleeSwingSocket(const class FName& FromSocket);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
