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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ThreadExecutionBlueprintNode.AsyncExecutionBlueprintTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAsyncExecutionBlueprintTypes : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.Mutex
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMutex : public UObject
	{
	public:
		unsigned char                                              UnknownData_J0T9[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		void UnLock();
		bool TryLock();
		void Lock();
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadAsyncExecBase
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UThreadAsyncExecBase : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_YC83[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadAsyncExecLoop
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UThreadAsyncExecLoop : public UThreadAsyncExecBase
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESLM[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		class UThreadAsyncExecLoop* STATIC_CreateThreadExecLoop(float Interval, bool bLongTask);
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.SyncExecOnce
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USyncExecOnce : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnExecution;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USyncExecOnce* STATIC_CreateSyncExecOnce();
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UThreadAsyncExecLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ThreadWait(float Seconds);
		void STATIC_SetTickableWhenPaused(class UThreadAsyncExecTick* TickHandle, bool NewValue);
		void STATIC_SetTickable(class UThreadAsyncExecTick* TickHandle, bool NewValue);
		bool STATIC_IsTickableWhenPaused(class UThreadAsyncExecTick* TickHandle);
		bool STATIC_IsTickable(class UThreadAsyncExecTick* TickHandle);
		bool STATIC_IsGameThread();
		class FString STATIC_GetCurrentThreadName();
		int32_t STATIC_GetCurrentThreadID();
		void STATIC_ExecIsGameThread(bool* bIsInGameThread);
		void STATIC_BreakNextTick(class UThreadAsyncExecTick* TickHandle);
		void STATIC_BreakNextLoop(class UThreadAsyncExecLoop* LoopHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadAsyncExecOnce
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UThreadAsyncExecOnce : public UThreadAsyncExecBase
	{
	public:
		unsigned char                                              UnknownData_8OF4[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExecution;                                             // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UThreadAsyncExecOnce* STATIC_CreateThreadExecOnce(bool bLongTask);
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadAsyncExecTick
	 * Size -> 0x0038 (FullSize[0x0088] - InheritedSize[0x0050])
	 */
	class UThreadAsyncExecTick : public UThreadAsyncExecBase
	{
	public:
		class FScriptMulticastDelegate                             OnTick;                                                  // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKH4[0x18];                                  // 0x0070(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnTick__DelegateSignature(float DeltaSeconds, class UThreadAsyncExecTick* TickHandle);
		class UThreadAsyncExecTick* STATIC_CreateThreadExecTick(bool bLongTask);
		void BreakNextTick();
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UThreadExecDeveloperSettings : public UDeveloperSettings
	{
	public:
		class UThreadExecDeveloperSettings* STATIC_Get();
		static UClass* StaticClass();
	};

	/**
	 * Class ThreadExecutionBlueprintNode.ThreadNodeSubsystem
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UThreadNodeSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_2GSJ[0x78];                                  // 0x0030(0x0078) MISSED OFFSET (PADDING)

	public:
		void GetAllThreadExecTicks();
		void GetAllThreadExecOnces();
		void GetAllThreadExecNodes();
		void GetAllThreadExecLoops();
		void GetAllMutexes();
		void DestoryMutex(class UMutex* Mutex);
		class UMutex* CreateNewMutex();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
