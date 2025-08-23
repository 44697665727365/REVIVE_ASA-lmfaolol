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
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FWeaponAnim                                 Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		float                                              InPlayRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPlayBothFirstAndThirdPerson                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReplicate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReplicateToInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPauseOnFinish1P                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bForceTickPoseAndServerUpdateMesh                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bForceTickPoseOnServer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify");
		
		AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params params {};
		params.Animation = Animation;
		params.InPlayRate = InPlayRate;
		params.bPlayBothFirstAndThirdPerson = bPlayBothFirstAndThirdPerson;
		params.bReplicate = bReplicate;
		params.bReplicateToInstigator = bReplicateToInstigator;
		params.bPauseOnFinish1P = bPauseOnFinish1P;
		params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
		params.bForceTickPoseOnServer = bForceTickPoseOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWeapClimbPick_C::StartUnequipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent");
		
		AWeapClimbPick_C_StartUnequipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              inFOV                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AWeapClimbPick_C::BPModifyFOV(float inFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV");
		
		AWeapClimbPick_C_BPModifyFOV_Params params {};
		params.inFOV = inFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewSourcePoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapClimbPick_C::SetSourceLocation(class UParticleSystemComponent* ParticleSystem, const struct FVector& NewSourcePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation");
		
		AWeapClimbPick_C_SetSourceLocation_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.NewSourcePoint = NewSourcePoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             NewTemplate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapClimbPick_C::SetTemplateTo(class UParticleSystemComponent* ParticleSystem, class UParticleSystem* NewTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo");
		
		AWeapClimbPick_C_SetTemplateTo_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.NewTemplate = NewTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bClimbing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AnchorPosition                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AnchorNormal                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanClimb                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanLand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ClimbLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ClimbNormal                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHudVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapClimbPick_C::BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool bCanLand, const struct FVector& ClimbLocation, const struct FVector& ClimbNormal, bool bHudVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget");
		
		AWeapClimbPick_C_BPUpdateClimbTarget_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.bClimbing = bClimbing;
		params.AnchorPosition = AnchorPosition;
		params.AnchorNormal = AnchorNormal;
		params.bCanClimb = bCanClimb;
		params.bCanLand = bCanLand;
		params.ClimbLocation = ClimbLocation;
		params.ClimbNormal = ClimbNormal;
		params.bHudVisible = bHudVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapClimbPick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapClimbPick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C");
		return ptr;
	}

}


