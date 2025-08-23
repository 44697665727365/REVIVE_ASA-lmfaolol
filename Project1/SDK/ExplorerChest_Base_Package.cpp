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
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            toCheck                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t AExplorerChest_Base_C::BPGetExtraSpecialBlueprintInt(int32_t toCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt");
		
		AExplorerChest_Base_C_BPGetExtraSpecialBlueprintInt_Params params {};
		params.toCheck = toCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHUD*                                        ForHUD                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AExplorerChest_Base_C::DrawBasicFloatingHUD(class AHUD* ForHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD");
		
		AExplorerChest_Base_C_DrawBasicFloatingHUD_Params params {};
		params.ForHUD = ForHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExplorerChest_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay");
		
		AExplorerChest_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay");
		
		AExplorerChest_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::PlayUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock");
		
		AExplorerChest_Base_C_PlayUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript");
		
		AExplorerChest_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AExplorerChest_Base_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature");
		
		AExplorerChest_Base_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::CheckForPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState");
		
		AExplorerChest_Base_C_CheckForPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::DoUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock");
		
		AExplorerChest_Base_C_DoUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::ShortRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh");
		
		AExplorerChest_Base_C_ShortRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExplorerChest_Base_C::LongRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh");
		
		AExplorerChest_Base_C_LongRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AExplorerChest_Base_C::ExecuteUbergraph_ExplorerChest_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base");
		
		AExplorerChest_Base_C_ExecuteUbergraph_ExplorerChest_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExplorerChest_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExplorerChest_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplorerChest_Base.ExplorerChest_Base_C");
		return ptr;
	}

}


