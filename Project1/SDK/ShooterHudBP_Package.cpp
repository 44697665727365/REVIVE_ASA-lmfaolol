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
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.BPCustomAddHUDNotification
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      NotificationString                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FColor                                      NotificationColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          NotificationMaterial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  NotificationTexture                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DisplayScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSingleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MessageTypeID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AShooterHudBP_C::BPCustomAddHUDNotification(const class FString& NotificationString, const struct FColor& NotificationColor, class UMaterialInterface* NotificationMaterial, class UTexture2D* NotificationTexture, float DisplayTime, float DisplayScale, bool bIsSingleton, int32_t MessageTypeID, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.BPCustomAddHUDNotification");
		
		AShooterHudBP_C_BPCustomAddHUDNotification_Params params {};
		params.NotificationString = NotificationString;
		params.NotificationColor = NotificationColor;
		params.NotificationMaterial = NotificationMaterial;
		params.NotificationTexture = NotificationTexture;
		params.DisplayTime = DisplayTime;
		params.DisplayScale = DisplayScale;
		params.bIsSingleton = bIsSingleton;
		params.MessageTypeID = MessageTypeID;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FExplorerNoteEntry                          ExplorerNote                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FNameScalarPair>                     ScalarMaterialParams                                       (Parm, OutParm)
	 * 		TArray<struct FNameColorPair>                      ColorMaterialParams                                        (Parm, OutParm)
	 */
	void AShooterHudBP_C::GetAdditionalExplorerNoteDynamicMaterialParams(const struct FExplorerNoteEntry& ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams");
		
		AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params params {};
		params.ExplorerNote = ExplorerNote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScalarMaterialParams != nullptr)
			*ScalarMaterialParams = params.ScalarMaterialParams;
		if (ColorMaterialParams != nullptr)
			*ColorMaterialParams = params.ColorMaterialParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.BPForceReinitUI
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AShooterHudBP_C::BPForceReinitUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.BPForceReinitUI");
		
		AShooterHudBP_C_BPForceReinitUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShooterHudBP_C::ExecuteUbergraph_ShooterHudBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP");
		
		AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShooterHudBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterHudBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C");
		return ptr;
	}

}


