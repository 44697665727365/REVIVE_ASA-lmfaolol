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
	 * BlueprintGeneratedClass Buff_SummoningSickness.Buff_SummoningSickness_C
	 * Size -> 0x0000 (FullSize[0x0B59] - InheritedSize[0x0B59])
	 */
	class ABuff_SummoningSickness_C : public ABuff_Base_C
	{
	public:
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void BPPreSetupForInstigator(class AActor* ForInstigator);
		float BuffAdjustDamage(float Damage, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
