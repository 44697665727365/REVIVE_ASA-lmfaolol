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
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params
	{
	public:
		struct FVector                                             InViewLocation;                                          // 0x0000(0x0018)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InViewDirection;                                         // 0x0018(0x0018)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelectInEditor;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params
	{
	public:
		int32_t                                                    categoryId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnable;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params
	{
	public:
		int32_t                                                    ExtensionId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HandlerId;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params
	{
	public:
		int32_t                                                    categoryId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HandlerId;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
	 */
	struct AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
	 */
	struct AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Params
	{	};

	/**
	 * Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
	 */
	struct AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params
	{
	public:
		struct FGameplayDebuggerDataPackRPCParams                  Params;                                                  // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
