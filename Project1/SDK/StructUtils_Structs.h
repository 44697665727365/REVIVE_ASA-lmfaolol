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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum StructUtils.EPropertyBagPropertyType
	 */
	enum class EPropertyBagPropertyType : uint8_t
	{
		None       = 0,
		Bool       = 1,
		Byte       = 2,
		Int32      = 3,
		Int64      = 4,
		Float      = 5,
		Double     = 6,
		Name       = 7,
		String     = 8,
		Text       = 9,
		Enum       = 10,
		Struct     = 11,
		Object     = 12,
		SoftObject = 13,
		Class      = 14,
		SoftClass  = 15,
		MAX        = 16
	};

	/**
	 * Enum StructUtils.EPropertyBagContainerType
	 */
	enum class EPropertyBagContainerType : uint8_t
	{
		None  = 0,
		Array = 1,
		MAX   = 2
	};

	/**
	 * Enum StructUtils.EPropertyBagResult
	 */
	enum class EPropertyBagResult : uint8_t
	{
		Success          = 0,
		TypeMismatch     = 1,
		OutOfBounds      = 2,
		PropertyNotFound = 3,
		MAX              = 4
	};

	/**
	 * Enum StructUtils.EPropertyBagMissingEnum
	 */
	enum class EPropertyBagMissingEnum : uint8_t
	{
		Missing = 0,
		MAX     = 1
	};

	/**
	 * Enum StructUtils.EStructUtilsResult
	 */
	enum class EStructUtilsResult : uint8_t
	{
		Valid    = 0,
		NotValid = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StructUtils.PropertyBagPropertyDesc
	 * Size -> 0x0030
	 */
	struct FPropertyBagPropertyDesc
	{
	public:
		class UObject*                                             ValueTypeObject;                                         // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPropertyBagPropertyType                                   ValueType;                                               // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPropertyBagContainerType                                  ContainerType;                                           // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HT7S[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StructUtils.InstancedStruct
	 * Size -> 0x0010
	 */
	struct FInstancedStruct
	{
	public:
		unsigned char                                              UnknownData_ZMUJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StructUtils.InstancedPropertyBag
	 * Size -> 0x0010
	 */
	struct FInstancedPropertyBag
	{
	public:
		struct FInstancedStruct                                    Value;                                                   // 0x0000(0x0010) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct StructUtils.InstancedStructContainer
	 * Size -> 0x0010
	 */
	struct FInstancedStructContainer
	{
	public:
		unsigned char                                              UnknownData_FOEI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
	 * Size -> 0x0018
	 */
	struct FPropertyBagPropertyDescMetaData
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct StructUtils.PropertyBagMissingStruct
	 * Size -> 0x0001
	 */
	struct FPropertyBagMissingStruct
	{
	public:
		unsigned char                                              UnknownData_ZXTN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StructUtils.ConstSharedStruct
	 * Size -> 0x0010
	 */
	struct FConstSharedStruct
	{
	public:
		unsigned char                                              UnknownData_JTOK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StructUtils.SharedStruct
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSharedStruct : public FConstSharedStruct
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
