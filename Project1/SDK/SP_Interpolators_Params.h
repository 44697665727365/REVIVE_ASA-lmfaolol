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
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params
	{
	public:
		struct FIIRInterpolatorVector                              Interpolator;                                            // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params
	{
	public:
		struct FIIRInterpolatorRotator                             Interpolator;                                            // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
	 */
	struct USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params
	{
	public:
		struct FIIRInterpolatorFloat                               Interpolator;                                            // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params
	{
	public:
		struct FDoubleIIRInterpolatorVector                        Interpolator;                                            // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params
	{
	public:
		struct FDoubleIIRInterpolatorRotator                       Interpolator;                                            // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
	 */
	struct USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params
	{
	public:
		struct FDoubleIIRInterpolatorFloat                         Interpolator;                                            // 0x0000(0x004C)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params
	{
	public:
		struct FCritDampSpringInterpolatorVector                   Interpolator;                                            // 0x0000(0x00A8)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params
	{
	public:
		struct FCritDampSpringInterpolatorRotator                  Interpolator;                                            // 0x0000(0x00A8)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params
	{
	public:
		struct FAccelerationInterpolatorVector                     Interpolator;                                            // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params
	{
	public:
		struct FAccelerationInterpolatorRotator                    Interpolator;                                            // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
	 */
	struct USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params
	{
	public:
		struct FAccelerationInterpolatorFloat                      Interpolator;                                            // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params
	{
	public:
		struct FIIRInterpolatorVector                              Interpolator;                                            // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             NewGoal;                                                 // 0x0078(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EFJR[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0098(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params
	{
	public:
		struct FIIRInterpolatorRotator                             Interpolator;                                            // 0x0000(0x0078)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            NewGoal;                                                 // 0x0078(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5UAK[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0098(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
	 */
	struct USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params
	{
	public:
		struct FIIRInterpolatorFloat                               Interpolator;                                            // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewGoal;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params
	{
	public:
		struct FDoubleIIRInterpolatorVector                        Interpolator;                                            // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             NewGoal;                                                 // 0x0108(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0120(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8AV3[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0128(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params
	{
	public:
		struct FDoubleIIRInterpolatorRotator                       Interpolator;                                            // 0x0000(0x0108)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            NewGoal;                                                 // 0x0108(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0120(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UJR7[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0128(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
	 */
	struct USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params
	{
	public:
		struct FDoubleIIRInterpolatorFloat                         Interpolator;                                            // 0x0000(0x004C)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewGoal;                                                 // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0054(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params
	{
	public:
		struct FCritDampSpringInterpolatorVector                   Interpolator;                                            // 0x0000(0x00A8)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             NewGoal;                                                 // 0x00A8(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RE5F[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x00C8(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params
	{
	public:
		struct FCritDampSpringInterpolatorRotator                  Interpolator;                                            // 0x0000(0x00A8)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            NewGoal;                                                 // 0x00A8(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FBLI[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x00C8(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
	 */
	struct USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params
	{
	public:
		struct FAccelerationInterpolatorVector                     Interpolator;                                            // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             NewGoal;                                                 // 0x0058(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L392[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0078(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
	 */
	struct USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params
	{
	public:
		struct FAccelerationInterpolatorRotator                    Interpolator;                                            // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            NewGoal;                                                 // 0x0058(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TOOG[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0078(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
	 */
	struct USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params
	{
	public:
		struct FAccelerationInterpolatorFloat                      Interpolator;                                            // 0x0000(0x0030)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewGoal;                                                 // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
