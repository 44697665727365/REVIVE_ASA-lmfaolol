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
	 * BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
	 * Size -> 0x0020 (FullSize[0x0B70] - InheritedSize[0x0B50])
	 */
	class ABuff_OverrideVelocity_C : public APrimalBuff
	{
	public:
		struct FVector                                             NewFallVelocity;                                         // 0x0B50(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxNewFallVelocity;                                      // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPDeactivated(class AActor* ForInstigator);
		struct FVector BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
