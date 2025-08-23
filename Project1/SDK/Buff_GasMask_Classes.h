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
	 * BlueprintGeneratedClass Buff_GasMask.Buff_GasMask_C
	 * Size -> 0x0000 (FullSize[0x0B59] - InheritedSize[0x0B59])
	 */
	class ABuff_GasMask_C : public ABuff_Base_C
	{
	public:
		bool AllowPostProcessEffect();
		float BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
