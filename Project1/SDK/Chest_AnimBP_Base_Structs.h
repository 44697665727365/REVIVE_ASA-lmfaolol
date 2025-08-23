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
	 * ScriptStruct Chest_AnimBP_Base.Chest_AnimBP_Base_C.AnimBlueprintGeneratedMutableData
	 * Size -> 0x0001 (FullSize[0x0002] - InheritedSize[0x0001])
	 */
	struct UChest_AnimBP_Base_C_FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
	{
	public:
		bool                                                       __BoolProperty;                                          // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Chest_AnimBP_Base.Chest_AnimBP_Base_C.AnimBlueprintGeneratedConstantData
	 * Size -> 0x012F (FullSize[0x0130] - InheritedSize[0x0001])
	 */
	struct UChest_AnimBP_Base_C_FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
	{
	public:
		unsigned char                                              UnknownData_Y6OX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_29;                                       // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PQPV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendProfile*                                       __BlendProfile_30;                                       // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCurveFloat*                                         __CurveFloat_31;                                         // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EAlphaBlendOption                                          __EnumProperty_32;                                       // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBlendListTransitionType                                   __EnumProperty_33;                                       // 0x0021(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IKYC[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              __ArrayProperty_34;                                      // 0x0028(0x0010) BlueprintVisible, EditFixedSize
		float                                                      __FloatProperty_35;                                      // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputScaleBiasClampConstants                       __StructProperty_36;                                     // 0x003C(0x002C) BlueprintVisible, NoDestructor
		float                                                      __FloatProperty_37;                                      // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __BoolProperty_38;                                       // 0x006C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimSyncMethod                                            __EnumProperty_39;                                       // 0x006D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             __ByteProperty_40;                                       // 0x006E(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ECE5[0x1];                                   // 0x006F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_41;                                       // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnimNodeFunctionRef                                __StructProperty_42;                                     // 0x0078(0x0020) BlueprintVisible, NoDestructor
		struct FAnimSubsystem_PropertyAccess                       AnimBlueprintExtension_PropertyAccess;                   // 0x0098(0x0080)
		struct FAnimSubsystem_Base                                 AnimBlueprintExtension_Base;                             // 0x0118(0x0018)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
