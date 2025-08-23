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
	 * BlueprintGeneratedClass Buff_StegoRider_HardenedMode.Buff_StegoRider_HardenedMode_C
	 * Size -> 0x000F (FullSize[0x0B68] - InheritedSize[0x0B59])
	 */
	class ABuff_StegoRider_HardenedMode_C : public ABuff_StegoRider_C
	{
	public:
		unsigned char                                              UnknownData_I2NY[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DamageReductionPercentage;                               // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
