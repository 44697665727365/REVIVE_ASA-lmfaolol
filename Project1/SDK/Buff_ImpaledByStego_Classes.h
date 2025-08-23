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
	 * BlueprintGeneratedClass Buff_ImpaledByStego.Buff_ImpaledByStego_C
	 * Size -> 0x0027 (FullSize[0x0B80] - InheritedSize[0x0B59])
	 */
	class ABuff_ImpaledByStego_C : public ABuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_YL0G[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxDamagePercentagePerSecond;                            // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastTimeDealDamage;                                      // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DamageInterval;                                          // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinDamagePercentagePerSecond;                            // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		void BPDeactivated(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
