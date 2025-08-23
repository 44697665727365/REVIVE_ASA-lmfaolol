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
	 * BlueprintGeneratedClass PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C
	 * Size -> 0x0012 (FullSize[0x0EC2] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponSpyglass_C : public UPrimalItemWeaponGenericNoStats_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AShooterPlayerController*                            ForPC;                                                   // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UsedWeapon;                                              // 0x0EC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldTrack;                                             // 0x0EC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanUseItemPing();
		bool BPPreventWeaponEquip();
		void TimerDoubleTap();
		void TimerUsePingWheel();
		void LocalUseStartHoldBP(class AShooterPlayerController* ForPC);
		void LocalUseItemReleaseBP(class AShooterPlayerController* ForPC);
		void LocalUseAfterHoldBP(class AShooterPlayerController* ForPC);
		void BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void ExecuteUbergraph_PrimalItem_WeaponSpyglass(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
