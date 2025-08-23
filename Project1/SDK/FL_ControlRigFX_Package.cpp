/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_ControlRigFX.FL_ControlRigFX_C.Spawn Phys Mat VFX
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            Creature                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicalMaterial*                           PhysMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GroundNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNiagaraSystem*                              NS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             AmountMult                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             VelMult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SizeMult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BoneVelocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ControlRigFX_C::STATIC_SpawnPhysMatVFX(const class FString& BoneName, class APrimalCharacter* Creature, class UPhysicalMaterial* PhysMaterial, const struct FVector& GroundNormal, const struct FVector& Location, class UNiagaraSystem* NS, double AmountMult, double VelMult, double SizeMult, bool Attached, const struct FVector& BoneVelocity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_ControlRigFX.FL_ControlRigFX_C.Spawn Phys Mat VFX");
		
		UFL_ControlRigFX_C_SpawnPhysMatVFX_Params params {};
		params.BoneName = BoneName;
		params.Creature = Creature;
		params.PhysMaterial = PhysMaterial;
		params.GroundNormal = GroundNormal;
		params.Location = Location;
		params.NS = NS;
		params.AmountMult = AmountMult;
		params.VelMult = VelMult;
		params.SizeMult = SizeMult;
		params.Attached = Attached;
		params.BoneVelocity = BoneVelocity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CustomTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class APrimalCharacter*                            PrimalCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BoneVelocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ControlRigFX_C::STATIC_ControlRigNotify(const class FName& NotifyName, const class FName& CustomTag, const struct FHitResult& HitResult, class APrimalCharacter* PrimalCharacter, const struct FVector& BoneVelocity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify");
		
		UFL_ControlRigFX_C_ControlRigNotify_Params params {};
		params.NotifyName = NotifyName;
		params.CustomTag = CustomTag;
		params.HitResult = HitResult;
		params.PrimalCharacter = PrimalCharacter;
		params.BoneVelocity = BoneVelocity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_ControlRigFX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_ControlRigFX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FL_ControlRigFX.FL_ControlRigFX_C");
		return ptr;
	}

}


