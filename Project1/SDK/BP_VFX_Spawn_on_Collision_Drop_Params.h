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
	 * Function BP_VFX_Spawn_on_Collision_Drop.BP_VFX_Spawn_on_Collision_Drop_C.Received_NotifyBegin
	 */
	struct UBP_VFX_Spawn_on_Collision_Drop_C_Received_NotifyBegin_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalDuration;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K5OY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAnimNotifyEventReference                           EventReference;                                          // 0x0018(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABRK[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VFX_Spawn_on_Collision_Drop.BP_VFX_Spawn_on_Collision_Drop_C.Received_NotifyEnd
	 */
	struct UBP_VFX_Spawn_on_Collision_Drop_C_Received_NotifyEnd_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FAnimNotifyEventReference                           EventReference;                                          // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_Spawn_on_Collision_Drop.BP_VFX_Spawn_on_Collision_Drop_C.GetNotifyName
	 */
	struct UBP_VFX_Spawn_on_Collision_Drop_C_GetNotifyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_Spawn_on_Collision_Drop.BP_VFX_Spawn_on_Collision_Drop_C.Received_NotifyTick
	 */
	struct UBP_VFX_Spawn_on_Collision_Drop_C_Received_NotifyTick_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      FrameDeltaTime;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NPMP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAnimNotifyEventReference                           EventReference;                                          // 0x0018(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZR3[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VFX_Spawn_on_Collision_Drop.BP_VFX_Spawn_on_Collision_Drop_C.NewEventDispatcher__DelegateSignature
	 */
	struct UBP_VFX_Spawn_on_Collision_Drop_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
