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
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.Import Field Data
	 */
	struct APRIMAL_FS_MasterField_BASE_C_ImportFieldData_Params
	{
	public:
		struct FVector                                             IncomingImpactVector;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SetImpactVector;                                         // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UpdateFieldParameters
	 */
	struct APRIMAL_FS_MasterField_BASE_C_UpdateFieldParameters_Params
	{
	public:
		bool                                                       SetUseExternalStrain;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3AOT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetStrainMagnitude;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SetNumStrainHits;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetUseRadialVector;                                      // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_69R8[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetRadialMagnitude;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFieldFalloffType                                          SetStrainFalloffType;                                    // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M1NL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           SetStrainFalloffMinMax;                                  // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetUseDirectionalVector;                                 // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8TSG[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetDirectionalMagnitude;                                 // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetUseTorque;                                            // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UOFV[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetTorqueMult;                                           // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFieldFalloffType                                          SetVelocityFieldFalloffType;                             // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V28G[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           SetVelocityFalloffMinMax;                                // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetUseNoise;                                             // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8UF9[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           SetNoiseMinMax;                                          // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SetNoiseScaleMult;                                       // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SetRadialPositionOffset;                                 // 0x0090(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetOverrideDirectionalVector;                            // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TW4K[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SetImpactVector;                                         // 0x00B0(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SetTorqueVectorOverride;                                 // 0x00C8(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              VelocityVectorSwitch;                                    // 0x00E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E41D[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     SetForceMult;                                            // 0x00E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SetVelocityThreshold;                                    // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SetDamageVelocity;                                       // 0x00F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CalculateNoise
	 */
	struct APRIMAL_FS_MasterField_BASE_C_CalculateNoise_Params
	{
	public:
		class UNoiseField*                                         OutputPin;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffShapeSwitch
	 */
	struct APRIMAL_FS_MasterField_BASE_C_FalloffShapeSwitch_Params
	{
	public:
		EFieldFalloffType                                          FalloffType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EOSH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           falloffMinMax;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UOperatorField*                                      OperatorFieldOut;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.MakeDynamic_EnableNonGC
	 */
	struct APRIMAL_FS_MasterField_BASE_C_MakeDynamic_EnableNonGC_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.InitializeFieldVariables
	 */
	struct APRIMAL_FS_MasterField_BASE_C_InitializeFieldVariables_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.DisplayTextSetup
	 */
	struct APRIMAL_FS_MasterField_BASE_C_DisplayTextSetup_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ForceMultiplier
	 */
	struct APRIMAL_FS_MasterField_BASE_C_ForceMultiplier_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetVisibility
	 */
	struct APRIMAL_FS_MasterField_BASE_C_SetVisibility_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffAndCullSwitch_Main
	 */
	struct APRIMAL_FS_MasterField_BASE_C_FalloffAndCullSwitch_Main_Params
	{
	public:
		double                                                     Magnitude;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFieldFalloffType                                          FalloffType;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQRI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           falloffMinMax;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UOperatorField*                                      OperatorField;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UCullingField*                                       CullingField;                                            // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UserConstructionScript
	 */
	struct APRIMAL_FS_MasterField_BASE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveTick
	 */
	struct APRIMAL_FS_MasterField_BASE_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveBeginPlay
	 */
	struct APRIMAL_FS_MasterField_BASE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CE_Trigger
	 */
	struct APRIMAL_FS_MasterField_BASE_C_CE_Trigger_Params
	{
	public:
		struct FVector                                             IncomingImpactVector;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DirectionalForceStrengthMultiplier;                      // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RadialForceStrengthMultiplier;                           // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IncomingVelocity;                                        // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetActivationType
	 */
	struct APRIMAL_FS_MasterField_BASE_C_SetActivationType_Params
	{
	public:
		EFieldActivationType_New                                   NewActivationType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ExecuteUbergraph_PRIMAL_FS_MasterField_BASE
	 */
	struct APRIMAL_FS_MasterField_BASE_C_ExecuteUbergraph_PRIMAL_FS_MasterField_BASE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C36W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
