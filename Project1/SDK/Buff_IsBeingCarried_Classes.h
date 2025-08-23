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
	 * BlueprintGeneratedClass Buff_IsBeingCarried.Buff_IsBeingCarried_C
	 * Size -> 0x0014 (FullSize[0x0B6D] - InheritedSize[0x0B59])
	 */
	class ABuff_IsBeingCarried_C : public ABuff_Base_C
	{
	public:
		bool                                                       IsCharacterAttached;                                     // 0x0B59(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TNBZ[0x6];                                   // 0x0B5A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WeightLimit;                                             // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanCarryFlyer;                                           // 0x0B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanCarryUnconscious;                                     // 0x0B69(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCarryDinoDismountRider;                                 // 0x0B6A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCarryDinoInsteadOfRider;                                // 0x0B6B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRequireLineOfSightToTarget;                             // 0x0B6C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPSetupForInstigator(class AActor* ForInstigator);
		void CanGrabWaterDino(class APrimalDinoCharacter* DinoRef, bool* Result);
		void CheckAttachmentAndEvaluate();
		void BuffTickClient(float DeltaTime);
		void BuffTickServer(float DeltaTime);
		bool BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, class AActor* DamageCauser);
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
