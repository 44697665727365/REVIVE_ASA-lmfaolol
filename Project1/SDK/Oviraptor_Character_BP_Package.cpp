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
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AOviraptor_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPTryMultiUse");
		
		AOviraptor_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClientUseIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOviraptor_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPClientDoMultiUse");
		
		AOviraptor_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	TArray<struct FMultiUseEntry> AOviraptor_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry> MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPGetMultiUseEntries");
		
		AOviraptor_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.GetEggSearchRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             RadiusForGrabbingNearbyEgg                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOviraptor_Character_BP_C::GetEggSearchRadius(double* RadiusForGrabbingNearbyEgg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.GetEggSearchRadius");
		
		AOviraptor_Character_BP_C_GetEggSearchRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadiusForGrabbingNearbyEgg != nullptr)
			*RadiusForGrabbingNearbyEgg = params.RadiusForGrabbingNearbyEgg;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.SearchForEggs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::SearchForEggs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.SearchForEggs");
		
		AOviraptor_Character_BP_C_SearchForEggs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::OnRep_CarriedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem");
		
		AOviraptor_Character_BP_C_OnRep_CarriedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsAnimNotify                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOviraptor_Character_BP_C::FindCarriedEgg(bool bIsAnimNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg");
		
		AOviraptor_Character_BP_C_FindCarriedEgg_Params params {};
		params.bIsAnimNotify = bIsAnimNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::UpdateEggBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost");
		
		AOviraptor_Character_BP_C_UpdateEggBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::BlueprintTamedTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick");
		
		AOviraptor_Character_BP_C_BlueprintTamedTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AOviraptor_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AOviraptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::DoCheckEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg");
		
		AOviraptor_Character_BP_C_DoCheckEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.PerformanceThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AOviraptor_Character_BP_C::PerformanceThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.PerformanceThrottledTick");
		
		AOviraptor_Character_BP_C_PerformanceThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOviraptor_Character_BP_C::ExecuteUbergraph_Oviraptor_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP");
		
		AOviraptor_Character_BP_C_ExecuteUbergraph_Oviraptor_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOviraptor_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOviraptor_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Oviraptor_Character_BP.Oviraptor_Character_BP_C");
		return ptr;
	}

}


