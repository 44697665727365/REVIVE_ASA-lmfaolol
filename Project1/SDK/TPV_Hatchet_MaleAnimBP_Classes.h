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
	 * AnimBlueprintGeneratedClass TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C
	 * Size -> 0x0018 (FullSize[0x170C0] - InheritedSize[0x170A8])
	 */
	class UTPV_Hatchet_MaleAnimBP_C : public UBaseHumanAnimBP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x170A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UsingAltAim;                                             // 0x170B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O6C2[0x7];                                   // 0x170B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   ShooterCharRef;                                          // 0x170B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateLayeringValues();
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_TPV_Hatchet_MaleAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
