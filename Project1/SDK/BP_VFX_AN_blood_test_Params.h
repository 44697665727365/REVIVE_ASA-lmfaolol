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
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.LR_FB Offset
	 */
	struct UBP_VFX_AN_blood_test_C_LR_FBOffset_Params
	{
	public:
		struct FVector                                             FrontOffset;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BackOffset;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0030(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.NewFunction_1
	 */
	struct UBP_VFX_AN_blood_test_C_NewFunction_1_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Condition2;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Do Trace
	 */
	struct UBP_VFX_AN_blood_test_C_DoTrace_Params
	{
	public:
		class USkeletalMeshComponent*                              SKMeshComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              InputPin;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     BabyScale;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPlayer;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYHQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     FootPrintSize;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HitBool;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DBAG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutHit;                                                  // 0x0030(0x00F0)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		unsigned char                                              UnknownData_QBVR[0x30];                                  // 0x0120(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_8MXR[0x60];                                  // 0x0120(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Spawn_Sound
	 */
	struct UBP_VFX_AN_blood_test_C_Spawn_Sound_Params
	{
	public:
		class USceneComponent*                                     Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Speed;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Size;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAudio_Ground_Collection                            StepSounds;                                              // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Spawn_Anim_Notify
	 */
	struct UBP_VFX_AN_blood_test_C_Spawn_Anim_Notify_Params
	{	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyBegin
	 */
	struct UBP_VFX_AN_blood_test_C_Received_NotifyBegin_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalDuration;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I9TS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAnimNotifyEventReference                           EventReference;                                          // 0x0018(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBT0[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyEnd
	 */
	struct UBP_VFX_AN_blood_test_C_Received_NotifyEnd_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FAnimNotifyEventReference                           EventReference;                                          // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.GetNotifyName
	 */
	struct UBP_VFX_AN_blood_test_C_GetNotifyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyTick
	 */
	struct UBP_VFX_AN_blood_test_C_Received_NotifyTick_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      FrameDeltaTime;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_29RY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAnimNotifyEventReference                           EventReference;                                          // 0x0018(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EI9E[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.NewEventDispatcher__DelegateSignature
	 */
	struct UBP_VFX_AN_blood_test_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
