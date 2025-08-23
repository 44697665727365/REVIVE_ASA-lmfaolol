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
	 * ScriptStruct TypedElementFramework.ScriptTypedElementHandle
	 * Size -> 0x0008
	 */
	struct FScriptTypedElementHandle
	{
	public:
		unsigned char                                              UnknownData_69P6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
	 * Size -> 0x0001
	 */
	struct FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_737C[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementDataStorageTag
	 * Size -> 0x0001
	 */
	struct FTypedElementDataStorageTag
	{
	public:
		unsigned char                                              UnknownData_1Q6U[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
	 * Size -> 0x0008
	 */
	struct FTypedElementWidgetConstructor
	{
	public:
		unsigned char                                              UnknownData_94AT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementLabelColumn
	 * Size -> 0x000F (FullSize[0x0010] - InheritedSize[0x0001])
	 */
	struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_N8VJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
	 * Size -> 0x0007 (FullSize[0x0008] - InheritedSize[0x0001])
	 */
	struct FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_XRMR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
	 * Size -> 0x0010
	 */
	struct FScriptTypedElementListProxy
	{
	public:
		unsigned char                                              UnknownData_6VHI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
	{	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
	 * Size -> 0x000F (FullSize[0x0010] - InheritedSize[0x0001])
	 */
	struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_HF9G[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
	 * Size -> 0x000B (FullSize[0x000C] - InheritedSize[0x0001])
	 */
	struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_DRI9[0xB];                                   // 0x0001(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
	 * Size -> 0x000F (FullSize[0x0010] - InheritedSize[0x0001])
	 */
	struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_3NMV[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
	{	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
	 * Size -> 0x005F (FullSize[0x0060] - InheritedSize[0x0001])
	 */
	struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_39J8[0x5F];                                  // 0x0001(0x005F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
	 * Size -> 0x0003 (FullSize[0x0004] - InheritedSize[0x0001])
	 */
	struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_U8H8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
	 * Size -> 0x0003 (FullSize[0x0004] - InheritedSize[0x0001])
	 */
	struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_L00J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
	 * Size -> 0x0003 (FullSize[0x0004] - InheritedSize[0x0001])
	 */
	struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
	{
	public:
		unsigned char                                              UnknownData_09JF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
