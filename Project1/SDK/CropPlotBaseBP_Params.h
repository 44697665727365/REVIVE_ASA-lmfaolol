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
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.GetCurrentStackCount
	 */
	struct ACropPlotBaseBP_C_GetCurrentStackCount_Params
	{
	public:
		int32_t                                                    MaxCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LHBL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructure*                                    PlacingOn;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StackCount;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RCNF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.BPOverrideCantBuildReasonString
	 */
	struct ACropPlotBaseBP_C_BPOverrideCantBuildReasonString_Params
	{
	public:
		int32_t                                                    CantBuildReason;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HLU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.BPIsAllowedToBuild
	 */
	struct ACropPlotBaseBP_C_BPIsAllowedToBuild_Params
	{
	public:
		struct FPlacementData                                      OutPlacementData;                                        // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		int32_t                                                    CurrentAllowedReason;                                    // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.IsOverStackLimit
	 */
	struct ACropPlotBaseBP_C_IsOverStackLimit_Params
	{
	public:
		struct FPlacementData                                      PlacementData;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsOverLimit;                                             // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZ2A[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand
	 */
	struct ACropPlotBaseBP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit
	 */
	struct ACropPlotBaseBP_C_CanAttachToExosuit_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit
	 */
	struct ACropPlotBaseBP_C_CanBeStoredByExosuit_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
