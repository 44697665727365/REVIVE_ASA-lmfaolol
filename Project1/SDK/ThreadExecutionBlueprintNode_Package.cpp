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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncExecutionBlueprintTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncExecutionBlueprintTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.AsyncExecutionBlueprintTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C0330
	 * 		Name   -> Function ThreadExecutionBlueprintNode.Mutex.UnLock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMutex::UnLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.Mutex.UnLock");
		
		UMutex_UnLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C0350
	 * 		Name   -> Function ThreadExecutionBlueprintNode.Mutex.TryLock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMutex::TryLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.Mutex.TryLock");
		
		UMutex_TryLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C0390
	 * 		Name   -> Function ThreadExecutionBlueprintNode.Mutex.Lock
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMutex::Lock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.Mutex.Lock");
		
		UMutex_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMutex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMutex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.Mutex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadAsyncExecBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadAsyncExecBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadAsyncExecBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C07A0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLoop.CreateThreadExecLoop
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Interval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLongTask                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UThreadAsyncExecLoop* UThreadAsyncExecLoop::STATIC_CreateThreadExecLoop(float Interval, bool bLongTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLoop.CreateThreadExecLoop");
		
		UThreadAsyncExecLoop_CreateThreadExecLoop_Params params {};
		params.Interval = Interval;
		params.bLongTask = bLongTask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadAsyncExecLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadAsyncExecLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadAsyncExecLoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C0C00
	 * 		Name   -> Function ThreadExecutionBlueprintNode.SyncExecOnce.CreateSyncExecOnce
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class USyncExecOnce* USyncExecOnce::STATIC_CreateSyncExecOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.SyncExecOnce.CreateSyncExecOnce");
		
		USyncExecOnce_CreateSyncExecOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USyncExecOnce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USyncExecOnce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.SyncExecOnce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1080
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ThreadWait
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecLibrary::STATIC_ThreadWait(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ThreadWait");
		
		UThreadAsyncExecLibrary_ThreadWait_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1440
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickableWhenPaused
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UThreadAsyncExecTick*                        TickHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecLibrary::STATIC_SetTickableWhenPaused(class UThreadAsyncExecTick* TickHandle, bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickableWhenPaused");
		
		UThreadAsyncExecLibrary_SetTickableWhenPaused_Params params {};
		params.TickHandle = TickHandle;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1440
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UThreadAsyncExecTick*                        TickHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecLibrary::STATIC_SetTickable(class UThreadAsyncExecTick* TickHandle, bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickable");
		
		UThreadAsyncExecLibrary_SetTickable_Params params {};
		params.TickHandle = TickHandle;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C15A0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickableWhenPaused
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UThreadAsyncExecTick*                        TickHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThreadAsyncExecLibrary::STATIC_IsTickableWhenPaused(class UThreadAsyncExecTick* TickHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickableWhenPaused");
		
		UThreadAsyncExecLibrary_IsTickableWhenPaused_Params params {};
		params.TickHandle = TickHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C15A0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UThreadAsyncExecTick*                        TickHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThreadAsyncExecLibrary::STATIC_IsTickable(class UThreadAsyncExecTick* TickHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickable");
		
		UThreadAsyncExecLibrary_IsTickable_Params params {};
		params.TickHandle = TickHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C12D0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsGameThread
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UThreadAsyncExecLibrary::STATIC_IsGameThread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsGameThread");
		
		UThreadAsyncExecLibrary_IsGameThread_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1340
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UThreadAsyncExecLibrary::STATIC_GetCurrentThreadName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadName");
		
		UThreadAsyncExecLibrary_GetCurrentThreadName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1410
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UThreadAsyncExecLibrary::STATIC_GetCurrentThreadID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadID");
		
		UThreadAsyncExecLibrary_GetCurrentThreadID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C11A0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ExecIsGameThread
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsInGameThread                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecLibrary::STATIC_ExecIsGameThread(bool* bIsInGameThread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ExecIsGameThread");
		
		UThreadAsyncExecLibrary_ExecIsGameThread_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInGameThread != nullptr)
			*bIsInGameThread = params.bIsInGameThread;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CFC10
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextTick
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UThreadAsyncExecTick*                        TickHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecLibrary::STATIC_BreakNextTick(class UThreadAsyncExecTick* TickHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextTick");
		
		UThreadAsyncExecLibrary_BreakNextTick_Params params {};
		params.TickHandle = TickHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1680
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextLoop
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UThreadAsyncExecLoop*                        LoopHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecLibrary::STATIC_BreakNextLoop(class UThreadAsyncExecLoop* LoopHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextLoop");
		
		UThreadAsyncExecLibrary_BreakNextLoop_Params params {};
		params.LoopHandle = LoopHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadAsyncExecLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadAsyncExecLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1BA0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecOnce.CreateThreadExecOnce
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLongTask                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UThreadAsyncExecOnce* UThreadAsyncExecOnce::STATIC_CreateThreadExecOnce(bool bLongTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecOnce.CreateThreadExecOnce");
		
		UThreadAsyncExecOnce_CreateThreadExecOnce_Params params {};
		params.bLongTask = bLongTask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadAsyncExecOnce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadAsyncExecOnce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadAsyncExecOnce");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> DelegateFunction ThreadExecutionBlueprintNode.ThreadAsyncExecTick.OnTick__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UThreadAsyncExecTick*                        TickHandle                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadAsyncExecTick::OnTick__DelegateSignature(float DeltaSeconds, class UThreadAsyncExecTick* TickHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ThreadExecutionBlueprintNode.ThreadAsyncExecTick.OnTick__DelegateSignature");
		
		UThreadAsyncExecTick_OnTick__DelegateSignature_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.TickHandle = TickHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1F80
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.CreateThreadExecTick
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLongTask                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UThreadAsyncExecTick* UThreadAsyncExecTick::STATIC_CreateThreadExecTick(bool bLongTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.CreateThreadExecTick");
		
		UThreadAsyncExecTick_CreateThreadExecTick_Params params {};
		params.bLongTask = bLongTask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C1F60
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.BreakNextTick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UThreadAsyncExecTick::BreakNextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.BreakNextTick");
		
		UThreadAsyncExecTick_BreakNextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadAsyncExecTick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadAsyncExecTick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadAsyncExecTick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C2420
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UThreadExecDeveloperSettings* UThreadExecDeveloperSettings::STATIC_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings.Get");
		
		UThreadExecDeveloperSettings_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadExecDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadExecDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C2830
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecTicks
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UThreadNodeSubsystem::GetAllThreadExecTicks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecTicks");
		
		UThreadNodeSubsystem_GetAllThreadExecTicks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C29B0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecOnces
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UThreadNodeSubsystem::GetAllThreadExecOnces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecOnces");
		
		UThreadNodeSubsystem_GetAllThreadExecOnces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C2A70
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecNodes
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UThreadNodeSubsystem::GetAllThreadExecNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecNodes");
		
		UThreadNodeSubsystem_GetAllThreadExecNodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C28F0
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecLoops
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UThreadNodeSubsystem::GetAllThreadExecLoops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecLoops");
		
		UThreadNodeSubsystem_GetAllThreadExecLoops_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C2610
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllMutexes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UThreadNodeSubsystem::GetAllMutexes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllMutexes");
		
		UThreadNodeSubsystem_GetAllMutexes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CFC10
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.DestoryMutex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMutex*                                      Mutex                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThreadNodeSubsystem::DestoryMutex(class UMutex* Mutex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.DestoryMutex");
		
		UThreadNodeSubsystem_DestoryMutex_Params params {};
		params.Mutex = Mutex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C2750
	 * 		Name   -> Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.CreateNewMutex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMutex* UThreadNodeSubsystem::CreateNewMutex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.CreateNewMutex");
		
		UThreadNodeSubsystem_CreateNewMutex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadNodeSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadNodeSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThreadExecutionBlueprintNode.ThreadNodeSubsystem");
		return ptr;
	}

}


