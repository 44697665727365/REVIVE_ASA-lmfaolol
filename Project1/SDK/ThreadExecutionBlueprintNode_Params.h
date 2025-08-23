#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ThreadExecutionBlueprintNode.Mutex.UnLock
	 */
	struct UMutex_UnLock_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.Mutex.TryLock
	 */
	struct UMutex_TryLock_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.Mutex.Lock
	 */
	struct UMutex_Lock_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLoop.CreateThreadExecLoop
	 */
	struct UThreadAsyncExecLoop_CreateThreadExecLoop_Params
	{
	public:
		float                                                      Interval;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLongTask;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8L0N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UThreadAsyncExecLoop*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.SyncExecOnce.CreateSyncExecOnce
	 */
	struct USyncExecOnce_CreateSyncExecOnce_Params
	{
	public:
		class USyncExecOnce*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ThreadWait
	 */
	struct UThreadAsyncExecLibrary_ThreadWait_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickableWhenPaused
	 */
	struct UThreadAsyncExecLibrary_SetTickableWhenPaused_Params
	{
	public:
		class UThreadAsyncExecTick*                                TickHandle;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewValue;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickable
	 */
	struct UThreadAsyncExecLibrary_SetTickable_Params
	{
	public:
		class UThreadAsyncExecTick*                                TickHandle;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewValue;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickableWhenPaused
	 */
	struct UThreadAsyncExecLibrary_IsTickableWhenPaused_Params
	{
	public:
		class UThreadAsyncExecTick*                                TickHandle;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickable
	 */
	struct UThreadAsyncExecLibrary_IsTickable_Params
	{
	public:
		class UThreadAsyncExecTick*                                TickHandle;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsGameThread
	 */
	struct UThreadAsyncExecLibrary_IsGameThread_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadName
	 */
	struct UThreadAsyncExecLibrary_GetCurrentThreadName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadID
	 */
	struct UThreadAsyncExecLibrary_GetCurrentThreadID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ExecIsGameThread
	 */
	struct UThreadAsyncExecLibrary_ExecIsGameThread_Params
	{
	public:
		bool                                                       bIsInGameThread;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextTick
	 */
	struct UThreadAsyncExecLibrary_BreakNextTick_Params
	{
	public:
		class UThreadAsyncExecTick*                                TickHandle;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextLoop
	 */
	struct UThreadAsyncExecLibrary_BreakNextLoop_Params
	{
	public:
		class UThreadAsyncExecLoop*                                LoopHandle;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecOnce.CreateThreadExecOnce
	 */
	struct UThreadAsyncExecOnce_CreateThreadExecOnce_Params
	{
	public:
		bool                                                       bLongTask;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JJXD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UThreadAsyncExecOnce*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ThreadExecutionBlueprintNode.ThreadAsyncExecTick.OnTick__DelegateSignature
	 */
	struct UThreadAsyncExecTick_OnTick__DelegateSignature_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WIX0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UThreadAsyncExecTick*                                TickHandle;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.CreateThreadExecTick
	 */
	struct UThreadAsyncExecTick_CreateThreadExecTick_Params
	{
	public:
		bool                                                       bLongTask;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TP88[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UThreadAsyncExecTick*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.BreakNextTick
	 */
	struct UThreadAsyncExecTick_BreakNextTick_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings.Get
	 */
	struct UThreadExecDeveloperSettings_Get_Params
	{
	public:
		class UThreadExecDeveloperSettings*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecTicks
	 */
	struct UThreadNodeSubsystem_GetAllThreadExecTicks_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecOnces
	 */
	struct UThreadNodeSubsystem_GetAllThreadExecOnces_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecNodes
	 */
	struct UThreadNodeSubsystem_GetAllThreadExecNodes_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecLoops
	 */
	struct UThreadNodeSubsystem_GetAllThreadExecLoops_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllMutexes
	 */
	struct UThreadNodeSubsystem_GetAllMutexes_Params
	{	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.DestoryMutex
	 */
	struct UThreadNodeSubsystem_DestoryMutex_Params
	{
	public:
		class UMutex*                                              Mutex;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.CreateNewMutex
	 */
	struct UThreadNodeSubsystem_CreateNewMutex_Params
	{
	public:
		class UMutex*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
