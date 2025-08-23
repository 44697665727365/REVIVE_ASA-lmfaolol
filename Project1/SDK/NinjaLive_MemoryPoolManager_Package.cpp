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
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.MemCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumberOfChannels                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResolutionX                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResolutionY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_MemoryPoolManager_C::MemCount(int32_t NumberOfChannels, int32_t ResolutionX, int32_t ResolutionY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.MemCount");
		
		ANinjaLive_MemoryPoolManager_C_MemCount_Params params {};
		params.NumberOfChannels = NumberOfChannels;
		params.ResolutionX = ResolutionX;
		params.ResolutionY = ResolutionY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.SetRenderTargetAttribs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Clamping                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextureRenderTarget2D*                      RT                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_MemoryPoolManager_C::SetRenderTargetAttribs(class UTextureRenderTarget2D* InputPin, bool Clamping, class UTextureRenderTarget2D** RT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.SetRenderTargetAttribs");
		
		ANinjaLive_MemoryPoolManager_C_SetRenderTargetAttribs_Params params {};
		params.InputPin = InputPin;
		params.Clamping = Clamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RT != nullptr)
			*RT = params.RT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANinjaLive_MemoryPoolManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.UserConstructionScript");
		
		ANinjaLive_MemoryPoolManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_MemoryPoolManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveTick");
		
		ANinjaLive_MemoryPoolManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANinjaLive_MemoryPoolManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveBeginPlay");
		
		ANinjaLive_MemoryPoolManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.PrintMemStatus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Consumer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MemConsumption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TakenOrReturned                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_MemoryPoolManager_C::PrintMemStatus(class UObject* Consumer, double MemConsumption, bool TakenOrReturned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.PrintMemStatus");
		
		ANinjaLive_MemoryPoolManager_C_PrintMemStatus_Params params {};
		params.Consumer = Consumer;
		params.MemConsumption = MemConsumption;
		params.TakenOrReturned = TakenOrReturned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ExecuteUbergraph_NinjaLive_MemoryPoolManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_MemoryPoolManager_C::ExecuteUbergraph_NinjaLive_MemoryPoolManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ExecuteUbergraph_NinjaLive_MemoryPoolManager");
		
		ANinjaLive_MemoryPoolManager_C_ExecuteUbergraph_NinjaLive_MemoryPoolManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANinjaLive_MemoryPoolManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANinjaLive_MemoryPoolManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C");
		return ptr;
	}

}


