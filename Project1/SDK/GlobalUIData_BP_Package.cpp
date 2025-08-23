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
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SlotSpan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ExtendedInfoText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FHUDElement                                 OutHUDElement                                              (Parm, OutParm)
	 */
	void UGlobalUIData_BP_C::BPGetHUDElements_Module_FuelOrAmmo_ExtraBar(int32_t SlotOffset, int32_t SlotSpan, int32_t StateIndex, double progress, const class FString& ExtendedInfoText, struct FHUDElement* OutHUDElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar");
		
		UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_ExtraBar_Params params {};
		params.SlotOffset = SlotOffset;
		params.SlotSpan = SlotSpan;
		params.StateIndex = StateIndex;
		params.progress = progress;
		params.ExtendedInfoText = ExtendedInfoText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHUDElement != nullptr)
			*OutHUDElement = params.OutHUDElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MainText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ExtendedInfoText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHUDElement                                 OutHUDElement                                              (Parm, OutParm)
	 */
	void UGlobalUIData_BP_C::BPGetHUDElements_Module_FuelOrAmmo(int32_t SlotIndex, int32_t StateIndex, double progress, const class FString& MainText, const class FString& ExtendedInfoText, class UTexture2D* Icon, struct FHUDElement* OutHUDElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo");
		
		UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_Params params {};
		params.SlotIndex = SlotIndex;
		params.StateIndex = StateIndex;
		params.progress = progress;
		params.MainText = MainText;
		params.ExtendedInfoText = ExtendedInfoText;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHUDElement != nullptr)
			*OutHUDElement = params.OutHUDElement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             StruggleProgressPercent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      RichTextOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHUDElement>                         Elements                                                   (Parm, OutParm)
	 * 		struct FHUDRichTextOverlayData                     OutHUDRichTextOverlay                                      (Parm, OutParm)
	 */
	void UGlobalUIData_BP_C::BPGetHUDElements_Module_Struggle(class APlayerController* ForPC, double StruggleProgressPercent, const class FString& RichTextOverride, class AActor* Instigator, TArray<struct FHUDElement>* Elements, struct FHUDRichTextOverlayData* OutHUDRichTextOverlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle");
		
		UGlobalUIData_BP_C_BPGetHUDElements_Module_Struggle_Params params {};
		params.ForPC = ForPC;
		params.StruggleProgressPercent = StruggleProgressPercent;
		params.RichTextOverride = RichTextOverride;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Elements != nullptr)
			*Elements = params.Elements;
		if (OutHUDRichTextOverlay != nullptr)
			*OutHUDRichTextOverlay = params.OutHUDRichTextOverlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlobalUIData_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalUIData_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GlobalUIData_BP.GlobalUIData_BP_C");
		return ptr;
	}

}


