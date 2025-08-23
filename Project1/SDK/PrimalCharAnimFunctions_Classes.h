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
	 * BlueprintGeneratedClass PrimalCharAnimFunctions.PrimalCharAnimFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimalCharAnimFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateGroundConformingVariables(class APrimalCharacter* PrimalCharacter, bool HasHitTheGroundOnce, class UObject* __WorldContext, bool* IsBeingDragged, bool* IsSwimming, bool* IsFalling, bool* ShouldMarkHasHitGroundonce, bool* Interpolate);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
