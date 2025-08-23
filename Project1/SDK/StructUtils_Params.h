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
	 * Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
	 */
	struct UStructUtilsFunctionLibrary_SetInstancedStructValue_Params
	{
	public:
		struct FInstancedStruct                                    InstancedStruct;                                         // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.Reset
	 */
	struct UStructUtilsFunctionLibrary_Reset_Params
	{
	public:
		struct FInstancedStruct                                    InstancedStruct;                                         // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UScriptStruct*                                       StructType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	 */
	struct UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params
	{
	public:
		struct FInstancedStruct                                    A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInstancedStruct                                    B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
	 */
	struct UStructUtilsFunctionLibrary_MakeInstancedStruct_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0THY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInstancedStruct                                    ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	 */
	struct UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params
	{
	public:
		struct FInstancedStruct                                    InstancedStruct;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
	 */
	struct UStructUtilsFunctionLibrary_IsInstancedStructValid_Params
	{
	public:
		struct FInstancedStruct                                    InstancedStruct;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EStructUtilsResult                                         ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
	 */
	struct UStructUtilsFunctionLibrary_GetInstancedStructValue_Params
	{
	public:
		EStructUtilsResult                                         ExecResult;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GW2Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInstancedStruct                                    InstancedStruct;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	 */
	struct UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params
	{
	public:
		struct FInstancedStruct                                    A;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInstancedStruct                                    B;                                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
