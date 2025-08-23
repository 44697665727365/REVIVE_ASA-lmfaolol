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
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation
	 */
	struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params
	{
	public:
		struct FVector                                             CurrentCameraPivotLocation;                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DesiredCameraPivotLocation;                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
	 */
	struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params
	{
	public:
		struct FRotator                                            CurrentCameraPivotRotation;                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraPivotRotation;                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N5J7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
	 */
	struct ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             DesiredCameraOffset;                                     // 0x00D8(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
	 */
	struct ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraPivotZInterpOverrides                  PivotZInterpOverrides;                                   // 0x00D8(0x0034)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastInterpParamsX;                                       // 0x010C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastInterpParamsY;                                       // 0x0118(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastInterpParamsZ;                                       // 0x0124(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           OutInterpParamsX;                                        // 0x0130(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           OutInterpParamsY;                                        // 0x013C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           OutInterpParamsZ;                                        // 0x0148(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0154(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
	 */
	struct ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraInterpParams                           OutInterpParams;                                         // 0x00D8(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x00E4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
	 */
	struct ADino_Character_BP_C_BPOverrideCameraArmLength_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      CurrentCameraArmLength;                                  // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DesiredCameraArmLength;                                  // 0x00DC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UQLV[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
	 */
	struct ADino_Character_BP_C_GetFXBloodColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
	 */
	struct ADino_Character_BP_C_UpdateBabyAndRunValues_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
	 */
	struct ADino_Character_BP_C_BPControlRigNotify_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NotifyCustomTag;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          WorldSpaceHitResult;                                     // 0x0010(0x00F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             Velocity;                                                // 0x0100(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
	 */
	struct ADino_Character_BP_C_GetDinoContentData_Params
	{
	public:
		struct FDinoContentData                                    DinoContentData;                                         // 0x0000(0x0020)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
	 */
	struct ADino_Character_BP_C_BPHandleRightShoulderButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.UpdateWildBabyNextRunTime
	 */
	struct ADino_Character_BP_C_UpdateWildBabyNextRunTime_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated
	 */
	struct ADino_Character_BP_C_BlendSpaceGenerated_Params
	{
	public:
		class UBlendSpace*                                         BlendSpace;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADino_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.EditorBeginPlay
	 */
	struct ADino_Character_BP_C_EditorBeginPlay_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BP_OnSetDeath
	 */
	struct ADino_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeBaby
	 */
	struct ADino_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.ReceiveDestroyed
	 */
	struct ADino_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPTriggerStasisEvent
	 */
	struct ADino_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX
	 */
	struct ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter*                                    VictimChar;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeAdult
	 */
	struct ADino_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.BPNotifyClaimed
	 */
	struct ADino_Character_BP_C_BPNotifyClaimed_Params
	{	};

	/**
	 * Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP
	 */
	struct ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XUBQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
