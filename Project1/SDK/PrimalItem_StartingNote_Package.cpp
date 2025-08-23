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
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPCanUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreCooldown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPrimalItem_StartingNote_C::BPCanUse(bool bIgnoreCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPCanUse");
		
		UPrimalItem_StartingNote_C_BPCanUse_Params params {};
		params.bIgnoreCooldown = bIgnoreCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvas*                                     ItemCanvas                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ItemCanvasSize                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ItemCanvasScale                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bItemEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TheTintColor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_StartingNote_C::BPDrawItemIcon(class UCanvas* ItemCanvas, const struct FVector2D& ItemCanvasSize, const struct FVector2D& ItemCanvasScale, bool bItemEnabled, const struct FLinearColor& TheTintColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon");
		
		UPrimalItem_StartingNote_C_BPDrawItemIcon_Params params {};
		params.ItemCanvas = ItemCanvas;
		params.ItemCanvasSize = ItemCanvasSize;
		params.ItemCanvasScale = ItemCanvasScale;
		params.bItemEnabled = bItemEnabled;
		params.TheTintColor = TheTintColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class UTexture2D* UPrimalItem_StartingNote_C::BPGetItemIcon(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon");
		
		UPrimalItem_StartingNote_C_BPGetItemIcon_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLocal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_StartingNote_C::IsLocalImplant(class AShooterPlayerController* ForPC, bool* IsLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant");
		
		UPrimalItem_StartingNote_C_IsLocalImplant_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLocal != nullptr)
			*IsLocal = params.IsLocal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ItemNameIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPrimalItem_StartingNote_C::BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName");
		
		UPrimalItem_StartingNote_C_BPGetItemName_Params params {};
		params.ItemNameIn = ItemNameIn;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<double>                                     SurvData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_StartingNote_C::GetSurvivalQuotientString(TArray<double>* SurvData, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String");
		
		UPrimalItem_StartingNote_C_GetSurvivalQuotientString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SurvData != nullptr)
			*SurvData = params.SurvData;
		if (OutString != nullptr)
			*OutString = params.OutString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InDescription                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bGetLongDescription                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPrimalItem_StartingNote_C::BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription");
		
		UPrimalItem_StartingNote_C_BPGetItemDescription_Params params {};
		params.InDescription = InDescription;
		params.bGetLongDescription = bGetLongDescription;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWorld*                                      OptionalInitWorld                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_StartingNote_C::BPPreInitializeItem(class UWorld* OptionalInitWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem");
		
		UPrimalItem_StartingNote_C_BPPreInitializeItem_Params params {};
		params.OptionalInitWorld = OptionalInitWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPrimalItem_StartingNote_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BlueprintUsed");
		
		UPrimalItem_StartingNote_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPOnUpdatedItemContextMenu
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPrimalItem_StartingNote_C::BPOnUpdatedItemContextMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPOnUpdatedItemContextMenu");
		
		UPrimalItem_StartingNote_C_BPOnUpdatedItemContextMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_StartingNote_C::ExecuteUbergraph_PrimalItem_StartingNote(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote");
		
		UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_StartingNote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_StartingNote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_StartingNote.PrimalItem_StartingNote_C");
		return ptr;
	}

}


