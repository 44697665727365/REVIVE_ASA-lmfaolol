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
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::ActivateVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX");
		
		ABuff_BeltTorch_C_ActivateVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FPV                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::UpdateTorchType(bool FPV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType");
		
		ABuff_BeltTorch_C_UpdateTorchType_Params params {};
		params.FPV = FPV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABuff_BeltTorch_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse");
		
		ABuff_BeltTorch_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	TArray<struct FMultiUseEntry> ABuff_BeltTorch_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries");
		
		ABuff_BeltTorch_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      WeaponClassOverride                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::InitializeTorchFromItem(class UPrimalItem* theItem, class UClass* WeaponClassOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem");
		
		ABuff_BeltTorch_C_InitializeTorchFromItem_Params params {};
		params.theItem = theItem;
		params.WeaponClassOverride = WeaponClassOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            theIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::SetFlameColorIndex(int32_t theIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex");
		
		ABuff_BeltTorch_C_SetFlameColorIndex_Params params {};
		params.theIndex = theIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::UpdateTorchFlameColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor");
		
		ABuff_BeltTorch_C_UpdateTorchFlameColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                theColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::SetTorchFlameColor(const struct FLinearColor& theColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor");
		
		ABuff_BeltTorch_C_SetTorchFlameColor_Params params {};
		params.theColor = theColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WeaponClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::InitializeAssociatedWeaponClass(class UClass* WeaponClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass");
		
		ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params params {};
		params.WeaponClass = WeaponClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::UpdateAllTorchColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors");
		
		ABuff_BeltTorch_C_UpdateAllTorchColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 ForPrimalItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::UpdateTorchColorsArray(class UPrimalItem* ForPrimalItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray");
		
		ABuff_BeltTorch_C_UpdateTorchColorsArray_Params params {};
		params.ForPrimalItem = ForPrimalItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                theColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TheColorIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::SetTorchColorByIndex(const struct FLinearColor& theColor, int32_t TheColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex");
		
		ABuff_BeltTorch_C_SetTorchColorByIndex_Params params {};
		params.theColor = theColor;
		params.TheColorIndex = TheColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::ApplyMeshColorization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization");
		
		ABuff_BeltTorch_C_ApplyMeshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bShouldDeactivate                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::ShouldDeactivateBuff(bool* bShouldDeactivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff");
		
		ABuff_BeltTorch_C_ShouldDeactivateBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldDeactivate != nullptr)
			*bShouldDeactivate = params.bShouldDeactivate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::InitializeDefaultTorchWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon");
		
		ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::InitializeTorchMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh");
		
		ABuff_BeltTorch_C_InitializeTorchMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEquipTorchOnDeactivation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::DeactivateBeltTorch(bool bEquipTorchOnDeactivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch");
		
		ABuff_BeltTorch_C_DeactivateBeltTorch_Params params {};
		params.bEquipTorchOnDeactivation = bEquipTorchOnDeactivation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            TorchID1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TorchID2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAreValid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::AreValidTorchIDs(int32_t TorchID1, int32_t TorchID2, bool* bAreValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs");
		
		ABuff_BeltTorch_C_AreValidTorchIDs_Params params {};
		params.TorchID1 = TorchID1;
		params.TorchID2 = TorchID2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAreValid != nullptr)
			*bAreValid = params.bAreValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInitialized                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::InitializeTorchItem(bool* bInitialized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem");
		
		ABuff_BeltTorch_C_InitializeTorchItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bInitialized != nullptr)
			*bInitialized = params.bInitialized;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 TorchItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::InitializeTorchIDs(class UPrimalItem* TorchItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs");
		
		ABuff_BeltTorch_C_InitializeTorchIDs_Params params {};
		params.TorchItem = TorchItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.Server_DeactivateBeltTorch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BeltTorch_C::Server_DeactivateBeltTorch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.Server_DeactivateBeltTorch");
		
		ABuff_BeltTorch_C_Server_DeactivateBeltTorch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer");
		
		ABuff_BeltTorch_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                theColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            theIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::SetTorchColorByIndex_Multicast(const struct FLinearColor& theColor, int32_t theIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast");
		
		ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params params {};
		params.theColor = theColor;
		params.theIndex = theIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::BPOnInputEvent(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent");
		
		ABuff_BeltTorch_C_BPOnInputEvent_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                theColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::SetTorchFlameColor_Multicast(const struct FLinearColor& theColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast");
		
		ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params params {};
		params.theColor = theColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient");
		
		ABuff_BeltTorch_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated");
		
		ABuff_BeltTorch_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_BeltTorch_C::ExecuteUbergraph_Buff_BeltTorch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch");
		
		ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BeltTorch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BeltTorch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C");
		return ptr;
	}

}


