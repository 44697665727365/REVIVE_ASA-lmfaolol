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
	 * BlueprintGeneratedClass Weap_Torch_Base.Weap_Torch_Base_C
	 * Size -> 0x0041 (FullSize[0x1081] - InheritedSize[0x1040])
	 */
	class AWeap_Torch_Base_C : public AShooterWeapon_Melee
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              BeltTorchBuff;                                           // 0x1048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowPutOnBelt;                                         // 0x1050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEquipped;                                             // 0x1051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBeingDestroyed;                                         // 0x1052(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQUN[0x5];                                   // 0x1053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     NiagaraTime;                                             // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeToExtinguish;                                        // 0x1060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeToRampUp;                                            // 0x1068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         RampUpCurve;                                             // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ExtinguishCurve;                                         // 0x1078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldTickFire;                                         // 0x1080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanUseNiagaraFire(bool* bCanUse);
		void GetFPVNiagaraFire(class UNiagaraComponent** FPVNiagaraComponent);
		void GetTPVNiagaraFire(class UNiagaraComponent** TPVNiagaraComponent);
		bool BPCanEquip(class AShooterCharacter* ByCharacter);
		void StartSecondaryActionEvent();
		void Server_AttemptPutOnBelt();
		void ReceiveBeginPlay();
		void StartUnequipEvent();
		void FireTick();
		void BPAppliedPrimalItemToWeapon();
		void OnInstigatorSleepingStateChanged();
		void ExecuteUbergraph_Weap_Torch_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
