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
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.GetWeaponMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      OutMesh                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetWeaponMesh(class USkeletalMeshComponent** OutMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetWeaponMesh");
		
		ABuff_TekArmor_C_GetWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMesh != nullptr)
			*OutMesh = params.OutMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldSet                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WithValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::HideBoostIcon(bool* ShouldSet, bool* WithValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.HideBoostIcon");
		
		ABuff_TekArmor_C_HideBoostIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldSet != nullptr)
			*ShouldSet = params.ShouldSet;
		if (WithValue != nullptr)
			*WithValue = params.WithValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  AddTransform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::SetJetpackOffset(const struct FTransform& AddTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetJetpackOffset");
		
		ABuff_TekArmor_C_SetJetpackOffset_Params params {};
		params.AddTransform = AddTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasEngrams                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::HasRequiredEngrams(bool* HasEngrams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.HasRequiredEngrams");
		
		ABuff_TekArmor_C_HasRequiredEngrams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasEngrams != nullptr)
			*HasEngrams = params.HasEngrams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsDisabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsTekBuffDisabled(bool* bIsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsTekBuffDisabled");
		
		ABuff_TekArmor_C_IsTekBuffDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsDisabled != nullptr)
			*bIsDisabled = params.bIsDisabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isrestricted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::checkgenesisrestrictionsforplayer(class APrimalCharacter* Player, bool* isrestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.check genesis restrictions for player");
		
		ABuff_TekArmor_C_checkgenesisrestrictionsforplayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isrestricted != nullptr)
			*isrestricted = params.isrestricted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.BPActivated");
		
		ABuff_TekArmor_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               restricted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsRestrictedBecauseOfGenesisMap(bool* restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Is Restricted Because Of Genesis Map");
		
		ABuff_TekArmor_C_IsRestrictedBecauseOfGenesisMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (restricted != nullptr)
			*restricted = params.restricted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetIsPlayerinSealedSpace(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get Is Player in SealedSpace");
		
		ABuff_TekArmor_C_GetIsPlayerinSealedSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               OutValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsAbilityValid(bool* OutValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsAbilityValid");
		
		ABuff_TekArmor_C_IsAbilityValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValid != nullptr)
			*OutValid = params.OutValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             waterVolumeTopZ                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsPlayerInWaterVolume(bool* Result, double* waterVolumeTopZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerInWaterVolume");
		
		ABuff_TekArmor_C_IsPlayerInWaterVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (waterVolumeTopZ != nullptr)
			*waterVolumeTopZ = params.waterVolumeTopZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             EmitterTemplate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  InTransform                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             PitchMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::SpawnFX(class UParticleSystem* EmitterTemplate, struct FTransform* InTransform, class USoundBase* Sound, double VolumeMultiplier, double PitchMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SpawnFX");
		
		ABuff_TekArmor_C_SpawnFX_Params params {};
		params.EmitterTemplate = EmitterTemplate;
		params.Sound = Sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTransform != nullptr)
			*InTransform = params.InTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::ShouldDamageActor(class AActor* Victim, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Should Damage Actor");
		
		ABuff_TekArmor_C_ShouldDamageActor_Params params {};
		params.Victim = Victim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::ResetPlayerFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ResetPlayerFOV");
		
		ABuff_TekArmor_C_ResetPlayerFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::SetTekIgnoreLookInput(bool newIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput");
		
		ABuff_TekArmor_C_SetTekIgnoreLookInput_Params params {};
		params.newIgnore = newIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::SetTekIgnoreMoveInput(bool newIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput");
		
		ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params params {};
		params.newIgnore = newIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_TekArmor_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.AllowPostProcessEffect");
		
		ABuff_TekArmor_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.BPDeactivated");
		
		ABuff_TekArmor_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::ResetTargetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ResetTargetFOV");
		
		ABuff_TekArmor_C_ResetTargetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsWarpingFOV(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsWarping FOV");
		
		ABuff_TekArmor_C_IsWarpingFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABuff_TekArmor_C*                            ref                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetDefaultTekBuff(class ABuff_TekArmor_C** ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get DefaultTekBuff");
		
		ABuff_TekArmor_C_GetDefaultTekBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ref != nullptr)
			*ref = params.ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ref                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetDefaultPlayer(class APrimalCharacter** ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetDefaultPlayer");
		
		ABuff_TekArmor_C_GetDefaultPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ref != nullptr)
			*ref = params.ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            elementCost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::Client_ConsumeElementAfterTime(double DeltaTime, int32_t elementCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Client_Consume Element After Time");
		
		ABuff_TekArmor_C_Client_ConsumeElementAfterTime_Params params {};
		params.DeltaTime = DeltaTime;
		params.elementCost = elementCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.BPSetupForInstigator");
		
		ABuff_TekArmor_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsPlayerGrounded(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsPlayerGrounded");
		
		ABuff_TekArmor_C_IsPlayerGrounded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterPlayerCameraManager*                 ref                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetRefOwningPlayerCameraManager(class AShooterPlayerCameraManager** ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get RefOwningPlayer Camera Manager");
		
		ABuff_TekArmor_C_GetRefOwningPlayerCameraManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ref != nullptr)
			*ref = params.ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             intensityRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               warpIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::UpdatePlayerFOV(double intensityRatio, bool warpIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.UpdatePlayerFOV");
		
		ABuff_TekArmor_C_UpdatePlayerFOV_Params params {};
		params.intensityRatio = intensityRatio;
		params.warpIn = warpIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCharacterMovementComponent*                 Movement                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetRefOwningPlayerMovement(class UCharacterMovementComponent** Movement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerMovement");
		
		ABuff_TekArmor_C_GetRefOwningPlayerMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Movement != nullptr)
			*Movement = params.Movement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterPlayerController*                    Controller                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetRefOwningPlayerController(class AShooterPlayerController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Get Ref Owning PlayerController");
		
		ABuff_TekArmor_C_GetRefOwningPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetRef_OwningPlayer(class AShooterCharacter** Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetRef_OwningPlayer");
		
		ABuff_TekArmor_C_GetRef_OwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::AreAnyTekAbilitiesActive(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.AreAnyTekAbilitiesActive");
		
		ABuff_TekArmor_C_AreAnyTekAbilitiesActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      ArmorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::IsTekArmorUsingAbility(unsigned char ArmorType, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.IsTekArmorUsingAbility?");
		
		ABuff_TekArmor_C_IsTekArmorUsingAbility_Params params {};
		params.ArmorType = ArmorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::DisplayTekArmorMessage(const class FString& Message, class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.DisplayTekArmorMessage");
		
		ABuff_TekArmor_C_DisplayTekArmorMessage_Params params {};
		params.Message = Message;
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::SetCastedArmorPieceRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.SetCastedArmorPieceRef");
		
		ABuff_TekArmor_C_SetCastedArmorPieceRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItemArmor_Base_Tek_C*                 tekArmorRef                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.GetRelatedTekArmorRef");
		
		ABuff_TekArmor_C_GetRelatedTekArmorRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tekArmorRef != nullptr)
			*tekArmorRef = params.tekArmorRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNotifyIfOutOfElement                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::CanUseTekAbility(bool bNotifyIfOutOfElement, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.CanUseTekAbility");
		
		ABuff_TekArmor_C_CanUseTekAbility_Params params {};
		params.bNotifyIfOutOfElement = bNotifyIfOutOfElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_2");
		
		ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1");
		
		ABuff_TekArmor_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalEquipmentType                               ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::Equipped_SetToMaxElement(EPrimalEquipmentType ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Equipped_SetToMaxElement");
		
		ABuff_TekArmor_C_Equipped_SetToMaxElement_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             ParticleTemplate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SoundVolume                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             soundPitch                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::Multi_SpawnFX(class UParticleSystem* ParticleTemplate, class USoundBase* Sound, const struct FTransform& Transform, double SoundVolume, double soundPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Multi_SpawnFX");
		
		ABuff_TekArmor_C_Multi_SpawnFX_Params params {};
		params.ParticleTemplate = ParticleTemplate;
		params.Sound = Sound;
		params.Transform = Transform;
		params.SoundVolume = SoundVolume;
		params.soundPitch = soundPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmountToDecreaseBy                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPrimalEquipmentType                               ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::Equipped_TryToDecreaseElement(int32_t AmountToDecreaseBy, EPrimalEquipmentType ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Equipped_TryToDecreaseElement");
		
		ABuff_TekArmor_C_Equipped_TryToDecreaseElement_Params params {};
		params.AmountToDecreaseBy = AmountToDecreaseBy;
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::CheckForArmorRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.CheckForArmorRef");
		
		ABuff_TekArmor_C_CheckForArmorRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::Server_SetTekAbilityActive(bool newActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.Server_SetTekAbilityActive");
		
		ABuff_TekArmor_C_Server_SetTekAbilityActive_Params params {};
		params.newActive = newActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::RateLimitedGenesisAbilityWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.RateLimitedGenesisAbilityWarning");
		
		ABuff_TekArmor_C_RateLimitedGenesisAbilityWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ReceiveBeginPlay");
		
		ABuff_TekArmor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_TekArmor_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ReceiveDestroyed");
		
		ABuff_TekArmor_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::ExecuteUbergraph_Buff_TekArmor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_TekArmor.Buff_TekArmor_C.ExecuteUbergraph_Buff_TekArmor");
		
		ABuff_TekArmor_C_ExecuteUbergraph_Buff_TekArmor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor.Buff_TekArmor_C");
		return ptr;
	}

}


