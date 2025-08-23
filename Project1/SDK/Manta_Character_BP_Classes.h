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
	 * BlueprintGeneratedClass Manta_Character_BP.Manta_Character_BP_C
	 * Size -> 0x007A (FullSize[0x3362] - InheritedSize[0x32E8])
	 */
	class AManta_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x32E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Tail;                       // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Body;                       // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Wing_L;                     // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Wing_R;                     // 0x3308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProximitySound_C*                                   ProximitySound;                                          // 0x3310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Manta_C*            DinoCharacterStatus_BP_Manta_C1;                         // 0x3318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            WaterTrailParticle;                                      // 0x3320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		EMovementMode                                              LastMovementMode;                                        // 0x3328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOQ7[0x7];                                   // 0x3329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SplashEmitter;                                           // 0x3330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTrailEffectActive;                                    // 0x3338(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_23RR[0x7];                                   // 0x3339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LandDamageTimeInterval;                                  // 0x3340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LandDamageTimeAmount;                                    // 0x3348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastLandDamageTime;                                      // 0x3350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              LandDamageType;                                          // 0x3358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bParticlesActivated;                                     // 0x3360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ZeroRiderPitch;                                          // 0x3361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BP_InterceptMoveRight(float AxisValue);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Manta_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
