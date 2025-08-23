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
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.AttachWindSourceComps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::AttachWindSourceComps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.AttachWindSourceComps");
		
		ASupplyCrateBaseBP_C_AttachWindSourceComps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	TArray<struct FMultiUseEntry> ASupplyCrateBaseBP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPGetMultiUseEntries");
		
		ASupplyCrateBaseBP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UpdateCollisionComps
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateBaseBP_C::UpdateCollisionComps(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UpdateCollisionComps");
		
		ASupplyCrateBaseBP_C_UpdateCollisionComps_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UpdateCloudEmissive
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::UpdateCloudEmissive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UpdateCloudEmissive");
		
		ASupplyCrateBaseBP_C_UpdateCloudEmissive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.OnRep_bWasOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::OnRep_bWasOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.OnRep_bWasOpened");
		
		ASupplyCrateBaseBP_C_OnRep_bWasOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.GetComponentsToMoveForMatinee
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentsToMove                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateBaseBP_C::GetComponentsToMoveForMatinee(class USceneComponent** ComponentsToMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.GetComponentsToMoveForMatinee");
		
		ASupplyCrateBaseBP_C_GetComponentsToMoveForMatinee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentsToMove != nullptr)
			*ComponentsToMove = params.ComponentsToMove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Get Matinee Rotation for Alpha and Segment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FRotator>                            Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Segmant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRotator ASupplyCrateBaseBP_C::GetMatineeRotationforAlphaandSegment(double Alpha, TArray<struct FRotator>* Array, int32_t Segmant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Get Matinee Rotation for Alpha and Segment");
		
		ASupplyCrateBaseBP_C_GetMatineeRotationforAlphaandSegment_Params params {};
		params.Alpha = Alpha;
		params.Segmant = Segmant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Get Matinee Position for Alpha and Segment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Segmant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ASupplyCrateBaseBP_C::GetMatineePositionforAlphaandSegment(double Alpha, TArray<struct FVector>* Array, int32_t Segmant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Get Matinee Position for Alpha and Segment");
		
		ASupplyCrateBaseBP_C_GetMatineePositionforAlphaandSegment_Params params {};
		params.Alpha = Alpha;
		params.Segmant = Segmant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UserConstructionScript");
		
		ASupplyCrateBaseBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.OnRep_FinishedCrateMovement
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::OnRep_FinishedCrateMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.OnRep_FinishedCrateMovement");
		
		ASupplyCrateBaseBP_C_OnRep_FinishedCrateMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimalItem*                                 theItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEquipItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateBaseBP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPNotifyInventoryItemChange");
		
		ASupplyCrateBaseBP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Multi_PlayOpenAnim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::Multi_PlayOpenAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Multi_PlayOpenAnim");
		
		ASupplyCrateBaseBP_C_Multi_PlayOpenAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ReceiveBeginPlay");
		
		ASupplyCrateBaseBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ReceiveDestroyed");
		
		ASupplyCrateBaseBP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateBaseBP_C::BPPlayDying(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPPlayDying");
		
		ASupplyCrateBaseBP_C_BPPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.MoveToLandTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASupplyCrateBaseBP_C::MoveToLandTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.MoveToLandTick");
		
		ASupplyCrateBaseBP_C_MoveToLandTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ExecuteUbergraph_SupplyCrateBaseBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASupplyCrateBaseBP_C::ExecuteUbergraph_SupplyCrateBaseBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ExecuteUbergraph_SupplyCrateBaseBP");
		
		ASupplyCrateBaseBP_C_ExecuteUbergraph_SupplyCrateBaseBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASupplyCrateBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASupplyCrateBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP.SupplyCrateBaseBP_C");
		return ptr;
	}

}


