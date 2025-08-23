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
	 * BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C
	 * Size -> 0x0010 (FullSize[0x5D50] - InheritedSize[0x5D40])
	 */
	class APlayerCameraBlueprint_C : public AShooterPlayerCameraManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x5D40(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AWaterInteractionBP_C*                               FluidInteractionManager;                                 // 0x5D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveDestroyed();
		void SpawnWaterInteractionCompAndAttachToCamera();
		void ExecuteUbergraph_PlayerCameraBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
