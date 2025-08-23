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
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InDesiredRotation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHesperornis_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPModifyDesiredRotation");
		
		AHesperornis_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		params.InDesiredRotation = InDesiredRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateSwimOffsetLocal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::UpdateSwimOffsetLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateSwimOffsetLocal");
		
		AHesperornis_Character_BP_C_UpdateSwimOffsetLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLerpToZ
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::TryToLerpToZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLerpToZ");
		
		AHesperornis_Character_BP_C_TryToLerpToZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Setup Z Lerping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TargetZ                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::SetupZLerping(double TargetZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Setup Z Lerping");
		
		AHesperornis_Character_BP_C_SetupZLerping_Params params {};
		params.TargetZ = TargetZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Init");
		
		AHesperornis_Character_BP_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnClearMountedDino");
		
		AHesperornis_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnSetMountedDino");
		
		AHesperornis_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MoveFwd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MoveFwd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MoveFwd");
		
		AHesperornis_Character_BP_C_MoveFwd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LaunchDir                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& LaunchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DinoShoulderMountedLaunch");
		
		AHesperornis_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.LaunchDir = LaunchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPUnstasis");
		
		AHesperornis_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideFinalWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     outVec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHesperornis_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideFinalWanderLocation");
		
		AHesperornis_Character_BP_C_OverrideFinalWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outVec != nullptr)
			*outVec = params.outVec;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::OverrideRandomWanderLocation(const struct FVector& originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideRandomWanderLocation");
		
		AHesperornis_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		params.originalDestination = originalDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inVec != nullptr)
			*inVec = params.inVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsTargetAFish
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      targetedActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::IsTargetAFish(class AActor* targetedActor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsTargetAFish");
		
		AHesperornis_Character_BP_C_IsTargetAFish_Params params {};
		params.targetedActor = targetedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanAutodrag
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            characterToDrag                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHesperornis_Character_BP_C::BPCanAutodrag(class APrimalCharacter* characterToDrag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanAutodrag");
		
		AHesperornis_Character_BP_C_BPCanAutodrag_Params params {};
		params.characterToDrag = characterToDrag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanDragCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHesperornis_Character_BP_C::BPCanDragCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanDragCharacter");
		
		AHesperornis_Character_BP_C_BPCanDragCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.FishHasVit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::FishHasVit(class APrimalCharacter* Player, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.FishHasVit");
		
		AHesperornis_Character_BP_C_FishHasVit_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsCarriedFishValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::IsCarriedFishValid(class APrimalCharacter* Player, bool* IsValid, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsCarriedFishValid");
		
		AHesperornis_Character_BP_C_IsCarriedFishValid_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Eat Players Carried Food
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::EatPlayersCarriedFood(class APrimalCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Eat Players Carried Food");
		
		AHesperornis_Character_BP_C_EatPlayersCarriedFood_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClientUseIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPClientDoMultiUse");
		
		AHesperornis_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	TArray<struct FMultiUseEntry> AHesperornis_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetMultiUseEntries");
		
		AHesperornis_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		params.MultiUseEntries = MultiUseEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHesperornis_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTryMultiUse");
		
		AHesperornis_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLayEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::TryToLayEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLayEgg");
		
		AHesperornis_Character_BP_C_TryToLayEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.WantsToLayEggs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WantsTo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Regular                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Rare                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::WantsToLayEggs(bool* WantsTo, bool* Regular, bool* Rare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.WantsToLayEggs");
		
		AHesperornis_Character_BP_C_WantsToLayEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WantsTo != nullptr)
			*WantsTo = params.WantsTo;
		if (Regular != nullptr)
			*Regular = params.Regular;
		if (Rare != nullptr)
			*Rare = params.Rare;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsDivingAvailable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::IsDivingAvailable(bool* isAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsDivingAvailable");
		
		AHesperornis_Character_BP_C_IsDivingAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAvailable != nullptr)
			*isAvailable = params.isAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Harvested Valid Fish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::HarvestedValidFish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Harvested Valid Fish");
		
		AHesperornis_Character_BP_C_HarvestedValidFish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Check if Fish Is Valid for Egging
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isValidTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::CheckifFishIsValidforEgging(class AActor** Actor, bool* isValidTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Check if Fish Is Valid for Egging");
		
		AHesperornis_Character_BP_C_CheckifFishIsValidforEgging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (isValidTarget != nullptr)
			*isValidTarget = params.isValidTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UseAimOffsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::UseAimOffsets(bool SetActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UseAimOffsets");
		
		AHesperornis_Character_BP_C_UseAimOffsets_Params params {};
		params.SetActive = SetActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveAnyDamage");
		
		AHesperornis_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerNonDedicated");
		
		AHesperornis_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DivingUp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DivingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DivingUp");
		
		AHesperornis_Character_BP_C_DivingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OnRep_IsDivingUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::OnRep_IsDivingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OnRep_IsDivingUp");
		
		AHesperornis_Character_BP_C_OnRep_IsDivingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerServer");
		
		AHesperornis_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AHesperornis_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetGravityZScale");
		
		AHesperornis_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AHesperornis_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.EndDive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::EndDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.EndDive");
		
		AHesperornis_Character_BP_C_EndDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              attackRangeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool AHesperornis_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BlueprintCanAttack");
		
		AHesperornis_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveTimeLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__FinishedFunc");
		
		AHesperornis_Character_BP_C_DiveTimeLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveTimeLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__UpdateFunc");
		
		AHesperornis_Character_BP_C_DiveTimeLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiEndDive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiEndDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiEndDive");
		
		AHesperornis_Character_BP_C_MultiEndDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPDoAttack");
		
		AHesperornis_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveBeginPlay");
		
		AHesperornis_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.SlowlyRotateZTo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InitialRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHesperornis_Character_BP_C::SlowlyRotateZTo(const struct FRotator& TargetRotation, double Time, const struct FRotator& InitialRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.SlowlyRotateZTo");
		
		AHesperornis_Character_BP_C_SlowlyRotateZTo_Params params {};
		params.TargetRotation = TargetRotation;
		params.Time = Time;
		params.InitialRotation = InitialRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveEvent");
		
		AHesperornis_Character_BP_C_DiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiUnsetPitch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiUnsetPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiUnsetPitch");
		
		AHesperornis_Character_BP_C_MultiUnsetPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveTick");
		
		AHesperornis_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::DiveAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveAttack");
		
		AHesperornis_Character_BP_C_DiveAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateZHeight
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ZHeight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::UpdateZHeight(double ZHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateZHeight");
		
		AHesperornis_Character_BP_C_UpdateZHeight_Params params {};
		params.ZHeight = ZHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiCastBoolToSetZ
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiCastBoolToSetZ()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiCastBoolToSetZ");
		
		AHesperornis_Character_BP_C_MultiCastBoolToSetZ_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.AnimNotify_DiveAttackSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::AnimNotify_DiveAttackSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.AnimNotify_DiveAttackSound");
		
		AHesperornis_Character_BP_C_AnimNotify_DiveAttackSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiStartRotatingUp
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AHesperornis_Character_BP_C::MultiStartRotatingUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiStartRotatingUp");
		
		AHesperornis_Character_BP_C_MultiStartRotatingUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ExecuteUbergraph_Hesperornis_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHesperornis_Character_BP_C::ExecuteUbergraph_Hesperornis_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ExecuteUbergraph_Hesperornis_Character_BP");
		
		AHesperornis_Character_BP_C_ExecuteUbergraph_Hesperornis_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHesperornis_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHesperornis_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hesperornis_Character_BP.Hesperornis_Character_BP_C");
		return ptr;
	}

}


