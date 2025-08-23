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
	 * BlueprintGeneratedClass FL_ControlRigFX.FL_ControlRigFX_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_ControlRigFX_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SpawnPhysMatVFX(const class FString& BoneName, class APrimalCharacter* Creature, class UPhysicalMaterial* PhysMaterial, const struct FVector& GroundNormal, const struct FVector& Location, class UNiagaraSystem* NS, double AmountMult, double VelMult, double SizeMult, bool Attached, const struct FVector& BoneVelocity, class UObject* __WorldContext);
		void STATIC_ControlRigNotify(const class FName& NotifyName, const class FName& CustomTag, const struct FHitResult& HitResult, class APrimalCharacter* PrimalCharacter, const struct FVector& BoneVelocity, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
