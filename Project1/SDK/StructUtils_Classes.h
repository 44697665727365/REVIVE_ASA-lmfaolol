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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class StructUtils.PropertyBagMissingObject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPropertyBagMissingObject : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StructUtils.PropertyBag
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UPropertyBag : public UScriptStruct
	{
	public:
		TArray<struct FPropertyBagPropertyDesc>                    PropertyDescs;                                           // 0x00C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8I5G[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class StructUtils.StructUtilsFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetInstancedStructValue(struct FInstancedStruct* InstancedStruct, int32_t Value);
		void STATIC_Reset(struct FInstancedStruct* InstancedStruct, class UScriptStruct* StructType);
		bool STATIC_NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B);
		struct FInstancedStruct STATIC_MakeInstancedStruct(int32_t Value);
		bool STATIC_IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct);
		EStructUtilsResult STATIC_IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct);
		void STATIC_GetInstancedStructValue(EStructUtilsResult* ExecResult, const struct FInstancedStruct& InstancedStruct, int32_t* Value);
		bool STATIC_EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
