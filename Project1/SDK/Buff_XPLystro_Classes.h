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
	 * BlueprintGeneratedClass Buff_XPLystro.Buff_XPLystro_C
	 * Size -> 0x0008 (FullSize[0x0B58] - InheritedSize[0x0B50])
	 */
	class ABuff_XPLystro_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		void ExecuteUbergraph_Buff_XPLystro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
