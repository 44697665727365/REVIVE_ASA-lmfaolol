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
	 * ScriptStruct SP_Interpolators.IIRInterpolatorVector
	 * Size -> 0x0078
	 */
	struct FIIRInterpolatorVector
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZX0F[0x74];                                  // 0x0004(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.DoubleIIRInterpolatorVector
	 * Size -> 0x0108
	 */
	struct FDoubleIIRInterpolatorVector
	{
	public:
		float                                                      PrimaryInterpSpeed;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermediateInterpSpeed;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IF6[0x100];                                 // 0x0008(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.IIRInterpolatorRotator
	 * Size -> 0x0078
	 */
	struct FIIRInterpolatorRotator
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPLU[0x74];                                  // 0x0004(0x0074) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.DoubleIIRInterpolatorRotator
	 * Size -> 0x0108
	 */
	struct FDoubleIIRInterpolatorRotator
	{
	public:
		float                                                      PrimaryInterpSpeed;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermediateInterpSpeed;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMEO[0x100];                                 // 0x0008(0x0100) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.IIRInterpolatorFloat
	 * Size -> 0x0020
	 */
	struct FIIRInterpolatorFloat
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13C9[0x1C];                                  // 0x0004(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.DoubleIIRInterpolatorFloat
	 * Size -> 0x004C
	 */
	struct FDoubleIIRInterpolatorFloat
	{
	public:
		float                                                      PrimaryInterpSpeed;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntermediateInterpSpeed;                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCI8[0x44];                                  // 0x0008(0x0044) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.AccelerationInterpolatorParams
	 * Size -> 0x0010
	 */
	struct FAccelerationInterpolatorParams
	{
	public:
		float                                                      Acceleration;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDeceleration;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoldTolerance;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SP_Interpolators.AccelerationInterpolatorFloat
	 * Size -> 0x0030
	 */
	struct FAccelerationInterpolatorFloat
	{
	public:
		struct FAccelerationInterpolatorParams                     AccelerationParams;                                      // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SUM[0x20];                                  // 0x0010(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.AccelerationInterpolatorVector
	 * Size -> 0x0058
	 */
	struct FAccelerationInterpolatorVector
	{
	public:
		struct FAccelerationInterpolatorParams                     AccelerationParams;                                      // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQEN[0x48];                                  // 0x0010(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.AccelerationInterpolatorRotator
	 * Size -> 0x0058
	 */
	struct FAccelerationInterpolatorRotator
	{
	public:
		struct FAccelerationInterpolatorParams                     AccelerationParams;                                      // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M11L[0x48];                                  // 0x0010(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.CritDampSpringInterpolatorVector
	 * Size -> 0x00A8
	 */
	struct FCritDampSpringInterpolatorVector
	{
	public:
		float                                                      NaturalFrequency;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9A1[0xA4];                                  // 0x0004(0x00A4) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Interpolators.CritDampSpringInterpolatorRotator
	 * Size -> 0x00A8
	 */
	struct FCritDampSpringInterpolatorRotator
	{
	public:
		float                                                      NaturalFrequency;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57HR[0xA4];                                  // 0x0004(0x00A4) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
