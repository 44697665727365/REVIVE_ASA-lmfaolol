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
	 * BlueprintGeneratedClass FluidVFX.FluidVFX_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFluidVFX_C : public UBlueprintFunctionLibrary
	{
	public:
		void PlayFluidImpactEffect(const struct FVector& impactLocation, double Radius, const struct FVector& Velocity, class UNiagaraSystem* SystemTemplate, class USoundBase* Sound, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
