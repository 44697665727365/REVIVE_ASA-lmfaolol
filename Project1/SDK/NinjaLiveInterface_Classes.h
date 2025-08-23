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
	 * BlueprintGeneratedClass NinjaLiveInterface.NinjaLiveInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNinjaLiveInterface_C : public UInterface
	{
	public:
		void LiveFluidParams(double BrushSize);
		void LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
